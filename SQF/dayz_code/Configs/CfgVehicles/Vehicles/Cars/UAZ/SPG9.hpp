class UAZ_SPG9_INS;
class DZE_Veh_UAZ_SPG9_INS: UAZ_SPG9_INS {
	displayName = "$STR_VEH_NAME_UAZ_SPG_INS";
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
		ItemORP[] = {"DZE_Veh_UAZ_SPG9_INS_1",{"DZE_Tool_Toolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_SPG9_INS_1: DZE_Veh_UAZ_SPG9_INS {
	displayName = "$STR_VEH_NAME_UAZ_SPG_INS+";
	original = "DZE_Veh_UAZ_SPG9_INS";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_SPG9_INS_2",{"DZE_Tool_Toolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_SPG9_INS_2: DZE_Veh_UAZ_SPG9_INS_1 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_INS++";
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
		ItemLRK[] = {"DZE_Veh_UAZ_SPG9_INS_3",{"DZE_Tool_Toolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_SPG9_INS_3: DZE_Veh_UAZ_SPG9_INS_2 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_INS+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_SPG9_INS_4",{"DZE_Tool_Toolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_SPG9_INS_4: DZE_Veh_UAZ_SPG9_INS_3 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_INS++++";
	fuelCapacity = 210; // car 100
};

class DZE_Veh_UAZ_SPG9_CDF: UAZ_SPG9_INS {
	displayName = "$STR_VEH_NAME_UAZ_SPG_CDF";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\ca\wheeled\data\Uaz_main_002_CO.paa","\ca\wheeled\data\uaz_mount_002_co.paa"};

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
		ItemORP[] = {"DZE_Veh_UAZ_SPG9_CDF_1",{"DZE_Tool_Toolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_SPG9_CDF_1: DZE_Veh_UAZ_SPG9_CDF {
	displayName = "$STR_VEH_NAME_UAZ_SPG_CDF+";
	original = "DZE_Veh_UAZ_SPG9_CDF";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_SPG9_CDF_2",{"DZE_Tool_Toolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_SPG9_CDF_2: DZE_Veh_UAZ_SPG9_CDF_1 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_CDF++";
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
		ItemLRK[] = {"DZE_Veh_UAZ_SPG9_CDF_3",{"DZE_Tool_Toolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_SPG9_CDF_3: DZE_Veh_UAZ_SPG9_CDF_2 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_CDF+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_SPG9_CDF_4",{"DZE_Tool_Toolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_SPG9_CDF_4: DZE_Veh_UAZ_SPG9_CDF_3 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_CDF++++";
	fuelCapacity = 210; // car 100
};

class DZE_Veh_UAZ_SPG9_TK: UAZ_SPG9_INS {
	displayName = "$STR_VEH_NAME_UAZ_SPG_TK";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_IND_CO.paa","\ca\wheeled\data\uaz_mount_001_co.paa"};

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
		ItemORP[] = {"DZE_Veh_UAZ_SPG9_TK_1",{"DZE_Tool_Toolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_SPG9_TK_1: DZE_Veh_UAZ_SPG9_TK {
	displayName = "$STR_VEH_NAME_UAZ_SPG_TK+";
	original = "DZE_Veh_UAZ_SPG9_TK";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_SPG9_TK_2",{"DZE_Tool_Toolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_SPG9_TK_2: DZE_Veh_UAZ_SPG9_TK_1 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_TK++";
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
		ItemLRK[] = {"DZE_Veh_UAZ_SPG9_TK_3",{"DZE_Tool_Toolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_SPG9_TK_3: DZE_Veh_UAZ_SPG9_TK_2 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_TK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_SPG9_TK_4",{"DZE_Tool_Toolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_SPG9_TK_4: DZE_Veh_UAZ_SPG9_TK_3 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_TK++++";
	fuelCapacity = 210; // car 100
};

class DZE_Veh_UAZ_SPG9_Rusty: UAZ_SPG9_INS {
	displayName = "$STR_VEH_NAME_UAZ_SPG_RUST";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uaz\uaz_main_wrecked_co.paa","\ca\wheeled\data\uaz_mount_002_co.paa"};

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
		ItemORP[] = {"DZE_Veh_UAZ_SPG9_Rusty_1",{"DZE_Tool_Toolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_SPG9_Rusty_1: DZE_Veh_UAZ_SPG9_Rusty {
	displayName = "$STR_VEH_NAME_UAZ_SPG_RUST+";
	original = "DZE_Veh_UAZ_SPG9_Rusty";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_SPG9_Rusty_2",{"DZE_Tool_Toolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_SPG9_Rusty_2: DZE_Veh_UAZ_SPG9_Rusty_1 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_RUST++";
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
		ItemLRK[] = {"DZE_Veh_UAZ_SPG9_Rusty_3",{"DZE_Tool_Toolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_SPG9_Rusty_3: DZE_Veh_UAZ_SPG9_Rusty_2 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_RUST+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_SPG9_Rusty_4",{"DZE_Tool_Toolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_SPG9_Rusty_4: DZE_Veh_UAZ_SPG9_Rusty_3 {
	displayName = "$STR_VEH_NAME_UAZ_SPG_RUST++++";
	fuelCapacity = 210; // car 100
};

class DZE_Veh_UAZ_SPG9_Winter: UAZ_SPG9_INS {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_SPG";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\uaz\uaz_winter.paa","\ca\wheeled\data\uaz_mount_002_co.paa"};

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
		ItemORP[] = {"DZE_Veh_UAZ_SPG9_Winter_1",{"DZE_Tool_Toolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_SPG9_Winter_1: DZE_Veh_UAZ_SPG9_Winter {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_SPG+";
	original = "DZE_Veh_UAZ_SPG9_Winter";
	maxSpeed = 190;
	terrainCoef = 1;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_UAZ_SPG9_Winter_2",{"DZE_Tool_Toolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_UAZ_SPG9_Winter_2: DZE_Veh_UAZ_SPG9_Winter_1 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_SPG++";
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
		ItemLRK[] = {"DZE_Veh_UAZ_SPG9_Winter_3",{"DZE_Tool_Toolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_UAZ_SPG9_Winter_3: DZE_Veh_UAZ_SPG9_Winter_2 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_SPG+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 9; // car 2, UAZ 7

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_UAZ_SPG9_Winter_4",{"DZE_Tool_Toolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_UAZ_SPG9_Winter_4: DZE_Veh_UAZ_SPG9_Winter_3 {
	displayName = "$STR_VEH_NAME_UAZ_WINTER_SPG++++";
	fuelCapacity = 210; // car 100
};
