#include "VehicleMacros.hpp"

class AllVehicles: ALL {
	class NewTurret;
	class ViewPilot;
	class ViewOptics;
	class Sounds { class Engine; class Movement;};
	class DefaultEventhandlers;
	class EventHandlers: DefaultEventhandlers {
		killed = "";	//	ToDo: Adding the new mpKilled EH
	};
};

class Land;	// External class reference
class LandVehicle: Land {
	class NewTurret;
	class Sounds;
	class ViewOptics;
	class ViewPilot;
	class AnimationSources;
	class EventHandlers;
	class Reflectors
	{
		class Left
		{
			angle = 120;
			color[] = {0.9,0.8,0.8,1};
			ambient[] = {0.1,0.1,0.1,1};
			position = "L svetlo";
			direction = "konec L svetla";
			hitpoint = "L svetlo";
			selection = "L svetlo";
			size = 0.5;
			brightness = 0.5;
		};
		class Right
		{
			angle = 120;
			color[] = {0.9,0.8,0.8,1};
			ambient[] = {0.1,0.1,0.1,1};
			position = "P svetlo";
			direction = "konec P svetla";
			hitpoint = "P svetlo";
			selection = "P svetlo";
			size = 0.5;
			brightness = 0.5;
		};
	};
};

#include "ATVs\ATVs.hpp"
#include "Bikes\Bikes.hpp"
#include "Cars\Cars.hpp"
#include "Trucks\Trucks.hpp"
#include "Tanks\Tanks.hpp"
#include "APCs\APCs.hpp"
#include "Artillery\Artillery.hpp"

class Air: AllVehicles	{
	class NewTurret;
	class ViewPilot;
	class AnimationSources;
};

#include "Helicopters\Helicopters.hpp"
#include "Planes\Planes.hpp"

#include "Boats\Boats.hpp"

