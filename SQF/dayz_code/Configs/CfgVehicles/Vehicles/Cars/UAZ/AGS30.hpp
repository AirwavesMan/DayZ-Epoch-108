class UAZ_AGS30_RU;
class DZE_Veh_UAZ_AGS30_RU: UAZ_AGS30_RU {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RU";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 1.3;
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

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_AGS30_RU_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_RU_1: DZE_Veh_UAZ_AGS30_RU {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RU+";
	original = "DZE_Veh_UAZ_AGS30_RU";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_AGS30_RU_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_AGS30_RU_2: DZE_Veh_UAZ_AGS30_RU_1 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RU++";
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
		ItemLRK[] = {"DZE_Veh_UAZ_AGS30_RU_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_RU_3: DZE_Veh_UAZ_AGS30_RU_2 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RU+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_AGS30_RU_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_AGS30_RU_4: DZE_Veh_UAZ_AGS30_RU_3 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RU++++";
	fuelCapacity = 210; // car 100
};

class UAZ_AGS30_CDF;
class DZE_Veh_UAZ_AGS30_CDF: UAZ_AGS30_CDF {
	displayName = "$STR_VEH_NAME_UAZ_AGS_CDF";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 1.3;
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

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_AGS30_CDF_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_CDF_1: DZE_Veh_UAZ_AGS30_CDF {
	displayName = "$STR_VEH_NAME_UAZ_AGS_CDF+";
	original = "DZE_Veh_UAZ_AGS30_CDF";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_AGS30_CDF_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_AGS30_CDF_2: DZE_Veh_UAZ_AGS30_CDF_1 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_CDF++";
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
		ItemLRK[] = {"DZE_Veh_UAZ_AGS30_CDF_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_CDF_3: DZE_Veh_UAZ_AGS30_CDF_2 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_CDF+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_AGS30_CDF_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_AGS30_CDF_4: DZE_Veh_UAZ_AGS30_CDF_3 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_CDF++++";
	fuelCapacity = 210; // car 100
};

class UAZ_AGS30_INS;
class DZE_Veh_UAZ_AGS30_INS: UAZ_AGS30_INS {
	displayName = "$STR_VEH_NAME_UAZ_AGS_INS";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 1.3;
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

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_AGS30_INS_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_INS_1: DZE_Veh_UAZ_AGS30_INS {
	displayName = "$STR_VEH_NAME_UAZ_AGS_INS+";
	original = "DZE_Veh_UAZ_AGS30_INS";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_AGS30_INS_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_AGS30_INS_2: DZE_Veh_UAZ_AGS30_INS_1 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_INS++";
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
		ItemLRK[] = {"DZE_Veh_UAZ_AGS30_INS_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_INS_3: DZE_Veh_UAZ_AGS30_INS_2 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_INS+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_AGS30_INS_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_AGS30_INS_4: DZE_Veh_UAZ_AGS30_INS_3 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_INS++++";
	fuelCapacity = 210; // car 100
};

class UAZ_AGS30_TK_EP1;
class DZE_Veh_UAZ_AGS30_TK: UAZ_AGS30_TK_EP1 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_TK";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 1.3;
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

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_AGS30_TK_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_TK_1: DZE_Veh_UAZ_AGS30_TK {
	displayName = "$STR_VEH_NAME_UAZ_AGS_TK+";
	original = "DZE_Veh_UAZ_AGS30_TK";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_AGS30_TK_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_AGS30_TK_2: DZE_Veh_UAZ_AGS30_TK_1 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_TK++";
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
		ItemLRK[] = {"DZE_Veh_UAZ_AGS30_TK_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_TK_3: DZE_Veh_UAZ_AGS30_TK_2 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_TK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_AGS30_TK_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_AGS30_TK_4: DZE_Veh_UAZ_AGS30_TK_3 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_TK++++";
	fuelCapacity = 210; // car 100
};

class DZE_Veh_UAZ_AGS30_Rusty: UAZ_AGS30_RU {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RUST";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uaz\uaz_main_wrecked_co.paa","\ca\wheeled\data\uaz_mount_002_co.paa"};
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 1.3;
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

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_AGS30_Rusty_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_Rusty_1: DZE_Veh_UAZ_AGS30_Rusty {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RUST+";
	original = "DZE_Veh_UAZ_AGS30_Rusty";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_AGS30_Rusty_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_AGS30_Rusty_2: DZE_Veh_UAZ_AGS30_Rusty_1 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RUST++";
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
		ItemLRK[] = {"DZE_Veh_UAZ_AGS30_Rusty_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_Rusty_3: DZE_Veh_UAZ_AGS30_Rusty_2 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RUST+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_AGS30_Rusty_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_AGS30_Rusty_4: DZE_Veh_UAZ_AGS30_Rusty_3 {
	displayName = "$STR_VEH_NAME_UAZ_AGS_RUST++++";
	fuelCapacity = 210; // car 100
};

class DZE_Veh_UAZ_AGS30_Winter: UAZ_AGS30_RU {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_AGS";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uaz\uaz_winter.paa","\ca\wheeled\data\uaz_mount_002_co.paa"};
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	supplyRadius = 1.3;
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

	class Upgrades {
		ItemORP[] = {"DZE_Veh_UAZ_AGS30_Winter_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_Winter_1: DZE_Veh_UAZ_AGS30_Winter {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_AGS+";
	original = "DZE_Veh_UAZ_AGS30_Winter";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_AGS30_Winter_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_AGS30_Winter_2: DZE_Veh_UAZ_AGS30_Winter_1 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_AGS++";
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
		ItemLRK[] = {"DZE_Veh_UAZ_AGS30_Winter_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_AGS30_Winter_3: DZE_Veh_UAZ_AGS30_Winter_2 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_AGS+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_AGS30_Winter_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_AGS30_Winter_4: DZE_Veh_UAZ_AGS30_Winter_3 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_AGS++++";
	fuelCapacity = 210; // car 100
};
