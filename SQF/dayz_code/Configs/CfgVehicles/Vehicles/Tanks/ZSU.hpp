class ZSU_CDF;
class DZE_Veh_ZSU_CDF: ZSU_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_ZSU_CDF";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_ZSU_CDF_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_ZSU_CDF_1: DZE_Veh_ZSU_CDF {
	displayName = "$STR_VEH_NAME_ZSU_CDF+";
	original = "DZE_Veh_ZSU_CDF";
	maxSpeed = 65; // base 44
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_ZSU_CDF_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_ZSU_CDF_2: DZE_Veh_ZSU_CDF_1 {
	displayName = "$STR_VEH_NAME_ZSU_CDF++";
	armor = 205; // base 160
	damageResistance = 0.05283; // base 0.02711

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_ZSU_CDF_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_ZSU_CDF_3: DZE_Veh_ZSU_CDF_2 {
	displayName = "$STR_VEH_NAME_ZSU_CDF+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_ZSU_CDF_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_ZSU_CDF_4: DZE_Veh_ZSU_CDF_3 {
	displayName = "$STR_VEH_NAME_ZSU_CDF++++";
	fuelCapacity = 1200; // base 700
};

class ZSU_INS;
class DZE_Veh_ZSU_INS: ZSU_INS {
	scope = 2;
	displayName = "$STR_VEH_NAME_ZSU_INS";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_ZSU_INS_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_ZSU_INS_1: DZE_Veh_ZSU_INS {
	displayName = "$STR_VEH_NAME_ZSU_INS+";
	original = "DZE_Veh_ZSU_INS";
	maxSpeed = 65; // base 44
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_ZSU_INS_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_ZSU_INS_2: DZE_Veh_ZSU_INS_1 {
	displayName = "$STR_VEH_NAME_ZSU_INS++";
	armor = 205; // base 160
	damageResistance = 0.05283; // base 0.02711

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_ZSU_INS_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_ZSU_INS_3: DZE_Veh_ZSU_INS_2 {
	displayName = "$STR_VEH_NAME_ZSU_INS+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_ZSU_INS_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_ZSU_INS_4: DZE_Veh_ZSU_INS_3 {
	displayName = "$STR_VEH_NAME_ZSU_INS++++";
	fuelCapacity = 1200; // base 700
};

class ZSU_TK_EP1;
class DZE_Veh_ZSU_TK: ZSU_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_ZSU_TK";
	vehicleClass = "DZE Vehicles Tanks";


	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_ARMORED
	transportMaxMagazines = 100;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 6;
	supplyRadius = 1.8;


	class Upgrades {
		DZE_Item_Upgrade_TankORP[] = {"DZE_Veh_ZSU_TK_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankORP",1},{"DZE_Item_Parts_Engine",6},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_ZSU_TK_1: DZE_Veh_ZSU_TK {
	displayName = "$STR_VEH_NAME_ZSU_TK+";
	original = "DZE_Veh_ZSU_TK";
	maxSpeed = 65; // base 44
	turnCoef = 2.0;  // base 1

	class Upgrades {
		DZE_Item_Upgrade_TankAVE[] = {"DZE_Veh_ZSU_TK_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_ZSU_TK_2: DZE_Veh_ZSU_TK_1 {
	displayName = "$STR_VEH_NAME_ZSU_TK++";
	armor = 205; // base 160
	damageResistance = 0.05283; // base 0.02711

	class Upgrades {
		DZE_Item_Upgrade_TankLRK[] = {"DZE_Veh_ZSU_TK_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_ZSU_TK_3: DZE_Veh_ZSU_TK_2 {
	displayName = "$STR_VEH_NAME_ZSU_TK+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TankTNK[] = {"DZE_Veh_ZSU_TK_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TankTNK",1},{"DZE_Item_Parts_Fueltank",6},{"DZE_Item_Barrel_Fuel",4}}};
	};
};

class DZE_Veh_ZSU_TK_4: DZE_Veh_ZSU_TK_3 {
	displayName = "$STR_VEH_NAME_ZSU_TK++++";
	fuelCapacity = 1200; // base 700
};
