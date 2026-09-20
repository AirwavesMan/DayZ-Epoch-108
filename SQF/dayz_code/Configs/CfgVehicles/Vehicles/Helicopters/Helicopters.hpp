class Helicopter: Air {
	class HitPoints {
		class HitHull {
			armor = 1;
			material = 51;
			name = "NEtrup";
			visual = "trup";
			passThrough = 1;
		};
		class HitEngine {
			armor = 0.25;
			material = 51;
			name = "motor";
			visual = "motor";
			passThrough = 1;
		};
		class HitAvionics {
			armor = 0.15;
			material = 51;
			name = "elektronika";
			visual = "elektronika";
			passThrough = 1;
		};
		class HitVRotor {
			armor = 0.3;
			material = 51;
			name = "mala vrtule";
			visual = "mala vrtule staticka";
			passThrough = 0.3;
		};
		class HitHRotor {
			armor = 0.2;
			material = 51;
			name = "velka vrtule";
			visual = "velka vrtule staticka";
			passThrough = 0.1;
		};
		class HitMissiles {
			armor = 0.1;
			material = 51;
			name = "munice";
			visual = "munice";
			passThrough = 0.5;
		};
		class HitRGlass {
			convexComponent = "sklo predni P";
			armor = 0.1;
			material = 51;
			name = "sklo predni P";
			visual = "sklo predni P";
			passThrough = 0;
		};
		class HitLGlass {
			convexComponent = "sklo predni L";
			armor = 0.1;
			material = 51;
			name = "sklo predni L";
			visual = "sklo predni L";
			passThrough = 0;
		};
		class HitGlass1 {
			armor = 2;
			material = -1;
			name = "glass1";
			visual = "glass1";
			passThrough = 0;
		};
		class HitGlass2 {
			armor = 2;
			material = -1;
			name = "glass2";
			visual = "glass2";
			passThrough = 0;
		};
		class HitGlass3 {
			armor = 2;
			material = -1;
			name = "glass3";
			visual = "glass3";
			passThrough = 0;
		};
		class HitGlass4 {
			armor = 2;
			material = -1;
			name = "glass4";
			visual = "glass4";
			passThrough = 0;
		};
		class HitGlass5 {
			armor = 2;
			material = -1;
			name = "glass5";
			visual = "glass5";
			passThrough = 0;
		};
		class HitGlass6 {
			armor = 2;
			material = -1;
			name = "glass6";
			visual = "glass6";
			passThrough = 0;
		};
	};
	class Turrets {
		class MainTurret: NewTurret {
			class Turrets;
			class ViewOptics;
		};
	};
};

#include "MI17.hpp"
#include "UH1H.hpp"
#include "UH1Y.hpp"
#include "AH6.hpp"
#include "MH6J.hpp"
#include "CH53.hpp"
#include "UH60.hpp"
#include "CH47.hpp"
#include "Merlin.hpp"
#include "AH1Z.hpp"
#include "AH64.hpp"
#include "Ka137.hpp"
#include "Ka52.hpp"
#include "Mi24.hpp"
#include "Pook.hpp"
#include "PookAmphib.hpp"
#include "Mozzie.hpp"
#include "KA60.hpp"
#include "AW159.hpp"
#include "MTVRBird.hpp"
