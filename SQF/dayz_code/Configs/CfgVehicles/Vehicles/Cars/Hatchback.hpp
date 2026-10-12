class car_hatchback;
class DZE_Veh_Hatchback_Yellow: car_hatchback {
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW";
	vehicleClass = "DZE Vehicles Cars";
	crew = "";
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	DZE_MACRO_VEHICLE_SIDE
	maxSpeed = 125;
	armor = 20;
	damageResistance = 0.01821;
	fuelCapacity = 100;
	typicalCargo[] = {};
	class HitPoints;
	supplyRadius = 1.2;

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Hatchback_Yellow_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
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
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Hatchback_Yellow_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Hatchback_Yellow_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

// Cargo 3
class DZE_Veh_Hatchback_Yellow_3: DZE_Veh_Hatchback_Yellow_2 {
	displayname = "$STR_VEH_NAME_HATCHBACK_YELLOW+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Hatchback_Yellow_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Hatchback_Red_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
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
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Hatchback_Red_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Hatchback_Red_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

// Cargo 3
class DZE_Veh_Hatchback_Red_3: DZE_Veh_Hatchback_Red_2 {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Hatchback_Red_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

// Fuel 4
class DZE_Veh_Hatchback_Red_4: DZE_Veh_Hatchback_Red_3 {
	displayname = "$STR_VEH_NAME_HATCHBACK_RED++++";
	fuelCapacity = 210; // car 100
};
