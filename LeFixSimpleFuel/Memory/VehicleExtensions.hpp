#pragma once

#include <cstdint>
#include "../../../ScriptHookV_SDK/inc/types.h"
#include "../../../ScriptHookV_SDK/inc/nativeCaller.h"

class VehicleExtensions {
public:
    VehicleExtensions();
    BYTE *GetAddress(Vehicle handle);
    float GetCurrentRPM(Vehicle handle);
    float GetFuelLevel(Vehicle handle);
    void SetFuelLevel(Vehicle handle, float value);
    uint64_t GetHandlingPtr(Vehicle handle);
    float GetPetrolTankVolume(Vehicle handle);
    uint16_t GetGearCurr(Vehicle handle);
    float GetThrottle(Vehicle handle);
    unsigned char GetTopGear(Vehicle handle);
    bool GetHandbrake(Vehicle handle);

    void GetOffsets();

private:
    eGameVersion gameVersion = getGameVersion();

    int handlingOffset = 0;
    int rpmOffset = 0;
    int fuelLevelOffset = 0;
    int currentGearOffset = 0;
    int topGearOffset = 0;
    int throttleOffset = 0;
    int handbrakeOffset = 0;
};
