class Tank: LandVehicle {
	class HitPoints {
		class HitEngine;
		class HitHull;
		class HitLTrack;
		class HitRTrack;
	};
	class ViewPilot;
	class ViewOptics;
	class Turrets {
		class MainTurret: NewTurret {
			class Turrets;
			class HitPoints {
				class HitTurret;
				class HitGun;
			};
		};
	};

	class CargoLight;
	class Sounds: Sounds {
		class Engine;
		class Movement;
	};
	class SpeechVariants {
		class Default;
		class EN;
		class CZ;
		class CZ_Akuzativ;
		class RU;
	};
	class Eventhandlers;
};

#include "M113.hpp"
#include "BMP2.hpp"
#include "T72.hpp"
#include "Tunguska.hpp"
#include "FV510.hpp"
#include "BMP3.hpp"
#include "BVP1.hpp"
#include "M1A1.hpp"
#include "M1A2.hpp"
#include "Bradley.hpp"
#include "T34.hpp"
#include "T55.hpp"
#include "T90.hpp"
#include "ZSU.hpp"
