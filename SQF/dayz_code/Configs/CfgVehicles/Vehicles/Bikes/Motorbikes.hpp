class Motorcycle: LandVehicle {
	class Reflectors {
		class Right {
			angle = 90;
		};
	};
};

class Old_moto_TK_Civ_EP1;
class DZE_Veh_Motorbike_White: Old_moto_TK_Civ_EP1 {

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Motorbike_White_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",2},{"ItemScrews",2}}};
	};

	displayName = "$STR_VEH_NAME_MOTORBIKE_WHITE";
	vehicleClass = "DZE Vehicles Motorbikes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = -1;
};

class TT650_Civ;
class DZE_Veh_TT650_RedWhite: TT650_Civ {

	class Upgrades {
		ItemORP[] = {"DZE_Veh_TT650_RedWhite_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",2},{"ItemScrews",2}}};
	};

	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_REDWHITE";
	vehicleClass = "DZE Vehicles Motorbikes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = -1;
};

class TT650_TK_CIV_EP1;
class DZE_Veh_TT650_Rusty: TT650_TK_CIV_EP1 {

	class Upgrades {
		ItemORP[] = {"DZE_Veh_TT650_Rusty_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",2},{"ItemScrews",2}}};
	};

	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_RUSTY";
	vehicleClass = "DZE Vehicles Motorbikes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = -1;
};

class TT650_Ins;
class DZE_Veh_TT650_FireRed: TT650_Ins {

	class Upgrades {
		ItemORP[] = {"DZE_Veh_TT650_FireRed_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",2},{"ItemScrews",2}}};
	};

	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_FIRERED";
	vehicleClass = "DZE Vehicles Motorbikes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = -1;
};

class M1030_US_DES_EP1;
class DZE_Veh_M1030_Green: M1030_US_DES_EP1 {

	class Upgrades {
		ItemORP[] = {"DZE_Veh_M1030_Green_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",2},{"ItemScrews",2}}};
	};

	displayName = "$STR_VEH_NAME_MOTORBIKE_M1030_GREEN";
	vehicleClass = "DZE Vehicles Motorbikes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = -1;
};

class DZE_Veh_Motorbike_White_1: DZE_Veh_Motorbike_White {
	displayName = "$STR_VEH_NAME_MOTORBIKE_WHITE+";
	original = "DZE_Veh_Motorbike_White";
	maxSpeed = 144;
	terrainCoef = 2.1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Motorbike_White_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Motorbike_White_2: DZE_Veh_Motorbike_White_1 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_WHITE++";
	armor = 60;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Motorbike_White_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Motorbike_White_3: DZE_Veh_Motorbike_White_2 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_WHITE+++";
	transportMaxWeapons = 2;
	transportMaxMagazines = 10;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Motorbike_White_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Motorbike_White_4: DZE_Veh_Motorbike_White_3 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_WHITE++++";
	fuelCapacity = 100;

	class Upgrades {};
};

class DZE_Veh_TT650_RedWhite_1: DZE_Veh_TT650_RedWhite {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_REDWHITE+";
	original = "DZE_Veh_TT650_RedWhite";
	maxSpeed = 144;
	terrainCoef = 2.1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_TT650_RedWhite_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_TT650_RedWhite_2: DZE_Veh_TT650_RedWhite_1 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_REDWHITE++";
	armor = 100;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_TT650_RedWhite_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_TT650_RedWhite_3: DZE_Veh_TT650_RedWhite_2 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_REDWHITE+++";
	transportMaxWeapons = 2;
	transportMaxMagazines = 10;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_TT650_RedWhite_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_TT650_RedWhite_4: DZE_Veh_TT650_RedWhite_3 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_REDWHITE++++";
	fuelCapacity = 100;

	class Upgrades {};
};

class DZE_Veh_TT650_Rusty_1: DZE_Veh_TT650_Rusty {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_RUSTY+";
	original = "DZE_Veh_TT650_Rusty";
	maxSpeed = 144;
	terrainCoef = 2.1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_TT650_Rusty_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_TT650_Rusty_2: DZE_Veh_TT650_Rusty_1 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_RUSTY++";
	armor = 100;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_TT650_Rusty_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_TT650_Rusty_3: DZE_Veh_TT650_Rusty_2 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_RUSTY+++";
	transportMaxWeapons = 2;
	transportMaxMagazines = 10;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_TT650_Rusty_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_TT650_Rusty_4: DZE_Veh_TT650_Rusty_3 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_RUSTY++++";
	fuelCapacity = 100;

	class Upgrades {};
};

class DZE_Veh_TT650_FireRed_1: DZE_Veh_TT650_FireRed {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_FIRERED+";
	original = "DZE_Veh_TT650_FireRed";
	maxSpeed = 144;
	terrainCoef = 2.1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_TT650_FireRed_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_TT650_FireRed_2: DZE_Veh_TT650_FireRed_1 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_FIRERED++";
	armor = 100;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_TT650_FireRed_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_TT650_FireRed_3: DZE_Veh_TT650_FireRed_2 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_FIRERED+++";
	transportMaxWeapons = 2;
	transportMaxMagazines = 10;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_TT650_FireRed_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_TT650_FireRed_4: DZE_Veh_TT650_FireRed_3 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_TT650_FIRERED++++";
	fuelCapacity = 100;

	class Upgrades {};
};

class DZE_Veh_M1030_Green_1: DZE_Veh_M1030_Green {
	displayName = "$STR_VEH_NAME_MOTORBIKE_M1030_GREEN+";
	original = "DZE_Veh_M1030_Green";
	maxSpeed = 144;
	terrainCoef = 2.1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_M1030_Green_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_M1030_Green_2: DZE_Veh_M1030_Green_1 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_M1030_GREEN++";
	armor = 100;

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_M1030_Green_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_M1030_Green_3: DZE_Veh_M1030_Green_2 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_M1030_GREEN+++";
	transportMaxWeapons = 2;
	transportMaxMagazines = 10;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_M1030_Green_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_M1030_Green_4: DZE_Veh_M1030_Green_3 {
	displayName = "$STR_VEH_NAME_MOTORBIKE_M1030_GREEN++++";
	fuelCapacity = 100;

	class Upgrades {};
};
