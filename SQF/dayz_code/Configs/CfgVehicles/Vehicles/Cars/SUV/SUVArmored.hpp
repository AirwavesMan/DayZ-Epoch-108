class DZE_SUV_Armored_Base: Car {
	scope = 0;
	displayName = "SUV (Armored)";
	vehicleClass = "DZE Vehicles Cars";
	model = "\Ca\Wheeled_PMC\ArmoredSUV\armoredSUV_PMC.p3d";
	icon = "\ca\Wheeled_PMC\data\ui\Icon_suv_minigun_PMC.paa";
	picture = "\ca\Wheeled_PMC\data\ui\Picture_suv_minigun_PMC_ca.paa";
	driverAction = "SUV_Driver_EP1";
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	DZE_MACRO_VEHICLE_SIDE
	brakeDistance = 19;
	htMin = 60;
	htMax = 1800;
	afMax = 200;
	mfMax = 100;
	mFact = 1;
	tBody = 200;
	expansion = 4;
	mapSize = 7;
	maxSpeed = 230;
	accuracy = 0.2;
	armor = 120;
	damageResistance = 0.03099;
	transportSoldier = 3;
	fuelCapacity = 130;
	supplyRadius = 1.3;
	weapons[] = {"MiniCarHorn"};
	cargoAction[] = {"SUV_Cargo_EP1","SUV_Cargo02_EP1","SUV_Cargo01_EP1"};
	outsideSoundFilter = 1;
	insideSoundCoef = 0.8;
	soundGear[] = {"",5.62341e-005,1};
	soundGetIn[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.56234133,1,20};
	soundGetOut[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",0.562341,1,20};
	soundEngineOnInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_start",0.177828,1};
	soundEngineOnExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_start",0.177828,1,100};
	soundEngineOffInt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_stop",0.177828,1};
	soundEngineOffExt[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_stop",0.177828,1,100};
	buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.707946,1,200};
	buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.707946,1,200};
	buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.707946,1,200};
	buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.707946,1,200};
	soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
	WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.707946,1,200};
	WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.707946,1,200};
	WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.707946,1,200};
	WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.707946,1,200};
	WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.707946,1,200};
	WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.707946,1,200};
	soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
	ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.707946,1,200};
	ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.707946,1,200};
	ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.707946,1,200};
	ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.707946,1,200};
	soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
	class SoundEvents {
		class AccelerationIn {
			limit = "0.4";
			expression = "(engineOn*(1-camPos))*gmeterZ";
			sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_accelerate_3_x",0.562341,1};
		};
		class AccelerationOut {
			limit = "0.4";
			expression = "(engineOn*camPos)*gmeterZ";
			sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_accelerate_3",0.562341,1,200};
		};
	};
	class Sounds {
		class Engine {
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
			sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_low",0.177828,1.4,100};
		};
		class EngineHighOut {
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_high",1,0.8,300};
		};
		class IdleOut {
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_idle",0.562341,1,100};
		};
		class TiresRockOut {
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.316228,1,30};
		};
		class TiresSandOut {
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.316228,1,30};
		};
		class TiresGrassOut {
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.316228,1,30};
		};
		class TiresMudOut {
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.316228,1,30};
		};
		class TiresGravelOut {
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.316228,1,30};
		};
		class TiresAsphaltOut {
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.316228,1,30};
		};
		class NoiseOut {
			frequency = "1";
			volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.1,1,30};
		};
		class EngineLowIn {
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.45]))";
			sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_low_x",0.316228,1.4};
		};
		class EngineHighIn {
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_high_x",1,0.8};
		};
		class IdleIn {
			frequency = "1";
			volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			sound[] = {"ca\Sounds_E\Wheeled_E\SUV\SUV_int_idle_x",0.316228,1};
		};
		class TiresRockIn {
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.316228,1};
		};
		class TiresSandIn {
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.316228,1};
		};
		class TiresGrassIn {
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",0.316228,1};
		};
		class TiresMudIn {
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.316228,1};
		};
		class TiresGravelIn {
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.316228,1};
		};
		class TiresAsphaltIn {
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.316228,1};
		};
		class NoiseIn {
			frequency = "1";
			volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.177828,1};
		};
		class Movement {
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
	class Turrets: Turrets {
		class MainTurret: MainTurret {
		};
	};
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.15000001;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.15000001;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.15000001;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.15000001;
		};
		class HitFuel: HitFuel {
			armor = 1;
			passThrough = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
			passThrough = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1;
		};
		class HitGlass2: HitGlass2 {
			armor = 1;
		};
		class HitGlass3: HitGlass3 {
			armor = 1;
		};
		class HitGlass4: HitGlass4 {
			armor = 1;
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"Ca\Wheeled_PMC\ArmoredSUV\data\SUV_body.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_body_damage.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_body_destruct.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_chrom.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_chrom_damage.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_chrom_destruct.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_glass.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_glass_damage.rvmat","Ca\Wheeled_PMC\ArmoredSUV\data\SUV_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	class Library {
		libTextDesc = "An SUV (Sport Utility Vehicle) is a generic marketing term for a vehicle similar to a station wagon, but built on a light-truck chassis. These particular SUVs are up-armored to protect the security operators inside from small-arms fire. This model has been outfitted with a M134 7.62mm Minigun, which can be retracted back into the vehicle.<br /><br /> ""Black Betty"" is a nickname often used for this vehicle by ION Inc. contractors.";
	};
	class UserActions {
		class OpenHatch {
			displayName = "$STR_AM_OPENGUNNER";
			displayNameDefault = "$STR_AM_OPENGUNNER";
			position = "zamerny";
			condition = "this animationPhase 'HideGun_01' == 1";
			statement = "this animate ['HideGun_01',0]; this animate ['CloseCover1',0]; this animate ['CloseCover2',0];";
			priority = 0;
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
		};
		class CloseHatch {
			displayName = "$STR_AM_CLOSEGUNNER";
			displayNameDefault = "$STR_AM_CLOSEGUNNER";
			position = "zamerny";
			condition = "isNull (this turretUnit [0]) && (this animationPhase 'HideGun_01' == 0)";
			statement = "this animate ['HideGun_01',1]; this spawn {uiSleep 1; _this animate ['CloseCover1',1]; _this animate ['CloseCover2',1];};";
			priority = 0;
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
		};
	};
};

