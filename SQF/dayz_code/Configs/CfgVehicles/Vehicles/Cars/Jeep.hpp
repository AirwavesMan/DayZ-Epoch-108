class DZE_Jeep_Base: DZE_Car_Base {
	scope = 0;
	displayname = "Old Jeep";
	model = "\z\addons\dayz_epoch_v\vehicles\jeep\h4_jeep";
	picture = "\dayz_epoch_c\icons\vehicles\jeep.paa";
	driveraction = "HMMWV_Driver";
	armor = 25;
	transportsoldier = 1;
	transportmaxweapons = 15;
	transportmaxmagazines = 50;
	transportMaxBackpacks = 5;
	fuelcapacity = 115;
	maxSpeed = 110;
	terraincoef	= 2.0;
	weapons[] = {minicarhorn};
	cargoaction[] = {"Skodovka_Cargo01"};
	//class HitPoints;
	hiddenselectionstextures[]=
	{
		"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main_co.paa",
		"\z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts_co.paa"
	};
	class damage {
		tex[]={};
		mat[]=
		{
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_main_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_parts_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_dash.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_dash_damage.rvmat",
			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_dash_destruct.rvmat",

			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_glass.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_damage.rvmat",

			"z\addons\dayz_epoch_v\vehicles\jeep\data\jeep_in_glass.rvmat",
			"Ca\wheeled_E\Data\auta_skla_in_damage.rvmat",
			"Ca\wheeled_E\Data\auta_skla_in_damage.rvmat"

		};
	};

	class NVGMarkers {};
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
};

class DZE_Veh_OldJeep: DZE_Jeep_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_OLD_JEEP";

	class HitPoints: HitPoints {
		class HitLFWheel;
		class HitLBWheel;
		class HitRFWheel;
		class HitRBWheel;
		class HitFuel;
		class HitEngine;
		class HitGlass1;
		class HitGlass2;
	};

	class Upgrades {
		DZE_Item_Upgrade_CarORP[] = {"DZE_Veh_OldJeep_1",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarORP",1},{"DZE_Item_Parts_Engine",1},{"DZE_Item_Parts_Wheel",4},{"DZE_Item_Metal_Screws",2}}};
	};
};

// Performance 1
class DZE_Veh_OldJeep_1: DZE_Veh_OldJeep {
	displayname = "$STR_VEH_NAME_OLD_JEEP+";
	original = "DZE_Veh_OldJeep";
	maxSpeed = 150;
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
		DZE_Item_Upgrade_CarAVE[] = {"DZE_Veh_OldJeep_2",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarAVE",1 },{"DZE_Item_Metal_Parts",6},{"DZE_Item_Metal_Screws",4}}};
	};
};

// Armor 2
class DZE_Veh_OldJeep_2: DZE_Veh_OldJeep_1 {
	displayname = "$STR_VEH_NAME_OLD_JEEP++";
	armor = 65;
	class HitPoints: HitPoints {
		class HitLFWheel: HitLFWheel {
			armor = 0.3;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.3;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.3;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.3;
		};
		class HitFuel: HitFuel {
			armor = 0.5;
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
		DZE_Item_Upgrade_CarLRK[] = {"DZE_Veh_OldJeep_3",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Metal_Screws",2}}};
	};
};

// Cargo 3
class DZE_Veh_OldJeep_3: DZE_Veh_OldJeep_2 {
	displayname = "$STR_VEH_NAME_OLD_JEEP+++";
	transportMaxWeapons = 30;
	transportMaxMagazines = 100;
    transportMaxBackpacks = 10;

	class Upgrades {
		DZE_Item_Upgrade_CarTNK[] = {"DZE_Veh_OldJeep_4",{"DZE_Tool_Toolbox"},{},{{"DZE_Item_Upgrade_CarTNK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_JerryCan_Fuel",4},{"DZE_Item_Metal_Screws",1}}};
	};
};

// Fuel 4
class DZE_Veh_OldJeep_4: DZE_Veh_OldJeep_3 {
	displayname = "$STR_VEH_NAME_OLD_JEEP++++";
	fuelCapacity = 250;
};
