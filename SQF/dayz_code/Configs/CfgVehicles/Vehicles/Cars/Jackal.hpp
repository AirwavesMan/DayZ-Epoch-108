class BAF_Jackal2_L2A1_D;
class DZE_Veh_Jackal_L2A1_Desert: BAF_Jackal2_L2A1_D {
	displayname = "$STR_VEH_NAME_JACKAL_L2A1_DESERT";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxMagazines = 100;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Jackal_L2A1_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Jackal_L2A1_Desert_1: DZE_Veh_Jackal_L2A1_Desert {
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_DESERT+";
	original = "DZE_Veh_Jackal_L2A1_Desert";
	maxSpeed = 155; // base 150
	turnCoef = 4; // base 3
	terrainCoef = 1; //base 3

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Jackal_L2A1_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Jackal_L2A1_Desert_2: DZE_Veh_Jackal_L2A1_Desert_1 {
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_DESERT++";
	armor = 60; // base 30
	damageResistance = 0.015; // base 0.00719

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Jackal_L2A1_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Jackal_L2A1_Desert_3: DZE_Veh_Jackal_L2A1_Desert_2 {
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_DESERT+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 10;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Jackal_L2A1_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_Jackal_L2A1_Desert_4: DZE_Veh_Jackal_L2A1_Desert_3 {
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_DESERT++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_Jackal_L2A1_Woodland: DZE_Veh_Jackal_L2A1_Desert {
	model = "\CorePatch\CorePatch_Vehicles\models\Jackal_L2A1_W_BAF";
	displayname = "$STR_VEH_NAME_JACKAL_L2A1_WOODLAND";

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Jackal_L2A1_Woodland_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Jackal_L2A1_Woodland_1: DZE_Veh_Jackal_L2A1_Woodland {
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_WOODLAND+";
	original = "DZE_Veh_Jackal_L2A1_Woodland";
	maxSpeed = 155; // base 150
	turnCoef = 4; // base 3
	terrainCoef = 1; //base 3

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Jackal_L2A1_Woodland_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Jackal_L2A1_Woodland_2: DZE_Veh_Jackal_L2A1_Woodland_1 {
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_WOODLAND++";
	armor = 60; // base 30
	damageResistance = 0.015; // base 0.00719

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Jackal_L2A1_Woodland_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Jackal_L2A1_Woodland_3: DZE_Veh_Jackal_L2A1_Woodland_2 {
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_WOODLAND+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 10;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Jackal_L2A1_Woodland_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_Jackal_L2A1_Woodland_4: DZE_Veh_Jackal_L2A1_Woodland_3 {
	displayName = "$STR_VEH_NAME_JACKAL_L2A1_WOODLAND++++";
	fuelCapacity = 180; // base 100
};

class BAF_Jackal2_GMG_D;
class DZE_Veh_Jackal_MK19_Desert: BAF_Jackal2_GMG_D {
	displayname = "$STR_VEH_NAME_JACKAL_MK19_DESERT";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	transportMaxMagazines = 100;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 5;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Jackal_MK19_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Jackal_MK19_Desert_1: DZE_Veh_Jackal_MK19_Desert {
	displayName = "$STR_VEH_NAME_JACKAL_MK19_DESERT+";
	original = "DZE_Veh_Jackal_MK19_Desert";
	maxSpeed = 155; // base 150
	turnCoef = 4; // base 3
	terrainCoef = 1; //base 3

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Jackal_MK19_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Jackal_MK19_Desert_2: DZE_Veh_Jackal_MK19_Desert_1 {
	displayName = "$STR_VEH_NAME_JACKAL_MK19_DESERT++";
	armor = 60; // base 30
	damageResistance = 0.015; // base 0.00719

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Jackal_MK19_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Jackal_MK19_Desert_3: DZE_Veh_Jackal_MK19_Desert_2 {
	displayName = "$STR_VEH_NAME_JACKAL_MK19_DESERT+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 10;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Jackal_MK19_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_Jackal_MK19_Desert_4: DZE_Veh_Jackal_MK19_Desert_3 {
	displayName = "$STR_VEH_NAME_JACKAL_MK19_DESERT++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_Jackal_MK19_Woodland: DZE_Veh_Jackal_MK19_Desert {
	model = "\CorePatch\CorePatch_Vehicles\models\Jackal_GMG_W_BAF";
	displayname = "$STR_VEH_NAME_JACKAL_MK19_WOODLAND";

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Jackal_MK19_Woodland_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Jackal_MK19_Woodland_1: DZE_Veh_Jackal_MK19_Woodland {
	displayName = "$STR_VEH_NAME_JACKAL_MK19_WOODLAND+";
	original = "DZE_Veh_Jackal_MK19_Woodland";
	maxSpeed = 155; // base 150
	turnCoef = 4; // base 3
	terrainCoef = 1; //base 3

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Jackal_MK19_Woodland_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Jackal_MK19_Woodland_2: DZE_Veh_Jackal_MK19_Woodland_1 {
	displayName = "$STR_VEH_NAME_JACKAL_MK19_WOODLAND++";
	armor = 60; // base 30
	damageResistance = 0.015; // base 0.00719

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Jackal_MK19_Woodland_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Jackal_MK19_Woodland_3: DZE_Veh_Jackal_MK19_Woodland_2 {
	displayName = "$STR_VEH_NAME_JACKAL_MK19_WOODLAND+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 10;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Jackal_MK19_Woodland_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_Jackal_MK19_Woodland_4: DZE_Veh_Jackal_MK19_Woodland_3 {
	displayName = "$STR_VEH_NAME_JACKAL_MK19_WOODLAND++++";
	fuelCapacity = 180; // base 100
};
