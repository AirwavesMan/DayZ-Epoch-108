class DZE_Veh_HMMWV_CROWS_MK19: DZE_HMMWV_Base {
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_MK19";
	scope = 2;
	model = "\ca\wheeled_e\HMMWV\M998_crows_Mk19";
	picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_crows_CA.paa";
	icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_crows_CA.paa";
	driverAction = "HMMWV_Driver_EP1";
	cargoAction[] = {"HMMWV_Cargo_EP1", "HMMWV_Cargo02_EP1"};
	cargoIsCoDriver[] = {1, 0};

	DZE_MACRO_VEHICLE_CLEAR_CARGO

	transportSoldier = 2;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	damageResistance = 0.00581;

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			weapons[] = {"MK19BC", "SmokeLauncher"};
			magazines[] = {"48Rnd_40mm_MK19", "48Rnd_40mm_MK19", "48Rnd_40mm_MK19", "48Rnd_40mm_MK19", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag"};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1", 0.01, 1, 10};
			viewGunnerInExternal = 0;
			turretInfoType = "RscWeaponRangeZeroing";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
			discreteDistanceInitIndex = 2;
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 60;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = 0.3;
				minFov = 0.015;
				maxFov = 0.3;
				visionMode[] = {"Normal", "Ti", "NVG"};
				thermalMode[] = {2, 3};
			};
			gunnerAction = "HMMWV_Gunner04_EP1";
			gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
			gunnerForceOptics = 1;
			class GunFire: WeaponCloudsMGun {
				interval = 0.01;
			};
			stabilizedInAxes = "StabilizedInAxesBoth";
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
	};
	hiddenSelections[] = {"camo", "camo1", "camo2"};
	hiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_1_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_regular_2_co.paa"};
	smokeLauncherGrenadeCount = 4;
	smokeLauncherVelocity = 8;
	smokeLauncherOnTurret = 1;
	smokeLauncherAngle = 120;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_CROWS_MK19_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_CROWS_MK19_1: DZE_Veh_HMMWV_CROWS_MK19  {
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_MK19+";
	original = "DZE_Veh_HMMWV_CROWS_MK19";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_CROWS_MK19_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_CROWS_MK19_2: DZE_Veh_HMMWV_CROWS_MK19_1 {
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_MK19++";
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
		ItemLRK[] = {"DZE_Veh_HMMWV_CROWS_MK19_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_CROWS_MK19_3: DZE_Veh_HMMWV_CROWS_MK19_2 {
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_MK19+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_CROWS_MK19_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_CROWS_MK19_4: DZE_Veh_HMMWV_CROWS_MK19_3 {
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_MK19++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_HMMWV_CROWS_M2: DZE_HMMWV_Base {
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_M2";
	scope = 2;
	model = "\ca\wheeled_e\HMMWV\M998_crows";
	picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_crows_CA.paa";
	icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_crows_CA.paa";
	driverAction = "HMMWV_Driver_EP1";
	cargoAction[] = {"HMMWV_Cargo_EP1", "HMMWV_Cargo02_EP1"};
	cargoIsCoDriver[] = {1, 0};

	DZE_MACRO_VEHICLE_CLEAR_CARGO

	transportSoldier = 2;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	damageResistance = 0.00581;
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			weapons[] = {"M2BC", "SmokeLauncher"};
			turretInfoType = "RscWeaponRangeZeroing";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
			magazines[] = {"100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "100Rnd_127x99_M2", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag"};
			minElev = -25;
			maxElev = 60;
			viewGunnerInExternal = 0;
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 60;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = 0.3;
				minFov = 0.015;
				maxFov = 0.3;
				visionMode[] = {"Normal", "NVG", "Ti"};
				thermalMode[] = {2, 3};
			};
			gunnerAction = "HMMWV_Gunner04_EP1";
			gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
			gunnerForceOptics = 1;
			stabilizedInAxes = "StabilizedInAxesBoth";
			discreteDistanceInitIndex = 2;
		};
	};
	class AnimationSources: AnimationSources {
		class ReloadAnim {
			source = "reload";
			weapon = "M2BC";
		};
		class ReloadMagazine {
			source = "reloadmagazine";
			weapon = "M2BC";
		};
		class Revolving {
			source = "revolving";
			weapon = "M2BC";
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
	};
	hiddenSelections[] = {"camo", "camo1", "camo2"};
	hiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_1_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa", "ca\wheeled_e\hmmwv\data\hmmwv_regular_2_co.paa"};
	smokeLauncherGrenadeCount = 4;
	smokeLauncherVelocity = 8;
	smokeLauncherOnTurret = 1;
	smokeLauncherAngle = 120;

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_CROWS_M2_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_CROWS_M2_1: DZE_Veh_HMMWV_CROWS_M2  {
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_M2+";
	original = "DZE_Veh_HMMWV_CROWS_M2";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_CROWS_M2_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_CROWS_M2_2: DZE_Veh_HMMWV_CROWS_M2_1 {
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_M2++";
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
		ItemLRK[] = {"DZE_Veh_HMMWV_CROWS_M2_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_CROWS_M2_3: DZE_Veh_HMMWV_CROWS_M2_2 {
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_M2+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_CROWS_M2_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_CROWS_M2_4: DZE_Veh_HMMWV_CROWS_M2_3 {
	displayName = "$STR_VEH_NAME_HMMWV_CROWS_M2++++";
	fuelCapacity = 180; // base 100
};
