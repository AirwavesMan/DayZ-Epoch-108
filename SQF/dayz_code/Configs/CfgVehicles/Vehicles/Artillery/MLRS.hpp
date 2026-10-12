class MLRS;
class DZE_Veh_M270_MLRS_Woodland: MLRS {
	scope = 2;
	displayName = "$STR_VEH_NAME_M270_MLRS_WOODLAND";
	vehicleClass = "DZE Vehicles Artillery";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 8;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_M270_MLRS_Woodland_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M270_MLRS_Woodland_1: DZE_Veh_M270_MLRS_Woodland {
	displayName = "$STR_VEH_NAME_M270_MLRS_WOODLAND+";
	original = "DZE_Veh_M270_MLRS_Woodland";
	maxSpeed = 100; // base 72
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_M270_MLRS_Woodland_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M270_MLRS_Woodland_2: DZE_Veh_M270_MLRS_Woodland_1 {
	displayName = "$STR_VEH_NAME_M270_MLRS_WOODLAND++";
	armor = 205; // base 160
	damageResistance = 0.04973; // base 0.02552

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_M270_MLRS_Woodland_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M270_MLRS_Woodland_3: DZE_Veh_M270_MLRS_Woodland_2 {
	displayName = "$STR_VEH_NAME_M270_MLRS_WOODLAND+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_M270_MLRS_Woodland_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_M270_MLRS_Woodland_4: DZE_Veh_M270_MLRS_Woodland_3 {
	displayName = "$STR_VEH_NAME_M270_MLRS_WOODLAND++++";
	fuelCapacity = 1200; // base 700
};

class MLRS_DES_EP1;
class DZE_Veh_M270_MLRS_Desert: MLRS_DES_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_M270_MLRS_DESERT";
	vehicleClass = "DZE Vehicles Artillery";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 8;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_M270_MLRS_Desert_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M270_MLRS_Desert_1: DZE_Veh_M270_MLRS_Desert {
	displayName = "$STR_VEH_NAME_M270_MLRS_DESERT+";
	original = "DZE_Veh_M270_MLRS_Desert";
	maxSpeed = 100; // base 72
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_M270_MLRS_Desert_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M270_MLRS_Desert_2: DZE_Veh_M270_MLRS_Desert_1 {
	displayName = "$STR_VEH_NAME_M270_MLRS_DESERT++";
	armor = 205; // base 160
	damageResistance = 0.04973; // base 0.02552

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_M270_MLRS_Desert_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M270_MLRS_Desert_3: DZE_Veh_M270_MLRS_Desert_2 {
	displayName = "$STR_VEH_NAME_M270_MLRS_DESERT+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_M270_MLRS_Desert_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_M270_MLRS_Desert_4: DZE_Veh_M270_MLRS_Desert_3 {
	displayName = "$STR_VEH_NAME_M270_MLRS_DESERT++++";
	fuelCapacity = 1200; // base 700
};
