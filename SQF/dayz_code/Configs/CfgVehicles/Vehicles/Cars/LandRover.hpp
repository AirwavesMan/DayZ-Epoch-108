class LandRover_CZ_EP1;
class DZE_Veh_LandRover_Desert: LandRover_CZ_EP1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT";
	vehicleClass = "DZE Vehicles Cars";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class Turrets {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportMaxBackpacks = 4;
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
	supplyRadius = 1.2;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_LandRover_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Desert_1: DZE_Veh_LandRover_Desert {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT+";
	original = "DZE_Veh_LandRover_Desert";
	maxSpeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_LandRover_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_LandRover_Desert_2: DZE_Veh_LandRover_Desert_1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_LandRover_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Desert_3: DZE_Veh_LandRover_Desert_2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_LandRover_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_LandRover_Desert_4: DZE_Veh_LandRover_Desert_3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT++++";
	fuelCapacity = 250;
};

class DZE_Veh_LandRover_Red: DZE_Veh_LandRover_Desert {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_RED";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\ca\wheeled_E\LR\Data\LR_Base_red_CO.paa"};

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

	class Upgrades {
		ItemORP[] = {"DZE_Veh_LandRover_Red_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Red_1: DZE_Veh_LandRover_Red {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_RED+";
	original = "DZE_Veh_LandRover_Red";
	maxSpeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_LandRover_Red_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_LandRover_Red_2: DZE_Veh_LandRover_Red_1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_RED++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_LandRover_Red_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Red_3: DZE_Veh_LandRover_Red_2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_RED+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_LandRover_Red_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_LandRover_Red_4: DZE_Veh_LandRover_Red_3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_RED++++";
	fuelCapacity = 250;
};

class DZE_Veh_LandRover_Woodland: DZE_Veh_LandRover_Desert {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND";
	model = "\Ca\Wheeled_ACR\LR\LR_ACR.p3d";
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

	class Upgrades {
		ItemORP[] = {"DZE_Veh_LandRover_Woodland_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Woodland_1: DZE_Veh_LandRover_Woodland {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND+";
	original = "DZE_Veh_LandRover_Woodland";
	maxSpeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_LandRover_Woodland_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_LandRover_Woodland_2: DZE_Veh_LandRover_Woodland_1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_LandRover_Woodland_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Woodland_3: DZE_Veh_LandRover_Woodland_2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_LandRover_Woodland_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_LandRover_Woodland_4: DZE_Veh_LandRover_Woodland_3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND++++";
	fuelCapacity = 250;
};

class DZE_Veh_LandRover_Ambulance_Woodland: DZE_Veh_LandRover_Woodland {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_WOODLAND";
	model = "\Ca\Wheeled_ACR\LR\LR_AMB_ACR";
	hiddenSelections[] = {"camo2"};
	hiddenSelectionsTextures[] = {"\ca\wheeled_acr\lr\data\lr_amb_ext_co.paa"};
	attendant = 0;

	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled_acr\lr\data\lr_amb_ext.rvmat","ca\wheeled_acr\lr\data\lr_amb_ext_damage.rvmat","ca\wheeled_acr\lr\data\lr_amb_ext_destruct.rvmat","ca\wheeled_E\LR\Data\LR_base.rvmat","ca\wheeled_E\LR\Data\LR_base_damage.rvmat","ca\wheeled_E\LR\Data\LR_base_destruct.rvmat","ca\wheeled_E\LR\Data\LR_glass.rvmat","ca\wheeled_E\LR\Data\LR_glass_damage.rvmat","ca\wheeled_E\LR\Data\LR_glass_destruct.rvmat","ca\wheeled_E\LR\Data\LR_Special.rvmat","ca\wheeled_E\LR\Data\LR_Special_damage.rvmat","ca\wheeled_E\LR\Data\LR_Special_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_LandRover_Ambulance_Woodland_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Ambulance_Woodland_1: DZE_Veh_LandRover_Ambulance_Woodland {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_WOODLAND+";
	original = "DZE_Veh_LandRover_Ambulance_Woodland";
	maxSpeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_LandRover_Ambulance_Woodland_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_LandRover_Ambulance_Woodland_2: DZE_Veh_LandRover_Ambulance_Woodland_1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_WOODLAND++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_LandRover_Ambulance_Woodland_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Ambulance_Woodland_3: DZE_Veh_LandRover_Ambulance_Woodland_2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_WOODLAND+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_LandRover_Ambulance_Woodland_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_LandRover_Ambulance_Woodland_4: DZE_Veh_LandRover_Ambulance_Woodland_3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_WOODLAND++++";
	fuelCapacity = 250;
};

class DZE_Veh_LandRover_Ambulance_Desert: DZE_Veh_LandRover_Ambulance_Woodland {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_DESERT";
	hiddenSelectionsTextures[] = {"\ca\wheeled_acr\lr\data\lr_amb_ext_desert_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_LandRover_Ambulance_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Ambulance_Desert_1: DZE_Veh_LandRover_Ambulance_Desert {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_DESERT+";
	original = "DZE_Veh_LandRover_Ambulance_Desert";
	maxSpeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_LandRover_Ambulance_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_LandRover_Ambulance_Desert_2: DZE_Veh_LandRover_Ambulance_Desert_1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_DESERT++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_LandRover_Ambulance_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Ambulance_Desert_3: DZE_Veh_LandRover_Ambulance_Desert_2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_DESERT+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_LandRover_Ambulance_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_LandRover_Ambulance_Desert_4: DZE_Veh_LandRover_Ambulance_Desert_3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_MEDIC_DESERT++++";
	fuelCapacity = 250;
};

class DZE_Veh_LandRover_Covered_Desert: DZE_Veh_LandRover_Desert {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT";
	model = "ca\wheeled_d_baf\LR_covered_soft_BAF";
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportMaxBackpacks = 4;

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

	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled_d_baf\Data\LR_base_baf.rvmat","ca\wheeled_d_baf\Data\LR_base_baf_damage.rvmat","ca\wheeled_d_baf\Data\LR_base_baf_destruct.rvmat","ca\wheeled_d_baf\Data\LR_glass_baf.rvmat","ca\wheeled_d_baf\Data\LR_glass_baf_damage.rvmat","ca\wheeled_d_baf\Data\LR_glass_baf_destruct.rvmat","ca\wheeled_d_baf\Data\LR_Special_baf.rvmat","ca\wheeled_d_baf\Data\LR_Special_baf_damage.rvmat","ca\wheeled_d_baf\Data\LR_Special_baf_destruct.rvmat"};
	};
	class Upgrades {
		ItemORP[] = {"DZE_Veh_LandRover_Covered_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Covered_Desert_1: DZE_Veh_LandRover_Covered_Desert {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT+";
	original = "DZE_Veh_LandRover_Covered_Desert";
	maxSpeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_LandRover_Covered_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_LandRover_Covered_Desert_2: DZE_Veh_LandRover_Covered_Desert_1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_LandRover_Covered_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Covered_Desert_3: DZE_Veh_LandRover_Covered_Desert_2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_LandRover_Covered_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_LandRover_Covered_Desert_4: DZE_Veh_LandRover_Covered_Desert_3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_DESERT++++";
	fuelCapacity = 250;
};

class DZE_Veh_LandRover_Covered_Woodland: DZE_Veh_LandRover_Covered_Desert {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND";
	model = "ca\wheeled_w_baf\LR_covered_soft_W_BAF";

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

	class Upgrades {
		ItemORP[] = {"DZE_Veh_LandRover_Covered_Woodland_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Covered_Woodland_1: DZE_Veh_LandRover_Covered_Woodland {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND+";
	original = "DZE_Veh_LandRover_Covered_Woodland";
	maxSpeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_LandRover_Covered_Woodland_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_LandRover_Covered_Woodland_2: DZE_Veh_LandRover_Covered_Woodland_1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_LandRover_Covered_Woodland_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_Covered_Woodland_3: DZE_Veh_LandRover_Covered_Woodland_2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_LandRover_Covered_Woodland_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_LandRover_Covered_Woodland_4: DZE_Veh_LandRover_Covered_Woodland_3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_WOODLAND++++";
	fuelCapacity = 250;
};

class LandRover_Special_CZ_EP1;
class DZE_Veh_LandRover_AGS30: LandRover_Special_CZ_EP1 {
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	DZE_MACRO_VEHICLE_SIDE
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPECIAL";
	vehicleClass = "DZE Vehicles Cars";
	class ViewOptics;
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportMaxBackpacks = 4;
	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	supplyRadius = 1.2;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_LandRover_AGS30_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_AGS30_1: DZE_Veh_LandRover_AGS30 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPECIAL+";
	original = "DZE_Veh_LandRover_AGS30";
	maxSpeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_LandRover_AGS30_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_LandRover_AGS30_2: DZE_Veh_LandRover_AGS30_1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPECIAL++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_LandRover_AGS30_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_AGS30_3: DZE_Veh_LandRover_AGS30_2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPECIAL+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_LandRover_AGS30_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_LandRover_AGS30_4: DZE_Veh_LandRover_AGS30_3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPECIAL++++";
	fuelCapacity = 250;
};

class LandRover_MG_TK_EP1;
class DZE_Veh_LandRover_M2: LandRover_MG_TK_EP1 {
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	DZE_MACRO_VEHICLE_SIDE
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_M2";
	vehicleClass = "DZE Vehicles Cars";
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportMaxBackpacks = 4;
	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	supplyRadius = 1.2;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_LandRover_M2_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_M2_1: DZE_Veh_LandRover_M2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_M2+";
	original = "DZE_Veh_LandRover_M2";
	maxSpeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_LandRover_M2_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_LandRover_M2_2: DZE_Veh_LandRover_M2_1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_M2++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_LandRover_M2_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_M2_3: DZE_Veh_LandRover_M2_2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_M2+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_LandRover_M2_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_LandRover_M2_4: DZE_Veh_LandRover_M2_3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_M2++++";
	fuelCapacity = 250;
};

class LandRover_SPG9_TK_EP1;
class DZE_Veh_LandRover_SPG9: LandRover_SPG9_TK_EP1 {
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	DZE_MACRO_VEHICLE_SIDE
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPG9";
	vehicleClass = "DZE Vehicles Cars";
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
    transportMaxBackpacks = 4;
	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	supplyRadius = 1.2;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_LandRover_SPG9_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_SPG9_1: DZE_Veh_LandRover_SPG9 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPG9+";
	original = "DZE_Veh_LandRover_SPG9";
	maxSpeed = 160;
	terrainCoef = 1.5;

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_LandRover_SPG9_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_LandRover_SPG9_2: DZE_Veh_LandRover_SPG9_1 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPG9++";
	armor = 60;
	damageResistance = 0.02099;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.65;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.65;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.65;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.65;
		};
		class HitFuel: HitFuel {
			armor = 1.5;
		};
		class HitEngine: HitEngine {
			armor = 2.5;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.25;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_LandRover_SPG9_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_LandRover_SPG9_3: DZE_Veh_LandRover_SPG9_2 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPG9+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_LandRover_SPG9_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",1},{"ItemJerrycan",2},{"ItemScrews",1}}};
	};
};

class DZE_Veh_LandRover_SPG9_4: DZE_Veh_LandRover_SPG9_3 {
	displayname = "$STR_VEH_NAME_MILITARY_OFFROAD_SPG9++++";
	fuelCapacity = 250;
};
