class hilux1_civil_1_open;
class DZE_Veh_Hilux_Tan: hilux1_civil_1_open {
	displayName = "$STR_VEH_NAME_PICKUP_TAN";
	vehicleClass = "DZE Vehicles Cars";
	terrainCoef = 2.5;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Hilux_Tan_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_Tan_1: DZE_Veh_Hilux_Tan {
	displayName = "$STR_VEH_NAME_PICKUP_TAN+";
	original = "DZE_Veh_Hilux_Tan";
	maxSpeed = 150; // max engine limit 125-130
	terrainCoef = 1.8;
	class HitPoints: HitPoints {
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
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Hilux_Tan_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_Tan_2: DZE_Veh_Hilux_Tan_1 {
	displayName = "$STR_VEH_NAME_PICKUP_TAN++";
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
		ItemLRK[] = {"DZE_Veh_Hilux_Tan_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_Tan_3: DZE_Veh_Hilux_Tan_2 {
	displayName = "$STR_VEH_NAME_PICKUP_TAN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Hilux_Tan_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_Tan_4: DZE_Veh_Hilux_Tan_3 {
	displayName = "$STR_VEH_NAME_PICKUP_TAN++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_2_covered;
class DZE_Veh_Hilux_Covered_Red: hilux1_civil_2_covered {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED";
	vehicleClass = "DZE Vehicles Cars";
	terrainCoef = 2.5;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Hilux_Covered_Red_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_TK",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_Covered_Red_1: DZE_Veh_Hilux_Covered_Red {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED+";
	original = "DZE_Veh_Hilux_Covered_Red";
	maxSpeed = 150; // car 100
	terrainCoef = 1.8;
	class HitPoints: HitPoints {
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
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Hilux_Covered_Red_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_TK_1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_Covered_Red_2: DZE_Veh_Hilux_Covered_Red_1 {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED++";
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
		ItemLRK[] = {"DZE_Veh_Hilux_Covered_Red_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_TK_2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_Covered_Red_3: DZE_Veh_Hilux_Covered_Red_2 {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Hilux_Covered_Red_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_TK_3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_Covered_Red_4: DZE_Veh_Hilux_Covered_Red_3 {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"DZE_Veh_Pickup_PKT_TK_4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class hilux1_civil_3_open;
class DZE_Veh_Hilux_White: hilux1_civil_3_open {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE";
	vehicleClass = "DZE Vehicles Cars";
	terrainCoef = 2.5;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Hilux_White_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_INS",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_White_1: DZE_Veh_Hilux_White {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE+";
	original = "DZE_Veh_Hilux_White";
	maxSpeed = 150; // car 100
	terrainCoef = 1.8;
	class HitPoints: HitPoints {
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
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Hilux_White_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_INS_1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_White_2: DZE_Veh_Hilux_White_1 {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE++";
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
		ItemLRK[] = {"DZE_Veh_Hilux_White_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_INS_2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_White_3: DZE_Veh_Hilux_White_2 {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Hilux_White_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_INS_3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Hilux_White_4: DZE_Veh_Hilux_White_3 {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"DZE_Veh_Pickup_PKT_INS_4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};
