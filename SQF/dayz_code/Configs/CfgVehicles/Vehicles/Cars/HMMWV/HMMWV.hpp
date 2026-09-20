class DZE_HMMWV_Base: Car {
	scope = 0;
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	vehicleClass = "DZE Vehicles Cars";
	accuracy = 0.3;
	DZE_MACRO_VEHICLE_SIDE
	wheelCircumference = 2.834;
	Model = "\ca\wheeled\HMMWV50";
	Picture = "\Ca\wheeled\data\ico\HMMWV50_CA.paa";
	Icon = "\Ca\wheeled\data\map_ico\icomap_hmwv50_CA.paa";
	mapSize = 5;
	displayName = "HMMWV";
	crew = "";
	typicalCargo[] = {};
	damperSize = 0.2;
	damperForce = 1;
	damperDamping = 1;
	armor = 40;
	damageResistance = 0.00562;
	turnCoef = 2;
	steerAheadPlan = 0.2;
	steerAheadSimul = 0.4;
	predictTurnPlan = 0.9;
	predictTurnSimul = 0.5;
	terrainCoef = 2;
	supplyRadius = 1.5;
	type = 1;
	cost = 100000;
	armorGlass = 0.5;
	armorWheels = 0.1;
	soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1,10};
	soundEnviron[] = {"",0.562341,1};
	transportSoldier = 3;
	class Library {
		libTextDesc = "The High Mobility Multi-purpose Wheeled Vehicle (HMMWV) has replaced the M151 ï¿½Willysï¿½ jeep in US Army service.  The HMMWV was designed to fill myriad roles, including that of light tactical commander's vehicle, special purpose shelter carrier, and mobile weapons platform. The HMMWV is equipped with a high performance diesel engine and four-wheel drive, giving it access to very difficult terrain. It can be armed with an M2 machinegun, a Mk 19 grenade launcher or a TOW Anti-Tank Guided Missile.";
	};
	castDriverShadow = 0;
	driverAction = "HMMWV_Driver";
	cargoAction[] = {"HMMWV_Cargo01","HMMWV_Cargo01","UAZ_Cargo01"};
	unitInfoType = "UnitInfoShip";
	threat[] = {1,0.1,0.4};
	
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			body = "mainTurret";
			gun = "mainGun";
			hasGunner = 1;
			weapons[] = {"M2"};
			magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
			soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1,10};
			minElev = -25;
			maxElev = 60;
			gunnerAction = "HMMWV_Gunner01";
			viewGunnerInExternal = 1;
			castGunnerShadow = 1;
			stabilizedInAxes = "StabilizedInAxesNone";
		};
	};
	class HitPoints: HitPoints {
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
		class HitLFWheel: HitLFWheel {
			armor = 0.15;
		};
		class HitLBWheel: HitLBWheel {
			armor = 0.15;
		};
		class HitRFWheel: HitRFWheel {
			armor = 0.15;
		};
		class HitRBWheel: HitRBWheel {
			armor = 0.15;
		};
		class HitFuel {
			armor = 0.14;
			material = -1;
			name = "fueltank";
			visual = "";
			passThrough = 1;
		};
		class HitEngine {
			armor = 0.5;
			material = -1;
			name = "engine";
			visual = "";
			passThrough = 1;
		};
	};
	class Damage {
		tex[] = {};
		mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_body.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\weapons\data\m2.rvmat","ca\weapons\data\m2.rvmat","ca\weapons\data\m2_destruct.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount_destruct.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
	};
	insideSoundCoef = 0.9;
	soundGear[] = {"",5.62341e-005,1};
	soundGetIn[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\get_in2",0.562341,1};
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
	class Sounds: Sounds {
		class Engine: Engine {
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
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-engine_low1",1,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
		};
		class EngineHighIn {
			sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-engine_high2",1,1};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
		};
		class IdleIn {
			sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\int\int-engine_idle2",0.316228,1};
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
		class Movement: Movement {
			sound = "soundEnviron";
			frequency = "1";
			volume = "0";
		};
	};
	brakeDistance = 8.5;
	htMin = 60;
	htMax = 1800;
	afMax = 200;
	mfMax = 100;
	mFact = 1;
	tBody = 200;
	transportMaxBackpacks = 5;
	class NVGMarkers {
		class NVGMarker01 {
			name = "nvg_marker";
			color[] = {0.03,0.003,0.003,1};
			ambient[] = {0.003,0.0003,0.0003,1};
			brightness = 0.001;
			blinking = 1;
		};
	};
	class AnimationSources;
};

class HMMWV_Base;

#include "Transport.hpp"
#include "Terminal.hpp"
#include "Hummer.hpp"
#include "Ambulance.hpp"
#include "SOV.hpp"
#include "GPK.hpp"
#include "M240.hpp"
#include "M2.hpp"
#include "MK19.hpp"
#include "CROWS.hpp"
#include "Avenger.hpp"
#include "TOW.hpp"
