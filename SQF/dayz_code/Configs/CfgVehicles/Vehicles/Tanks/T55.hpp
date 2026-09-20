class T55_TK_EP1;
class DZE_Veh_T55_TK: T55_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_T55_TK";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_T55_TK_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T55_TK_1: DZE_Veh_T55_TK {
	displayName = "$STR_VEH_NAME_T55_TK+";
	original = "DZE_Veh_T55_TK";
	maxSpeed = 80; // base 55
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_T55_TK_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T55_TK_2: DZE_Veh_T55_TK_1 {
	displayName = "$STR_VEH_NAME_T55_TK++";
	armor = 580; // base 450
	damageResistance = 0.01643; // base 0.00843

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_T55_TK_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T55_TK_3: DZE_Veh_T55_TK_2 {
	displayName = "$STR_VEH_NAME_T55_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_T55_TK_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_T55_TK_4: DZE_Veh_T55_TK_3 {
	displayName = "$STR_VEH_NAME_T55_TK++++";
	fuelCapacity = 1200; // base 700
};

class T55_TK_GUE_EP1;
class DZE_Veh_T55_TK_GUE: T55_TK_GUE_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_T55_TK_GUE";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED

	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;

	class Upgrades {
		ItemTankORP[] = {"DZE_Veh_T55_TK_GUE_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankORP",1},{"PartEngine",6},{"PartGeneric",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T55_TK_GUE_1: DZE_Veh_T55_TK_GUE {
	displayName = "$STR_VEH_NAME_T55_TK_GUE+";
	original = "DZE_Veh_T55_TK_GUE";
	maxSpeed = 80; // base 55
	turnCoef = 2.0;  // base 1

	class Upgrades {
		ItemTankAVE[] = {"DZE_Veh_T55_TK_GUE_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankAVE",1},{"equip_metal_sheet",8},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T55_TK_GUE_2: DZE_Veh_T55_TK_GUE_1 {
	displayName = "$STR_VEH_NAME_T55_TK_GUE++";
	armor = 580; // base 450
	damageResistance = 0.01643; // base 0.00843

	class Upgrades {
		ItemTankLRK[] = {"DZE_Veh_T55_TK_GUE_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_T55_TK_GUE_3: DZE_Veh_T55_TK_GUE_2 {
	displayName = "$STR_VEH_NAME_T55_TK_GUE+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemTankTNK[] = {"DZE_Veh_T55_TK_GUE_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTankTNK",1},{"PartFueltank",6},{"ItemFuelBarrel",4}}};
	};
};

class DZE_Veh_T55_TK_GUE_4: DZE_Veh_T55_TK_GUE_3 {
	displayName = "$STR_VEH_NAME_T55_TK_GUE++++";
	fuelCapacity = 1200; // base 700
};
