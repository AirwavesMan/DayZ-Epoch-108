class DZE_Veh_Octavia_White: Car {
	scope = 2;
	displayName = "$STR_VEH_NAME_OCTAVIA_WHITE";
	model = "\Corepatch\CorePatch_Vehicles\models\Octavia_ACR";
	icon = "\Ca\Wheeled_ACR\Data\UI\Icon_Octavia_CA.paa";
	picture = "\Ca\Wheeled_ACR\Data\UI\Picture_Octavia_CA.paa";
	vehicleClass = "DZE Vehicles Cars";
	DriverAction = "Golf_Driver";
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	DZE_MACRO_VEHICLE_SIDE
	class Library {
		libTextDesc = "$STR_ACR_LIB_OCTAVIA";
	};
	cargoAction[] = {"Golf_Cargo01","Golf_Cargo02","Golf_Cargo02"};
	cargoIsCoDriver[] = {0};
	transportSoldier = 3;
	weapons[] = {"SportCarHorn"};
	magazines[] = {};
	class Turrets{};
	maxSpeed = 200;
	terrainCoef = 6.0;
	turnCoef = 2;
	steerAheadPlan = 0.15;
	wheelCircumference = 2.02;
	transportMaxWeapons = 10;
	transportMaxMagazines = 50;
	transportMaxBackpacks = 2;
	armor = 20;
	damageResistance = 0.01511;
	fuelCapacity = 100;
	supplyRadius = 1.3;
	HiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\Ca\Wheeled_ACR\Octavia\Data\car_body_co.paa"};
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			name = "wheel_1_1_steering";
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			name = "wheel_2_1_steering";
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"CA\Wheeled_ACR\Octavia\Data\car_body1.rvmat","CA\Wheeled_ACR\Octavia\Data\car_body1_damage.rvmat","CA\Wheeled_ACR\Octavia\Data\car_body1_destruct.rvmat","CA\Wheeled_ACR\Octavia\Data\car_body.rvmat","CA\Wheeled_ACR\Octavia\Data\car_body_damage.rvmat","CA\Wheeled_ACR\Octavia\Data\car_body_destruct.rvmat","CA\Wheeled_ACR\Octavia\Data\car_chrom.rvmat","CA\Wheeled_ACR\Octavia\Data\car_chrom_damage.rvmat","CA\Wheeled_ACR\Octavia\Data\car_chrom_destruct.rvmat","CA\Wheeled_ACR\Octavia\Data\car_glass.rvmat","CA\Wheeled_ACR\Octavia\Data\car_glass_damage.rvmat","CA\Wheeled_ACR\Octavia\Data\car_glass_destruct.rvmat","CA\Wheeled_ACR\Octavia\Data\car_interier.rvmat","CA\Wheeled_ACR\Octavia\Data\car_interier_damage.rvmat","CA\Wheeled_ACR\Octavia\Data\car_interier_destruct.rvmat"};
	};
	soundGear[] = {"",0.00017782794,1};
	insideSoundCoef = 0.9;
	SoundGetIn[] = {"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout", 0.562341, 1};
	SoundGetOut[] = {"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout", 0.562341, 1, 40};
	soundEngineOnInt[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_start",0.56234133,1.0};
	soundEngineOnExt[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_start",0.56234133,1.0,250};
	soundEngineOffInt[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_stop",0.56234133,1.0};
	soundEngineOffExt[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_stop",0.56234133,1.0,250};
	buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
	buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
	buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
	buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
	soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
	WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
	WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
	WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
	WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
	WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
	WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
	soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
	ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
	ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
	ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
	ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
	soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
	class SoundEvents {
		class AccelerationIn {
			limit = "0.15";
			expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_acce2",1.0,1.0};
		};
		class AccelerationOut {
			limit = "0.15";
			expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_acce2",1.0,1.0,200};
		};
	};
	class Sounds {
		class Engine {
			frequency = "(1.0+rpm)*0.3";
			volume = "engineOn*camPos*((rpm factor[0.3, 0.4])+ (rpm factor[0.8, 0.5]))";
			sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_mid2",1.0,1.0,200};
		};
		class EngineHighOut {
			frequency = "(1.0+rpm)*0.3";
			volume = "engineOn*camPos*(rpm factor[0.3, 0.8])";
			sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_high",1.0,1.0,250};
		};
		class IdleOut {
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.4, 0.0])";
			sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_ext_idle",1.0,1.0,200};
		};
		class TiresRockOut {
			frequency = "1";
			volume = "camPos*rock*(speed factor[4, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.056234132,1.0,40};
		};
		class TiresSandOut {
			frequency = "1";
			volume = "camPos*sand*(speed factor[4, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.056234132,1.0,40};
		};
		class TiresGrassOut {
			frequency = "1";
			volume = "camPos*grass*(speed factor[4, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.056234132,1.0,40};
		};
		class TiresMudOut {
			frequency = "1";
			volume = "camPos*mud*(speed factor[4, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.056234132,1.0,40};
		};
		class TiresGravelOut {
			frequency = "1";
			volume = "camPos*gravel*(speed factor[4, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.056234132,1.0,40};
		};
		class TiresAsphaltOut {
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[4, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.056234132,1.0,40};
		};
		class NoiseOut {
			frequency = "1";
			volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
			sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2",0.017782794,1.0,40};
		};
		class EngineLowIn {
			frequency = "(1.0+rpm)*0.3";
			volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.4])+ (rpm factor[0.8, 0.5]))";
			sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_mid2",0.70794576,1.0};
		};
		class EngineHighIn {
			frequency = "(1.0+rpm)*0.3";
			volume = "(1-camPos)*engineOn*(rpm factor[0.3, 0.8])";
			sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_high",0.70794576,1.0};
		};
		class IdleIn {
			frequency = "1";
			volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0.0])";
			sound[] = {"ca\Sounds_ACR\wheeled\Skoda\skoda_int_idle",1.0,1.0};
		};
		class TiresRockIn {
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.017782794,1.0};
		};
		class TiresSandIn {
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.017782794,1.0};
		};
		class TiresGrassIn {
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.017782794,1.0};
		};
		class TiresMudIn {
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.017782794,1.0};
		};
		class TiresGravelIn {
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.017782794,1.0};
		};
		class TiresAsphaltIn {
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.017782794,1.0};
		};
		class NoiseIn {
			frequency = "1";
			volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\int\noise3",0.017782794,1.0};
		};
		class Movement {
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_Octavia_White_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Octavia_White_1: DZE_Veh_Octavia_White {
	displayName = "$STR_VEH_NAME_OCTAVIA_WHITE+";
	original = "DZE_Veh_Octavia_White";
	maxSpeed = 220;
	terrainCoef = 2.5;

	class Upgrades {
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_Octavia_White_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

class DZE_Veh_Octavia_White_2: DZE_Veh_Octavia_White_1 {
	displayName = "$STR_VEH_NAME_OCTAVIA_WHITE++";
	armor = 50;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.6;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.6;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.6;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.6;
		};
		class HitFuel: HitFuel {
			armor = 0.28;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 0.1;
		};
		class HitGlass2: HitGlass2 {
			armor = 0.1;
		};
		class HitGlass3: HitGlass3 {
			armor = 0.1;
		};
		class HitGlass4: HitGlass4 {
			armor = 0.1;
		};
	};

	class Upgrades {
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_Octavia_White_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

class DZE_Veh_Octavia_White_3: DZE_Veh_Octavia_White_2 {
	displayName = "$STR_VEH_NAME_OCTAVIA_WHITE+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 4;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_Octavia_White_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",1},{"DZE_Item_JerryCan_Fuel",2},{"DZE_Item_Metal_Screws",1}}};
	};
};

class DZE_Veh_Octavia_White_4: DZE_Veh_Octavia_White_3 {
	displayName = "$STR_VEH_NAME_OCTAVIA_WHITE++++";
	fuelCapacity = 210;
};