class DZE_Veh_SUV_Armored_M134: DZE_SUV_Armored_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_SUV_ARMORED";

	DZE_MACRO_VEHICLE_CLEAR_CARGO
	armor = 80;
	transportMaxWeapons = 20;
	transportMaxMagazines = 150;
	transportMaxBackpacks = 10;

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			animationSourceHatch = "";
			stabilizedInAxes = "StabilizedInAxesNone";
			gunBeg = "muzzle_1";
			gunEnd = "chamber_1";
			gunnerAction = "ArmoredSUV_Gunner_PMC";
			viewGunnerInExternal = 1;
			minElev = -30;
			maxElev = 45;
			initElev = 0;
			soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.031622775,1,15};
			weapons[] = {"M134"};
			maxHorizontalRotSpeed = 1.8;
			maxVerticalRotSpeed = 1.8;
			magazines[] = {"2000Rnd_762x51_M134"};
		};
	};
	class AnimationSources: AnimationSources {
		class Revolving {
			source = "revolving";
			weapon = "M134";
		};
		class HideGun_01 {
			source = "user";
			initPhase = 0;
			animPeriod = 1.2;
		};
		class HideGun_02: HideGun_01 {
		};
		class HideGun_03: HideGun_01 {
		};
		class HideGun_04: HideGun_01 {
		};
		class CloseCover1 {
			source = "user";
			initPhase = 0;
			animPeriod = 0.7;
		};
		class CloseCover2: CloseCover1 {
		};
	};

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_SUV_Armored_M134_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",4},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_SUV_Armored_M134_1: DZE_Veh_SUV_Armored_M134 {
	displayName = "$STR_VEH_NAME_SUV_ARMORED+";
	original = "DZE_Veh_SUV_Armored_M134";
	maxSpeed = 270; //increased speed slightly since original is 230
	brakeDistance = 14;
	terrainCoef = 1.5;

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_SUV_Armored_M134_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",10},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_SUV_Armored_M134_2: DZE_Veh_SUV_Armored_M134_1 {
	displayName = "$STR_VEH_NAME_SUV_ARMORED++";
	armor = 200;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};
	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_SUV_Armored_M134_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_SUV_Armored_M134_3: DZE_Veh_SUV_Armored_M134_2 {
	displayName = "$STR_VEH_NAME_SUV_ARMORED+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 15;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_SUV_Armored_M134_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_SUV_Armored_M134_4: DZE_Veh_SUV_Armored_M134_3 {
	displayName = "$STR_VEH_NAME_SUV_ARMORED++++";
	fuelCapacity = 250;
};


class DZE_Veh_SUV_Armored_PKT: DZE_Veh_SUV_Armored_M134 {
	displayName = "$STR_VEH_NAME_SUV_PKT_ARMORED";
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"PKTBC"};
			magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
		};
	};

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_SUV_Armored_PKT_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",4},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_SUV_Armored_PKT_1: DZE_Veh_SUV_Armored_PKT {
	displayName = "$STR_VEH_NAME_SUV_PKT_ARMORED+";
	original = "DZE_Veh_SUV_Armored_PKT";
	maxSpeed = 270; //increased speed slightly since original is 230
	brakeDistance = 14;
	terrainCoef = 1.5;

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_SUV_Armored_PKT_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",10},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_SUV_Armored_PKT_2: DZE_Veh_SUV_Armored_PKT_1 {
	displayName = "$STR_VEH_NAME_SUV_PKT_ARMORED++";
	armor = 200;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.5;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.5;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.5;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.5;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 2;
		};
		class HitGlass2: HitGlass2 {
			armor = 2;
		};
		class HitGlass3: HitGlass3 {
			armor = 2;
		};
		class HitGlass4: HitGlass4 {
			armor = 2;
		};
	};
	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_SUV_Armored_PKT_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_SUV_Armored_PKT_3: DZE_Veh_SUV_Armored_PKT_2 {
	displayName = "$STR_VEH_NAME_SUV_PKT_ARMORED+++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 15;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_SUV_Armored_PKT_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",6},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_SUV_Armored_PKT_4: DZE_Veh_SUV_Armored_PKT_3 {
	displayName = "$STR_VEH_NAME_SUV_PKT_ARMORED++++";
	fuelCapacity = 250;
};
