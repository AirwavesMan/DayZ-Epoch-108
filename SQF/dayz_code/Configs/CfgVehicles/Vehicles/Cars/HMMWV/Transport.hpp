class DZE_Veh_HMMWV_M1035_Desert: DZE_HMMWV_Base {
	scope = 2;
	model = "\ca\wheeled_e\HMMWV\M1035_transport";
	displayName = "$STR_VEH_NAME_HMMWV_DES";
	transportSoldier = 3;
	Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_transport_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_transport_CA.paa";
	class Turrets{};
	class Library {
		libTextDesc = "$STR_EP1_LIB_HMMWV_M1035_DES";
	};
	driverAction = "HMMWV_Driver_EP1";
	cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1"};

	DZE_MACRO_VEHICLE_CLEAR_CARGO

	threat[] = {0.0,0.0,0.0};
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	class Damage {
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\HMMWV_Canvas.rvmat","Ca\wheeled_E\HMMWV\data\HMMWV_Canvas_damage.rvmat","Ca\wheeled_E\HMMWV\data\HMMWV_Canvas_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_canvas_1_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_canvas_1_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_M1035_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_M1035_Desert_1: DZE_Veh_HMMWV_M1035_Desert  {
	displayName = "$STR_VEH_NAME_HMMWV_DES+";
	original = "DZE_Veh_HMMWV_M1035_Desert";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_M1035_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_M1035_Desert_2: DZE_Veh_HMMWV_M1035_Desert_1 {
	displayName = "$STR_VEH_NAME_HMMWV_DES++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581

	class HitPoints: HitPoints {
		class HitGlass1: HitGlass1 {
			armor = 1.5;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.5;
		};
		class HitGlass3: HitGlass3 {
			armor = 1.5;
		};
		class HitGlass4: HitGlass4 {
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel {
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.25;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_HMMWV_M1035_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_M1035_Desert_3: DZE_Veh_HMMWV_M1035_Desert_2 {
	displayName = "$STR_VEH_NAME_HMMWV_DES+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_M1035_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_M1035_Desert_4: DZE_Veh_HMMWV_M1035_Desert_3 {
	displayName = "$STR_VEH_NAME_HMMWV_DES++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_HMMWV_Woodland: DZE_HMMWV_Base {
	accuracy = 0.32;
	displayName = "$STR_VEH_NAME_HMMWV";
	hasgunner = 0;
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};
	icon = "\Ca\wheeled\data\map_ico\icomap_hmwv_CA.paa";
	mapsize = 5;
	model = "ca\wheeled_E\HMMWV\HMMWV";
	picture = "\Ca\wheeled\data\ico\HMMWV_CA.paa";
	scope = 2;

	DZE_MACRO_VEHICLE_CLEAR_CARGO

	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	class Turrets {};
	class Damage {
		mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_body.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat", "Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\data\hmmwv_clocks_destruct.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat", "ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
		tex[] = {};
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_Woodland_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Woodland_1: DZE_Veh_HMMWV_Woodland  {
	displayName = "$STR_VEH_NAME_HMMWV+";
	original = "DZE_Veh_HMMWV_Woodland";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_Woodland_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_Woodland_2: DZE_Veh_HMMWV_Woodland_1 {
	displayName = "$STR_VEH_NAME_HMMWV++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581

	class HitPoints: HitPoints {
		class HitGlass1: HitGlass1 {
			armor = 1.5;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.5;
		};
		class HitGlass3: HitGlass3 {
			armor = 1.5;
		};
		class HitGlass4: HitGlass4 {
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel {
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.25;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_HMMWV_Woodland_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Woodland_3: DZE_Veh_HMMWV_Woodland_2 {
	displayName = "$STR_VEH_NAME_HMMWV+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_Woodland_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_Woodland_4: DZE_Veh_HMMWV_Woodland_3 {
	displayName = "$STR_VEH_NAME_HMMWV++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_HMMWV_Desert: DZE_Veh_HMMWV_Woodland {
	displayName = "$STR_VEH_NAME_HMMWV_DES";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Desert_1: DZE_Veh_HMMWV_Desert  {
	displayName = "$STR_VEH_NAME_HMMWV_DES+";
	original = "DZE_Veh_HMMWV_Desert";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_Desert_2: DZE_Veh_HMMWV_Desert_1 {
	displayName = "$STR_VEH_NAME_HMMWV_DES++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581

	class HitPoints: HitPoints {
		class HitGlass1: HitGlass1 {
			armor = 1.5;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.5;
		};
		class HitGlass3: HitGlass3 {
			armor = 1.5;
		};
		class HitGlass4: HitGlass4 {
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel {
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.25;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_HMMWV_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Desert_3: DZE_Veh_HMMWV_Desert_2 {
	displayName = "$STR_VEH_NAME_HMMWV_DES+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_Desert_4: DZE_Veh_HMMWV_Desert_3 {
	displayName = "$STR_VEH_NAME_HMMWV_DES++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_HMMWV_Winter: DZE_Veh_HMMWV_Woodland {
	displayName = "$STR_VEH_NAME_HMMWV_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\hmmwv\hmmwv_body_winter_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_Winter_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Winter_1: DZE_Veh_HMMWV_Winter  {
	displayName = "$STR_VEH_NAME_HMMWV_WINTER+";
	original = "DZE_Veh_HMMWV_Winter";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_Winter_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_Winter_2: DZE_Veh_HMMWV_Winter_1 {
	displayName = "$STR_VEH_NAME_HMMWV_WINTER++";
	armor = 75; // base 40
	damageResistance = 0.015; // base 0.00581

	class HitPoints: HitPoints {
		class HitGlass1: HitGlass1 {
			armor = 1.5;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.5;
		};
		class HitGlass3: HitGlass3 {
			armor = 1.5;
		};
		class HitGlass4: HitGlass4 {
			armor = 1.5;
		};
		class HitLFWheel: HitLFWheel {
			armor = 0.25;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.25;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.25;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.25;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_HMMWV_Winter_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Winter_3: DZE_Veh_HMMWV_Winter_2 {
	displayName = "$STR_VEH_NAME_HMMWV_WINTER+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_Winter_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_Winter_4: DZE_Veh_HMMWV_Winter_3 {
	displayName = "$STR_VEH_NAME_HMMWV_WINTER++++";
	fuelCapacity = 180; // base 100
};
