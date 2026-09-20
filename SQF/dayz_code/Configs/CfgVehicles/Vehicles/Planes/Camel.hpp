class DZE_Camel_Base: Plane {
	scope = 0;
	vehicleClass = "DZE Vehicles Planes";
	displayName = "Camel";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	weapons[] = {"TwinVickers","pook_H13Grenades"};
	magazines[] = {"500Rnd_TwinVickers","pook_12Rnd_Grenade_Camel"};
	gunnerHasFlares = false;
	transportMaxWeapons = 7;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 3;
	fuelCapacity = 650;
	terrainCoef = 1.8;
	selectionHRotorStill = "vrtule staticka";
	selectionHRotorMove = "vrtule staticka";
	nameSound = "plane";
	accuracy = 0.3;
	maxSpeed = 210;
	gearRetracting = 0;
	flaps = 0;
	airBrake = 0;
	cabinOpening = 0;
	ejectSpeed[] = {0,0,0};
	ejectDamageLimit = 0.75;
	armor = 15;
	damageResistance = 0.00453;
	model = "CYBP\CYBP_Camels\CYBP_Camel.p3d";
	picture = "CYBP\CYBP_Camels\data\ico\BIScamel_CA.paa";
	Icon = "CYBP\CYBP_Camels\data\map_ico\icomap_camel_CA.paa";
	mapSize = 8;
	selectionFireAnim = "zasleh";
	landingSpeed = 75;
	landingAoa = "5.0*3.1415/180";
	irScanGround = 1;
	irScanRangeMin = 100;
	irScanRangeMax = 12000;
	flapsFrictionCoef = 2;
	wheelSteeringSensitivity = 0.5;
	driverAction = "Camel_a2_Pilot";
	soundDammage[] = {"\CYBP\cybp_camels\Data\Sound\Camel_dammage.wss",4.0,1,400};
	soundLandCrash[] = {"\CYBP\cybp_camels\Data\Sound\Camel_reifen.wss",5.0,1,400};
	soundCrash[] = {"\CYBP\cybp_camels\Data\Sound\Camel_crash.wss",4.0,1,1000};
	soundGetIn[] = {"\CYBP\cybp_camels\Data\Sound\Camel_goin.wss",4.0,1,150};
	soundGetOut[] = {"\CYBP\cybp_camels\Data\Sound\Camel_goout.wss",20.0,1.1,150};
	soundEngineOnInt[] = {"\CYBP\cybp_camels\Data\Sound\Camel_start.wss",0.452341,1.0};
	soundEngineOnExt[] = {"\CYBP\cybp_camels\Data\Sound\Camel_start.wss",0.884328,1.0,800};
	soundEngineOffInt[] = {"\CYBP\cybp_camels\Data\Sound\Camel_stop.wss",0.400341,1.0};
	soundEngineOffExt[] = {"\CYBP\cybp_camels\Data\Sound\Camel_stop.wss",0.884328,1.0,800};
	insideSoundCoef = 1.0;

	class HitPoints {
		class HitHull {
			armor = 1;
			material = -1;
			name = "telo";
			visual = "trup";
			passThrough = 1;
		};
	};
	class AnimationSources: AnimationSources {
		class MGHide {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};
	class Sounds {
		class EngineLowOut {
			sound[] = {"\CYBP\CYBP_Camels\Data\Sound\Camel_engine.wss",2.02341,0.8,1300};
			frequency = "1.0 min (rpm + 0.5)";
			volume = "engineOn*camPos*(rpm factor[0.85, 0])";
		};
		class EngineHighOut {
			sound[] = {"\CYBP\CYBP_Camels\Data\Sound\Camel_engine.wss",2.62341,1.3,1900};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.55, 1.0])";
		};
		class ForsageOut {
			sound[] = {"\CYBP\cybp_camels\Data\Sound\Camel_idle1a.wss",1.49189,2.0,1000};
			frequency = "1";
			volume = "engineOn*camPos*(thrust factor[0.5, 1.0])";
			cone[] = {3.14,3.92,2.0,0.4};
		};
		class WindNoiseOut {
			sound[] = {"\CYBP\cybp_camels\Data\Sound\Camel_wind.wss",3.758374,3.0,900};
			frequency = "(0.1+(1.2*(speed factor[1, 150])))";
			volume = "camPos*(speed factor[1, 150])";
		};
		class EngineLowIn {
			sound[] = {"\CYBP\CYBP_Camels\Data\Sound\Camel_engine.wss",2.02341,0.8};
			frequency = "1.0 min (rpm + 0.5)";
			volume = "engineOn*camPos*(rpm factor[0.85, 0])";
		};
		class EngineHighIn {
			sound[] = {"\CYBP\CYBP_Camels\Data\Sound\Camel_engine.wss",2.62341,1.3};
			frequency = "1";
			volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))";
		};
		class ForsageIn {
			sound[] = {"\CYBP\cybp_camels\Data\Sound\Camel_idle1a.wss",1.49189,2.0};
			frequency = "1";
			volume = "(1-camPos)*(engineOn*(thrust factor[0.8, 1.0]))";
		};
		class WindNoiseIn {
			sound[] = {"\CYBP\cybp_camels\Data\Sound\Camel_wind.wss",3.758374,3.0};
			frequency = "(0.1+(1.2*(speed factor[1, 150])))";
			volume = "(1-camPos)*(speed factor[1, 150])";
		};
		class NoiseIn {
			sound[] = {"ca\sounds\Vehicles\Tracked\M1A1\int\noise2",0.1,0.5};
			frequency = "(0.1+(1.2*(speed factor[1, 150])))";
			volume = "(1-camPos)*(speed factor[1, 150])";
		};
	};
	gunAimDown = 0;
	transportSoldier = 0;
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"CYBP\CYBP_Camels\data\camel_west_co.paa","","CYBP\CYBP_Camels\data\clear_empty.paa"};
	extCameraPosition[] = {0,1.2,-13};
	type = 2;
	threat[] = {0.1,1,0.7};
	audible = 8;
	aileronSensitivity = 0.66;
	elevatorSensitivity = 0.33;
	envelope[] = {0.0,0.2,0.9,2.1,2.5,3.3,3.5,3.2,2.5,2.0,1.5,1.0};
	fov = 0.5;
	class ViewOptics {
		initAngleX = 0;
		minAngleX = 0;
		maxAngleX = 0;
		initAngleY = 0;
		minAngleY = 0;
		maxAngleY = 0;
		initFov = 0.5;
		minFov = 0.5;
		maxFov = 0.5;
	};
	class ViewPilot: ViewPilot {
		initFov = 1;
		minFov = 0.4;
		maxFov = 1.2;
		initAngleX = 10;
		minAngleX = -45;
		maxAngleX = 85;
		initAngleY = 0;
		minAngleY = -150;
		maxAngleY = 150;
	};
	class Reflectors {
		class Left {
			color[] = {0,0,0,1.0};
			ambient[] = {0,0,0,1.0};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 1;
			brightness = 0.25;
		};
		class Right {
			color[] = {0,0,0,1.0};
			ambient[] = {0,0,0,1.0};
			position = "P svetlo";
			direction = "konec P svetla";
			hitpoint = "P svetlo";
			selection = "P svetlo";
			size = 1;
			brightness = 0.25;
		};
	};
	class Library {
		libTextDesc = "Plane";
	};
	class Damage {
		tex[] = {};
		mat[] = {"CYBP\CYBP_Camels\data\camel_west.rvmat","CYBP\CYBP_Camels\data\camel_west.rvmat","CYBP\CYBP_Camels\data\camel_west_destruct.rvmat"};
	};
};

