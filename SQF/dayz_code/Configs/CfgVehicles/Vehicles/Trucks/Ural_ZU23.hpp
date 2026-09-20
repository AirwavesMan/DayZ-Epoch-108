class Ural_ZU23_CDF;
class DZE_Veh_Ural_ZU23_CDF: Ural_ZU23_CDF {
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_URAL_ZU23_CDF";
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_ZU23_CDF_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_ZU23_CDF_1: DZE_Veh_Ural_ZU23_CDF {
	displayName = "$STR_VEH_NAME_URAL_ZU23_CDF+";
	original = "DZE_Veh_Ural_ZU23_CDF";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_ZU23_CDF_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_ZU23_CDF_2: DZE_Veh_Ural_ZU23_CDF_1 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_CDF++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_ZU23_CDF_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_ZU23_CDF_3: DZE_Veh_Ural_ZU23_CDF_2 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_CDF+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_ZU23_CDF_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_ZU23_CDF_4: DZE_Veh_Ural_ZU23_CDF_3 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_CDF++++";
	fuelCapacity = 615;
};

class Ural_ZU23_INS;
class DZE_Veh_Ural_ZU23_INS: Ural_ZU23_INS {
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_URAL_ZU23_INS";
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_ZU23_INS_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_ZU23_INS_1: DZE_Veh_Ural_ZU23_INS {
	displayName = "$STR_VEH_NAME_URAL_ZU23_INS+";
	original = "DZE_Veh_Ural_ZU23_INS";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_ZU23_INS_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_ZU23_INS_2: DZE_Veh_Ural_ZU23_INS_1 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_INS++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_ZU23_INS_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_ZU23_INS_3: DZE_Veh_Ural_ZU23_INS_2 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_INS+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_ZU23_INS_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_ZU23_INS_4: DZE_Veh_Ural_ZU23_INS_3 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_INS++++";
	fuelCapacity = 615;
};

class Ural_ZU23_Gue;
class DZE_Veh_Ural_ZU23_GUE: Ural_ZU23_Gue {
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_URAL_ZU23_GUE";
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_ZU23_GUE_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_ZU23_GUE_1: DZE_Veh_Ural_ZU23_GUE {
	displayName = "$STR_VEH_NAME_URAL_ZU23_GUE+";
	original = "DZE_Veh_Ural_ZU23_GUE";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_ZU23_GUE_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_ZU23_GUE_2: DZE_Veh_Ural_ZU23_GUE_1 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_GUE++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_ZU23_GUE_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_ZU23_GUE_3: DZE_Veh_Ural_ZU23_GUE_2 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_GUE+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_ZU23_GUE_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_ZU23_GUE_4: DZE_Veh_Ural_ZU23_GUE_3 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_GUE++++";
	fuelCapacity = 615;
};

class Ural_ZU23_TK_EP1;
class DZE_Veh_Ural_ZU23_TK: Ural_ZU23_TK_EP1 {
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_URAL_ZU23_TK";
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_ZU23_TK_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_1: DZE_Veh_Ural_ZU23_TK {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK+";
	original = "DZE_Veh_Ural_ZU23_TK";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_ZU23_TK_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_2: DZE_Veh_Ural_ZU23_TK_1 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_ZU23_TK_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_3: DZE_Veh_Ural_ZU23_TK_2 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_ZU23_TK_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_4: DZE_Veh_Ural_ZU23_TK_3 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK++++";
	fuelCapacity = 615;
};

class Ural_ZU23_TK_GUE_EP1;
class DZE_Veh_Ural_ZU23_TK_GUE: Ural_ZU23_TK_GUE_EP1 {
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_URAL_ZU23_TK_GUE";
	vehicleClass = "DZE Vehicles Trucks";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_Ural_ZU23_TK_GUE_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_GUE_1: DZE_Veh_Ural_ZU23_TK_GUE {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK_GUE+";
	original = "DZE_Veh_Ural_ZU23_TK_GUE";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8;  // base 2.0
	turnCoef = 5;  // base 3.7

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_Ural_ZU23_TK_GUE_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_GUE_2: DZE_Veh_Ural_ZU23_TK_GUE_1 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK_GUE++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_Ural_ZU23_TK_GUE_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_GUE_3: DZE_Veh_Ural_ZU23_TK_GUE_2 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK_GUE+++";
	transportMaxWeapons = 100;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_Ural_ZU23_TK_GUE_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_Ural_ZU23_TK_GUE_4: DZE_Veh_Ural_ZU23_TK_GUE_3 {
	displayName = "$STR_VEH_NAME_URAL_ZU23_TK_GUE++++";
	fuelCapacity = 615;
};
