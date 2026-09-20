class UAZ_CDF;
class DZE_Veh_UAZ_CDF: UAZ_CDF {
	displayName = "$STR_VEH_NAME_UAZ_CDF";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	supplyRadius = 1.3;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_CDF_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_CDF_1: DZE_Veh_UAZ_CDF {
	displayName = "$STR_VEH_NAME_UAZ_CDF+";
	original = "DZE_Veh_UAZ_CDF";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_CDF_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_CDF_2: DZE_Veh_UAZ_CDF_1 {
	displayName = "$STR_VEH_NAME_UAZ_CDF++";
	armor = 75; // UAZ 40
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.3;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.3;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_UAZ_CDF_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_CDF_3: DZE_Veh_UAZ_CDF_2 {
	displayName = "$STR_VEH_NAME_UAZ_CDF+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_CDF_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_CDF_4: DZE_Veh_UAZ_CDF_3 {
	displayName = "$STR_VEH_NAME_UAZ_CDF++++";
	fuelCapacity = 210; // car 100
};

class UAZ_INS;
class DZE_Veh_UAZ_INS: UAZ_INS {
	displayName = "$STR_VEH_NAME_UAZ_INS";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	supplyRadius = 1.3;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_INS_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_INS_1: DZE_Veh_UAZ_INS {
	displayName = "$STR_VEH_NAME_UAZ_INS+";
	original = "DZE_Veh_UAZ_INS";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_INS_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_INS_2: DZE_Veh_UAZ_INS_1 {
	displayName = "$STR_VEH_NAME_UAZ_INS++";
	armor = 75; // UAZ 40
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.3;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.3;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_UAZ_INS_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_INS_3: DZE_Veh_UAZ_INS_2 {
	displayName = "$STR_VEH_NAME_UAZ_INS+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_INS_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_INS_4: DZE_Veh_UAZ_INS_3 {
	displayName = "$STR_VEH_NAME_UAZ_INS++++";
	fuelCapacity = 210; // car 100
};

class UAZ_RU;
class DZE_Veh_UAZ_RU: UAZ_RU {
	displayName = "$STR_VEH_NAME_UAZ_RU";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	supplyRadius = 1.3;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_RU_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_RU_1: DZE_Veh_UAZ_RU {
	displayName = "$STR_VEH_NAME_UAZ_RU+";
	original = "DZE_Veh_UAZ_RU";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_RU_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_RU_2: DZE_Veh_UAZ_RU_1 {
	displayName = "$STR_VEH_NAME_UAZ_RU++";
	armor = 75; // UAZ 40
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.3;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.3;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_UAZ_RU_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_RU_3: DZE_Veh_UAZ_RU_2 {
	displayName = "$STR_VEH_NAME_UAZ_RU+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_RU_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_RU_4: DZE_Veh_UAZ_RU_3 {
	displayName = "$STR_VEH_NAME_UAZ_RU++++";
	fuelCapacity = 210; // car 100
};

class UAZ_Unarmed_TK_EP1;
class DZE_Veh_UAZ_TK: UAZ_Unarmed_TK_EP1 {
	displayName = "$STR_VEH_NAME_UAZ_TK";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	supplyRadius = 1.3;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_TK_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_TK_1: DZE_Veh_UAZ_TK {
	displayName = "$STR_VEH_NAME_UAZ_TK+";
	original = "DZE_Veh_UAZ_TK";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_TK_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_TK_2: DZE_Veh_UAZ_TK_1 {
	displayName = "$STR_VEH_NAME_UAZ_TK++";
	armor = 75; // UAZ 40
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.3;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.3;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_UAZ_TK_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_TK_3: DZE_Veh_UAZ_TK_2 {
	displayName = "$STR_VEH_NAME_UAZ_TK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_TK_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_TK_4: DZE_Veh_UAZ_TK_3 {
	displayName = "$STR_VEH_NAME_UAZ_TK++++";
	fuelCapacity = 210; // car 100
};

class UAZ_Unarmed_UN_EP1;
class DZE_Veh_UAZ_UN: UAZ_Unarmed_UN_EP1 {
	displayName = "$STR_VEH_NAME_UAZ_UN";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	supplyRadius = 1.3;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_UN_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_UN_1: DZE_Veh_UAZ_UN {
	displayName = "$STR_VEH_NAME_UAZ_UN+";
	original = "DZE_Veh_UAZ_UN";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_UN_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_UN_2: DZE_Veh_UAZ_UN_1 {
	displayName = "$STR_VEH_NAME_UAZ_UN++";
	armor = 75; // UAZ 40
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.3;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.3;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_UAZ_UN_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_UN_3: DZE_Veh_UAZ_UN_2 {
	displayName = "$STR_VEH_NAME_UAZ_UN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_UN_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_UN_4: DZE_Veh_UAZ_UN_3 {
	displayName = "$STR_VEH_NAME_UAZ_UN++++";
	fuelCapacity = 210; // car 100
};

class UAZ_Unarmed_TK_CIV_EP1;
class DZE_Veh_UAZ_Civil: UAZ_Unarmed_TK_CIV_EP1 {
	displayName = "$STR_VEH_NAME_UAZ_CIVIL";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	supplyRadius = 1.3;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_Civil_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_Civil_1: DZE_Veh_UAZ_Civil {
	displayName = "$STR_VEH_NAME_UAZ_CIVIL+";
	original = "DZE_Veh_UAZ_Civil";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_Civil_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_Civil_2: DZE_Veh_UAZ_Civil_1 {
	displayName = "$STR_VEH_NAME_UAZ_CIVIL++";
	armor = 75; // UAZ 40
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.3;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.3;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_UAZ_Civil_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_Civil_3: DZE_Veh_UAZ_Civil_2 {
	displayName = "$STR_VEH_NAME_UAZ_CIVIL+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_Civil_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_Civil_4: DZE_Veh_UAZ_Civil_3 {
	displayName = "$STR_VEH_NAME_UAZ_CIVIL++++";
	fuelCapacity = 210; // car 100
};

class DZE_Veh_UAZ_Rusty: UAZ_Unarmed_TK_CIV_EP1 {
	displayName = "$STR_VEH_NAME_UAZ_RUSTY";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uaz\uaz_main_wrecked_co.paa"};
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	supplyRadius = 1.3;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_Rusty_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_Rusty_1: DZE_Veh_UAZ_Rusty {
	displayName = "$STR_VEH_NAME_UAZ_RUSTY+";
	original = "DZE_Veh_UAZ_Rusty";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_Rusty_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_Rusty_2: DZE_Veh_UAZ_Rusty_1 {
	displayName = "$STR_VEH_NAME_UAZ_RUSTY++";
	armor = 75; // UAZ 40
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.3;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.3;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_UAZ_Rusty_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_Rusty_3: DZE_Veh_UAZ_Rusty_2 {
	displayName = "$STR_VEH_NAME_UAZ_RUSTY+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_Rusty_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_Rusty_4: DZE_Veh_UAZ_Rusty_3 {
	displayName = "$STR_VEH_NAME_UAZ_RUSTY++++";
	fuelCapacity = 210; // car 100
};

class DZE_Veh_UAZ_Winter: UAZ_Unarmed_TK_EP1 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uaz\uaz_winter.paa"};
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	supplyRadius = 1.3;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_Winter_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_Winter_1: DZE_Veh_UAZ_Winter {
	displayName = "$STR_VEH_NAME_UAZ_WINTER+";
	original = "DZE_Veh_UAZ_Winter";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_Winter_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_Winter_2: DZE_Veh_UAZ_Winter_1 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER++";
	armor = 75; // UAZ 40
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.3;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.3;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_UAZ_Winter_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_Winter_3: DZE_Veh_UAZ_Winter_2 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_Winter_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_Winter_4: DZE_Veh_UAZ_Winter_3 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER++++";
	fuelCapacity = 210; // car 100
};