class DZE_Veh_Camel_West: DZE_Camel_Base {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Camel_West_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	displayName = "$STR_VEH_NAME_CAMEL_WEST";
	scope = 2;
};

class DZE_Veh_Camel_East: DZE_Camel_Base {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Camel_East_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	hiddenSelectionsTextures[] = {"CYBP\CYBP_Camels\data\camel_east_co.paa","","CYBP\CYBP_Camels\data\clear_empty.paa"};
	picture = "CYBP\CYBP_Camels\data\ico\BIScamel2_CA.paa";
	displayName = "$STR_VEH_NAME_CAMEL_EAST";

	class Damage {
		tex[] = {};
		mat[] = {"CYBP\CYBP_Camels\data\camel_east.rvmat","CYBP\CYBP_Camels\data\camel_east.rvmat","CYBP\CYBP_Camels\data\camel_east_destruct.rvmat"};
	};
};

class DZE_Veh_Camel_Civil: DZE_Camel_Base {
	scope = 2;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Camel_Civil_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	weapons[] = {};
	magazines[] = {};
	hiddenSelectionsTextures[] = {"CYBP\CYBP_Camels\data\clear_empty.paa","","CYBP\CYBP_Camels\data\clear_empty.paa"};
	displayName = "$STR_VEH_NAME_CAMEL_CIVIL";
	transportSoldier = 2;
	cargoGetInAction[] = {"GetInLow"};
	cargoGetOutAction[] = {"GetOutLow"};
	cargoAction[] = {"Mi8_Cargo","Mi8_Cargo"};
	driverCompartments = "Compartment1";
	cargoCompartments[] = {"Compartment2"};
	memoryPointsGetInCargo = "pos driver";
	memoryPointsGetInCargoDir = "pos driver dir";

