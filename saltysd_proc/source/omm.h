#pragma once

#include <switch.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uint8_t data[0x10];
} ommCradleFwVersion;

Result ommInitialize(void);
void ommExit(void);
Service* ommGetServiceSession(void);
Result ommGetCradleFwVersion(ommCradleFwVersion* out);
Result ommGetOperationMode(u8* out);

#ifdef __cplusplus
} // extern "C"
#endif
