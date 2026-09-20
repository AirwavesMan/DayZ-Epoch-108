class DZE_Veh_HMMWV_SOV_Desert: DZE_HMMWV_Base {
	expansion = 1;
	scope = 2;
	transportSoldier = 4;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	model = "\ca\wheeled_e\HMMWV\M998A2_sov";
	displayName = "$STR_VEH_NAME_HMMWV_SOV";
	damageResistance = 0.00581;
	threat[] = {1,0.3,0.3};
	Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_sov_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_sov_CA.paa";
	driverAction = "HMMWV_Driver_EP1";
	cargoAction[] = {"HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1","HMMWV_Cargo03_EP1","HMMWV_Cargo04_EP1"};
	outsideSoundFilter = 0;
	insideSoundCoef = 1;
	soundGear[] = {"",5.62341e-005,1};
	soundGetIn[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\get_in2",0.56234133,1,20};
	soundGetOut[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\get_in2",0.562341,1,20};
	soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\HMMWV\int\int-engine_start1",0.177828,1};
	soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\engine_ON1",0.177828,1,100};
	soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\int\int-engine_off2",0.177828,1};
	soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\ext\engine_OFF2",0.177828,1,100};
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
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-acceleration1",0.1,1};
			limit = "0.8";
			expression = "(engineOn*(1-camPos))*gmeterZ";
		};
		class AccelerationOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\turspecial1",0.1,1,200};
			limit = "0.8";
			expression = "(engineOn*camPos)*gmeterZ";
		};
	};
	class Sounds {
		class Engine {
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1,1,300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
		};
		class EngineHighOut {
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1,1,400};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
		};
		class IdleOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\idle_2",0.562341,1,100};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.3, 0])";
		};
		class TiresRockOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.316228,1,30};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.316228,1,30};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.177828,1,30};
			frequency = "1";
			volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
		};
		class EngineLowIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
		};
		class EngineHighIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
		};
		class IdleIn {
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\idle_2",0.316228,1};
			frequency = "1";
			volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
		};
		class TiresRockIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",1,1};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",1,1};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",1,1};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",1,1};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",1,1};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",1,1};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.446684,1};
			frequency = "1";
			volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
		};
		class Movement {
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"MK19"};
			magazines[] = {"48Rnd_40mm_MK19"};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1,10};
			gunnerAction = "HMMWV_Gunner03_EP1";
			class GunFire: WeaponCloudsMGun {
				interval = 0.01;
			};
			commanding = 0;
			primaryGunner = 0;
			primaryObserver = 0;
			LODTurnedOut = 1000;
			LODTurnedIn = 1000;
		};
		class SideTurret: MainTurret {
			gunnerName = "$STR_POSITION_FRONTGUNNER";
			weapons[] = {"M240_veh"};
			magazines[] = {"100Rnd_762x51_M240"};
			soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.0001,1.1};
			gunnerAction = "HMMWV_Gunner02_EP1";
			commanding = 1;
			primaryGunner = 1;
			primaryObserver = 1;
			proxyIndex = 2;
			minElev = -18;
			maxElev = 20;
			minTurn = -65;
			maxTurn = 35;
			gunBeg = "usti hlavne_2";
			gunEnd = "konec hlavne_2";
			body = "SideTurret";
			gun = "SideGun";
			memoryPointGunnerOptics = "gunnerview_2";
			animationSourceBody = "SideTurret";
			animationSourceGun = "SideGun";
			LODTurnedOut = 1200;
			LODTurnedIn = 1200;
		};
	};
	class AnimationSources: AnimationSources {
		class ReloadAnim {
			source = "reload";
			weapon = "M240_veh";
		};
		class ReloadMagazine {
			source = "reloadmagazine";
			weapon = "M240_veh";
		};
		class Revolving {
			source = "revolving";
			weapon = "M240_veh";
		};
	};

	DZE_MACRO_VEHICLE_CLEAR_CARGO

	class Damage {
		tex[] = {};
		mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_glass_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
	};
	hiddenSelections[] = {"camo","camo1","camo2"};
	hiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_regular_1_co.paa"};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_HMMWV_SOV_Desert_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",2},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_SOV_Desert_1: DZE_Veh_HMMWV_SOV_Desert  {
	displayName = "$STR_VEH_NAME_HMMWV_SOV+";
	original = "DZE_Veh_HMMWV_SOV_Desert";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_HMMWV_SOV_Desert_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"equip_metal_sheet",6},{"ItemScrews",4}}};
	};
};

class DZE_Veh_HMMWV_SOV_Desert_2: DZE_Veh_HMMWV_SOV_Desert_1 {
	displayName = "$STR_VEH_NAME_HMMWV_SOV++";
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
		ItemLRK[] = {"DZE_Veh_HMMWV_SOV_Desert_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",4},{"ItemWoodCrateKit",2},{"ItemGunRackKit",2},{"ItemScrews",2}}};
	};
};

class DZE_Veh_HMMWV_SOV_Desert_3: DZE_Veh_HMMWV_SOV_Desert_2 {
	displayName = "$STR_VEH_NAME_HMMWV_SOV+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_HMMWV_SOV_Desert_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",4},{"PartFueltank",2},{"ItemFuelBarrel",1}}};
	};
};

class DZE_Veh_HMMWV_SOV_Desert_4: DZE_Veh_HMMWV_SOV_Desert_3 {
	displayName = "$STR_VEH_NAME_HMMWV_SOV++++";
	fuelCapacity = 180; // base 100
};
