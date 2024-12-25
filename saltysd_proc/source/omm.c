#define NX_SERVICE_ASSUME_NON_DOMAIN
#include <switch.h>
#include "service_guard.h"
#include "omm.h"

static Service g_ommSrv;

NX_GENERATE_SERVICE_GUARD(omm);

Result _ommInitialize(void) {
    return smGetService(&g_ommSrv, "omm");
}

void _ommCleanup(void) {
    serviceClose(&g_ommSrv);
}

Service* ommGetServiceSession(void) {
    return &g_ommSrv;
}

Result ommGetCradleFwVersion(ommCradleFwVersion* out) { //[2.0.0+]
    return serviceDispatchOut(&g_ommSrv, 8, *out);
}

Result ommGetOperationMode(u8* out) {
    return serviceDispatchOut(&g_ommSrv, 0, *out);
}