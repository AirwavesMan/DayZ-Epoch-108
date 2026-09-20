class SUV_Base_EP1: Car {
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
};

class DZE_Veh_SUV_Black: SUV_Base_EP1 {
	displayName = "$STR_VEH_NAME_SUV_BLACK";
	vehicleClass = "DZE Vehicles Cars";
	scope = 2;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_1_1_steering";
			passThrough = 0.3;
			visual = "";
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_1_2_steering";
			passThrough = 0.3;
			visual = "";
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_2_1_steering";
			passThrough = 0.3;
			visual = "";
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.15;
			material = -1;
			name = "wheel_2_2_steering";
			passThrough = 0.3;
			visual = "";
		};
		class HitFuel: HitFuel {
			armor = 0.14;
			material = -1;
			name = "palivo";
			passThrough = 1;
			visual = "";
		};
		class HitEngine: HitEngine {
			armor = 0.5;
			material = -1;
			name = "motor";
			passThrough = 1;
			visual = "";
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
			material = -1;
			name = "glass1";
			passThrough = 0;
			visual = "glass1";
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
			material = -1;
			name = "glass2";
			passThrough = 0;
			visual = "glass2";
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
			material = -1;
			name = "glass3";
			passThrough = 0;
			visual = "glass3";
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
			material = -1;
			name = "glass4";
			passThrough = 0;
			visual = "glass4";
		};
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_Black_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Black_1: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_BLACK+";
	original = "DZE_Veh_SUV_Black";
	maxSpeed = 250; // max engine limit 125-130
	brakeDistance = 14; // 19
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_Black_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_Black_2: DZE_Veh_SUV_Black_1 {
	displayName = "$STR_VEH_NAME_SUV_BLACK++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_Black_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Black_3: DZE_Veh_SUV_Black_2 {
	displayName = "$STR_VEH_NAME_SUV_BLACK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_Black_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_Black_4: DZE_Veh_SUV_Black_3 {
	displayName = "$STR_VEH_NAME_SUV_BLACK++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_Camo: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_CAMO";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\camo10.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_Camo_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Camo_1: DZE_Veh_SUV_Camo {
	displayName = "$STR_VEH_NAME_SUV_CAMO+";
	original = "DZE_Veh_SUV_Camo";
	maxSpeed = 250; // max engine limit 125-130
	brakeDistance = 14; // 19
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_Camo_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_Camo_2: DZE_Veh_SUV_Camo_1 {
	displayName = "$STR_VEH_NAME_SUV_CAMO++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_Camo_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Camo_3: DZE_Veh_SUV_Camo_2 {
	displayName = "$STR_VEH_NAME_SUV_CAMO+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_Camo_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_Camo_4: DZE_Veh_SUV_Camo_3 {
	displayName = "$STR_VEH_NAME_SUV_CAMO++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_Blue: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_BLUE";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_blue_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_Blue_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Blue_1: DZE_Veh_SUV_Blue {
	displayName = "$STR_VEH_NAME_SUV_BLUE+";
	original = "DZE_Veh_SUV_Blue";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_Blue_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_Blue_2: DZE_Veh_SUV_Blue_1 {
	displayName = "$STR_VEH_NAME_SUV_BLUE++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_Blue_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Blue_3: DZE_Veh_SUV_Blue_2 {
	displayName = "$STR_VEH_NAME_SUV_BLUE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_Blue_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_Blue_4: DZE_Veh_SUV_Blue_3 {
	displayName = "$STR_VEH_NAME_SUV_BLUE++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_Green: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_GREEN";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_green_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_Green_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Green_1: DZE_Veh_SUV_Green {
	displayName = "$STR_VEH_NAME_SUV_GREEN+";
	original = "DZE_Veh_SUV_Green";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_Green_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_Green_2: DZE_Veh_SUV_Green_1 {
	displayName = "$STR_VEH_NAME_SUV_GREEN++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_Green_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Green_3: DZE_Veh_SUV_Green_2 {
	displayName = "$STR_VEH_NAME_SUV_GREEN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_Green_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_Green_4: DZE_Veh_SUV_Green_3 {
	displayName = "$STR_VEH_NAME_SUV_GREEN++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_Yellow: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_YELLOW";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_yellow_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_Yellow_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Yellow_1: DZE_Veh_SUV_Yellow {
	displayName = "$STR_VEH_NAME_SUV_YELLOW+";
	original = "DZE_Veh_SUV_Yellow";
	maxSpeed = 250; // max engine limit 125-130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_Yellow_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_Yellow_2: DZE_Veh_SUV_Yellow_1 {
	displayName = "$STR_VEH_NAME_SUV_YELLOW++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_Yellow_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Yellow_3: DZE_Veh_SUV_Yellow_2 {
	displayName = "$STR_VEH_NAME_SUV_YELLOW+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_Yellow_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_Yellow_4: DZE_Veh_SUV_Yellow_3 {
	displayName = "$STR_VEH_NAME_SUV_YELLOW++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_Red: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_RED";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_red_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_Red_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Red_1: DZE_Veh_SUV_Red {
	displayName = "$STR_VEH_NAME_SUV_RED+";
	original = "DZE_Veh_SUV_Red";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_Red_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_Red_2: DZE_Veh_SUV_Red_1 {
	displayName = "$STR_VEH_NAME_SUV_RED++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_Red_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Red_3: DZE_Veh_SUV_Red_2 {
	displayName = "$STR_VEH_NAME_SUV_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_Red_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_Red_4: DZE_Veh_SUV_Red_3 {
	displayName = "$STR_VEH_NAME_SUV_RED++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_White: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_WHITE";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_white_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_White_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_White_1: DZE_Veh_SUV_White {
	displayName = "$STR_VEH_NAME_SUV_WHITE+";
	original = "DZE_Veh_SUV_White";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_White_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_White_2: DZE_Veh_SUV_White_1 {
	displayName = "$STR_VEH_NAME_SUV_WHITE++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_White_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_White_3: DZE_Veh_SUV_White_2 {
	displayName = "$STR_VEH_NAME_SUV_WHITE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_White_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_White_4: DZE_Veh_SUV_White_3 {
	displayName = "$STR_VEH_NAME_SUV_WHITE++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_Pink: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_PINK";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_pink_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_Pink_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Pink_1: DZE_Veh_SUV_Pink {
	displayName = "$STR_VEH_NAME_SUV_PINK+";
	original = "DZE_Veh_SUV_Pink";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_Pink_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_Pink_2: DZE_Veh_SUV_Pink_1 {
	displayName = "$STR_VEH_NAME_SUV_PINK++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_Pink_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Pink_3: DZE_Veh_SUV_Pink_2 {
	displayName = "$STR_VEH_NAME_SUV_PINK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_Pink_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_Pink_4: DZE_Veh_SUV_Pink_3 {
	displayName = "$STR_VEH_NAME_SUV_PINK++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_Grey: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_GREY";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_charcoal_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_Grey_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Grey_1: DZE_Veh_SUV_Grey {
	displayName = "$STR_VEH_NAME_SUV_GREY+";
	original = "DZE_Veh_SUV_Grey";
	maxSpeed = 250; // max engine limit 125-130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_Grey_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_Grey_2: DZE_Veh_SUV_Grey_1 {
	displayName = "$STR_VEH_NAME_SUV_GREY++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_Grey_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Grey_3: DZE_Veh_SUV_Grey_2 {
	displayName = "$STR_VEH_NAME_SUV_GREY+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_Grey_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_Grey_4: DZE_Veh_SUV_Grey_3 {
	displayName = "$STR_VEH_NAME_SUV_GREY++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_Orange: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_ORANGE";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_orange_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_Orange_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Orange_1: DZE_Veh_SUV_Orange {
	displayName = "$STR_VEH_NAME_SUV_ORANGE+";
	original = "DZE_Veh_SUV_Orange";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_Orange_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_Orange_2: DZE_Veh_SUV_Orange_1 {
	displayName = "$STR_VEH_NAME_SUV_ORANGE++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_Orange_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Orange_3: DZE_Veh_SUV_Orange_2 {
	displayName = "$STR_VEH_NAME_SUV_ORANGE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_Orange_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_Orange_4: DZE_Veh_SUV_Orange_3 {
	displayName = "$STR_VEH_NAME_SUV_ORANGE++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_Silver: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_SILVER";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\suv_body_silver_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_Silver_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Silver_1: DZE_Veh_SUV_Silver {
	displayName = "$STR_VEH_NAME_SUV_SILVER+";
	original = "DZE_Veh_SUV_Silver";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_Silver_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_Silver_2: DZE_Veh_SUV_Silver_1 {
	displayName = "$STR_VEH_NAME_SUV_SILVER++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_Silver_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Silver_3: DZE_Veh_SUV_Silver_2 {
	displayName = "$STR_VEH_NAME_SUV_SILVER+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_Silver_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_Silver_4: DZE_Veh_SUV_Silver_3 {
	displayName = "$STR_VEH_NAME_SUV_SILVER++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_Winter: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_WINTER";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\suv\camo_winter.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_Winter_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Winter_1: DZE_Veh_SUV_Winter {
	displayName = "$STR_VEH_NAME_SUV_WINTER+";
	original = "DZE_Veh_SUV_Winter";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_Winter_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_Winter_2: DZE_Veh_SUV_Winter_1 {
	displayName = "$STR_VEH_NAME_SUV_WINTER++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_Winter_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_Winter_3: DZE_Veh_SUV_Winter_2 {
	displayName = "$STR_VEH_NAME_SUV_WINTER+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_Winter_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_Winter_4: DZE_Veh_SUV_Winter_3 {
	displayName = "$STR_VEH_NAME_SUV_WINTER++++";
	fuelCapacity = 250; // suv base 130
};

class DZE_Veh_SUV_BlueWhite: DZE_Veh_SUV_Black {
	displayName = "$STR_VEH_NAME_SUV_BLUE_WHITE";
	vehicleClass = "DZE Vehicles Cars";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\suv\suv_body_bluewhite.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_SUV_BlueWhite_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_BlueWhite_1: DZE_Veh_SUV_BlueWhite {
	displayName = "$STR_VEH_NAME_SUV_BLUE_WHITE+";
	original = "DZE_Veh_SUV_BlueWhite";
	maxSpeed = 250; // suv base 130
	terrainCoef = 1.5;
	brakeDistance = 14; // 19

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_SUV_BlueWhite_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_SUV_BlueWhite_2: DZE_Veh_SUV_BlueWhite_1 {
	displayName = "$STR_VEH_NAME_SUV_BLUE_WHITE++";
	armor = 60; // car 20, SUV 25
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.7;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.7;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.7;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.7;
		};
		class HitFuel: HitFuel {
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_SUV_BlueWhite_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_SUV_BlueWhite_3: DZE_Veh_SUV_BlueWhite_2 {
	displayName = "$STR_VEH_NAME_SUV_BLUE_WHITE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_SUV_BlueWhite_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_SUV_BlueWhite_4: DZE_Veh_SUV_BlueWhite_3 {
	displayName = "$STR_VEH_NAME_SUV_BLUE_WHITE++++";
	fuelCapacity = 250; // suv base 130
};
