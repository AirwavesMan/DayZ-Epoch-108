class car_sedan;
class DZE_Veh_Sedan_White: car_sedan {
	displayname = "$STR_VEH_NAME_SEDAN_WHITE";
	vehicleClass = "DZE Vehicles Cars";
	maxSpeed = 125;
	armor = 20;
	damageResistance = 0.01821;
	fuelCapacity = 100;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class HitPoints;
	supplyRadius = 1.5;

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Sedan_White_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

// Performance 1
class DZE_Veh_Sedan_White_1: DZE_Veh_Sedan_White {
	displayname = "$STR_VEH_NAME_SEDAN_WHITE+";
	original = "DZE_Veh_Sedan_White";
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
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Sedan_White_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

// Armor 2
class DZE_Veh_Sedan_White_2: DZE_Veh_Sedan_White_1 {
	displayname = "$STR_VEH_NAME_SEDAN_WHITE++";
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Sedan_White_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

// Cargo 3
class DZE_Veh_Sedan_White_3: DZE_Veh_Sedan_White_2 {
	displayname = "$STR_VEH_NAME_SEDAN_WHITE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Sedan_White_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

// Fuel 4
class DZE_Veh_Sedan_White_4: DZE_Veh_Sedan_White_3 {
	displayname = "$STR_VEH_NAME_SEDAN_WHITE++++";
	fuelCapacity = 210; // car 100
};

class GLT_M300_ST;
class DZE_Veh_Sedan_Taxi: GLT_M300_ST {
	displayname = "$STR_VEH_NAME_SEDAN_TAXI";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL
	maxSpeed = 110;
	armor = 20;
	damageResistance = 0.01821;
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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Sedan_Taxi_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Sedan_Taxi_1: DZE_Veh_Sedan_Taxi {
	displayname = "$STR_VEH_NAME_SEDAN_TAXI+";
	original = "DZE_Veh_Sedan_Taxi";
	maxSpeed = 160; // car 110
	terrainCoef = 2;

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Sedan_Taxi_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_Sedan_Taxi_2: DZE_Veh_Sedan_Taxi_1 {
	displayname = "$STR_VEH_NAME_SEDAN_TAXI++";
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Sedan_Taxi_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Sedan_Taxi_3: DZE_Veh_Sedan_Taxi_2 {
	displayname = "$STR_VEH_NAME_SEDAN_TAXI+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Sedan_Taxi_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_Sedan_Taxi_4: DZE_Veh_Sedan_Taxi_3 {
	displayname = "$STR_VEH_NAME_SEDAN_TAXI++++";
	fuelCapacity = 210; // car 100
};
