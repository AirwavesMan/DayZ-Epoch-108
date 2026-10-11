class AW159_Lynx_BAF: Helicopter {
	class Turrets;
	class MainTurret;
};
class DZE_Veh_AW159_M240: AW159_Lynx_BAF {
	displayName = "$STR_VEH_NAME_AW159";
	vehicleClass = "DZE Vehicles Helicopters";
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	enablemanualfire = 0;

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	radartype = 0;
	transportMaxWeapons = 20;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 6;
	fuelCapacity = 2200;
	supplyRadius = 2.6;
	armor = 30;

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "obsTurret";
			gun = "obsGun";
			animationSourceBody = "obsTurret";
			animationSourceGun = "obsGun";
			stabilizedInAxes = "StabilizedInAxesBoth";
			memoryPointGunnerOptics = "commanderview";
			gunBeg = "commanderview";
			gunEnd = "laserstart";
			memoryPointGun = "laserstart";
			turretInfoType = "RscWeaponZeroing";
			gunnerAction = "AW159_Pilot_BAF";
			gunnerGetInAction = "GetInLow";
			gunnerGetOutAction = "GetOutLow";
			gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
			gunnerCompartments = "compartment3";
			minElev = -40;
			maxElev = 20;
			initElev = 0;
			minTurn = -120;
			maxTurn = 120;
			initTurn = 0;
			discreteDistance[] = {300,400,500,600,700,800};
			discreteDistanceInitIndex = 1;
			weapons[] = {"M240BC_veh"};
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.01,1.0,30};
			magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
			inGunnerMayFire = 1;
			gunnerOpticsEffect[] = {};
			class OpticsIn {
				class Wide {
					opticsDisplayName = "W";
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
					visionMode[] = {"Normal"};
				};
				class Medium: Wide {
					opticsDisplayName = "M";
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64_2";
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
				};
				class Narrow: Wide {
					opticsDisplayName = "N";
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64_3";
					initFov = 0.029;
					minFov = 0.029;
					maxFov = 0.029;
				};
			};
			class OpticsOut {
				class Monocular {
					gunnerOpticsModel = "";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.1;
					minFov = 0.133;
					maxFov = 1.1;
					visionMode[] = {"Normal"};
					gunnerOpticsEffect[] = {};
				};
			};
			startEngine = 0;
			gunnerHasFlares = 0;

		};
	};

	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AW159_M240_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AW159_M240_1: DZE_Veh_AW159_M240 {
	displayName = "$STR_VEH_NAME_AW159+";
	original = "DZE_Veh_AW159_M240";
	armor = 80;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AW159_M240_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AW159_M240_2: DZE_Veh_AW159_M240_1 {
	displayName = "$STR_VEH_NAME_AW159++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 240;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AW159_M240_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AW159_M240_3: DZE_Veh_AW159_M240_2 {
	displayName = "$STR_VEH_NAME_AW159+++";
	fuelCapacity = 4500;
};

class DZE_Veh_AW159_CRV7: AW159_Lynx_BAF {
	scope = 2;
	displayName = "$STR_VEH_NAME_AW159_CRV7";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 20;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 6;
	fuelCapacity = 2200;
	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AW159_CRV7_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AW159_CRV7_1: DZE_Veh_AW159_CRV7 {
	displayName = "$STR_VEH_NAME_AW159_CRV7+";
	original = "DZE_Veh_AW159_CRV7";
	armor = 120; // base 60
	damageResistance = 0.0111; // base 0.00555

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AW159_CRV7_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AW159_CRV7_2: DZE_Veh_AW159_CRV7_1 {
	displayName = "$STR_VEH_NAME_AW159_CRV7++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 240;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AW159_CRV7_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AW159_CRV7_3: DZE_Veh_AW159_CRV7_2 {
	displayName = "$STR_VEH_NAME_AW159_CRV7+++";
	fuelCapacity = 4500;
};
