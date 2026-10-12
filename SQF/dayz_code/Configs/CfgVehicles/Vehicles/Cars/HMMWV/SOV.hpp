class DZE_Veh_HMMWV_SOV_Desert: DZE_HMMWV_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_HMMWV_SOV";
	model = "\ca\wheeled_e\HMMWV\M998A2_sov";
	Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_sov_CA.paa";
	Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_sov_CA.paa";
	driverAction = "HMMWV_Driver_EP1";
	expansion = 1;
	transportSoldier = 4;
	transportMaxWeapons = 15;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 4;
	damageResistance = 0.00581;
	threat[] = {1,0.3,0.3};
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
			limit = "0.8";
			expression = "(engineOn*(1-camPos))*gmeterZ";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-acceleration1",0.1,1};
		};
		class AccelerationOut {
			limit = "0.8";
			expression = "(engineOn*camPos)*gmeterZ";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\turspecial1",0.1,1,200};
		};
	};
	class Sounds {
		class Engine {
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1,1,300};
		};
		class EngineHighOut {
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1,1,400};
		};
		class IdleOut {
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.3, 0])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\idle_2",0.562341,1,100};
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
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.177828,1,30};
		};
		class EngineLowIn {
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1,1};
		};
		class EngineHighIn {
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1,1};
		};
		class IdleIn {
			frequency = "1";
			volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\idle_2",0.316228,1};
		};
		class TiresRockIn {
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",1,1};
		};
		class TiresSandIn {
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",1,1};
		};
		class TiresGrassIn {
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",1,1};
		};
		class TiresMudIn {
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",1,1};
		};
		class TiresGravelIn {
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",1,1};
		};
		class TiresAsphaltIn {
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",1,1};
		};
		class NoiseIn {
			frequency = "1";
			volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.446684,1};
		};
		class Movement {
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			gunnerAction = "HMMWV_Gunner03_EP1";
			weapons[] = {"MK19"};
			magazines[] = {"48Rnd_40mm_MK19"};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1,10};
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
			gunnerAction = "HMMWV_Gunner02_EP1";
			gunBeg = "usti hlavne_2";
			gunEnd = "konec hlavne_2";
			body = "SideTurret";
			gun = "SideGun";
			memoryPointGunnerOptics = "gunnerview_2";
			animationSourceBody = "SideTurret";
			animationSourceGun = "SideGun";
			weapons[] = {"M240_veh"};
			magazines[] = {"100Rnd_762x51_M240"};
			soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.0001,1.1};
			commanding = 1;
			primaryGunner = 1;
			primaryObserver = 1;
			proxyIndex = 2;
			minElev = -18;
			maxElev = 20;
			minTurn = -65;
			maxTurn = 35;
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
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_HMMWV_SOV_Desert_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",2},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_SOV_Desert_1: DZE_Veh_HMMWV_SOV_Desert  {
	displayName = "$STR_VEH_NAME_HMMWV_SOV+";
	original = "DZE_Veh_HMMWV_SOV_Desert";
	maxSpeed = 115; // base 100
	turnCoef = 3; // base 2
	terrainCoef = 1; //base 2

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_HMMWV_SOV_Desert_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Sheet",6},{"DZE_Item_Metal_Screws",4}}};
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_HMMWV_SOV_Desert_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Kit_WoodCrate",2},{"DZE_Item_Kit_GunRack",2},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_HMMWV_SOV_Desert_3: DZE_Veh_HMMWV_SOV_Desert_2 {
	displayName = "$STR_VEH_NAME_HMMWV_SOV+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 140;
	transportMaxBackpacks = 8;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_HMMWV_SOV_Desert_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",4},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Barrel_Fuel",1}}};
	};
};

class DZE_Veh_HMMWV_SOV_Desert_4: DZE_Veh_HMMWV_SOV_Desert_3 {
	displayName = "$STR_VEH_NAME_HMMWV_SOV++++";
	fuelCapacity = 180; // base 100
};
