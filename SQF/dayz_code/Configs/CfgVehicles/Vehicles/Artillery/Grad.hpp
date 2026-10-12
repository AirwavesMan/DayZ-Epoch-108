class GRAD_CDF;
class DZE_Veh_GRAD_CDF: GRAD_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_GRAD_CDF";
	vehicleClass = "DZE Vehicles Artillery";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_GRAD_CDF_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_GRAD_CDF_1: DZE_Veh_GRAD_CDF {
	displayName = "$STR_VEH_NAME_GRAD_CDF+";
	original = "DZE_Veh_GRAD_CDF";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8; // base 2.5
	turnCoef = 6.5; // base 5

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_GRAD_CDF_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_GRAD_CDF_2: DZE_Veh_GRAD_CDF_1 {
	displayName = "$STR_VEH_NAME_GRAD_CDF++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_GRAD_CDF_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_GRAD_CDF_3: DZE_Veh_GRAD_CDF_2 {
	displayName = "$STR_VEH_NAME_GRAD_CDF+++";
	transportMaxWeapons = 20; // base 10
	transportMaxMagazines = 100; // base 50
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_GRAD_CDF_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_GRAD_CDF_4: DZE_Veh_GRAD_CDF_3 {
	displayName = "$STR_VEH_NAME_GRAD_CDF++++";
	fuelCapacity = 205; // base 100
};

class GRAD_INS;
class DZE_Veh_GRAD_INS: GRAD_INS {
	scope = 2;
	displayName = "$STR_VEH_NAME_GRAD_INS";
	vehicleClass = "DZE Vehicles Artillery";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_GRAD_INS_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_GRAD_INS_1: DZE_Veh_GRAD_INS {
	displayName = "$STR_VEH_NAME_GRAD_INS+";
	original = "DZE_Veh_GRAD_INS";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8; // base 2.5
	turnCoef = 6.5; // base 5

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_GRAD_INS_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_GRAD_INS_2: DZE_Veh_GRAD_INS_1 {
	displayName = "$STR_VEH_NAME_GRAD_INS++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_GRAD_INS_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_GRAD_INS_3: DZE_Veh_GRAD_INS_2 {
	displayName = "$STR_VEH_NAME_GRAD_INS+++";
	transportMaxWeapons = 20; // base 10
	transportMaxMagazines = 100; // base 50
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_GRAD_INS_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_GRAD_INS_4: DZE_Veh_GRAD_INS_3 {
	displayName = "$STR_VEH_NAME_GRAD_INS++++";
	fuelCapacity = 205; // base 100
};

class GRAD_RU;
class DZE_Veh_GRAD_RU: GRAD_RU {
	scope = 2;
	displayName = "$STR_VEH_NAME_GRAD_RU";
	vehicleClass = "DZE Vehicles Artillery";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_GRAD_RU_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_GRAD_RU_1: DZE_Veh_GRAD_RU {
	displayName = "$STR_VEH_NAME_GRAD_RU+";
	original = "DZE_Veh_GRAD_RU";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8; // base 2.5
	turnCoef = 6.5; // base 5

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_GRAD_RU_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_GRAD_RU_2: DZE_Veh_GRAD_RU_1 {
	displayName = "$STR_VEH_NAME_GRAD_RU++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_GRAD_RU_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_GRAD_RU_3: DZE_Veh_GRAD_RU_2 {
	displayName = "$STR_VEH_NAME_GRAD_RU+++";
	transportMaxWeapons = 20; // base 10
	transportMaxMagazines = 100; // base 50
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_GRAD_RU_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_GRAD_RU_4: DZE_Veh_GRAD_RU_3 {
	displayName = "$STR_VEH_NAME_GRAD_RU++++";
	fuelCapacity = 205; // base 100
};

class GRAD_TK_EP1;
class DZE_Veh_GRAD_TK: GRAD_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_GRAD_TK";
	vehicleClass = "DZE Vehicles Artillery";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_GRAD_TK_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_GRAD_TK_1: DZE_Veh_GRAD_TK {
	displayName = "$STR_VEH_NAME_GRAD_TK+";
	original = "DZE_Veh_GRAD_TK";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8; // base 2.5
	turnCoef = 6.5; // base 5

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_GRAD_TK_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_GRAD_TK_2: DZE_Veh_GRAD_TK_1 {
	displayName = "$STR_VEH_NAME_GRAD_TK++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_GRAD_TK_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_GRAD_TK_3: DZE_Veh_GRAD_TK_2 {
	displayName = "$STR_VEH_NAME_GRAD_TK+++";
	transportMaxWeapons = 20; // base 10
	transportMaxMagazines = 100; // base 50
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_GRAD_TK_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_GRAD_TK_4: DZE_Veh_GRAD_TK_3 {
	displayName = "$STR_VEH_NAME_GRAD_TK++++";
	fuelCapacity = 205; // base 100
};
