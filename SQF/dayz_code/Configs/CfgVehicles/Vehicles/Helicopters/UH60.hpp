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
			gunnerCompartments = "compartment3";
			body = "mainTurret";
			gun = "mainGun";
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1"; // endpoint of the gun
			gunEnd = "chamber_1"; // chamber of the gun
			turretInfoType = "RscWeaponZeroing";
			gunnerName = "$STR_POSITION_CREWCHIEF";
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerAction = "MH60_Gunner";
			gunnerInAction = "MH60_Gunner";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
			discreteDistanceInitIndex = 2;
			initElev = 5;
			initTurn = 80;
			minElev = -80;
			maxElev = 25;
			minTurn = 30;
			maxTurn = 150;
			soundServo[] = {"",0.01,1};
			weapons[] = {"M240BC_veh"};
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
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
			animationSourceHatch = "";
			selectionFireAnim = "zasleh_1";
			gunnerName = "$STR_POSITION_DOORGUNNER";
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_2"; // endpoint of the gun
			gunEnd = "chamber_2"; // chamber of the gun
			memoryPointGun = "machinegun_2";
			memoryPointGunnerOptics = "gunnerview_2";
			weapons[] = {"M240BC_veh_2"};
			proxyIndex = 2;
			commanding = -2;
			minTurn = -150;
			maxTurn = -30;
			initTurn = -80;
			primaryGunner = 0;
		};
	};

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_MH60S_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_MH60S_1: DZE_Veh_MH60S {
	displayName = "$STR_VEH_NAME_MH60+";
	original = "DZE_Veh_MH60S";
	armor = 80;
	damageResistance = 0.02078;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_MH60S_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_MH60S_2: DZE_Veh_MH60S_1 {
	displayName = "$STR_VEH_NAME_MH60++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_MH60S_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
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
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			gunnerName = "$STR_POSITION_CREWCHIEF";
			gunnerOpticsModel = "\ca\weapons\optika_empty";
			gunnerAction = "UH60M_Gunner_EP1";
			gunnerInAction = "UH60M_Gunner_EP1";
			gunnerCompartments = "compartment3";
			minElev = -60;
			maxElev = 30;
			initElev = 0;
			minTurn = -7;
			maxTurn = 183;
			initTurn = 0;
			soundServo[] = {"",0.01,1};
			weapons[] = {"M134"};
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
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
		};
		class RightDoorGun: RightDoorGun {
			body = "Turret_2";
			gun = "Gun_2";
			animationSourceBody = "Turret_2";
			animationSourceGun = "Gun_2";
			stabilizedInAxes = "StabilizedInAxesNone";
			selectionFireAnim = "zasleh_1";
			gunnerName = "$STR_POSITION_DOORGUNNER";
			gunBeg = "muzzle_2";
			gunEnd = "chamber_2";
			memoryPointGun = "machinegun_1";
			memoryPointGunnerOptics = "gunnerview_2";
			gunnerCompartments = "compartment3";
			weapons[] = {"M134_2"};
			proxyIndex = 2;
			commanding = -3;
			minElev = -60;
			maxElev = 30;
			initElev = 0;
			minTurn = -183;
			maxTurn = 7;
			initTurn = 0;
			primaryGunner = 0;

		};
	};
	enableManualFire = 0;

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_UH60M_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_UH60M_1: DZE_Veh_UH60M {
	displayName = "$STR_VEH_NAME_UH60+";
	original = "DZE_Veh_UH60M";
	armor = 80;
	damageResistance = 0.02078;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_UH60M_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_UH60M_2: DZE_Veh_UH60M_1 {
	displayName = "$STR_VEH_NAME_UH60++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_UH60M_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
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
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_HH60M_MedEvac_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_HH60M_MedEvac_1: DZE_Veh_HH60M_MedEvac {
	displayName = "$STR_VEH_NAME_HH60+";
	original = "DZE_Veh_HH60M_MedEvac";
	armor = 80;
	damageResistance = 0.02078;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_HH60M_MedEvac_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_HH60M_MedEvac_2: DZE_Veh_HH60M_MedEvac_1 {
	displayName = "$STR_VEH_NAME_HH60++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 200;
	transportMaxBackpacks = 12;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_HH60M_MedEvac_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_HH60M_MedEvac_3: DZE_Veh_HH60M_MedEvac_2 {
	displayName = "$STR_VEH_NAME_HH60+++";
	fuelCapacity = 5800;
};
