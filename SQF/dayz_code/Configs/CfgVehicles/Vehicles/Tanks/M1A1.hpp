class M1A1;
class DZE_Veh_M1A1_Woodland: M1A1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_M1A1_WOODLAND";
	vehicleClass = "DZE Vehicles Tanks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_M1A1_Woodland_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M1A1_Woodland_1: DZE_Veh_M1A1_Woodland {
	displayName = "$STR_VEH_NAME_M1A1_WOODLAND+";
	original = "DZE_Veh_M1A1_Woodland";
	maxSpeed = 100; // base 72
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_M1A1_Woodland_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M1A1_Woodland_2: DZE_Veh_M1A1_Woodland_1 {
	displayName = "$STR_VEH_NAME_M1A1_WOODLAND++";
	armor = 1090; // base 850
	damageResistance = 0.01066; // base 0.00547

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_M1A1_Woodland_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M1A1_Woodland_3: DZE_Veh_M1A1_Woodland_2 {
	displayName = "$STR_VEH_NAME_M1A1_WOODLAND+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_M1A1_Woodland_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_M1A1_Woodland_4: DZE_Veh_M1A1_Woodland_3 {
	displayName = "$STR_VEH_NAME_M1A1_WOODLAND++++";
	fuelCapacity = 1200; // base 700
};

class M1A1_US_DES_EP1;
class DZE_Veh_M1A1_Desert: M1A1_US_DES_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_M1A1_DESERT";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_M1A1_Desert_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M1A1_Desert_1: DZE_Veh_M1A1_Desert {
	displayName = "$STR_VEH_NAME_M1A1_DESERT+";
	original = "DZE_Veh_M1A1_Desert";
	maxSpeed = 100; // base 72
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_M1A1_Desert_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M1A1_Desert_2: DZE_Veh_M1A1_Desert_1 {
	displayName = "$STR_VEH_NAME_M1A1_DESERT++";
	armor = 1090; // base 850
	damageResistance = 0.01066; // base 0.00547

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_M1A1_Desert_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_M1A1_Desert_3: DZE_Veh_M1A1_Desert_2 {
	displayName = "$STR_VEH_NAME_M1A1_DESERT+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_M1A1_Desert_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_M1A1_Desert_4: DZE_Veh_M1A1_Desert_3 {
	displayName = "$STR_VEH_NAME_M1A1_DESERT++++";
	fuelCapacity = 1200; // base 700
};
