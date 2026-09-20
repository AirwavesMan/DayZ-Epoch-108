class VolhaLimo_TK_CIV_EP1;
class DZE_Veh_Volha_Black: VolhaLimo_TK_CIV_EP1 {
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	DZE_MACRO_VEHICLE_SIDE
	displayname = "$STR_VEH_NAME_GAZ_BLACK";
	vehicleClass = "DZE Vehicles Cars";
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
		ItemORP[] = {"DZE_Veh_Volha_Black_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Volha_Black_1: DZE_Veh_Volha_Black {
	displayname = "$STR_VEH_NAME_GAZ_BLUE+";
	original = "DZE_Veh_Volha_Black";
	maxSpeed = 150; // max engine limit 125-130
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Volha_Black_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Volha_Black_2: DZE_Veh_Volha_Black_1 {
	displayname = "$STR_VEH_NAME_GAZ_BLUE++";
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
		ItemLRK[] = {"DZE_Veh_Volha_Black_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Volha_Black_3: DZE_Veh_Volha_Black_2 {
	displayname = "$STR_VEH_NAME_GAZ_BLUE+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Volha_Black_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Volha_Black_4: DZE_Veh_Volha_Black_3 {
	displayname = "$STR_VEH_NAME_GAZ_BLUE++++";
	fuelCapacity = 210; // car 100
};

class Volha_1_TK_CIV_EP1;
class DZE_Veh_Volha_Blue: Volha_1_TK_CIV_EP1 {
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	DZE_MACRO_VEHICLE_SIDE
	displayname = "$STR_VEH_NAME_GAZ_BLUE";
	vehicleClass = "DZE Vehicles Cars";
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
		ItemORP[] = {"DZE_Veh_Volha_Blue_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Volha_Blue_1: DZE_Veh_Volha_Blue {
	displayname = "$STR_VEH_NAME_GAZ_GREY+";
	original = "DZE_Veh_Volha_Blue";
	maxSpeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Volha_Blue_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Volha_Blue_2: DZE_Veh_Volha_Blue_1 {
	displayname = "$STR_VEH_NAME_GAZ_GREY++";
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
		ItemLRK[] = {"DZE_Veh_Volha_Blue_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Volha_Blue_3: DZE_Veh_Volha_Blue_2 {
	displayname = "$STR_VEH_NAME_GAZ_GREY+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Volha_Blue_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Volha_Blue_4: DZE_Veh_Volha_Blue_3 {
	displayname = "$STR_VEH_NAME_GAZ_GREY++++";
	fuelCapacity = 210; // car 100
};

class Volha_2_TK_CIV_EP1;
class DZE_Veh_Volha_Grey: Volha_2_TK_CIV_EP1 {
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	DZE_MACRO_VEHICLE_SIDE
	displayname = "$STR_VEH_NAME_GAZ_GREY";
	vehicleClass = "DZE Vehicles Cars";
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
		ItemORP[] = {"DZE_Veh_Volha_Grey_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Volha_Grey_1: DZE_Veh_Volha_Grey {
	displayname = "$STR_VEH_NAME_GAZ_BLACK+";
	original = "DZE_Veh_Volha_Grey";
	maxSpeed = 150; // car 100
	terrainCoef = 2.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Volha_Grey_2",{"ItemToolbox"},{},{{"ItemAVE",1},{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_Volha_Grey_2: DZE_Veh_Volha_Grey_1 {
	displayname = "$STR_VEH_NAME_GAZ_BLACK++";
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
		ItemLRK[] = {"DZE_Veh_Volha_Grey_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

class DZE_Veh_Volha_Grey_3: DZE_Veh_Volha_Grey_2 {
	displayname = "$STR_VEH_NAME_GAZ_BLACK+++";
	transportMaxWeapons = 20;  // car 10
	transportMaxMagazines = 100; // car 50
    transportMaxBackpacks = 4; // car 2

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Volha_Grey_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_Volha_Grey_4: DZE_Veh_Volha_Grey_3 {
	displayname = "$STR_VEH_NAME_GAZ_BLACK++++";
	fuelCapacity = 210; // car 100
};
