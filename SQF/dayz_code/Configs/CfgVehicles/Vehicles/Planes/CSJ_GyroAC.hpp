class DZE_AutoGyro_Base: Plane {
	scope = 0;

	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	faction = "CIV";
	cabinOpening = 0;
	driverAction = "UH60_Pilot";
	vehicleClass = "DZE Vehicles Planes";
	model = "\CSJ_GyroAC\CSJ_GyroP";
	displayName = "AutoGyro";
	getInAction = "GetInLow";
	transportSoldier = 0;
	picture = "\CSJ_GyroAC\data\gyropic.paa";
	Icon = "\CSJ_GyroAC\data\gyroIcon.paa";
	destrType = "DestructWreck";
	secondaryExplosion = 0;
	gearRetracting = 0;
	nameSound = "plane";
	mapSize = 8;
	fov = 0.5;
	side = 3;
	//soundEngine[] = {"\CSJ_GyroAC\camel1.wss",5.62341,1.8};
	soundEngineOnInt[] = {"ca\sounds\Air\MV22\ext_start",0.562341,1};
	soundEngineOnExt[] = {"ca\sounds\Air\MV22\ext_start",0.562341,1,800};
	soundEngineOffInt[] = {"ca\sounds\Air\MV22\ext_stop",0.562341,1};
	soundEngineOffExt[] = {"ca\sounds\Air\MV22\ext_stop",0.562341,1,800};
	insideSoundCoef = 1;
	airBrake = 0;
	flaps = 0;
	wheelSteeringSensitivity = 0.25;
	nightVision = 0;
	preferRoads = 0;
	showWeaponCargo = 0;
	camouflage = 8;
	audible = 8;
	maxSpeed = 150;
	landingSpeed = 80;
	landingAoa = "rad 2";
	armor = 20;
	ejectSpeed[] = {0,0,0};
	ejectDamageLimit = 0.8;
	cost = 1000;
	formationX = 8;
	formationZ = 8;
	castCargoShadow = 0;
	castCommanderShadow = 0;
	castDriverShadow = 1;
	castGunnerShadow = 0;
	hideWeaponsDriver = 1;
	hideWeaponsCargo = 1;
	threat[] = {0,0,0};
	aileronSensitivity = 0.1;
	elevatorSensitivity = 0.12;
	noseDownCoef = 0;
	brakeDistance = 10;
	dammageHalf[] = {};
	dammageFull[] = {};
	extCameraPosition[] = {0,0,-5};
	mainRotorSpeed = 2;
	backRotorSpeed = 1;
	class Library {
		libTextDesc = "Auto_Gyro (CSJ)";
	};
	class ViewPilot: ViewPilot {
		initFov = 1;
		minFov = 0.3;
		maxFov = 1.2;
		initAngleX = 25;
		minAngleX = -65;
		maxAngleX = 80;
		initAngleY = 0;
		minAngleY = -155;
		maxAngleY = 155;
	};
	class AnimationSources: AnimationSources{};
	class Reflectors{};
	weapons[] = {"GyroGrenadeLauncher"};
	magazines[] = {"3Rnd_GyroGrenade"};
	class UserActions {
		class rotateLeft {
			displayName = "rotate aircraft left";
			position = "osa leve smerovky";
			onlyforplayer = 0;
			radius = 2;
			condition = "(Count (Crew this)==0) and ((getpos this select 2) <1) and (!isengineon this)";
			statement = "this exec ""\CSJ_GyroAC\scripts\CSJ_rotateGyroLeft.sqs"" ";
		};
		class rotateRight {
			displayName = "rotate aircraft right";
			position = "osa leve smerovky";
			onlyforplayer = 0;
			radius = 2;
			condition = "(Count (Crew this)==0) and ((getpos this select 2) <1) and (!isengineon this)";
			statement = "this exec ""\CSJ_GyroAC\scripts\CSJ_rotateGyroRight.sqs"" ";
		};
		/*class push {
			displayName = "$STR_ACTIONS_PUSH";
			position = "osa leve smerovky";
			onlyforplayer = 0;
			radius = 2;
			condition = "(Count (Crew this)==0) and ((getpos this select 2) <1) and (!isengineon this)";
			statement = "this exec ""\CSJ_GyroAC\scripts\CSJ_moveGyro.sqs"" ";
		};*/
		//CSJ_moveGyro.sqs uses excessive setPos per second which makes BEServer.cfg MaxSetPosPerInterval filter useless
		class PushPlane {ACTION_PUSH;};
		//class Repair {ACTION_REPAIR; radius = 4;};
		//class Salvage {ACTION_SALVAGE; radius = 4;};
	};
	class Eventhandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
	};
	class Sounds {
		class Engine {
			sound[] = {"\CSJ_GyroAC\camel1.wss",1,1,800};
			frequency = "rpm";
			volume = "(camPos)*(engineOn*(rpm factor[0.55, 1.0]))*1.7";
		};
		class EngineIn {
			sound[] = {"\CSJ_GyroAC\camel1.wss",1,1};
			frequency = "rpm";
			volume = "(1-camPos)*(engineOn*(rpm factor[0.55, 1.0]))*1.7";
		};
	};
};

class DZE_Veh_AutoGyro: DZE_AutoGyro_Base {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AutoGyro_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AutoGyro_Enclosed: DZE_AutoGyro_Base {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_AutoGyro_Enclosed_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	model = "\CSJ_GyroAC\CSJ_GyroCover";
	displayName = "AutoGyro enclosed";

	class Library {
		libTextDesc = "Auto_Gyro Enclosed(CSJ)";
	};
};

class DZE_Veh_AutoGyro_1: DZE_Veh_AutoGyro {
	displayName = "$STR_VEH_NAME_AUTOGYRO+";
	original = "DZE_Veh_AutoGyro";
	armor = 40;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AutoGyro_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AutoGyro_2: DZE_Veh_AutoGyro_1 {
	displayName = "$STR_VEH_NAME_AUTOGYRO++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AutoGyro_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AutoGyro_3: DZE_Veh_AutoGyro_2 {
	displayName = "$STR_VEH_NAME_AUTOGYRO+++";
	fuelCapacity = 2000;

	class Upgrades {};
};

class DZE_Veh_AutoGyro_Enclosed_1: DZE_Veh_AutoGyro_Enclosed {
	displayName = "$STR_VEH_NAME_AUTOGYRO_ENCLOSED+";
	original = "DZE_Veh_AutoGyro_Enclosed";
	armor = 40;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AutoGyro_Enclosed_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AutoGyro_Enclosed_2: DZE_Veh_AutoGyro_Enclosed_1 {
	displayName = "$STR_VEH_NAME_AUTOGYRO_ENCLOSED++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AutoGyro_Enclosed_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AutoGyro_Enclosed_3: DZE_Veh_AutoGyro_Enclosed_2 {
	displayName = "$STR_VEH_NAME_AUTOGYRO_ENCLOSED+++";
	fuelCapacity = 2000;

	class Upgrades {};
};
