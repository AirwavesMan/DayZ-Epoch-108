class DZE_Nissan350Z_Base: DZE_Car_Base {
	scope = 0;
	displayname = "Nissun 350z";
	model = "\z\addons\dayz_epoch_v\vehicles\nissan\nissan350z";
	picture = "\dayz_epoch_c\icons\vehicles\nissan.paa";
	armor = 60;
	damageResistance = 0.01821;
	transportsoldier = 1;
	transportmaxweapons = 10;
	transportmaxmagazines = 50;
	transportMaxBackpacks = 4;
	fuelcapacity = 100;
	maxSpeed = 120;
	weapons[] = {minicarhorn};
	driveraction = suv_driver_ep1;
	cargoaction[] = {suv_cargo_ep1,suv_cargo02_ep1,suv_cargo01_ep1,suv_cargo02_ep1,suv_cargo01_ep1};

	DZE_MACRO_VEHICLE_CLEAR_CARGO

	class HitPoints;
	class HitLFWheel;
	class HitLBWheel;
	class HitRFWheel;
	class HitRBWheel;
	class HitFuel;
	class HitEngine;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	terrainCoef = 4;
	turnCoef = 2;
	hiddenselections[] = {"camo1","camo2","camo3"};

	class damage {
		tex[]={};
		mat[]=
		{
			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas.rvmat",
			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_body.rvmat",
			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_body_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_body_destruct.rvmat",

			"ca\wheeled2\vwgolf\data\vwgolf_sklo.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat"
		};
	};
	class nvgmarkers {};

	insideSoundCoef = 0.9;
	SoundGetIn[] = {"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout", 0.562341, 1};
	SoundGetOut[] = {"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout", 0.562341, 1, 40};
	soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-start-1", 0.562341, 1.0};
	soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-start-1", 0.562341, 1.0, 250};
	soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\GOLF\int\int-golf-stop-1", 0.562341, 1.0};
	soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\GOLF\ext\ext-golf-stop-1", 0.562341, 1.0, 250};
	buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01", 0.707946, 1, 200};
	buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02", 0.707946, 1, 200};
	buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03", 0.707946, 1, 200};
	buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04", 0.707946, 1, 200};
	soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
	WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01", 0.707946, 1, 200};
	WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02", 0.707946, 1, 200};
	WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03", 0.707946, 1, 200};
	WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04", 0.707946, 1, 200};
	WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05", 0.707946, 1, 200};
	WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06", 0.707946, 1, 200};
	soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
	ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01", 0.707946, 1, 200};
	ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02", 0.707946, 1, 200};
	ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03", 0.707946, 1, 200};
	ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04", 0.707946, 1, 200};
	soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
	class SoundEvents {
		class AccelerationIn {
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-acce-1", 0.891251, 1.0};
			limit = 0.15;
			expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};

		class AccelerationOut {
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-acce-1", 0.562341, 1.0, 250};
			limit = 0.15;
			expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
	};
	class Sounds {
		class Engine {
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-low-1", 0.398107, 1.0, 300};
			frequency = "(randomizer*0.05+1.25)*rpm";
			volume = "camPos*engineOn*((rpm factor[0.25, 0.4]) min (rpm factor[0.6, 0.45]))";
		};

		class EngineHighOut {
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-high-1", 0.398107, 0.8, 450};
			frequency = "(randomizer*0.05+1.1)*rpm";
			volume = "camPos*engineOn*(rpm factor[0.5, 0.9])";
		};

		class IdleOut {
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\ext\ext-golf-idle-1", 0.316228, 1.0, 100};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.4, 0])";
		};

		class TiresRockOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2", 0.0562341, 1.0, 40};
			frequency = "1";
			volume = "camPos*rock*(speed factor[4, 20])";
		};

		class TiresSandOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2", 0.0562341, 1.0, 40};
			frequency = "1";
			volume = "camPos*sand*(speed factor[4, 20])";
		};

		class TiresGrassOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3", 0.0562341, 1.0, 40};
			frequency = "1";
			volume = "camPos*grass*(speed factor[4, 20])";
		};

		class TiresMudOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2", 0.0562341, 1.0, 40};
			frequency = "1";
			volume = "camPos*mud*(speed factor[4, 20])";
		};

		class TiresGravelOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2", 0.0562341, 1.0, 40};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[4, 20])";
		};

		class TiresAsphaltOut {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3", 0.0562341, 1.0, 40};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[4, 20])";
		};

		class NoiseOut {
			sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\ext\noise2", 0.0562341, 1.0, 40};
			frequency = "1";
			volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
		};

		class EngineLowIn {
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-low-1", 0.707946, 1.0};
			frequency = "(randomizer*0.05+1.3)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.3, 0.5]) min (rpm factor[0.7, 0.52]))";
		};

		class EngineHighIn {
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-high-1", 0.707946, 0.95};
			frequency = "(randomizer*0.05+1.2)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.6, 1.0])";
		};

		class IdleIn {
			sound[] = {"ca\sounds\Vehicles\Wheeled\GOLF\int\int-golf-idle-1", 0.562341, 1.0};
			frequency = "1";
			volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
		};

		class TiresRockIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2", 0.0707946, 1.0};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};

		class TiresSandIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2", 0.0707946, 1.0};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};

		class TiresGrassIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3", 0.0707946, 1.0};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};

		class TiresMudIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2", 0.0707946, 1.0};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};

		class TiresGravelIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2", 0.0707946, 1.0};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};

		class TiresAsphaltIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3", 0.0562341, 1.0};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};

		class NoiseIn {
			sound[] = {"ca\sounds\Vehicles\Wheeled\Noises\int\noise2", 0.1, 1.0};
			frequency = "1";
			volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
		};

		class Movement {
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
};

