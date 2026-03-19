/* Copyright 2020 The MLPerf Authors. All Rights Reserved.
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
/// \file
/// \brief Main function to run benchmark on device.

#include "../logging.h"
#include "../model.h"
#include "../timers.h"

#if defined(MODIFIED_AVA) || defined(STOCK_AVA)
#include "tensorflow/lite/kernels/internal/reference/integer_ops/kernel_profiling.h"
#include "tensorflow/lite/kernels/internal/reference/integer_ops/vector_ops.h"

// Global profiling counters (accumulated by KernelProfiler RAII in each kernel)
volatile uint32_t g_conv_cycles = 0;
volatile uint32_t g_depthwise_cycles = 0;
volatile uint32_t g_fc_cycles = 0;
volatile uint32_t g_conv_calls = 0;
volatile uint32_t g_depthwise_calls = 0;
volatile uint32_t g_fc_calls = 0;
#endif

int main() {
  constexpr int64_t kUsecPerSecond = 1000000;
  constexpr int kMaxOutputSize = 10;
  float output_buffer[kMaxOutputSize];

  mlperf::tiny::LogToHost("Starting VWW MLPerf Initialization...\n");

  mlperf::tiny::Initialize();
  int index = 0;
  while (mlperf::tiny::SetInput(index++) !=
         mlperf::tiny::kTinyMlPerfInputDone) {
    int32_t start = mlperf::tiny::CurrentTimeTicks();
    mlperf::tiny::Invoke();
    int32_t end = mlperf::tiny::CurrentTimeTicks();
    int64_t duration_ticks = end - start;
    int64_t duration_usec =
        duration_ticks * kUsecPerSecond / mlperf::tiny::TicksPerSecond();

#ifdef CV32E40P
    mlperf::tiny::LogToHost("invocation %d took %d cycles\n", index,
                            duration_ticks, duration_usec);
#else
    mlperf::tiny::LogToHost(
        "invocation %d took %lld cycles %lld microseconds\n", index,
        duration_ticks, duration_usec);
#endif // CV32E40P

    int len = mlperf::tiny::GetOutput(output_buffer);
    mlperf::tiny::LogToHost("Model output: [");
    for (int i = 0; i < len; i++) {
      mlperf::tiny::LogToHost("%f ", output_buffer[i]);
    }
    mlperf::tiny::LogToHost("]\n");

#if defined(MODIFIED_AVA) || defined(STOCK_AVA)
    // Read AVA hardware performance counters
    uint32_t vec_insns, vlsu_stalls, compute_cycles, skipped_ops, compacted;
    AVA_VPERF_VEC_INSNS(vec_insns);
    AVA_VPERF_VLSU_STALLS(vlsu_stalls);
    AVA_VPERF_COMPUTE_CYCLES(compute_cycles);
    AVA_VPERF_SKIPPED_OPS(skipped_ops);
    AVA_VPERF_COMPACTED_CYCLES(compacted);
    mlperf::tiny::LogToHost("AVA perf counters:\n");
    mlperf::tiny::LogToHost("  vec_insns=%d\n", vec_insns);
    mlperf::tiny::LogToHost("  vlsu_stalls=%d\n", vlsu_stalls);
    mlperf::tiny::LogToHost("  compute_cycles=%d\n", compute_cycles);
    mlperf::tiny::LogToHost("  skipped_ops=%d\n", skipped_ops);
    mlperf::tiny::LogToHost("  compacted_cycles=%d\n", compacted);

    // Per-layer kernel profiling
    mlperf::tiny::LogToHost("Kernel profiling:\n");
    mlperf::tiny::LogToHost("  conv:      %d cycles (%d calls)\n",
                            g_conv_cycles, g_conv_calls);
    mlperf::tiny::LogToHost("  depthwise: %d cycles (%d calls)\n",
                            g_depthwise_cycles, g_depthwise_calls);
    mlperf::tiny::LogToHost("  fc:        %d cycles (%d calls)\n", g_fc_cycles,
                            g_fc_calls);
#endif
  }
  return 0;
}
