class Car: LandVehicle {
	class HitPoints {
		class HitEngine;
		class HitRGlass;
		class HitLGlass;
		class HitBody;
		class HitFuel;
		class HitLFWheel;
		class HitRFWheel;
		class HitLF2Wheel;
		class HitRF2Wheel;
		class HitLMWheel;
		class HitRMWheel;
		class HitLBWheel;
		class HitRBWheel;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};
	class Turrets {
		class MainTurret: NewTurret {
			class Turrets;
			class ViewOptics;
		};
	};
	class Sounds: Sounds {
		class Engine;
		class Movement;
	};
};

class DZE_Car_Base: Car {
	vehicleClass = "DZE Vehicles Cars";
	selectionBackLights = "brzdove svetlo";
	selectionBrakeLights = "zadni svetlo";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_NORMAL

	class Turrets {};

	class AnimationSources {
		class HitLFWheel {
			source="Hit";
			hitpoint="HitLFWheel"; // name of hitpoints class
			raw = 1;
		};
		class HitRFWheel: HitLFWheel {
			hitpoint="HitRFWheel";
		};
		class HitLBWheel: HitLFWheel {
			hitpoint="HitLBWheel";
		};
		class HitRBWheel: HitLFWheel {
			hitpoint="HitRBWheel";
		};
		class HitLF2Wheel: HitLFWheel {
			hitpoint="HitLF2Wheel";
		};
		class HitRF2Wheel: HitLFWheel {
			hitpoint="HitRF2Wheel";
		};
		class HitLMWheel: HitLFWheel {
			hitpoint="HitLMWheel";
		};
		class HitRMWheel: HitLFWheel {
			hitpoint="HitRMWheel";
		};
		class HitGlass1 {
			source="Hit";
			hitpoint="HitGlass1"; // name of hitpoints class
			raw = 1;
		};
		class HitGlass2: HitGlass1 {
			hitpoint="HitGlass2";
		};
		class HitGlass3: HitGlass1 {
			hitpoint="HitGlass3";
		};
		class HitGlass4: HitGlass1 {
			hitpoint="HitGlass4";
		};
	};
	class HitPoints: HitPoints {
		class HitRGlass {armor=0.3;material=-1;name="sklo predni P";passThrough=0;};
		class HitLGlass {armor=0.3;material=-1;name="sklo predni L";passThrough=0;};
		class HitGlass1 {armor=0.1;material=-1;name="glass1";visual="glass1";passThrough=0;};
		class HitGlass2 {armor=0.1;material=-1;name="glass2";visual="glass2";passThrough=0;};
		class HitGlass3 {armor=0.1;material=-1;name="glass3";visual="glass3";passThrough=0;};
		class HitGlass4 {armor=0.1;material=-1;name="glass4";visual="glass4";passThrough=0;};
		class HitBody {armor=1;material=-1;name="karoserie";visual="";passThrough=1;}; //disabled points from model
		class HitFuel {armor=0.3;material=-1;name="palivo";visual="";passThrough=0.5;};
		class HitLFWheel {armor=0.15;material=-1;name="wheel_1_1_steering";visual="";passThrough=0.3;};
		class HitLBWheel {armor=0.15;material=-1;name="wheel_1_2_steering";visual="";passThrough=0.3;};
		class HitLMWheel {armor=0.15;material=-1;name="wheel_1_3_steering";visual="";passThrough=0.3;};
		class HitLF2Wheel {armor=0.15;material=-1;name="wheel_1_4_steering";visual="";passThrough=0.3;};

		class HitRFWheel {armor=0.15;material=-1;name="wheel_2_1_steering";visual="";passThrough=0.3;};
		class HitRBWheel {armor=0.15;material=-1;name="wheel_2_2_steering";visual="";passThrough=0.3;};
		class HitRMWheel {armor=0.15;material=-1;name="wheel_2_3_steering";visual="";passThrough=0.3;};
		class HitRF2Wheel {armor=0.15;material=-1;name="wheel_2_4_steering";visual="";passThrough=0.3;};
		class HitEngine {armor=0.4;material=-1;name="motor";visual="";passThrough=0.2;};

	};
	class damage {
		tex[]={};
		mat[]={};
	};

