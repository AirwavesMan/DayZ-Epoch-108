class BTR40_MG_base_EP1;
class DZE_Veh_BTR40_DShKM_Green: BTR40_MG_base_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_GREEN";
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
	hiddenSelectionsTextures[] = {"\ca\wheeled_e\btr40\data\btr40ext_co.paa"};
	supplyRadius = 1.3;

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_BTR40_DShKM_Green_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR40_DShKM_Green_1: DZE_Veh_BTR40_DShKM_Green {
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_GREEN+";
	original = "DZE_Veh_BTR40_DShKM_Green";
	maxSpeed = 110; //base 90
	terrainCoef = 1.5; //base 2.5

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_BTR40_DShKM_Green_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",4},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_BTR40_DShKM_Green_2: DZE_Veh_BTR40_DShKM_Green_1 {
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_GREEN++";
	armor = 65; // base 40
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
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
	};
	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_BTR40_DShKM_Green_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_BTR40_DShKM_Green_3: DZE_Veh_BTR40_DShKM_Green_2 {
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_GREEN+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 10;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_BTR40_DShKM_Green_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_BTR40_DShKM_Green_4: DZE_Veh_BTR40_DShKM_Green_3 {
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_GREEN++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_BTR40_DShKM_Woodland: DZE_Veh_BTR40_DShKM_Green {
	scope = 2;
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_WOOD";
	hiddenSelectionsTextures[] = {"\ca\wheeled_e\btr40\data\btr40extcamo_co.paa"};

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_BTR40_DShKM_Woodland_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR40_DShKM_Woodland_1: DZE_Veh_BTR40_DShKM_Woodland {
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_WOOD+";
	original = "DZE_Veh_BTR40_DShKM_Woodland";
	maxSpeed = 110; //base 90
	terrainCoef = 1.5; //base 2.5

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_BTR40_DShKM_Woodland_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",4},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_BTR40_DShKM_Woodland_2: DZE_Veh_BTR40_DShKM_Woodland_1 {
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_WOOD++";
	armor = 65; // base 40
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
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
	};
	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_BTR40_DShKM_Woodland_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_BTR40_DShKM_Woodland_3: DZE_Veh_BTR40_DShKM_Woodland_2 {
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_WOOD+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 10;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_BTR40_DShKM_Woodland_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_BTR40_DShKM_Woodland_4: DZE_Veh_BTR40_DShKM_Woodland_3 {
	displayName = "$STR_VEH_NAME_BTR40_DSHKM_WOOD++++";
	fuelCapacity = 180; // base 100
};


class BTR40_base_EP1;
class DZE_Veh_BTR40_Green: BTR40_base_EP1 {
	scope = 2;
	displayName = "$STR_VEH_NAME_BTR40_GREEN";
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
	hiddenSelectionsTextures[] = {"\ca\wheeled_e\btr40\data\btr40ext_co.paa"};
	supplyRadius = 1.3;

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_BTR40_Green_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR40_Green_1: DZE_Veh_BTR40_Green {
	displayName = "$STR_VEH_NAME_BTR40_GREEN+";
	original = "DZE_Veh_BTR40_Green";
	maxSpeed = 110; //base 90
	terrainCoef = 1.5; //base 2.5

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_BTR40_Green_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",4},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_BTR40_Green_2: DZE_Veh_BTR40_Green_1 {
	displayName = "$STR_VEH_NAME_BTR40_GREEN++";
	armor = 65; // base 40
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
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
	};
	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_BTR40_Green_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_BTR40_Green_3: DZE_Veh_BTR40_Green_2 {
	displayName = "$STR_VEH_NAME_BTR40_GREEN+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 10;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_BTR40_Green_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_BTR40_Green_4: DZE_Veh_BTR40_Green_3 {
	displayName = "$STR_VEH_NAME_BTR40_GREEN++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_BTR40_Woodland: DZE_Veh_BTR40_Green {
	displayName = "$STR_VEH_NAME_BTR40_WOOD";
	hiddenSelectionsTextures[] = {"\ca\wheeled_e\btr40\data\btr40extcamo_co.paa"};

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_BTR40_Woodland_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_BTR40_Woodland_1: DZE_Veh_BTR40_Woodland {
	displayName = "$STR_VEH_NAME_BTR40_WOOD+";
	original = "DZE_Veh_BTR40_Woodland";
	maxSpeed = 110; //base 90
	terrainCoef = 1.5; //base 2.5

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_BTR40_Woodland_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",4},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_BTR40_Woodland_2: DZE_Veh_BTR40_Woodland_1 {
	displayName = "$STR_VEH_NAME_BTR40_WOOD++";
	armor = 65; // base 40
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
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
	};
	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_BTR40_Woodland_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_BTR40_Woodland_3: DZE_Veh_BTR40_Woodland_2 {
	displayName = "$STR_VEH_NAME_BTR40_WOOD+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 10;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_BTR40_Woodland_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_BTR40_Woodland_4: DZE_Veh_BTR40_Woodland_3 {
	displayName = "$STR_VEH_NAME_BTR40_WOOD++++";
	fuelCapacity = 180; // base 100
};
