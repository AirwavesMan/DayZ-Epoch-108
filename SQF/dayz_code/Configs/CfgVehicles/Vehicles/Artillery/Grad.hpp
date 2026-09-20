class GRAD_CDF;
class DZE_Veh_GRAD_CDF: GRAD_CDF {
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_GRAD_CDF";
	vehicleClass = "DZE Vehicles Artillery";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_GRAD_CDF_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_GRAD_CDF_1: DZE_Veh_GRAD_CDF {
	displayName = "$STR_VEH_NAME_GRAD_CDF+";
	original = "DZE_Veh_GRAD_CDF";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8; // base 2.5
	turnCoef = 6.5; // base 5

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_GRAD_CDF_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_GRAD_CDF_2: DZE_Veh_GRAD_CDF_1 {
	displayName = "$STR_VEH_NAME_GRAD_CDF++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_GRAD_CDF_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_GRAD_CDF_3: DZE_Veh_GRAD_CDF_2 {
	displayName = "$STR_VEH_NAME_GRAD_CDF+++";
	transportMaxWeapons = 20; // base 10
	transportMaxMagazines = 100; // base 50
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_GRAD_CDF_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_GRAD_CDF_4: DZE_Veh_GRAD_CDF_3 {
	displayName = "$STR_VEH_NAME_GRAD_CDF++++";
	fuelCapacity = 205; // base 100
};

class GRAD_INS;
class DZE_Veh_GRAD_INS: GRAD_INS {
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_GRAD_INS";
	vehicleClass = "DZE Vehicles Artillery";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_GRAD_INS_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_GRAD_INS_1: DZE_Veh_GRAD_INS {
	displayName = "$STR_VEH_NAME_GRAD_INS+";
	original = "DZE_Veh_GRAD_INS";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8; // base 2.5
	turnCoef = 6.5; // base 5

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_GRAD_INS_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_GRAD_INS_2: DZE_Veh_GRAD_INS_1 {
	displayName = "$STR_VEH_NAME_GRAD_INS++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_GRAD_INS_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_GRAD_INS_3: DZE_Veh_GRAD_INS_2 {
	displayName = "$STR_VEH_NAME_GRAD_INS+++";
	transportMaxWeapons = 20; // base 10
	transportMaxMagazines = 100; // base 50
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_GRAD_INS_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_GRAD_INS_4: DZE_Veh_GRAD_INS_3 {
	displayName = "$STR_VEH_NAME_GRAD_INS++++";
	fuelCapacity = 205; // base 100
};

class GRAD_RU;
class DZE_Veh_GRAD_RU: GRAD_RU {
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_GRAD_RU";
	vehicleClass = "DZE Vehicles Artillery";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_GRAD_RU_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_GRAD_RU_1: DZE_Veh_GRAD_RU {
	displayName = "$STR_VEH_NAME_GRAD_RU+";
	original = "DZE_Veh_GRAD_RU";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8; // base 2.5
	turnCoef = 6.5; // base 5

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_GRAD_RU_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_GRAD_RU_2: DZE_Veh_GRAD_RU_1 {
	displayName = "$STR_VEH_NAME_GRAD_RU++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_GRAD_RU_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_GRAD_RU_3: DZE_Veh_GRAD_RU_2 {
	displayName = "$STR_VEH_NAME_GRAD_RU+++";
	transportMaxWeapons = 20; // base 10
	transportMaxMagazines = 100; // base 50
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_GRAD_RU_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_GRAD_RU_4: DZE_Veh_GRAD_RU_3 {
	displayName = "$STR_VEH_NAME_GRAD_RU++++";
	fuelCapacity = 205; // base 100
};

class GRAD_TK_EP1;
class DZE_Veh_GRAD_TK: GRAD_TK_EP1 {
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	displayName = "$STR_VEH_NAME_GRAD_TK";
	vehicleClass = "DZE Vehicles Artillery";
	supplyRadius = 2.6;

	class Upgrades {
		ItemTruckORP[] = {"DZE_Veh_GRAD_TK_1",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckORP",1},{"PartEngine",2},{"PartWheel",6},{"ItemScrews",2}}};
	};
};

class DZE_Veh_GRAD_TK_1: DZE_Veh_GRAD_TK {
	displayName = "$STR_VEH_NAME_GRAD_TK+";
	original = "DZE_Veh_GRAD_TK";
	maxSpeed = 100; //base 80
	terrainCoef = 1.8; // base 2.5
	turnCoef = 6.5; // base 5

	class Upgrades {
		ItemTruckAVE[] = {"DZE_Veh_GRAD_TK_2",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckAVE",1},{"PartGeneric",2},{"equip_metal_sheet",5},{"ItemScrews",4}}};
	};
};

class DZE_Veh_GRAD_TK_2: DZE_Veh_GRAD_TK_1 {
	displayName = "$STR_VEH_NAME_GRAD_TK++";
	armor = 70; //base 32
	damageResistance = 0.0255; // base 0.00243

	class Upgrades {
		ItemTruckLRK[] = {"DZE_Veh_GRAD_TK_3",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_GRAD_TK_3: DZE_Veh_GRAD_TK_2 {
	displayName = "$STR_VEH_NAME_GRAD_TK+++";
	transportMaxWeapons = 20; // base 10
	transportMaxMagazines = 100; // base 50
	transportMaxBackpacks = 16;

	class Upgrades {
		ItemTruckTNK[] = {"DZE_Veh_GRAD_TK_4",{"ItemToolbox","ItemCrowbar"},{},{{"ItemTruckTNK",1},{"PartGeneric",4},{"PartFueltank",3},{"ItemFuelBarrel",2}}};
	};
};

class DZE_Veh_GRAD_TK_4: DZE_Veh_GRAD_TK_3 {
	displayName = "$STR_VEH_NAME_GRAD_TK++++";
	fuelCapacity = 205; // base 100
};
