#include "example_submission/tensorflow/lite/micro/tools/make/downloads/flatbuffers/include/flatbuffers/base.h"

#if FLATBUFFERS_LITTLEENDIAN
#error "IS_LITTLE_ENDIAN"
#else
#error "IS_BIG_ENDIAN"
#endif
