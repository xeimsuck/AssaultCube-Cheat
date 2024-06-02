#include "hooks.hpp"
#include <MinHook.h>

int wine::hooks::initHooks() {
    MH_Initialize();
    return 0;
}

void wine::hooks::destroyHooks() {
    MH_Uninitialize();
}