	class AnimationSources: AnimationSources {
		class MGHide {
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"CYBP\CYBP_Camels\data\camel_east.rvmat","CYBP\CYBP_Camels\data\camel_east.rvmat","CYBP\CYBP_Camels\data\camel_east_destruct.rvmat"};
	};
};

class DZE_Veh_Camel_West_1: DZE_Veh_Camel_West {
	displayName = "$STR_VEH_NAME_CAMEL_WEST+";
	original = "DZE_Veh_Camel_West";
	armor = 30;
	damageResistance = 0.00906;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Camel_West_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Camel_West_2: DZE_Veh_Camel_West_1 {
	displayName = "$STR_VEH_NAME_CAMEL_WEST++";
	transportMaxWeapons = 14;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 6;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Camel_West_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Camel_West_3: DZE_Veh_Camel_West_2 {
	displayName = "$STR_VEH_NAME_CAMEL_WEST+++";
	fuelCapacity = 1300;

	class Upgrades {};
};

class DZE_Veh_Camel_East_1: DZE_Veh_Camel_East {
	displayName = "$STR_VEH_NAME_CAMEL_EAST+";
	original = "DZE_Veh_Camel_East";
	armor = 30;
	damageResistance = 0.00906;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Camel_East_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Camel_East_2: DZE_Veh_Camel_East_1 {
	displayName = "$STR_VEH_NAME_CAMEL_EAST++";
	transportMaxWeapons = 14;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 6;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Camel_East_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Camel_East_3: DZE_Veh_Camel_East_2 {
	displayName = "$STR_VEH_NAME_CAMEL_EAST+++";
	fuelCapacity = 1300;

	class Upgrades {};
};

class DZE_Veh_Camel_Civil_1: DZE_Veh_Camel_Civil {
	displayName = "$STR_VEH_NAME_CAMEL_CIVIL+";
	original = "DZE_Veh_Camel_Civil";
	armor = 30;
	damageResistance = 0.00906;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Camel_Civil_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Camel_Civil_2: DZE_Veh_Camel_Civil_1 {
	displayName = "$STR_VEH_NAME_CAMEL_CIVIL++";
	transportMaxWeapons = 14;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 6;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Camel_Civil_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Camel_Civil_3: DZE_Veh_Camel_Civil_2 {
	displayName = "$STR_VEH_NAME_CAMEL_CIVIL+++";
	fuelCapacity = 1300;

	class Upgrades {};
};
