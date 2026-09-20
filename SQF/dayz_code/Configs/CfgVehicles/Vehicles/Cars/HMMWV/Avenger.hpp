class DZE_Veh_HMMWV_Avenger_Woodland: DZE_HMMWV_Base {
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_WDL";
	scope = 2;
	model = "\ca\wheeled2\HMMWV\M998A2_Avenger\M998A2_Avenger.p3d";
	picture = "\Ca\wheeled2\data\ui\Picture_M998A2_CA.paa";
	Icon = "\Ca\wheeled2\data\ui\Icon_M998A2_CA.paa";
	driverAction = "HMMWV_Driver_EP1";
	cargoAction[] = {"HMMWV_Cargo01"};

	DZE_MACRO_VEHICLE_CLEAR_CARGO

	transportSoldier = 1;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	damageResistance = 0.00581;
	irScanRangeMin = 0;
	irScanRangeMax = 1500;
	irScanToEyeFactor = 3;
	irScanGround = "false";
	class HitPoints: HitPoints {
		class HitGlass5: HitGlass1 {
			name = "glass5";
			visual = "glass5";
		};
	};
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			gunnerAction = "AH1Z_Gunner";
			gunnerInAction = "AH1Z_Gunner";
			gunnerGetInAction = "GetInMedium";
			gunnerGetOutAction = "GetOutMedium";
			memoryPointGun = "machinegun";
			weapons[] = {"StingerLaucher", "M3P"};
			magazines[] = {"8Rnd_Stinger", "250Rnd_127x99_M3P", "250Rnd_127x99_M3P"};
			minElev = -10;
			maxElev = 70;
			initElev = 0;
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			gunnerOpticsModel = "\ca\weapons\2Dscope_Avenger";
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.155;
				minFov = 0.047;
				maxFov = 0.155;
				thermalMode[] = {2, 3};
				visionMode[] = {"Normal", "Ti"};
			};
			class HitPoints: HitPoints {
				class HitTurret {
					armor = 0.8;
					material = -1;
					name = "vez";
					visual = "vez";
					passThrough = 1;
				};
			};
			gunnerCompartments = "Compartment2";
			stabilizedInAxes = "StabilizedInAxesBoth";
			turretInfoType = "RscWeaponRangeZeroing";
			viewGunnerInExternal = 0;
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled\hmmwv\data\hmmwv_body.rvmat", "ca\wheeled\hmmwv\data\hmmwv_body_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_body_Full_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_details.rvmat", "ca\wheeled\hmmwv\data\hmmwv_details_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_details_Full_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_parts_1.rvmat", "ca\wheeled\hmmwv\data\hmmwv_parts_1_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_parts_1_Full_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat", "ca\wheeled\data\hmmwv_clocks_destruct.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass_in.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat", "ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_damage.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_destruct.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_in.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_in_damage.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_2_in_damage.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3_damage.rvmat", "ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3_destruct.rvmat"};
	};
	class AnimationSources: AnimationSources {
		class HitGlass5 {
			source = "Hit";
			hitpoint = "HitGlass5";
			raw = 1;
		};
	};
	hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
	hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa", "\ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_1_co.paa", "\ca\wheeled2\hmmwv\m998a2_avenger\data\m998a2_avenger_3_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_Avenger_Woodland_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Avenger_Woodland_1: DZE_Veh_HMMWV_Avenger_Woodland  {
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_WDL+";
	original = "DZE_Veh_HMMWV_Avenger_Woodland";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_Avenger_Woodland_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_Avenger_Woodland_2: DZE_Veh_HMMWV_Avenger_Woodland_1 {
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_WDL++";
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
		ItemLRK[] = {"DZE_Veh_HMMWV_Avenger_Woodland_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Avenger_Woodland_3: DZE_Veh_HMMWV_Avenger_Woodland_2 {
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_WDL+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_Avenger_Woodland_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_Avenger_Woodland_4: DZE_Veh_HMMWV_Avenger_Woodland_3 {
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_WDL++++";
	fuelCapacity = 180; // base 100
};

class DZE_Veh_HMMWV_Avenger_Desert: DZE_HMMWV_Base {
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_DES";
	scope = 2;
	model = "\ca\wheeled_e\HMMWV\M998A2_Avenger.p3d";
	picture = "\Ca\wheeled2\data\ui\Picture_M998A2_CA.paa";
	Icon = "\Ca\wheeled2\data\ui\Icon_M998A2_CA.paa";
	driverAction = "HMMWV_Driver_EP1";
	cargoAction[] = {"HMMWV_Cargo01"};

	DZE_MACRO_VEHICLE_CLEAR_CARGO

	transportSoldier = 1;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	damageResistance = 0.00581;
	irScanRangeMin = 0;
	irScanRangeMax = 1500;
	irScanToEyeFactor = 3;
	irScanGround = "false";
	class HitPoints: HitPoints {
		class HitGlass5: HitGlass1 {
			name = "glass5";
			visual = "glass5";
		};
	};
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			gunnerAction = "AH1Z_Gunner";
			gunnerInAction = "AH1Z_Gunner";
			gunnerGetInAction = "GetInMedium";
			gunnerGetOutAction = "GetOutMedium";
			memoryPointGun = "machinegun";
			weapons[] = {"StingerLaucher", "M3P"};
			magazines[] = {"8Rnd_Stinger", "250Rnd_127x99_M3P", "250Rnd_127x99_M3P"};
			minElev = -10;
			maxElev = 70;
			initElev = 0;
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			gunnerOpticsModel = "\ca\weapons\2Dscope_Avenger";
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.155;
				minFov = 0.047;
				maxFov = 0.155;
				thermalMode[] = {2, 3};
				visionMode[] = {"Normal", "Ti"};
			};
			class HitPoints: HitPoints {
				class HitTurret {
					armor = 0.8;
					material = -1;
					name = "vez";
					visual = "vez";
					passThrough = 1;
				};
			};
			gunnerCompartments = "Compartment2";
			stabilizedInAxes = "StabilizedInAxesBoth";
			turretInfoType = "RscWeaponRangeZeroing";
			viewGunnerInExternal = 0;
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat", "Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_1.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_1_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_1_destruct.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_destruct.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_in.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_in_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_in_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_3.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_3_damage.rvmat", "Ca\wheeled_E\HMMWV\Data\m998a2_avenger_3_destruct.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default.rvmat", "Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class AnimationSources: AnimationSources {
		class HitGlass5 {
			source = "Hit";
			hitpoint = "HitGlass5";
			raw = 1;
		};
	};
	hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
	hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa", "\CA\wheeled_E\HMMWV\Data\M998A2_Avenger_1_US_CO.paa", "\CA\wheeled_E\HMMWV\Data\M998A2_Avenger_3_US_CO.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_Avenger_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Avenger_Desert_1: DZE_Veh_HMMWV_Avenger_Desert  {
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_DES+";
	original = "DZE_Veh_HMMWV_Avenger_Desert";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_Avenger_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_Avenger_Desert_2: DZE_Veh_HMMWV_Avenger_Desert_1 {
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_DES++";
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
		ItemLRK[] = {"DZE_Veh_HMMWV_Avenger_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_Avenger_Desert_3: DZE_Veh_HMMWV_Avenger_Desert_2 {
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_DES+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_Avenger_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_Avenger_Desert_4: DZE_Veh_HMMWV_Avenger_Desert_3 {
	displayName = "$STR_VEH_NAME_HMMWV_AVENGER_DES++++";
	fuelCapacity = 180; // base 100
};
