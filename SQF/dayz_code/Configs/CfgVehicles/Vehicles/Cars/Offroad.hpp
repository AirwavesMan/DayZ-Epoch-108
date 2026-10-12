class Offroad_DSHKM_Gue;
class DZE_Veh_Offroad_DShKM: Offroad_DSHKM_Gue {
	displayName = "$STR_VEH_NAME_PICKUP_DSHKM";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Offroad_DShKM_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

// Performance 1
class DZE_Veh_Offroad_DShKM_1: DZE_Veh_Offroad_DShKM {
	displayName = "$STR_VEH_NAME_PICKUP_DSHKM+";
	original = "DZE_Veh_Offroad_DShKM";
	maxSpeed = 170; // Offroad_DSHKM_base 150 | car 100

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Offroad_DShKM_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
};
// Armmor 2
class DZE_Veh_Offroad_DShKM_2: DZE_Veh_Offroad_DShKM_1 {
	displayName = "$STR_VEH_NAME_PICKUP_DSHKM++";
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Offroad_DShKM_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};

};
// Cargo 3
class DZE_Veh_Offroad_DShKM_3: DZE_Veh_Offroad_DShKM_2 {
	displayName = "$STR_VEH_NAME_PICKUP_DSHKM+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades	{
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Offroad_DShKM_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

// Fuel 4
class DZE_Veh_Offroad_DShKM_4: DZE_Veh_Offroad_DShKM_3 {
	displayName = "$STR_VEH_NAME_PICKUP_DSHKM++++";
	fuelCapacity = 210; // car 100
};

class Offroad_SPG9_Gue;
class DZE_Veh_Offroad_SPG9_GUE: Offroad_SPG9_Gue {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_SPG9";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Offroad_SPG9_GUE_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

// Performance 1
class DZE_Veh_Offroad_SPG9_GUE_1: DZE_Veh_Offroad_SPG9_GUE {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_SPG9+";
	original = "DZE_Veh_Offroad_SPG9_GUE";
	maxSpeed = 170; // Offroad_SPG9_base 150 | car 100

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Offroad_SPG9_GUE_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
};
// Armor 2
class DZE_Veh_Offroad_SPG9_GUE_2: DZE_Veh_Offroad_SPG9_GUE_1 {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_SPG9++";
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Offroad_SPG9_GUE_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};

};
// Cargo 3
class DZE_Veh_Offroad_SPG9_GUE_3: DZE_Veh_Offroad_SPG9_GUE_2 {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_SPG9+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades	{
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Offroad_SPG9_GUE_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

// Fuel 4
class DZE_Veh_Offroad_SPG9_GUE_4: DZE_Veh_Offroad_SPG9_GUE_3 {
	displayName = "$STR_VEH_NAME_PICKUP_GUE_SPG9++++";
	fuelCapacity = 210; // car 100
};

class Offroad_SPG9_TK_GUE_EP1;
class DZE_Veh_Offroad_SPG9_TK: Offroad_SPG9_TK_GUE_EP1 {
	displayName = "$STR_VEH_NAME_PICKUP_TK_GUE_SPG9";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Offroad_SPG9_TK_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

// Performance 1
class DZE_Veh_Offroad_SPG9_TK_1: DZE_Veh_Offroad_SPG9_TK {
	displayName = "$STR_VEH_NAME_PICKUP_TK_GUE_SPG9+";
	original = "DZE_Veh_Offroad_SPG9_TK";
	maxSpeed = 170; // Offroad_SPG9_base 150 | car 100

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Offroad_SPG9_TK_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
};
// Armor 2
class DZE_Veh_Offroad_SPG9_TK_2: DZE_Veh_Offroad_SPG9_TK_1 {
	displayName = "$STR_VEH_NAME_PICKUP_TK_GUE_SPG9++";
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Offroad_SPG9_TK_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};

};
// Cargo 3
class DZE_Veh_Offroad_SPG9_TK_3: DZE_Veh_Offroad_SPG9_TK_2 {
	displayName = "$STR_VEH_NAME_PICKUP_TK_GUE_SPG9+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
	transportMaxBackpacks = 4; // car 2

	class Upgrades	{
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Offroad_SPG9_TK_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

// Fuel 4
class DZE_Veh_Offroad_SPG9_TK_4: DZE_Veh_Offroad_SPG9_TK_3 {
	displayName = "$STR_VEH_NAME_PICKUP_TK_GUE_SPG9++++";
	fuelCapacity = 210; // car 100
};
