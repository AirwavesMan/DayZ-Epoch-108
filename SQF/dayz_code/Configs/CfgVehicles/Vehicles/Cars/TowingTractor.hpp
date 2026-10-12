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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_TowingTractor_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

// Performance 1
class DZE_Veh_TowingTractor_1: DZE_Veh_TowingTractor {
	displayName = "$STR_VEH_NAME_TOWINGTRACTOR+";
	original = "DZE_Veh_TowingTractor";
	maxSpeed = 30; // native 25
	terrainCoef = 2.5; // native 4

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_TowingTractor_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

// Armor 2
class DZE_Veh_TowingTractor_2: DZE_Veh_TowingTractor_1 {
	displayName = "$STR_VEH_NAME_TOWINGTRACTOR++";
	armor = 50; // native 20

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_TowingTractor_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

// Cargo 3
class DZE_Veh_TowingTractor_3: DZE_Veh_TowingTractor_2 {
	displayName = "$STR_VEH_NAME_TOWINGTRACTOR+++";
	transportMaxWeapons = 20; // native 10
	transportMaxMagazines = 100; // native 50
	transportMaxBackpacks = 4; // native 2

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_TowingTractor_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

// Fuel 4
class DZE_Veh_TowingTractor_4: DZE_Veh_TowingTractor_3 {
	displayName = "$STR_VEH_NAME_TOWINGTRACTOR++++";
	fuelCapacity = 210; // native 100
};
