class Skoda;
class DZE_Veh_Skoda_White: Skoda {
	displayName = "$STR_VEH_NAME_SKODA_WHITE";
	displayNameShort = "$STR_VEH_NAME_SKODA_WHITE";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	maxSpeed = 110;
	armor = 20;
	damageResistance = 0.01821;
	fuelCapacity = 100;
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
		ItemORP[] = {"DZE_Veh_Skoda_White_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Skoda_White_1: DZE_Veh_Skoda_White {
	displayName = "$STR_VEH_NAME_SKODA_WHITE+";
	displayNameShort = "$STR_VEH_NAME_SKODA_WHITE+";
	original = "DZE_Veh_Skoda_White";
	maxSpeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Skoda_White_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Skoda_White_2: DZE_Veh_Skoda_White_1 {
	displayName = "$STR_VEH_NAME_SKODA_WHITE++";
	displayNameShort = "$STR_VEH_NAME_SKODA_WHITE++";
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
		ItemLRK[] = {"DZE_Veh_Skoda_White_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Skoda_White_3: DZE_Veh_Skoda_White_2 {
	displayName = "$STR_VEH_NAME_SKODA_WHITE+++";
	displayNameShort = "$STR_VEH_NAME_SKODA_WHITE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Skoda_White_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Skoda_White_4: DZE_Veh_Skoda_White_3 {
	displayName = "$STR_VEH_NAME_SKODA_WHITE++++";
	displayNameShort = "$STR_VEH_NAME_SKODA_WHITE++++";
	fuelCapacity = 210; // car 100
};

class SkodaBlue;
class DZE_Veh_Skoda_Blue: SkodaBlue {
	displayName = "$STR_VEH_NAME_SKODA_BLUE";
	displayNameShort = "$STR_VEH_NAME_SKODA_BLUE";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	maxSpeed = 110;
	armor = 20;
	damageResistance = 0.01821;
	fuelCapacity = 100;
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
		ItemORP[] = {"DZE_Veh_Skoda_Blue_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Skoda_Blue_1: DZE_Veh_Skoda_Blue {
	displayName = "$STR_VEH_NAME_SKODA_BLUE+";
	displayNameShort = "$STR_VEH_NAME_SKODA_BLUE+";
	original = "DZE_Veh_Skoda_Blue";
	maxSpeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Skoda_Blue_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Skoda_Blue_2: DZE_Veh_Skoda_Blue_1 {
	displayName = "$STR_VEH_NAME_SKODA_BLUE++";
	displayNameShort = "$STR_VEH_NAME_SKODA_BLUE++";
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
		ItemLRK[] = {"DZE_Veh_Skoda_Blue_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Skoda_Blue_3: DZE_Veh_Skoda_Blue_2 {
	displayName = "$STR_VEH_NAME_SKODA_BLUE+++";
	displayNameShort = "$STR_VEH_NAME_SKODA_BLUE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Skoda_Blue_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Skoda_Blue_4: DZE_Veh_Skoda_Blue_3 {
	displayName = "$STR_VEH_NAME_SKODA_BLUE++++";
	displayNameShort = "$STR_VEH_NAME_SKODA_BLUE++++";
	fuelCapacity = 210; // car 100
};

class SkodaRed;
class DZE_Veh_Skoda_Red: SkodaRed {
	displayName = "$STR_VEH_NAME_SKODA_RED";
	displayNameShort = "$STR_VEH_NAME_SKODA_RED";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	maxSpeed = 110;
	armor = 20;
	damageResistance = 0.01821;
	fuelCapacity = 100;
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
		ItemORP[] = {"DZE_Veh_Skoda_Red_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Skoda_Red_1: DZE_Veh_Skoda_Red {
	displayName = "$STR_VEH_NAME_SKODA_RED+";
	displayNameShort = "$STR_VEH_NAME_SKODA_RED+";
	original = "DZE_Veh_Skoda_Red";
	maxSpeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Skoda_Red_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Skoda_Red_2: DZE_Veh_Skoda_Red_1 {
	displayName = "$STR_VEH_NAME_SKODA_RED++";
	displayNameShort = "$STR_VEH_NAME_SKODA_RED++";
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
		ItemLRK[] = {"DZE_Veh_Skoda_Red_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Skoda_Red_3: DZE_Veh_Skoda_Red_2 {
	displayName = "$STR_VEH_NAME_SKODA_RED+++";
	displayNameShort = "$STR_VEH_NAME_SKODA_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Skoda_Red_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Skoda_Red_4: DZE_Veh_Skoda_Red_3 {
	displayName = "$STR_VEH_NAME_SKODA_RED++++";
	displayNameShort = "$STR_VEH_NAME_SKODA_RED++++";
	fuelCapacity = 210; // car 100
};

class SkodaGreen;
class DZE_Veh_Skoda_Green: SkodaGreen {
	displayName = "$STR_VEH_NAME_SKODA_GREEN";
	displayNameShort = "$STR_VEH_NAME_SKODA_GREEN";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	maxSpeed = 110;
	armor = 20;
	damageResistance = 0.01821;
	fuelCapacity = 100;
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
		ItemORP[] = {"DZE_Veh_Skoda_Green_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Skoda_Green_1: DZE_Veh_Skoda_Green {
	displayName = "$STR_VEH_NAME_SKODA_GREEN+";
	displayNameShort = "$STR_VEH_NAME_SKODA_GREEN+";
	original = "DZE_Veh_Skoda_Green";
	maxSpeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Skoda_Green_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Skoda_Green_2: DZE_Veh_Skoda_Green_1 {
	displayName = "$STR_VEH_NAME_SKODA_GREEN++";
	displayNameShort = "$STR_VEH_NAME_SKODA_GREEN++";
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
		ItemLRK[] = {"DZE_Veh_Skoda_Green_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Skoda_Green_3: DZE_Veh_Skoda_Green_2 {
	displayName = "$STR_VEH_NAME_SKODA_GREEN+++";
	displayNameShort = "$STR_VEH_NAME_SKODA_GREEN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Skoda_Green_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Skoda_Green_4: DZE_Veh_Skoda_Green_3 {
	displayName = "$STR_VEH_NAME_SKODA_GREEN++++";
	displayNameShort = "$STR_VEH_NAME_SKODA_GREEN++++";
	fuelCapacity = 210; // car 100
};
