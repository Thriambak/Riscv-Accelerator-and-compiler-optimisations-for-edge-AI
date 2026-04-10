import cv2
import numpy as np
import urllib.request
from tensorflow.lite.python import lite as tflite

interpreter = tflite.Interpreter('tinymlperf/v0.1/reference_submissions/person_detection/vww_96_int8.tflite')
interpreter.allocate_tensors()
in_idx = interpreter.get_input_details()[0]['index']
out_idx = interpreter.get_output_details()[0]['index']

img = cv2.imread('tensorflow/tensorflow/lite/testing/model_coverage/testdata/grace_hopper.jpg')
img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
img = cv2.resize(img, (96, 96))

# Test 1: [0, 255] -> [-128, 127]
in1 = np.clip(img.astype(np.int32) - 128, -128, 127).astype(np.int8).reshape(1, 96, 96, 1)
interpreter.set_tensor(in_idx, in1)
interpreter.invoke()
out1 = interpreter.get_tensor(out_idx)[0]
sc, zp = interpreter.get_output_details()[0]['quantization']
print("TEST 1 [gray - 128]:", (out1 - zp) * sc)

# Test 2: Float -> Int8 assuming [-1.0, 1.0] input mapping
float_img = (img / 127.5) - 1.0
sc_in, zp_in = interpreter.get_input_details()[0]['quantization']
in2 = np.clip(np.round(float_img / sc_in) + zp_in, -128, 127).astype(np.int8).reshape(1, 96, 96, 1)
interpreter.set_tensor(in_idx, in2)
interpreter.invoke()
out2 = interpreter.get_tensor(out_idx)[0]
print("TEST 2 [-1.0 to 1.0 mapping]:", (out2 - zp) * sc)
