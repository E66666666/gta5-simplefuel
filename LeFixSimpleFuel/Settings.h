#pragma once
#include <Windows.h>

#include <inc/enums.h>
#include <string>

class Settings {
public:
	static void SetFile(const std::string &filepath);
	static void Save();
	static void Load();

	////CONSTANTS////
	static const float literPerSecond;	//Liter per second jerry can
	static const float capOfJerryCan;	//Capacity of a jerry can in liter
	static const float maxFillVel;		//Maxium velocity in m/s for refueling
	static const int maxFillDist;		//Maximum distance in meters for refueling
	static const float grenzwert;		//Relative fuel level when nearest station will be shown (0.2f syncs with dahsboard)
	static const int numOfStations;		//Maximum number of has Stations
	static const int removeDistance;	//Maximum distance for removing a gas station nearby
	static const float maxJerryDist;	//Maxmium distance to vehicle center for refueling with jerry can
	static const float standardCap;		//Used for addon cars (often don't have a native fuel cap -> 0.0f)

	static const int refuelControlStation = eControl::ControlVehicleHandbrake;
	static const int refuelControlJerry = eControl::ControlContext;

	static const DWORD weaponHashJerry = 0x34A67B97; //typedef Hash 

	////MENU//
	static bool isActive;
	static float fuelTime;

	// Refueling
	static bool isRefuelRealistic;
	static bool isRefuelingOnRepair;
	static int refuelInputMode;

	// Navigation
	static int blipsVisibility;
	static bool isRouteEnabled;

	// Money
	static float gasPrice;
	static bool hasGasPrice;

	// Low
	static bool isLowFuelAudioEnabled, isLowFuelNoteEnabled;
	static int lowFuelAudioInterval;

	// Bar
	static bool isBarDisplayed;
	static float barX, barY, barW, barH;

private:
	static std::string _filepath;
};
