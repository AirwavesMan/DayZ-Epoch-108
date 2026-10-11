class DZE_Mozzie_Base: Helicopter {
	scope = 0;
	displayName = "Mozzie";
	model = "\CSJ_GyroAC\CSJ_GyroC.p3d";
	destrType = "DestructWreck";
	vehicleClass = "CSJ_Air";
	picture = "\CSJ_GyroAC\data\MozPic.paa";
	Icon = "\CSJ_GyroAC\data\Cicon.paa";
	nameSound = "chopper";
	faction = "CIV";
	type = "VAir";
	driverAction = "UH60_Pilot";
	secondaryExplosion = 0;
	mapSize = 8;
	side = 3;
	cabinOpening = 0;
	hiddenSelections[] = {"0","1","2","3","4","5"};
	maxSpeed = 120;

	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	accuracy = 0.3;
	armor = 30;
	damageResistance = 0.003;
	cost = 100000;
	transportSoldier = 0;
	cargoAction[] = {};
	transportAmmo = 0;
	supplyRadius = 2.5;
	fov = 0.5;
	hasGunner = 0;
	class Turrets{};
	insideSoundCoef = 1;
	formationX = 8;
	formationZ = 8;
	threat[] = {0,0,0};
	extCameraPosition[] = {0,0,-5};
	soundGetIn[] = {"",0.1,1};
	soundGetOut[] = {"",0.1,1};
	//soundEngine[] = {"\CSJ_GyroAC\UH1_v1.wss",10.1189,2};
	soundEngineOnInt[] = {"\z\addons\dayz_code\Configs\CfgVehicles\Vehicles\Helicopters\UH1_v1int",1,1};
	soundEngineOnExt[] = {"\z\addons\dayz_code\Configs\CfgVehicles\Vehicles\Helicopters\UH1_v1int",1,1,800};
	soundEngineOffInt[] = {"\z\addons\dayz_code\Configs\CfgVehicles\Vehicles\Helicopters\UH1_v1stop",1,1};
	soundEngineOffExt[] = {"\z\addons\dayz_code\Configs\CfgVehicles\Vehicles\Helicopters\UH1_v1stop",1,1,800};
	weapons[] = {"GyroGrenadeLauncher"};
	magazines[] = {"3Rnd_GyroGrenade"};
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	forceHideDriver = 1;
	castDriverShadow = 1;
	mainRotorSpeed = 1.5;
	backRotorSpeed = 4;
	class ViewPilot: ViewPilot {
		initFov = 1;
		minFov = 0.3;
		maxFov = 1.2;
		initAngleX = 35;
		minAngleX = -45;
		maxAngleX = 80;
		initAngleY = 0;
		minAngleY = -155;
		maxAngleY = 155;
	};
	class Library {
		libTextDesc = "CSJ_Mozzie";
	};
	dammageHalf[] = {};
	dammageFull[] = {};
	class Reflectors{};
	class AnimationSources: AnimationSources{};
	class UserActions {
		//class Repair {ACTION_REPAIR; radius = 4;};
		//class Salvage {ACTION_SALVAGE; radius = 4;};
	};
	class Eventhandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
	};
	class Sounds {
		class Engine {
			frequency = "rotorSpeed";
			volume = "camPos*((rotorSpeed-0.72)*5)";
			//sound[] = {"Ca\Sounds_E\Air_E\UH1H\UH1H_engine_ext_2",1,1,800};
			sound[] = {"\CSJ_GyroAC\UH1_v1.wss",1,1,800};
		};
		class EngineIn {
			frequency = "rotorSpeed";
			volume = "(rotorSpeed-0.72)*5";
			sound[] = {"\CSJ_GyroAC\UH1_v1.wss",1,1};
		};
	};
};

class DZE_Veh_Mozzie: DZE_Mozzie_Base {
	displayName = "$STR_VEH_NAME_MOZZIE";
	vehicleClass = "DZE Vehicles Helicopters";

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_Mozzie_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	transportMaxMagazines = 3;
	transportMaxWeapons = 1;
	fuelCapacity = 200;
	DZE_MACRO_VEHICLE_SIDE
};

class DZE_Veh_Mozzie_1: DZE_Veh_Mozzie {
	displayName = "$STR_VEH_NAME_MOZZIE+";
	original = "DZE_Veh_Mozzie";
	armor = 60;
	damageResistance = 0.006;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_Mozzie_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_Mozzie_2: DZE_Veh_Mozzie_1 {
	displayName = "$STR_VEH_NAME_MOZZIE++";
	transportMaxWeapons = 2;
	transportMaxMagazines = 6;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_Mozzie_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_Mozzie_3: DZE_Veh_Mozzie_2 {
	displayName = "$STR_VEH_NAME_MOZZIE+++";
	fuelCapacity = 400;

	class Upgrades {};
};
