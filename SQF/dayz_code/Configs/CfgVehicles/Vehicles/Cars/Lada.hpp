class Lada1;
class DZE_Veh_Lada_White: Lada1 {
	displayname = "$STR_VEH_NAME_LADA_WHITE";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;
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
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Lada_White_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_White_1: DZE_Veh_Lada_White {
	displayname = "$STR_VEH_NAME_LADA_WHITE+";
	original = "DZE_Veh_Lada_White";
	maxSpeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Lada_White_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Lada_White_2: DZE_Veh_Lada_White_1 {
	displayname = "$STR_VEH_NAME_LADA_WHITE++";
	armor = 55; // car 20
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
		ItemLRK[] = {"DZE_Veh_Lada_White_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_White_3: DZE_Veh_Lada_White_2 {
	displayname = "$STR_VEH_NAME_LADA_WHITE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Lada_White_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Lada_White_4: DZE_Veh_Lada_White_3 {
	displayname = "$STR_VEH_NAME_LADA_WHITE";
	fuelCapacity = 150; // car 50
};

class Lada2;
class DZE_Veh_Lada_Red: Lada2 {
	displayname = "$STR_VEH_NAME_LADA_RED";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;
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
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Lada_Red_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_Red_1: DZE_Veh_Lada_Red {
	displayname = "$STR_VEH_NAME_LADA_RED+";
	original = "DZE_Veh_Lada_Red";
	maxSpeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Lada_Red_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Lada_Red_2: DZE_Veh_Lada_Red_1 {
	displayname = "$STR_VEH_NAME_LADA_RED++";
	armor = 55; // car 20
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
		ItemLRK[] = {"DZE_Veh_Lada_Red_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_Red_3: DZE_Veh_Lada_Red_2 {
	displayname = "$STR_VEH_NAME_LADA_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Lada_Red_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Lada_Red_4: DZE_Veh_Lada_Red_3 {
	displayname = "$STR_VEH_NAME_LADA_RED++++";
	fuelCapacity = 150; // car 50
};

class LadaLM;
class DZE_Veh_Lada_Police: LadaLM {
	displayname = "$STR_VEH_NAME_LADA_POLICE";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;
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
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Lada_Police_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_Police_1: DZE_Veh_Lada_Police {
	displayname = "$STR_VEH_NAME_LADA_POLICE+";
	original = "DZE_Veh_Lada_Police";
	maxSpeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Lada_Police_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Lada_Police_2: DZE_Veh_Lada_Police_1 {
	displayname = "$STR_VEH_NAME_LADA_POLICE++";
	armor = 55; // car 20
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
		ItemLRK[] = {"DZE_Veh_Lada_Police_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_Police_3: DZE_Veh_Lada_Police_2 {
	displayname = "$STR_VEH_NAME_LADA_POLICE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Lada_Police_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Lada_Police_4: DZE_Veh_Lada_Police_3 {
	displayname = "$STR_VEH_NAME_LADA_POLICE++++";
	fuelCapacity = 150; // car 50
};

class Lada1_TK_CIV_EP1;
class DZE_Veh_Lada_Green: Lada1_TK_CIV_EP1 {
	displayname = "$STR_VEH_NAME_LADA_GREEN";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;
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
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Lada_Green_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_Green_1: DZE_Veh_Lada_Green {
	displayname = "$STR_VEH_NAME_LADA_GREEN+";
	original = "DZE_Veh_Lada_Green";
	maxSpeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Lada_Green_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Lada_Green_2: DZE_Veh_Lada_Green_1 {
	displayname = "$STR_VEH_NAME_LADA_GREEN++";
	armor = 55; // car 20
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
		ItemLRK[] = {"DZE_Veh_Lada_Green_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_Green_3: DZE_Veh_Lada_Green_2 {
	displayname = "$STR_VEH_NAME_LADA_GREEN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Lada_Green_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Lada_Green_4: DZE_Veh_Lada_Green_3 {
	displayname = "$STR_VEH_NAME_LADA_GREEN++++";
	fuelCapacity = 150; // car 50
};

class Lada2_TK_CIV_EP1;
class DZE_Veh_Lada_Hippy: Lada2_TK_CIV_EP1 {
	displayname = "$STR_VEH_NAME_LADA_HIPPY";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;
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
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Lada_Hippy_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_Hippy_1: DZE_Veh_Lada_Hippy {
	displayname = "$STR_VEH_NAME_LADA_HIPPY+";
	original = "DZE_Veh_Lada_Hippy";
	maxSpeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Lada_Hippy_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Lada_Hippy_2: DZE_Veh_Lada_Hippy_1 {
	displayname = "$STR_VEH_NAME_LADA_HIPPY++";
	armor = 55; // car 20
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
		ItemLRK[] = {"DZE_Veh_Lada_Hippy_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_Hippy_3: DZE_Veh_Lada_Hippy_2 {
	displayname = "$STR_VEH_NAME_LADA_HIPPY+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Lada_Hippy_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Lada_Hippy_4: DZE_Veh_Lada_Hippy_3 {
	displayname = "$STR_VEH_NAME_LADA_HIPPY++++";
	fuelCapacity = 150; // car 50
};

class GLT_M300_LT;
class DZE_Veh_Lada_Yellow: GLT_M300_LT {
	displayname = "$STR_VEH_NAME_LADA_YELLOW";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 50;
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
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Lada_Yellow_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_Yellow_1: DZE_Veh_Lada_Yellow {
	displayname = "$STR_VEH_NAME_LADA_YELLOW+";
	original = "DZE_Veh_Lada_Yellow";
	maxSpeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Lada_Yellow_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Lada_Yellow_2: DZE_Veh_Lada_Yellow_1 {
	displayname = "$STR_VEH_NAME_LADA_YELLOW++";
	armor = 55; // car 20
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
		ItemLRK[] = {"DZE_Veh_Lada_Yellow_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Lada_Yellow_3: DZE_Veh_Lada_Yellow_2 {
	displayname = "$STR_VEH_NAME_LADA_YELLOW+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Lada_Yellow_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Lada_Yellow_4: DZE_Veh_Lada_Yellow_3 {
	displayname = "$STR_VEH_NAME_LADA_YELLOW++++";
	fuelCapacity = 150; // car 50
};
