class DZE_Veh_HMMWV_GPK_Desert: DZE_HMMWV_Base  {
	expansion = 1;
	scope = 2;
	model = "\ca\wheeled_e\HMMWV\m1151_m2_gpk";
	displayName = "$STR_VEH_NAME_HMMWV_GPK";
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	threat[] = {1,0.6,0.6};
	transportSoldier = 3;
	armor = 80;
	damageResistance = 0.03099;
	Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_m2gpk_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_m2gpk_CA.paa";
	class Library {
		libTextDesc = "The High Mobility Multipurpose Wheeled Vehicle (HMMWV) replaced the M151 ï¿½Willysï¿½ jeep in US Army service. The HMMWV was designed to fill myriad roles, including that of light tactical commander's vehicle, special purpose shelter carrier, and mobile weapons platform. The HMMWV is equipped with a high-performance diesel engine and four-wheel drive, making it capable of negotiating very difficult terrain. <br/>This one is equipped with an M2 heavy machine gun which is effective against infantry or unarmored vehicles. It is also supplemented with the GPK (Gunner Protection Kit).";
	};
	driverAction = "HMMWV_Driver_EP1";
	cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1"};

	DZE_MACRO_VEHICLE_CLEAR_CARGO

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			weapons[] = {"M2"};
			magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1,10};
			minElev = -25;
			maxElev = 60;
			gunnerAction = "HMMWV_Gunner_EP1";
			viewGunnerInExternal = 1;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesBoth";
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.455;
				minFov = 0.25;
				maxFov = 0.7;
			};
		};
	};
	class AnimationSources: AnimationSources {
		class ReloadAnim {
			source = "reload";
			weapon = "M2";
		};
		class ReloadMagazine {
			source = "reloadmagazine";
			weapon = "M2";
		};
		class Revolving {
			source = "revolving";
			weapon = "M2";
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_1_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_regular_1_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_gpk_tower_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_GPK_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_GPK_Desert_1: DZE_Veh_HMMWV_GPK_Desert  {
	displayName = "$STR_VEH_NAME_HMMWV_GPK+";
	original = "DZE_Veh_HMMWV_GPK_Desert";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_GPK_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_GPK_Desert_2: DZE_Veh_HMMWV_GPK_Desert_1 {
	displayName = "$STR_VEH_NAME_HMMWV_GPK++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099

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
		ItemLRK[] = {"DZE_Veh_HMMWV_GPK_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_GPK_Desert_3: DZE_Veh_HMMWV_GPK_Desert_2 {
	displayName = "$STR_VEH_NAME_HMMWV_GPK+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_GPK_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_GPK_Desert_4: DZE_Veh_HMMWV_GPK_Desert_3 {
	displayName = "$STR_VEH_NAME_HMMWV_GPK++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_HMMWV_GPK_Winter: DZE_Veh_HMMWV_GPK_Desert {
	displayName = "$STR_VEH_NAME_HMMWV_GPK_WINTER";
	hiddenSelectionsTextures[] = {"\dayz_epoch_c\skins\hmmwv\hmmwv_body_canvas_1_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_hood_canvas_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_regular_1_winter_co.paa","\dayz_epoch_c\skins\hmmwv\hmmwv_gpk_tower_winter_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_GPK_Winter_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_GPK_Winter_1: DZE_Veh_HMMWV_GPK_Winter  {
	displayName = "$STR_VEH_NAME_HMMWV_GPK_WINTER+";
	original = "DZE_Veh_HMMWV_GPK_Winter";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_GPK_Winter_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_GPK_Winter_2: DZE_Veh_HMMWV_GPK_Winter_1 {
	displayName = "$STR_VEH_NAME_HMMWV_GPK_WINTER++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099

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
		ItemLRK[] = {"DZE_Veh_HMMWV_GPK_Winter_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_GPK_Winter_3: DZE_Veh_HMMWV_GPK_Winter_2 {
	displayName = "$STR_VEH_NAME_HMMWV_GPK_WINTER+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_GPK_Winter_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_GPK_Winter_4: DZE_Veh_HMMWV_GPK_Winter_3 {
	displayName = "$STR_VEH_NAME_HMMWV_GPK_WINTER++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_HMMWV_AGS30_Desert: DZE_Veh_HMMWV_GPK_Desert {
	displayName = "$STR_VEH_NAME_HMMWV_AGS30";
	model = "\Ca\Wheeled_ACR\HMMWV\M1114_AGS_ACR.p3d";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"AGS30"};
			magazines[] = {"29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30"};
			gunnerAction = "LR_Gunner01_EP1";
			gunnerOpticsModel = "\ca\weapons\optika_AGS30.p3d";
			class GunFire: WeaponCloudsMGun {
				interval = 0.01;
			};
			class ViewOptics: ViewOptics {
				initFov = 0.2;
				minFov = 0.058;
				maxFov = 0.2;
			};
		};
	};
	class AnimationSources: AnimationSources {
		class ReloadAnim {
			source = "reload";
			weapon = "AGS30";
		};
		class ReloadMagazine {
			source = "reloadmagazine";
			weapon = "AGS30";
		};
		class Revolving {
			source = "revolving";
			weapon = "AGS30";
		};
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_AGS30_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_AGS30_Desert_1: DZE_Veh_HMMWV_AGS30_Desert  {
	displayName = "$STR_VEH_NAME_HMMWV_AGS30+";
	original = "DZE_Veh_HMMWV_AGS30_Desert";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_AGS30_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_AGS30_Desert_2: DZE_Veh_HMMWV_AGS30_Desert_1 {
	displayName = "$STR_VEH_NAME_HMMWV_AGS30++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099

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
		ItemLRK[] = {"DZE_Veh_HMMWV_AGS30_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_AGS30_Desert_3: DZE_Veh_HMMWV_AGS30_Desert_2 {
	displayName = "$STR_VEH_NAME_HMMWV_AGS30+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_AGS30_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_AGS30_Desert_4: DZE_Veh_HMMWV_AGS30_Desert_3 {
	displayName = "$STR_VEH_NAME_HMMWV_AGS30++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_HMMWV_DShKM_Desert: DZE_Veh_HMMWV_GPK_Desert {
	displayName = "$STR_VEH_NAME_HMMWV_DSHKM";
	model = "\Ca\Wheeled_ACR\HMMWV\M1114_DSK_ACR.p3d";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			gunnerOpticsModel = "\ca\Weapons\optika_empty.p3d";
			weapons[] = {"DShKM"};
			magazines[] = {"50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM"};
		};
	};
	class AnimationSources: AnimationSources {
		class ReloadAnim {
			source = "reload";
			weapon = "DShKM";
		};
		class ReloadMagazine {
			source = "reloadmagazine";
			weapon = "DShKM";
		};
		class Revolving {
			source = "revolving";
			weapon = "DShKM";
		};
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_DShKM_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_DShKM_Desert_1: DZE_Veh_HMMWV_DShKM_Desert  {
	displayName = "$STR_VEH_NAME_HMMWV_DSHKM+";
	original = "DZE_Veh_HMMWV_DShKM_Desert";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_DShKM_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_DShKM_Desert_2: DZE_Veh_HMMWV_DShKM_Desert_1 {
	displayName = "$STR_VEH_NAME_HMMWV_DSHKM++";
	armor = 110; // base 80
	damageResistance = 0.06; // base 0.03099

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
		ItemLRK[] = {"DZE_Veh_HMMWV_DShKM_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_DShKM_Desert_3: DZE_Veh_HMMWV_DShKM_Desert_2 {
	displayName = "$STR_VEH_NAME_HMMWV_DSHKM+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_DShKM_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_DShKM_Desert_4: DZE_Veh_HMMWV_DShKM_Desert_3 {
	displayName = "$STR_VEH_NAME_HMMWV_DSHKM++++";
	fuelCapacity = 180; // base 100
};
