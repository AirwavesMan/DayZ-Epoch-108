class Ural_ZU23_CDF;
class DZE_Veh_Ural_ZU23_CDF: Ural_ZU23_CDF {
	scope = 2;
	displayName = "$STR_VEH_NAME_URAL_ZU23_CDF";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_Ural_ZU23_CDF_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Ural_ZU23_CDF_1: DZE_Veh_Ural_ZU23_CDF {
	displayName = "$STR_VEH_NAME_URAL_ZU23_CDF+";
	original = "DZE_Veh_Ural_ZU23_CDF";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_Ural_ZU23_CDF_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_Ural_ZU23_CDF_2: DZE_Veh_Ural_ZU23_CDF_1 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_CDF++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_Ural_ZU23_CDF_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Ural_ZU23_CDF_3: DZE_Veh_Ural_ZU23_CDF_2 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_CDF+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_Ural_ZU23_CDF_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_Ural_ZU23_CDF_4: DZE_Veh_Ural_ZU23_CDF_3 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_CDF++++";
	fuelCapacity = 615;
};

class Ural_ZU23_INS;
class DZE_Veh_Ural_ZU23_INS: Ural_ZU23_INS {
	scope = 2;
	displayName = "$STR_VEH_NAME_URAL_ZU23_INS";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_Ural_ZU23_INS_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Ural_ZU23_INS_1: DZE_Veh_Ural_ZU23_INS {
	displayName = "$STR_VEH_NAME_URAL_ZU23_INS+";
	original = "DZE_Veh_Ural_ZU23_INS";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_Ural_ZU23_INS_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_Ural_ZU23_INS_2: DZE_Veh_Ural_ZU23_INS_1 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_INS++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_Ural_ZU23_INS_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Ural_ZU23_INS_3: DZE_Veh_Ural_ZU23_INS_2 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_INS+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_Ural_ZU23_INS_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_Ural_ZU23_INS_4: DZE_Veh_Ural_ZU23_INS_3 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_INS++++";
	fuelCapacity = 615;
};

class Ural_ZU23_Gue;
class DZE_Veh_Ural_ZU23_GUE: Ural_ZU23_Gue {
	scope = 2;
	displayName = "$STR_VEH_NAME_URAL_ZU23_GUE";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_Ural_ZU23_GUE_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Ural_ZU23_GUE_1: DZE_Veh_Ural_ZU23_GUE {
	displayName = "$STR_VEH_NAME_URAL_ZU23_GUE+";
	original = "DZE_Veh_Ural_ZU23_GUE";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_Ural_ZU23_GUE_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_Ural_ZU23_GUE_2: DZE_Veh_Ural_ZU23_GUE_1 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_GUE++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_Ural_ZU23_GUE_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Ural_ZU23_GUE_3: DZE_Veh_Ural_ZU23_GUE_2 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_GUE+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_Ural_ZU23_GUE_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_Ural_ZU23_GUE_4: DZE_Veh_Ural_ZU23_GUE_3 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_GUE++++";
	fuelCapacity = 615;
};

class Ural_ZU23_TK_EP1;
class DZE_Veh_Ural_ZU23_TK: Ural_ZU23_TK_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_Ural_ZU23_TK_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_1: DZE_Veh_Ural_ZU23_TK {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK+";
	original = "DZE_Veh_Ural_ZU23_TK";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_Ural_ZU23_TK_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_2: DZE_Veh_Ural_ZU23_TK_1 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_Ural_ZU23_TK_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_3: DZE_Veh_Ural_ZU23_TK_2 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_Ural_ZU23_TK_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_4: DZE_Veh_Ural_ZU23_TK_3 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK++++";
	fuelCapacity = 615;
};

class Ural_ZU23_TK_GUE_EP1;
class DZE_Veh_Ural_ZU23_TK_GUE: Ural_ZU23_TK_GUE_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK_GUE";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_Ural_ZU23_TK_GUE_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_GUE_1: DZE_Veh_Ural_ZU23_TK_GUE {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK_GUE+";
	original = "DZE_Veh_Ural_ZU23_TK_GUE";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_Ural_ZU23_TK_GUE_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_GUE_2: DZE_Veh_Ural_ZU23_TK_GUE_1 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK_GUE++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_Ural_ZU23_TK_GUE_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_GUE_3: DZE_Veh_Ural_ZU23_TK_GUE_2 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK_GUE+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_Ural_ZU23_TK_GUE_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_GUE_4: DZE_Veh_Ural_ZU23_TK_GUE_3 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK_GUE++++";
	fuelCapacity = 615;
};
