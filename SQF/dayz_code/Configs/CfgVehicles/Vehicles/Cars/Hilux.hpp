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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Hilux_Tan_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_GUE",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
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
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Hilux_Tan_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_GUE_1",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Hilux_Tan_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_GUE_2",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Hilux_Tan_3: DZE_Veh_Hilux_Tan_2 {
	displayName = "$STR_VEH_NAME_PICKUP_TAN+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Hilux_Tan_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_GUE_3",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Hilux_Tan_4: DZE_Veh_Hilux_Tan_3 {
	displayName = "$STR_VEH_NAME_PICKUP_TAN++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_GUE_4",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Hilux_Covered_Red_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_TK",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
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
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Hilux_Covered_Red_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_TK_1",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Hilux_Covered_Red_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_TK_2",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Hilux_Covered_Red_3: DZE_Veh_Hilux_Covered_Red_2 {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Hilux_Covered_Red_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_TK_3",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Hilux_Covered_Red_4: DZE_Veh_Hilux_Covered_Red_3 {
	displayName = "$STR_VEH_NAME_PICKUP_COVERED_RED++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_TK_4",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Hilux_White_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_INS",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
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
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Hilux_White_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_INS_1",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Hilux_White_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_INS_2",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Hilux_White_3: DZE_Veh_Hilux_White_2 {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Hilux_White_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_INS_3",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Hilux_White_4: DZE_Veh_Hilux_White_3 {
	displayName = "$STR_VEH_NAME_PICKUP_WHITE++++";
	fuelCapacity = 210; // car 100

	class Upgrades {
		DZE_Item_Upgrade_CarARM[] = {"DZE_Veh_Pickup_PKT_INS_4",{"DZE_Tool_Toolbox"},{"DZE_Wep_PKM"},{{"DZE_Item_Upgrade_CarARM",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Pole",1},{"DZE_Item_Metal_Screws",2}}};
	};
};
