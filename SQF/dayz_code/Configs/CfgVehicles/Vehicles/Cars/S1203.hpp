class S1203_TK_CIV_EP1;
class DZE_Veh_S1203_Blue: S1203_TK_CIV_EP1 {
	displayName = "$STR_VEH_NAME_SKODA_BUS";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	fuelCapacity = 100;
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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_S1203_Blue_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_S1203_Blue_1: DZE_Veh_S1203_Blue {
	displayname = "$STR_VEH_NAME_SKODA_BUS+";
	original = "DZE_Veh_S1203_Blue";
	maxSpeed = 155; // base 105
	terrainCoef = 2;

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_S1203_Blue_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_S1203_Blue_2: DZE_Veh_S1203_Blue_1 {
	displayname = "$STR_VEH_NAME_SKODA_BUS++";
	armor = 55; // base 20
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_S1203_Blue_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_S1203_Blue_3: DZE_Veh_S1203_Blue_2 {
	displayname = "$STR_VEH_NAME_SKODA_BUS+++";
	transportMaxWeapons = 20;  // base 10
	transportMaxMagazines = 100; // base 50
    transportMaxBackpacks = 4; // base 2

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_S1203_Blue_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_S1203_Blue_4: DZE_Veh_S1203_Blue_3 {
	displayname = "$STR_VEH_NAME_SKODA_BUS++++";
	fuelCapacity = 200; // base 100
};

class S1203_ambulance_EP1;
class DZE_Veh_S1203_Ambulance: S1203_ambulance_EP1 {
	displayName = "$STR_VEH_NAME_SKODA_AMBULANCE";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	fuelCapacity = 100;
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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_S1203_Ambulance_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_S1203_Ambulance_1: DZE_Veh_S1203_Ambulance {
	displayname = "$STR_VEH_NAME_SKODA_AMBULANCE+";
	original = "DZE_Veh_S1203_Ambulance";
	maxSpeed = 155; // base 105
	terrainCoef = 2;

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_S1203_Ambulance_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_S1203_Ambulance_2: DZE_Veh_S1203_Ambulance_1 {
	displayname = "$STR_VEH_NAME_SKODA_AMBULANCE++";
	armor = 55; // base 20
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_S1203_Ambulance_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_S1203_Ambulance_3: DZE_Veh_S1203_Ambulance_2 {
	displayname = "$STR_VEH_NAME_SKODA_AMBULANCE+++";
	transportMaxWeapons = 20;  // base 10
	transportMaxMagazines = 100; // base 50
    transportMaxBackpacks = 4; // base 2

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_S1203_Ambulance_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_S1203_Ambulance_4: DZE_Veh_S1203_Ambulance_3 {
	displayname = "$STR_VEH_NAME_SKODA_AMBULANCE++++";
	fuelCapacity = 200; // base 100
};