	class nvgmarkers {
		class nvgmarker01 {
			name = "nvg_marker";
			color[] = {0.03, 0.003, 0.003, 1};
			ambient[] = {0.003, 0.0003, 0.0003, 1};
			brightness = 0.001;
			blinking = 1;
		};
	};
	outsidesoundfilter=true;
	insidesoundcoef = 0.8;
	soundgear[]={,db-85,1};
	soundgetin[]={"ca\sounds_e\wheeled_e\suv\suv_ext_door",db-5, 1};
	soundgetout[]={"ca\sounds_e\wheeled_e\suv\suv_ext_door",db-5, 1, 20};
	soundengineonint[] = {"ca\sounds_e\wheeled_e\suv\suv_int_start", db-15, 1.0};
	soundengineonext[] = {"ca\sounds_e\wheeled_e\suv\suv_ext_start", db-15, 1.0, 100};
	soundengineoffint[] ={"ca\sounds_e\wheeled_e\suv\suv_int_stop", db-15, 1.0};
	soundengineoffext[] ={"ca\sounds_e\wheeled_e\suv\suv_ext_stop", db-15, 1.0, 100};

	buildcrash0[]={"ca\sounds\vehicles\crash\crash_building_01", db-3, 1,200};
	buildcrash1[]={"ca\sounds\vehicles\crash\crash_building_02", db-3, 1,200};
	buildcrash2[]={"ca\sounds\vehicles\crash\crash_building_03", db-3, 1,200};
	buildcrash3[]={"ca\sounds\vehicles\crash\crash_building_04", db-3, 1,200};
	soundbuildingcrash[]={buildcrash0, 0.25, buildcrash1, 0.25, buildcrash2, 0.25, buildcrash3, 0.25};

	woodcrash0[]={"ca\sounds\vehicles\crash\crash_mix_wood_01", db-3, 1,200};
	woodcrash1[]={"ca\sounds\vehicles\crash\crash_mix_wood_02", db-3, 1,200};
	woodcrash2[]={"ca\sounds\vehicles\crash\crash_mix_wood_03", db-3, 1,200};
	woodcrash3[]={"ca\sounds\vehicles\crash\crash_mix_wood_04", db-3, 1,200};
	woodcrash4[]={"ca\sounds\vehicles\crash\crash_mix_wood_05", db-3, 1,200};
	woodcrash5[]={"ca\sounds\vehicles\crash\crash_mix_wood_06", db-3, 1,200};
	soundwoodcrash[]={woodcrash0, 0.166, woodcrash1, 0.166, woodcrash2, 0.166, woodcrash3, 0.166,woodcrash4, 0.166,woodcrash5, 0.166};

	armorcrash0[]={"ca\sounds\vehicles\crash\crash_vehicle_01", db-3, 1,200};
	armorcrash1[]={"ca\sounds\vehicles\crash\crash_vehicle_02", db-3, 1,200};
	armorcrash2[]={"ca\sounds\vehicles\crash\crash_vehicle_03", db-3, 1,200};
	armorcrash3[]={"ca\sounds\vehicles\crash\crash_vehicle_04", db-3, 1,200};
	soundarmorcrash[]={armorcrash0, 0.25, armorcrash1, 0.25, armorcrash2, 0.25, armorcrash3, 0.25};

	class soundevents {
		class accelerationin {
			sound[] = {"ca\sounds_e\wheeled_e\suv\suv_int_accelerate_3_x", db-5, 1.0};
			limit = "0.4";
			expression = "(engineon*(1-campos))*gmeterz";
		};
		class accelerationout {
			sound[] = {"ca\sounds_e\wheeled_e\suv\suv_ext_accelerate_3", db-5, 1.0, 200};
			limit = "0.4";
			expression = "(engineon*campos)*gmeterz";
		};
	};

