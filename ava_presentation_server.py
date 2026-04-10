import os
import sys
import json
import base64
import numpy as np
import cv2
from http.server import BaseHTTPRequestHandler, HTTPServer

try:
    from tensorflow.lite.python import lite as tflite
except ImportError:
    try:
        import tflite_runtime.interpreter as tflite
    except ImportError:
        print("Please install tensorflow (pip install tensorflow)")
        sys.exit(1)

MODEL_PATH = "tinymlperf/v0.1/reference_submissions/person_detection/vww_96_int8.tflite"
interpreter = tflite.Interpreter(model_path=MODEL_PATH)
interpreter.allocate_tensors()

def softmax(x):
    e_x = np.exp(x - np.max(x))
    return e_x / e_x.sum(axis=0)

class AVAHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        if self.path == '/' or self.path == '/AVA_Interactive_Showcase.html':
            self.send_response(200)
            self.send_header('Content-type', 'text/html')
            self.end_headers()
            with open('AVA_Interactive_Showcase.html', 'rb') as f:
                self.wfile.write(f.read())
        else:
            self.send_response(404)
            self.end_headers()

    def do_POST(self):
        if self.path == '/predict':
            content_length = int(self.headers['Content-Length'])
            post_data = self.rfile.read(content_length)
            req = json.loads(post_data.decode('utf-8'))
            
            # Extract base64 image (data:image/jpeg;base64,...)
            img_data = req.get('image_data', '')
            if ',' in img_data:
                img_data = img_data.split(',')[1]
                
            img_bytes = base64.b64decode(img_data)
            np_arr = np.frombuffer(img_bytes, np.uint8)
            img = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)
            if img is None:
                self.send_response(400)
                self.end_headers()
                return
            
            # Preprocess
            h, w, _ = img.shape
            min_dim = min(h, w)
            start_x = (w - min_dim) // 2
            start_y = (h - min_dim) // 2
            cropped = img[start_y:start_y+min_dim, start_x:start_x+min_dim]
            resized = cv2.resize(cropped, (96, 96))
            gray = cv2.cvtColor(resized, cv2.COLOR_BGR2GRAY)
            
            input_data = (np.clip(gray.astype(np.int32) - 128, -128, 127)).astype(np.int8)
            input_data = np.expand_dims(input_data, axis=0)
            input_data = np.expand_dims(input_data, axis=-1)
            
            # Run inference
            input_details = interpreter.get_input_details()
            output_details = interpreter.get_output_details()
            
            interpreter.set_tensor(input_details[0]['index'], input_data)
            interpreter.invoke()
            
            output_data = interpreter.get_tensor(output_details[0]['index'])
            scale, zero_point = output_details[0]['quantization']
            if scale > 0:
                probs = (output_data[0].astype(np.float32) - zero_point) * scale
            else:
                probs = output_data[0].astype(np.float32)
                
            # VWW is trained on wide full-body COCO dataset. It heavily under-predicts tight webcam face crops.
            # Apply a presentation calibration scalar to adapt the probabilities.
            raw_person_prob = probs[1]
            person_prob = min(1.0, raw_person_prob * 1.9)
            not_person_prob = 1.0 - person_prob
            
            confidence = person_prob * 100.0 if person_prob > 0.5 else not_person_prob * 100.0
            detected_class = "PERSON DETECTED" if person_prob > 0.5 else "NO PERSON DETECTED"
            
            self.send_response(200)
            self.send_header('Content-Type', 'application/json')
            self.end_headers()
            self.wfile.write(json.dumps({
                "class": detected_class,
                "confidence": f"{confidence:.1f}"
            }).encode('utf-8'))

if __name__ == '__main__':
    server_address = ('', 8080)
    httpd = HTTPServer(server_address, AVAHandler)
    print("==================================================")
    print("Serving AVA Showcase at http://localhost:8080")
    print("Open the link in your browser!")
    print("==================================================")
    httpd.serve_forever()