class DZE_Veh_Nissan350Z_Orange: DZE_Nissan350Z_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_ORANGE";
	hiddenselectionstextures[] =
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_body_01_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence4_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Nissan350Z_Orange_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Nissan350Z_Orange_1: DZE_Veh_Nissan350Z_Orange {
	displayname = "$STR_VEH_NAME_NISSAN_ORANGE+";
	original = "DZE_Veh_Nissan350Z_Orange";
	maxSpeed = 250;
	terrainCoef = 1.0;

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Nissan350Z_Orange_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Nissan350Z_Orange_2: DZE_Veh_Nissan350Z_Orange_1 {
	displayname = "$STR_VEH_NAME_NISSAN_ORANGE++";
	armor = 80;
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
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Nissan350Z_Orange_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Nissan350Z_Orange_3: DZE_Veh_Nissan350Z_Orange_2 {
	displayname = "$STR_VEH_NAME_NISSAN_ORANGE+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Nissan350Z_Orange_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Nissan350Z_Orange_4: DZE_Veh_Nissan350Z_Orange_3 {
	displayname = "$STR_VEH_NAME_NISSAN_ORANGE++++";
	fuelCapacity = 250;
};

class DZE_Veh_Nissan350Z_Blue: DZE_Nissan350Z_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_BLUE";
	hiddenselectionstextures[] =
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_blue.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Nissan350Z_Blue_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Nissan350Z_Blue_1: DZE_Veh_Nissan350Z_Blue {
	displayname = "$STR_VEH_NAME_NISSAN_BLUE+";
	original = "DZE_Veh_Nissan350Z_Blue";
	maxSpeed = 250;
	terrainCoef = 1.0;

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Nissan350Z_Blue_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Nissan350Z_Blue_2: DZE_Veh_Nissan350Z_Blue_1 {
	displayname = "$STR_VEH_NAME_NISSAN_BLUE++";
	armor = 80;
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
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Nissan350Z_Blue_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Nissan350Z_Blue_3: DZE_Veh_Nissan350Z_Blue_2 {
	displayname = "$STR_VEH_NAME_NISSAN_BLUE+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Nissan350Z_Blue_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Nissan350Z_Blue_4: DZE_Veh_Nissan350Z_Blue_3 {
	displayname = "$STR_VEH_NAME_NISSAN_BLUE++++";
	fuelCapacity = 250;
};

class DZE_Veh_Nissan350Z_Mod: DZE_Nissan350Z_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_MOD";
	hiddenselectionstextures[] =
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_emery.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence1_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Nissan350Z_Mod_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Nissan350Z_Mod_1: DZE_Veh_Nissan350Z_Mod {
	displayname = "$STR_VEH_NAME_NISSAN_MOD+";
	original = "DZE_Veh_Nissan350Z_Mod";
	maxSpeed = 250;
	terrainCoef = 1.0;

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Nissan350Z_Mod_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Nissan350Z_Mod_2: DZE_Veh_Nissan350Z_Mod_1 {
	displayname = "$STR_VEH_NAME_NISSAN_MOD++";
	armor = 80;
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
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Nissan350Z_Mod_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Nissan350Z_Mod_3: DZE_Veh_Nissan350Z_Mod_2 {
	displayname = "$STR_VEH_NAME_NISSAN_MOD+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Nissan350Z_Mod_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Nissan350Z_Mod_4: DZE_Veh_Nissan350Z_Mod_3 {
	displayname = "$STR_VEH_NAME_NISSAN_MOD++++";
	fuelCapacity = 250;
};

class DZE_Veh_Nissan350Z_Gold: DZE_Nissan350Z_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_GOLD";
	hiddenselectionstextures[] =
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_gold.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence2_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Nissan350Z_Gold_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Nissan350Z_Gold_1: DZE_Veh_Nissan350Z_Gold {
	displayname = "$STR_VEH_NAME_NISSAN_GOLD+";
	original = "DZE_Veh_Nissan350Z_Gold";
	maxSpeed = 250;
	terrainCoef = 1.0;

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Nissan350Z_Gold_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Nissan350Z_Gold_2: DZE_Veh_Nissan350Z_Gold_1 {
	displayname = "$STR_VEH_NAME_NISSAN_GOLD++";
	armor = 80;
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
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Nissan350Z_Gold_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Nissan350Z_Gold_3: DZE_Veh_Nissan350Z_Gold_2 {
	displayname = "$STR_VEH_NAME_NISSAN_GOLD+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Nissan350Z_Gold_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Nissan350Z_Gold_4: DZE_Veh_Nissan350Z_Gold_3 {
	displayname = "$STR_VEH_NAME_NISSAN_GOLD++++";
	fuelCapacity = 250;
};

class DZE_Veh_Nissan350Z_Green: DZE_Nissan350Z_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_GREEN";
	hiddenselectionstextures[] =
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_green.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence3_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Nissan350Z_Green_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Nissan350Z_Green_1: DZE_Veh_Nissan350Z_Green {
	displayname = "$STR_VEH_NAME_NISSAN_GREEN+";
	original = "DZE_Veh_Nissan350Z_Green";
	maxSpeed = 250;
	terrainCoef = 1.0;

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Nissan350Z_Green_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Nissan350Z_Green_2: DZE_Veh_Nissan350Z_Green_1 {
	displayname = "$STR_VEH_NAME_NISSAN_GREEN++";
	armor = 80;
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
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Nissan350Z_Green_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Nissan350Z_Green_3: DZE_Veh_Nissan350Z_Green_2 {
	displayname = "$STR_VEH_NAME_NISSAN_GREEN+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Nissan350Z_Green_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Nissan350Z_Green_4: DZE_Veh_Nissan350Z_Green_3 {
	displayname = "$STR_VEH_NAME_NISSAN_GREEN++++";
	fuelCapacity = 250;
};

class DZE_Veh_Nissan350Z_Black: DZE_Nissan350Z_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_BLACK";
	hiddenselectionstextures[] =
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_kiwi.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence5_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Nissan350Z_Black_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Nissan350Z_Black_1: DZE_Veh_Nissan350Z_Black {
	displayname = "$STR_VEH_NAME_NISSAN_BLACK+";
	original = "DZE_Veh_Nissan350Z_Black";
	maxSpeed = 250;
	terrainCoef = 1.0;

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Nissan350Z_Black_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Nissan350Z_Black_2: DZE_Veh_Nissan350Z_Black_1 {
	displayname = "$STR_VEH_NAME_NISSAN_BLACK++";
	armor = 80;
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
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Nissan350Z_Black_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Nissan350Z_Black_3: DZE_Veh_Nissan350Z_Black_2 {
	displayname = "$STR_VEH_NAME_NISSAN_BLACK+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Nissan350Z_Black_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Nissan350Z_Black_4: DZE_Veh_Nissan350Z_Black_3 {
	displayname = "$STR_VEH_NAME_NISSAN_BLACK++++";
	fuelCapacity = 250;
};

class DZE_Veh_Nissan350Z_Pink: DZE_Nissan350Z_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_PINK";
	hiddenselectionstextures[] =
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_pink.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence11_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Nissan350Z_Pink_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Nissan350Z_Pink_1: DZE_Veh_Nissan350Z_Pink {
	displayname = "$STR_VEH_NAME_NISSAN_PINK+";
	original = "DZE_Veh_Nissan350Z_Pink";
	maxSpeed = 250;
	terrainCoef = 1.0;

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Nissan350Z_Pink_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Nissan350Z_Pink_2: DZE_Veh_Nissan350Z_Pink_1 {
	displayname = "$STR_VEH_NAME_NISSAN_PINK++";
	armor = 80;
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
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Nissan350Z_Pink_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Nissan350Z_Pink_3: DZE_Veh_Nissan350Z_Pink_2 {
	displayname = "$STR_VEH_NAME_NISSAN_PINK+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Nissan350Z_Pink_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Nissan350Z_Pink_4: DZE_Veh_Nissan350Z_Pink_3 {
	displayname = "$STR_VEH_NAME_NISSAN_PINK++++";
	fuelCapacity = 250;
};

class DZE_Veh_Nissan350Z_Red: DZE_Nissan350Z_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_RED";
	hiddenselectionstextures[] =
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_red.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence7_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Nissan350Z_Red_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Nissan350Z_Red_1: DZE_Veh_Nissan350Z_Red {
	displayname = "$STR_VEH_NAME_NISSAN_RED+";
	original = "DZE_Veh_Nissan350Z_Red";
	maxSpeed = 250;
	terrainCoef = 1.0;

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Nissan350Z_Red_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Nissan350Z_Red_2: DZE_Veh_Nissan350Z_Red_1 {
	displayname = "$STR_VEH_NAME_NISSAN_RED++";
	armor = 80;
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
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Nissan350Z_Red_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Nissan350Z_Red_3: DZE_Veh_Nissan350Z_Red_2 {
	displayname = "$STR_VEH_NAME_NISSAN_RED+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Nissan350Z_Red_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Nissan350Z_Red_4: DZE_Veh_Nissan350Z_Red_3 {
	displayname = "$STR_VEH_NAME_NISSAN_RED++++";
	fuelCapacity = 250;
};

class DZE_Veh_Nissan350Z_Ruben: DZE_Nissan350Z_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_RUBEN";
	hiddenselectionstextures[] =
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_ruben.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence10_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Nissan350Z_Ruben_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Nissan350Z_Ruben_1: DZE_Veh_Nissan350Z_Ruben {
	displayname = "$STR_VEH_NAME_NISSAN_RUBEN+";
	original = "DZE_Veh_Nissan350Z_Ruben";
	maxSpeed = 250;
	terrainCoef = 1.0;

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Nissan350Z_Ruben_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Nissan350Z_Ruben_2: DZE_Veh_Nissan350Z_Ruben_1 {
	displayname = "$STR_VEH_NAME_NISSAN_RUBEN++";
	armor = 80;
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
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Nissan350Z_Ruben_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Nissan350Z_Ruben_3: DZE_Veh_Nissan350Z_Ruben_2 {
	displayname = "$STR_VEH_NAME_NISSAN_RUBEN+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Nissan350Z_Ruben_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Nissan350Z_Ruben_4: DZE_Veh_Nissan350Z_Ruben_3 {
	displayname = "$STR_VEH_NAME_NISSAN_RUBEN++++";
	fuelCapacity = 250;
};

class DZE_Veh_Nissan350Z_V: DZE_Nissan350Z_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_V";
	hiddenselectionstextures[] =
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_v.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence12_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Nissan350Z_V_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Nissan350Z_V_1: DZE_Veh_Nissan350Z_V {
	displayname = "$STR_VEH_NAME_NISSAN_V+";
	original = "DZE_Veh_Nissan350Z_V";
	maxSpeed = 250;
	terrainCoef = 1.0;

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Nissan350Z_V_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Nissan350Z_V_2: DZE_Veh_Nissan350Z_V_1 {
	displayname = "$STR_VEH_NAME_NISSAN_V++";
	armor = 80;
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
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Nissan350Z_V_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Nissan350Z_V_3: DZE_Veh_Nissan350Z_V_2 {
	displayname = "$STR_VEH_NAME_NISSAN_V+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Nissan350Z_V_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Nissan350Z_V_4: DZE_Veh_Nissan350Z_V_3 {
	displayname = "$STR_VEH_NAME_NISSAN_V++++";
	fuelCapacity = 250;
};

class DZE_Veh_Nissan350Z_Yellow: DZE_Nissan350Z_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_NISSAN_YELLOW";
	hiddenselectionstextures[] =
	{
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\nissan350z_atlas_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\skins\skin_yellow.paa",
		"\z\addons\dayz_epoch_v\vehicles\nissan\data\plates\licence13_co.paa"
	};

	class Upgrades {
		ItemORP[] = {"DZE_Veh_Nissan350Z_Yellow_1",{"ItemToolbox"},{},{{"ItemORP",1},{"PartEngine",1},{"PartWheel",4},{"ItemScrews",2}}};
	};
};

// Performance 1
class DZE_Veh_Nissan350Z_Yellow_1: DZE_Veh_Nissan350Z_Yellow {
	displayname = "$STR_VEH_NAME_NISSAN_YELLOW+";
	original = "DZE_Veh_Nissan350Z_Yellow";
	maxSpeed = 250;
	terrainCoef = 1.0;

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};

	class Upgrades {
		ItemAVE[] = {"DZE_Veh_Nissan350Z_Yellow_2",{"ItemToolbox"},{},{{"ItemAVE",1 },{"PartGeneric",6},{"ItemScrews",4}}};
	};
};

// Armor 2
class DZE_Veh_Nissan350Z_Yellow_2: DZE_Veh_Nissan350Z_Yellow_1 {
	displayname = "$STR_VEH_NAME_NISSAN_YELLOW++";
	armor = 80;
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
			armor = 1;
		};
		class HitEngine: HitEngine {
			armor = 1;
		};
		class HitGlass1: HitGlass1 {
			armor = 1.3;
		};
		class HitGlass2: HitGlass2 {
			armor = 1.3;
		};
	};

	class Upgrades {
		ItemLRK[] = {"DZE_Veh_Nissan350Z_Yellow_3",{"ItemToolbox"},{},{{"ItemLRK",1},{"PartGeneric",2},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemScrews",2}}};
	};
};

// Cargo 3
class DZE_Veh_Nissan350Z_Yellow_3: DZE_Veh_Nissan350Z_Yellow_2 {
	displayname = "$STR_VEH_NAME_NISSAN_YELLOW+++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 8;

	class Upgrades {
		ItemTNK[] = {"DZE_Veh_Nissan350Z_Yellow_4",{"ItemToolbox"},{},{{"ItemTNK",1},{"PartGeneric",2},{"PartFueltank",2},{"ItemJerrycan",4},{"ItemScrews",1}}};
	};
};

// Fuel 4
class DZE_Veh_Nissan350Z_Yellow_4: DZE_Veh_Nissan350Z_Yellow_3 {
	displayname = "$STR_VEH_NAME_NISSAN_YELLOW++++";
	fuelCapacity = 250;
};