	class sounds {
		class engine {
			sound[] =  {"ca\sounds_e\wheeled_e\suv\suv_ext_low", db-15, 1.4, 100};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "campos*engineon*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.5]))";
		};
		class enginehighout {
			sound[] = {"ca\sounds_e\wheeled_e\suv\suv_ext_high", db0, 0.8, 300};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "campos*engineon*(rpm factor[0.5, 0.8])";
		};
		class idleout {
			sound[] = {"ca\sounds_e\wheeled_e\suv\suv_ext_idle", db-5, 1.0, 100};
			frequency = "1";
			volume = "engineon*campos*(rpm factor[0.4, 0])";
		};
		class tiresrockout {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\ext\ext-tires-rock2", db-10, 1.0, 30};
			frequency = "1";
			volume = "campos*rock*(speed factor[2, 20])";
		};
		class tiressandout {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\ext\ext-tires-sand2", db-10, 1.0, 30};
			frequency = "1";
			volume = "campos*sand*(speed factor[2, 20])";
		};
		class tiresgrassout {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\ext\ext-tires-grass2", db-10, 1.0, 30};
			frequency = "1";
			volume = "campos*grass*(speed factor[2, 20])";
		};
		class tiresmudout {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\ext\ext-tires-mud2", db-10, 1.0, 30};
			frequency = "1";
			volume = "campos*mud*(speed factor[2, 20])";
		};
		class tiresgravelout {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\ext\ext-tires-gravel2", db-10, 1.0, 30};
			frequency = "1";
			volume = "campos*gravel*(speed factor[2, 20])";
		};
		class tiresasphaltout {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\ext\ext-tires-asphalt3", db-10, 1.0, 30};
			frequency = "1";
			volume = "campos*asphalt*(speed factor[2, 20])";
		};
		class noiseout {
			sound[] = {"\ca\sounds\vehicles\wheeled\noises\ext\noise2", db-20, 1.0, 30};
			frequency = "1";
			volume = "campos*(damper0 max 0.03)*(speed factor[0, 8])";
		};
		class enginelowin {
			sound[] = {"ca\sounds_e\wheeled_e\suv\suv_int_low_x", db-10, 1.4};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-campos)*engineon*((rpm factor[0.3, 0.4]) min (rpm factor[0.7, 0.45]))";
		};
		class enginehighin {
			sound[] = {"ca\sounds_e\wheeled_e\suv\suv_int_high_x", db0, 0.8};
			frequency = "(randomizer*0.05+0.95)*rpm";
			volume = "(1-campos)*engineon*(rpm factor[0.5, 0.8])";
		};
		class idlein {
			sound[] = {"ca\sounds_e\wheeled_e\suv\suv_int_idle_x", db-10, 1.0};
			frequency = "1";
			volume = "engineon*(rpm factor[0.4, 0])*(1-campos)";
		};
		class tiresrockin {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\int\int-tires-rock2", db-10, 1.0};
			frequency = "1";
			volume = "(1-campos)*rock*(speed factor[2, 20])";
		};
		class tiressandin {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\int\int-tires-sand2", db-10, 1.0};
			frequency = "1";
			volume = "(1-campos)*sand*(speed factor[2, 20])";
		};
		class tiresgrassin {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\int\int-tires-grass2", db-10, 1.0};
			frequency = "1";
			volume = "(1-campos)*grass*(speed factor[2, 20])";
		};
		class tiresmudin {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\int\int-tires-mud2", db-10, 1.0};
			frequency = "1";
			volume = "(1-campos)*mud*(speed factor[2, 20])";
		};
		class tiresgravelin {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\int\int-tires-gravel2", db-10, 1.0};
			frequency = "1";
			volume = "(1-campos)*gravel*(speed factor[2, 20])";
		};
		class tiresasphaltin {
			sound[] = {"\ca\sounds\vehicles\wheeled\tires\int\int-tires-asphalt3", db-10, 1.0};
			frequency = "1";
			volume = "(1-campos)*asphalt*(speed factor[2, 20])";
		};
		class noisein {
			sound[] = {"\ca\sounds\vehicles\wheeled\noises\int\noise2", db-15, 1.0};
			frequency = "1";
			volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-campos)"; //definice inside zvuku
		};
	};
};

#include "HMMWV\HMMWV.hpp"
#include "SUV\SUV.hpp"
#include "SUV\SUVArmored.hpp"
#include "UAZ\UAZ.hpp"
#include "Hilux.hpp"
#include "Lada.hpp"
#include "LandRover.hpp"
#include "S1203.hpp"
#include "Volha.hpp"
#include "VWGolf.hpp"
#include "Skoda.hpp"
#include "Hatchback.hpp"
#include "Sedan.hpp"
#include "Jeep.hpp"
#include "MiniCooper.hpp"
#include "Nissan.hpp"
#include "Pickup.hpp"
#include "Offroad.hpp"
#include "Jackal.hpp"
#include "Dingo.hpp"
#include "Octavia.hpp"
#include "BTR40.hpp"
#include "Tractor.hpp"
#include "TowingTractor.hpp"
#include "Bus.hpp"
