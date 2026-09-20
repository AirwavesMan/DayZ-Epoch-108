class car_hatchback;
class DZE_Veh_Hatchback_Yellow: car_hatchback {
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	DZE_MACRO_VEHICLE_SIDE
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW";
	vehicleClass = "DZE Vehicles Cars";
	maxSpeed = 125;
	armor = 20;
	damageResistance = 0.01821;
	fuelCapacity = 100;
	crew = "";
	typicalCargo[] = {};
	class HitPoints;
	supplyRadius = 1.2;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Hatchback_Yellow_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Hatchback_Yellow_1: DZE_Veh_Hatchback_Yellow {
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW+";
	original = "DZE_Veh_Hatchback_Yellow";
	maxSpeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

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
		ItemAVE[] = {"DZE_Veh_Hatchback_Yellow_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Hatchback_Yellow_2: DZE_Veh_Hatchback_Yellow_1 {
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW++";
	armor = 50; // car 20
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
		ItemLRK[] = {"DZE_Veh_Hatchback_Yellow_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Hatchback_Yellow_3: DZE_Veh_Hatchback_Yellow_2 {
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Hatchback_Yellow_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Hatchback_Yellow_4: DZE_Veh_Hatchback_Yellow_3 {
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW++++";
	fuelCapacity = 210; // car 100
};

class DZE_Veh_Hatchback_Red: DZE_Veh_Hatchback_Yellow {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\sra_civilian\wheeled\data\hatchback_co.paa"};
	class HitPoints;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Hatchback_Red_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Hatchback_Red_1: DZE_Veh_Hatchback_Red {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED+";
	original = "DZE_Veh_Hatchback_Red";
	maxSpeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

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
		ItemAVE[] = {"DZE_Veh_Hatchback_Red_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Hatchback_Red_2: DZE_Veh_Hatchback_Red_1 {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED++";
	armor = 50; // car 20
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
		ItemLRK[] = {"DZE_Veh_Hatchback_Red_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Hatchback_Red_3: DZE_Veh_Hatchback_Red_2 {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Hatchback_Red_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Hatchback_Red_4: DZE_Veh_Hatchback_Red_3 {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED++++";
	fuelCapacity = 210; // car 100
};
