class datsun1_civil_1_open;
class DZE_Veh_Datsun_Blue: datsun1_civil_1_open {
	displayname = "$STR_VEH_NAME_PICKUP_BLUE";
	vehicleClass = "DZE Vehicles Cars";
	terrainCoef = 2.5;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	fuelCapacity = 100;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Datsun_Blue_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Blue_1: DZE_Veh_Datsun_Blue {
	displayname = "$STR_VEH_NAME_PICKUP_BLUE+";
	original = "DZE_Veh_Datsun_Blue";
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
		ItemAVE[] = {"DZE_Veh_Datsun_Blue_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Blue_2: DZE_Veh_Datsun_Blue_1 {
	displayname = "$STR_VEH_NAME_PICKUP_BLUE++";
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
		ItemLRK[] = {"DZE_Veh_Datsun_Blue_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Blue_3: DZE_Veh_Datsun_Blue_2 {
	displayname = "$STR_VEH_NAME_PICKUP_BLUE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Datsun_Blue_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Blue_4: DZE_Veh_Datsun_Blue_3 {
	displayname = "$STR_VEH_NAME_PICKUP_BLUE++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Green: DZE_Veh_Datsun_Blue {
	displayname = "$STR_VEH_NAME_PICKUP_GREEN";
	model = "\sra_civilian\wheeled\datsun\datsun1_civil_3_open";
	class Damage {
		tex[] = {};
		mat[] = {"sra_civilian\wheeled\datsun\datsun_trup3.rvmat","sra_civilian\wheeled\datsun\datsun_trup3.rvmat","sra_civilian\wheeled\datsun\datsun_trup_destruct.rvmat","sra_civilian\wheeled\datsun\datsun_interier.rvmat","sra_civilian\wheeled\datsun\datsun_interier.rvmat","sra_civilian\wheeled\datsun\datsun_interier_destruct.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje_destruct.rvmat","sra_civilian\wheeled\data\auta_skla.rvmat","sra_civilian\wheeled\data\auta_skla_damage.rvmat","sra_civilian\wheeled\data\auta_skla_damage.rvmat","sra_civilian\wheeled\data\auta_skla_in.rvmat","sra_civilian\wheeled\data\auta_skla_in_damage.rvmat","sra_civilian\wheeled\data\auta_skla_in_damage.rvmat"};
	};

	class HitPoints;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Datsun_Green_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Green_1: DZE_Veh_Datsun_Green {
	displayname = "$STR_VEH_NAME_PICKUP_GREEN+";
	original = "DZE_Veh_Datsun_Green";
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
		ItemAVE[] = {"DZE_Veh_Datsun_Green_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Green_2: DZE_Veh_Datsun_Green_1 {
	displayname = "$STR_VEH_NAME_PICKUP_GREEN++";
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
		ItemLRK[] = {"DZE_Veh_Datsun_Green_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Green_3: DZE_Veh_Datsun_Green_2 {
	displayname = "$STR_VEH_NAME_PICKUP_GREEN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Datsun_Green_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Green_4: DZE_Veh_Datsun_Green_3 {
	displayname = "$STR_VEH_NAME_PICKUP_GREEN++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"DZE_Veh_Pickup_PKT_GUE_4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class datsun1_civil_2_covered;
class DZE_Veh_Datsun_Covered_Tan: datsun1_civil_2_covered {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_TAN";
	vehicleClass = "DZE Vehicles Cars";
	terrainCoef = 2.5;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	fuelCapacity = 100;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Datsun_Covered_Tan_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_TK",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Covered_Tan_1: DZE_Veh_Datsun_Covered_Tan {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_TAN+";
	original = "DZE_Veh_Datsun_Covered_Tan";
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
		ItemAVE[] = {"DZE_Veh_Datsun_Covered_Tan_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_TK_1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Covered_Tan_2: DZE_Veh_Datsun_Covered_Tan_1 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_TAN++";
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
		ItemLRK[] = {"DZE_Veh_Datsun_Covered_Tan_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_TK_2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Covered_Tan_3: DZE_Veh_Datsun_Covered_Tan_2 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_TAN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Datsun_Covered_Tan_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_TK_3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Covered_Tan_4: DZE_Veh_Datsun_Covered_Tan_3 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_TAN++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"DZE_Veh_Pickup_PKT_TK_4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Covered_Red: DZE_Veh_Datsun_Covered_Tan {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_RED";
	model = "\sra_civilian\wheeled\datsun\datsun1_civil_2_covered";
	class HitPoints;

	class Damage {
		tex[] = {};
		mat[] = {"sra_civilian\wheeled\datsun\datsun_addons.rvmat","sra_civilian\wheeled\datsun\datsun_addons.rvmat","sra_civilian\wheeled\datsun\datsun_addons_destruct.rvmat","sra_civilian\wheeled\datsun\datsun_trup2.rvmat","sra_civilian\wheeled\datsun\datsun_trup2.rvmat","sra_civilian\wheeled\datsun\datsun_trup_destruct.rvmat","sra_civilian\wheeled\datsun\datsun_interier.rvmat","sra_civilian\wheeled\datsun\datsun_interier.rvmat","sra_civilian\wheeled\datsun\datsun_interier_destruct.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje.rvmat","sra_civilian\wheeled\datsun\datsun_pristroje_destruct.rvmat","sra_civilian\wheeled\data\auta_skla.rvmat","sra_civilian\wheeled\data\auta_skla_damage.rvmat","sra_civilian\wheeled\data\auta_skla_damage.rvmat","sra_civilian\wheeled\data\auta_skla_in.rvmat","sra_civilian\wheeled\data\auta_skla_in_damage.rvmat","sra_civilian\wheeled\data\auta_skla_in_damage.rvmat"};
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Datsun_Covered_Red_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Covered_Red_1: DZE_Veh_Datsun_Covered_Red {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_RED+";
	original = "DZE_Veh_Datsun_Covered_Red";
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
		ItemAVE[] = {"DZE_Veh_Datsun_Covered_Red_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Datsun_Covered_Red_2: DZE_Veh_Datsun_Covered_Red_1 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_RED++";
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
		ItemLRK[] = {"DZE_Veh_Datsun_Covered_Red_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Covered_Red_3: DZE_Veh_Datsun_Covered_Red_2 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Datsun_Covered_Red_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Datsun_Covered_Red_4: DZE_Veh_Datsun_Covered_Red_3 {
	displayname = "$STR_VEH_NAME_PICKUP_COVERED_RED++++";
	fuelCapacity = 210; // car 100

	class Upgrades {};
};

class datsun1_civil_3_open;
class DZE_Veh_Datsun_Grey: datsun1_civil_3_open {
	displayname = "$STR_VEH_NAME_PICKUP_GREY";
	vehicleClass = "DZE Vehicles Cars";
	terrainCoef = 2.5;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	fuelCapacity = 100;
	supplyRadius = 1.5;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Datsun_Grey_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_INS",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Grey_1: DZE_Veh_Datsun_Grey {
	displayname = "$STR_VEH_NAME_PICKUP_GREY+";
	original = "DZE_Veh_Datsun_Grey";
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
		ItemAVE[] = {"DZE_Veh_Datsun_Grey_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_INS_1",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Grey_2: DZE_Veh_Datsun_Grey_1 {
	displayname = "$STR_VEH_NAME_PICKUP_GREY++";
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
		ItemLRK[] = {"DZE_Veh_Datsun_Grey_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_INS_2",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Grey_3: DZE_Veh_Datsun_Grey_2 {
	displayname = "$STR_VEH_NAME_PICKUP_GREY+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Datsun_Grey_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
		ItemARM[] = {"DZE_Veh_Pickup_PKT_INS_3",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Datsun_Grey_4: DZE_Veh_Datsun_Grey_3 {
	displayname = "$STR_VEH_NAME_PICKUP_GREY++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		ItemARM[] = {"DZE_Veh_Pickup_PKT_INS_4",{"ItemToolbox"},{"PKM_DZ"},{{"ItemARM",1},{"PartGeneric",2},{"ItemPole",1},{"ItemScrews",2}}};
	};
};

class Pickup_PK_GUE;
class DZE_Veh_Pickup_PKT_GUE: Pickup_PK_GUE {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_PKT";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	terrainCoef = 2.5;

	class Turrets; // External class reference
	class MainTurret; // External class reference
	supplyRadius = 1.3;

	class HitPoints; // External class reference
	class HitLFWheel; // External class reference
	class HitLBWheel; // External class reference
	class HitRFWheel; // External class reference
	class HitRBWheel; // External class reference
	class HitFuel; // External class reference
	class HitEngine; // External class reference
	class HitGlass1; // External class reference
	class HitGlass2; // External class reference
	class HitGlass3; // External class reference
	class HitGlass4; // External class reference

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Pickup_PKT_GUE_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Pickup_PKT_GUE_1: DZE_Veh_Pickup_PKT_GUE {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_PKT+";
	original = "DZE_Veh_Pickup_PKT_GUE";
	maxSpeed = 150; // max engine limit 125-130
	terrainCoef = 1.8;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Pickup_PKT_GUE_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Pickup_PKT_GUE_2: DZE_Veh_Pickup_PKT_GUE_1 {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_PKT++";
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
		ItemLRK[] = {"DZE_Veh_Pickup_PKT_GUE_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Pickup_PKT_GUE_3: DZE_Veh_Pickup_PKT_GUE_2 {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_PKT+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Pickup_PKT_GUE_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Pickup_PKT_GUE_4: DZE_Veh_Pickup_PKT_GUE_3 {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_PKT++++";
	fuelCapacity = 210; // car 100
};

class Pickup_PK_TK_GUE_EP1;
class DZE_Veh_Pickup_PKT_TK: Pickup_PK_TK_GUE_EP1 {
	displayName = "$STR_VEH_NAME_PICKUP_TK_PKT";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	terrainCoef = 2.5;

	class Turrets; // External class reference
	class MainTurret; // External class reference
	supplyRadius = 1.3;

	class HitPoints; // External class reference
	class HitLFWheel; // External class reference
	class HitLBWheel; // External class reference
	class HitRFWheel; // External class reference
	class HitRBWheel; // External class reference
	class HitFuel; // External class reference
	class HitEngine; // External class reference
	class HitGlass1; // External class reference
	class HitGlass2; // External class reference
	class HitGlass3; // External class reference
	class HitGlass4; // External class reference

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Pickup_PKT_TK_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Pickup_PKT_TK_1: DZE_Veh_Pickup_PKT_TK {
	displayName = "$STR_VEH_NAME_PICKUP_TK_PKT+";
	original = "DZE_Veh_Pickup_PKT_TK";
	maxSpeed = 150; // max engine limit 125-130
	terrainCoef = 1.8;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Pickup_PKT_TK_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Pickup_PKT_TK_2: DZE_Veh_Pickup_PKT_TK_1 {
	displayName = "$STR_VEH_NAME_PICKUP_TK_PKT++";
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
		ItemLRK[] = {"DZE_Veh_Pickup_PKT_TK_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Pickup_PKT_TK_3: DZE_Veh_Pickup_PKT_TK_2 {
	displayName = "$STR_VEH_NAME_PICKUP_TK_PKT+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Pickup_PKT_TK_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Pickup_PKT_TK_4: DZE_Veh_Pickup_PKT_TK_3 {
	displayName = "$STR_VEH_NAME_PICKUP_TK_PKT++++";
	fuelCapacity = 210; // car 100
};

class Pickup_PK_INS;
class DZE_Veh_Pickup_PKT_INS: Pickup_PK_INS {
	displayName = "$STR_VEH_NAME_PICKUP_INS_PKT";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	terrainCoef = 2.5;

	class Turrets; // External class reference
	class MainTurret; // External class reference
	supplyRadius = 1.3;

	class HitPoints; // External class reference
	class HitLFWheel; // External class reference
	class HitLBWheel; // External class reference
	class HitRFWheel; // External class reference
	class HitRBWheel; // External class reference
	class HitFuel; // External class reference
	class HitEngine; // External class reference
	class HitGlass1; // External class reference
	class HitGlass2; // External class reference
	class HitGlass3; // External class reference
	class HitGlass4; // External class reference

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Pickup_PKT_INS_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Pickup_PKT_INS_1: DZE_Veh_Pickup_PKT_INS {
	displayName = "$STR_VEH_NAME_PICKUP_INS_PKT+";
	original = "DZE_Veh_Pickup_PKT_INS";
	maxSpeed = 150; // max engine limit 125-130
	terrainCoef = 1.8;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Pickup_PKT_INS_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Pickup_PKT_INS_2: DZE_Veh_Pickup_PKT_INS_1 {
	displayName = "$STR_VEH_NAME_PICKUP_INS_PKT++";
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
		ItemLRK[] = {"DZE_Veh_Pickup_PKT_INS_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Pickup_PKT_INS_3: DZE_Veh_Pickup_PKT_INS_2 {
	displayName = "$STR_VEH_NAME_PICKUP_INS_PKT+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Pickup_PKT_INS_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Pickup_PKT_INS_4: DZE_Veh_Pickup_PKT_INS_3 {
	displayName = "$STR_VEH_NAME_PICKUP_INS_PKT++++";
	fuelCapacity = 210; // car 100
};
