class V3S_Base: Truck {
	class Reflectors {
		class Left {
			angle = 120;
		};
		class Right {
			angle = 120;
		};
	};
};

class V3S_Civ;
class DZE_Veh_V3S_Open_Woodland: V3S_Civ {
	displayName = "$STR_VEH_NAME_V3S_CAMO_OPEN";
	vehicleClass = "DZE Vehicles Trucks";
	picture = "\CA\wheeled_e\data\UI\Picture_V3S_open_CA.paa";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_V3S_Open_Woodland_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_Open_Woodland_1: DZE_Veh_V3S_Open_Woodland {
	displayName = "$STR_VEH_NAME_V3S_CAMO_OPEN+";
	original = "DZE_Veh_V3S_Open_Woodland";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_V3S_Open_Woodland_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_V3S_Open_Woodland_2: DZE_Veh_V3S_Open_Woodland_1 {
	displayName = "$STR_VEH_NAME_V3S_CAMO_OPEN++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_V3S_Open_Woodland_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_Open_Woodland_3: DZE_Veh_V3S_Open_Woodland_2 {
	displayName = "$STR_VEH_NAME_V3S_CAMO_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_V3S_Open_Woodland_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_V3S_Open_Woodland_4: DZE_Veh_V3S_Open_Woodland_3 {
	displayName = "$STR_VEH_NAME_V3S_CAMO_OPEN++++";
	fuelCapacity = 615;
};

class V3S_Open_TK_CIV_EP1;
class DZE_Veh_V3S_Open_Civil: V3S_Open_TK_CIV_EP1 {
	displayName = "$STR_VEH_NAME_V3S_CIVIL_OPEN";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_V3S_Open_Civil_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_Open_Civil_1: DZE_Veh_V3S_Open_Civil {
	displayName = "$STR_VEH_NAME_V3S_CIVIL_OPEN+";
	original = "DZE_Veh_V3S_Open_Civil";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_V3S_Open_Civil_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_V3S_Open_Civil_2: DZE_Veh_V3S_Open_Civil_1 {
	displayName = "$STR_VEH_NAME_V3S_CIVIL_OPEN++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_V3S_Open_Civil_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_Open_Civil_3: DZE_Veh_V3S_Open_Civil_2 {
	displayName = "$STR_VEH_NAME_V3S_CIVIL_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_V3S_Open_Civil_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_V3S_Open_Civil_4: DZE_Veh_V3S_Open_Civil_3 {
	displayName = "$STR_VEH_NAME_V3S_CIVIL_OPEN++++";
	fuelCapacity = 615;
};

class V3S_Open_TK_EP1;
class DZE_Veh_V3S_Open_TK: V3S_Open_TK_EP1 {
	displayName = "$STR_VEH_NAME_V3S_CAMO_OPEN";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_V3S_Open_TK_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_Open_TK_1: DZE_Veh_V3S_Open_TK {
	displayName = "$STR_VEH_NAME_V3S_CAMO_OPEN+";
	original = "DZE_Veh_V3S_Open_TK";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_V3S_Open_TK_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_V3S_Open_TK_2: DZE_Veh_V3S_Open_TK_1 {
	displayName = "$STR_VEH_NAME_V3S_CAMO_OPEN++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_V3S_Open_TK_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_Open_TK_3: DZE_Veh_V3S_Open_TK_2 {
	displayName = "$STR_VEH_NAME_V3S_CAMO_OPEN+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_V3S_Open_TK_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_V3S_Open_TK_4: DZE_Veh_V3S_Open_TK_3 {
	displayName = "$STR_VEH_NAME_V3S_CAMO_OPEN++++";
	fuelCapacity = 615;
};

class V3S_TK_EP1;
class DZE_Veh_V3S_White: V3S_TK_EP1 {
	displayName = "$STR_VEH_NAME_V3S_WHITE";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	supplyRadius = 2.6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_V3S_White_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_White_1: DZE_Veh_V3S_White {
	displayName = "$STR_VEH_NAME_V3S_WHITE+";
	original = "DZE_Veh_V3S_White";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_V3S_White_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_V3S_White_2: DZE_Veh_V3S_White_1 {
	displayName = "$STR_VEH_NAME_V3S_WHITE++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_V3S_White_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_White_3: DZE_Veh_V3S_White_2 {
	displayName = "$STR_VEH_NAME_V3S_WHITE+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_V3S_White_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_V3S_White_4: DZE_Veh_V3S_White_3 {
	displayName = "$STR_VEH_NAME_V3S_WHITE++++";
	fuelCapacity = 615;
};

class V3S_Refuel_TK_GUE_EP1;
class DZE_Veh_V3S_Fuel_Woodland: V3S_Refuel_TK_GUE_EP1 {
	displayName = "$STR_VEH_NAME_V3S_FUEL";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 5;
	supplyRadius = 2.6;
	transportFuel = 0; //Required to disable A2 built in auto refuel for fuel trucks
	fuelCapacity = 10000;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_V3S_Fuel_Woodland_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};
class DZE_Veh_V3S_Fuel_Woodland_1: DZE_Veh_V3S_Fuel_Woodland {
	displayName = "$STR_VEH_NAME_V3S_FUEL+";
	original = "DZE_Veh_V3S_Fuel_Woodland";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_V3S_Fuel_Woodland_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};
class DZE_Veh_V3S_Fuel_Woodland_2: DZE_Veh_V3S_Fuel_Woodland_1 {
	displayName = "$STR_VEH_NAME_V3S_FUEL++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_V3S_Fuel_Woodland_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};
class DZE_Veh_V3S_Fuel_Woodland_3: DZE_Veh_V3S_Fuel_Woodland_2 {
	displayName = "$STR_VEH_NAME_V3S_FUEL+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 10;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_V3S_Fuel_Woodland_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",6}}};
	};
};
class DZE_Veh_V3S_Fuel_Woodland_4: DZE_Veh_V3S_Fuel_Woodland_3 {
	displayName = "$STR_VEH_NAME_V3S_FUEL++++";
	fuelCapacity = 20000;
};

class V3S_Reammo_TK_GUE_EP1;
class DZE_Veh_V3S_Armored: V3S_Reammo_TK_GUE_EP1 {
	displayName = "$STR_VEH_NAME_V3S_ARMORED";
	vehicleClass = "DZE Vehicles Trucks";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	transportAmmo = 0;
	supplyRadius = 2.6;
	armor = 120; //base 40
	damageResistance = 0.0555; // base 0.00231


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_V3S_Armored_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_Armored_1: DZE_Veh_V3S_Armored {
	displayName = "$STR_VEH_NAME_V3S_ARMORED+";
	original = "DZE_Veh_V3S_Armored";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_V3S_Armored_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Sheet",8},{"DZE_Item_Metal_Screws",3}}};
	};
};

class DZE_Veh_V3S_Armored_2: DZE_Veh_V3S_Armored_1 {
	displayName = "$STR_VEH_NAME_V3S_ARMORED++";
	armor = 180; //base 120
	damageResistance = 0.0855; // base 0.0555

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_V3S_Armored_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_Armored_3: DZE_Veh_V3S_Armored_2 {
	displayName = "$STR_VEH_NAME_V3S_ARMORED+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_V3S_Armored_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_V3S_Armored_4: DZE_Veh_V3S_Armored_3 {
	displayName = "$STR_VEH_NAME_V3S_ARMORED++++";
	fuelCapacity = 615;
};

class DZE_Veh_V3S_Camper: DZE_Veh_V3S_Armored {
	displayName = "$STR_VEH_NAME_V3S_CAMPER";
	vehicleClass = "DZE Vehicles Trucks";
	model = "\z\addons\dayz_epoch_v\vehicles\V3S\dze_v3s_noback";
	picture = "\CA\wheeled_e\data\UI\Picture_V3S_open_CA.paa";
	armor = 40;
	damageResistance = 0.00231;
	transportsoldier = 1;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 6;


	class Upgrades {
		DZE_Item_Upgrade_TruckORP[] = {"DZE_Veh_V3S_Camper_1",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",6},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_Camper_1: DZE_Veh_V3S_Camper {
	displayName = "$STR_VEH_NAME_V3S_CAMPER+";
	original = "DZE_Veh_V3S_Camper";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.5
	turnCoef = 5;  // base 3.7

	class Upgrades {
		DZE_Item_Upgrade_TruckAVE[] = {"DZE_Veh_V3S_Camper_2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckAVE",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_V3S_Camper_2: DZE_Veh_V3S_Camper_1 {
	displayName = "$STR_VEH_NAME_V3S_CAMPER++";
	armor = 80; //base 40
	damageResistance = 0.0255; // base 0.00231

	class Upgrades {
		DZE_Item_Upgrade_TruckLRK[] = {"DZE_Veh_V3S_Camper_3",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_V3S_Camper_3: DZE_Veh_V3S_Camper_2 {
	displayName = "$STR_VEH_NAME_V3S_CAMPER+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_TruckTNK[] = {"DZE_Veh_V3S_Camper_4",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar"},{},{{"DZE_Item_Upgrade_TruckTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",3},{"DZE_Item_Barrel_Fuel",2}}};
	};
};

class DZE_Veh_V3S_Camper_4: DZE_Veh_V3S_Camper_3 {
	displayName = "$STR_VEH_NAME_V3S_CAMPER++++";
	fuelCapacity = 615;
};
