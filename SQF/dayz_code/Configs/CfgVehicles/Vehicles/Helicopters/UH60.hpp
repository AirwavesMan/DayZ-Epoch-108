class UH60_Base: Helicopter {};
class MH60S: UH60_Base {
	class Turrets: Turrets {
		class MainTurret;
		class RightDoorGun;
	};
};
class DZE_Veh_MH60S: MH60S {
	displayName = "$STR_VEH_NAME_MH60";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};

	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 6;
	armor = 35;
	damageResistance = 0.00242;
	attendant = 0;
	transportAmmo = 0;
	radartype = 0;
	supplyRadius = 2.6;
	enableManualFire = 0;
	fuelCapacity = 2760;

	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
			discreteDistanceInitIndex = 2;
			gunnerCompartments = "compartment3";
			initElev = 5;
			initTurn = 80;
			body = "mainTurret";
			gun = "mainGun";
			minElev = -80;
			maxElev = 25;
			minTurn = 30;
			maxTurn = 150;
			soundServo[] = {"",0.01,1};
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";	// endpoint of the gun
			gunEnd = "chamber_1";	// chamber of the gun
			turretInfoType = "RscWeaponZeroing";
			weapons[] = {"M240BC_veh"};

			gunnerName = "$STR_POSITION_CREWCHIEF";
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerAction = "MH60_Gunner";
			gunnerInAction = "MH60_Gunner";
			primaryGunner = 1;
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
		};

		class RightDoorGun: RightDoorGun {
			gunnerCompartments = "compartment3";
			body = "Turret_2";
			gun = "Gun_2";
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			weapons[] = {"M240BC_veh_2"};
			animationSourceHatch = "";
			selectionFireAnim = "zasleh_1";
			proxyIndex = 2;
			gunnerName = "$STR_POSITION_DOORGUNNER";
			commanding = -2;
			minTurn = -150;
			maxTurn = -30;
			initTurn = -80;
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_2";	// endpoint of the gun
			gunEnd = "chamber_2";	// chamber of the gun
			primaryGunner = 0;
			memoryPointGun = "machinegun_2";
			memoryPointGunnerOptics = "gunnerview_2";
		};
	};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_MH60S_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_MH60S_1: DZE_Veh_MH60S {
	displayName = "$STR_VEH_NAME_MH60+";
	original = "DZE_Veh_MH60S";
	armor = 80;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_MH60S_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_MH60S_2: DZE_Veh_MH60S_1 {
	displayName = "$STR_VEH_NAME_MH60++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_MH60S_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_MH60S_3: DZE_Veh_MH60S_2 {
	displayName = "$STR_VEH_NAME_MH60+++";
	fuelCapacity = 5800;
};

class UH60M_base_EP1: UH60_Base {};
class UH60M_US_base_EP1: UH60M_base_EP1 {};
class UH60M_EP1: UH60M_US_base_EP1 {
	class Turrets: Turrets {
		class MainTurret;
		class RightDoorGun;
	};
};
class DZE_Veh_UH60M: UH60M_EP1 {
	displayName = "$STR_VEH_NAME_UH60";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};

	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 6;
	fuelCapacity = 2760;
	radartype = 0;
	supplyRadius = 2.6;

	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			minElev = -60;
			maxElev = 30;
			initElev = 0;
			minTurn = -7;
			maxTurn = 183;
			initTurn = 0;
			soundServo[] = {"",0.01,1};
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			weapons[] = {"M134"};

			gunnerName = "$STR_POSITION_CREWCHIEF";
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerAction = "UH60M_Gunner_EP1";
			gunnerInAction = "UH60M_Gunner_EP1";
			commanding = -2;
			primaryGunner = 1;
			class ViewOptics {
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			gunnerCompartments = "compartment3";
		};
		class RightDoorGun: RightDoorGun {
			body = "Turret_2";
			gun = "Gun_2";
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			weapons[] = {"M134_2"};

			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_1";
			proxyIndex = 2;
			gunnerName = "$STR_POSITION_DOORGUNNER";
			commanding = -3;
			minElev = -60;
			maxElev = 30;
			initElev = 0;
			minTurn = -183;
			maxTurn = 7;
			initTurn = 0;
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			primaryGunner = 0;
			memoryPointGun = "machinegun_1";
			memoryPointGunnerOptics = "gunnerview_2";
			gunnerCompartments = "compartment3";
		};
	};
	enableManualFire = 0;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH60M_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH60M_1: DZE_Veh_UH60M {
	displayName = "$STR_VEH_NAME_UH60+";
	original = "DZE_Veh_UH60M";
	armor = 80;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH60M_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH60M_2: DZE_Veh_UH60M_1 {
	displayName = "$STR_VEH_NAME_UH60++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH60M_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH60M_3: DZE_Veh_UH60M_2 {
	displayName = "$STR_VEH_NAME_UH60+++";
	fuelCapacity = 5800;
};

// Unarmed medevac
class UH60M_MEV_EP1;
class DZE_Veh_HH60M_MedEvac: UH60M_MEV_EP1 {
	displayName = "$STR_VEH_NAME_HH60";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 6;
	fuelCapacity = 2760;
	attendant = 0;
	radartype = 0;
	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_HH60M_MedEvac_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_HH60M_MedEvac_1: DZE_Veh_HH60M_MedEvac {
	displayName = "$STR_VEH_NAME_HH60+";
	original = "DZE_Veh_HH60M_MedEvac";
	armor = 80;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_HH60M_MedEvac_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_HH60M_MedEvac_2: DZE_Veh_HH60M_MedEvac_1 {
	displayName = "$STR_VEH_NAME_HH60++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_HH60M_MedEvac_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_HH60M_MedEvac_3: DZE_Veh_HH60M_MedEvac_2 {
	displayName = "$STR_VEH_NAME_HH60+++";
	fuelCapacity = 5800;
};
