class DZE_Storage_Base: DZE_Building_Base {
	armor = 5;
	vehicleClass = "DayZ Epoch 1071 Storage";
	displayName = "StorageBase";
	icon = "";
	mapSize = 3;
	destrType = "DestructTent";
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	DZE_buildingSteps = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
};

#include "StorageBarrel.hpp"
#include "Sheds.hpp"
#include "Crates.hpp"
#include "Tents.hpp"
#include "Stashes.hpp"
#include "Misc.hpp"