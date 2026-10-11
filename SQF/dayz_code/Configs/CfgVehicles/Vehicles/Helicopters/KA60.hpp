class Ka60_GL_BASE_PMC;
class Ka60_GL_PMC: Ka60_GL_BASE_PMC {
	class Turrets;
	class MainTurret;
};

class DZE_Veh_Ka60_PKT: Ka60_GL_PMC {
	displayName = "$STR_VEH_NAME_KA60";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	radartype = 0;
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	transportMaxWeapons = 20;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 6;
	fuelCapacity = 2200;
	supplyRadius = 2.6;

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesBoth";
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			turretInfoType = "RscWeaponZeroing";
			gunnerName = "$STR_POSITION_DOORGUNNER";
			gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
			gunnerAction = "Mi8_Gunner";
			gunnerInAction = "Mi8_Gunner";
			gunnerCompartments = "compartment3";
			minElev = -50;
			maxElev = 30;
			initElev = 0;
			minTurn = 20;
			maxTurn = 155;
			initTurn = 80;
			soundServo[] = {"",0.01,1.0};
			discreteDistance[] = {300,400,500,600,700,800};
			discreteDistanceInitIndex = 1;
			gunnerForceOptics = 0;
			weapons[] = {"PKTBC"};
			maxHorizontalRotSpeed = 1.6;
			maxVerticalRotSpeed = 1.6;
			magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
			commanding = -2;
			primaryGunner = 1;

			class OpticsIn {
				class Wide {
					opticsDisplayName = "W";
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = -10;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.1;
					minFov = 0.1;
					maxFov = 0.1;
					visionMode[] = {"Normal"};
				};
				class Medium: Wide {
					opticsDisplayName = "M";
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
					initFov = 0.063;
					minFov = 0.063;
					maxFov = 0.063;
				};
				class Narrow: Wide {
					opticsDisplayName = "N";
					gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
					initFov = 0.019;
					minFov = 0.019;
					maxFov = 0.019;
				};
			};
			class OpticsOut {
				class Monocular {
					gunnerOpticsModel = "";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = -10;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 1.1;
					minFov = 0.133;
					maxFov = 1.1;
					visionMode[] = {"Normal"};
					gunnerOpticsEffect[] = {};
				};
			};
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
	};

	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Ka60_PKT_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka60_PKT_1: DZE_Veh_Ka60_PKT {
	displayName = "$STR_VEH_NAME_KA60+";
	original = "DZE_Veh_Ka60_PKT";
	armor = 70;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Ka60_PKT_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka60_PKT_2: DZE_Veh_Ka60_PKT_1 {
	displayName = "$STR_VEH_NAME_KA60++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 240;
	transportMaxBackpacks = 12;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Ka60_PKT_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Ka60_PKT_3: DZE_Veh_Ka60_PKT_2 {
	displayName = "$STR_VEH_NAME_KA60+++";
	fuelCapacity = 4500;
};

class DZE_Veh_Ka60_M32: Ka60_GL_PMC {
	scope = 2;
	displayName = "$STR_VEH_NAME_KA60_M32";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Ka60_M32_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka60_M32_1: DZE_Veh_Ka60_M32 {
	displayName = "$STR_VEH_NAME_KA60_M32+";
	original = "DZE_Veh_Ka60_M32";
	armor = 60; // base 30
	damageResistance = 0.008; // base 0.004

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Ka60_M32_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka60_M32_2: DZE_Veh_Ka60_M32_1 {
	displayName = "$STR_VEH_NAME_KA60_M32++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Ka60_M32_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Ka60_M32_3: DZE_Veh_Ka60_M32_2 {
	displayName = "$STR_VEH_NAME_KA60_M32+++";
	fuelCapacity = 2000; // base 1000
};

class Ka60_PMC;
class DZE_Veh_Ka60_Rockets: Ka60_PMC {
	scope = 2;
	displayName = "$STR_VEH_NAME_KA60_ROCKETS";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Ka60_Rockets_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka60_Rockets_1: DZE_Veh_Ka60_Rockets {
	displayName = "$STR_VEH_NAME_KA60_ROCKETS+";
	original = "DZE_Veh_Ka60_Rockets";
	armor = 60; // base 30
	damageResistance = 0.008; // base 0.004

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Ka60_Rockets_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Ka60_Rockets_2: DZE_Veh_Ka60_Rockets_1 {
	displayName = "$STR_VEH_NAME_KA60_ROCKETS++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Ka60_Rockets_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Ka60_Rockets_3: DZE_Veh_Ka60_Rockets_2 {
	displayName = "$STR_VEH_NAME_KA60_ROCKETS+++";
	fuelCapacity = 2000; // base 1000
};
