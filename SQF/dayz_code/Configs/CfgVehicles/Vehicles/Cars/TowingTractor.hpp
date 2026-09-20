class TowingTractor;
class DZE_Veh_TowingTractor: TowingTractor {
	scope = 2;
	displayName = "$STR_VEH_NAME_TOWINGTRACTOR";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 1.2;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_TowingTractor_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_TowingTractor_1: DZE_Veh_TowingTractor {
	displayName = "$STR_VEH_NAME_TOWINGTRACTOR+";
	original = "DZE_Veh_TowingTractor";
	maxSpeed = 30; // native 25
	terrainCoef = 2.5; // native 4

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_TowingTractor_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_TowingTractor_2: DZE_Veh_TowingTractor_1 {
	displayName = "$STR_VEH_NAME_TOWINGTRACTOR++";
	armor = 50; // native 20

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_TowingTractor_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_TowingTractor_3: DZE_Veh_TowingTractor_2 {
	displayName = "$STR_VEH_NAME_TOWINGTRACTOR+++";
	transportMaxWeapons = 20; // native 10
	transportMaxMagazines = 100; // native 50
	transportMaxBackpacks = 4; // native 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_TowingTractor_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_TowingTractor_4: DZE_Veh_TowingTractor_3 {
	displayName = "$STR_VEH_NAME_TOWINGTRACTOR++++";
	fuelCapacity = 210; // native 100
};
