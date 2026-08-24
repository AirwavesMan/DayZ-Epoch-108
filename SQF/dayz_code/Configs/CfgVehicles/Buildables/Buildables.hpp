// All -> Static -> Building -> NonStrategic -> HouseBase -> House
class DZE_Building_Base: House {
	scope = 0;
	// side = 3;
	icon = "\ca\data\data\Unknown_object.paa";
	nameSound = "house";
	// simulation = "house";
	// picture = "pictureStaticObject";
	placement = "vertical";
	// ladders[] = {};
	vehicleClass = "DayZ Epoch 1071 Base";
	displayName = "";
	mapSize = 11;
	animated = 1;
	armor = 100;
	destrType = "DestructNo";
	DZE_offset[] = {0,3,0};
	// damageResistance = 0.004;
	// reversed = 0;
	// hasDriver = 0;
	// accuracy = 0.2;
	// cost = 0;
	// weapons[] = {};
	// magazines[] = {};
	// irTarget = 0;
	// type = 1;
	threat[] = {0,0,0};
	// maxSpeed = 0;
	coefInside = 0.5;
	coefInsideHeur = 0.8;
	// typicalCargo[] = {};
	// transportAmmo = 0;
	// transportRepair = 0;
	// transportFuel = 0;
	DZE_allowBuilding = 1;        	//	Building allowed by server
	DZE_bypassBase = 0;           	//	Building without Territory Marker
	DZE_preventUnderground = 1;   	//	No underground building
	DZE_saveToDatabase = 1;        	//	Allowed server saving the building to the database
	DZE_allowRotation = 1; 			//	Allow rotation of the object
	DZE_buildingSteps = 1;			//	How many animation steps the buildings needs to be build

	class DestructionEffects {
		class Sound {
			simulation = "sound";
			type = "DestrHouse";
			position = "destructionEffect1";
			intensity = 1;
			interval = 1;
			lifeTime = 0.05;
		};

		class DestroyPhase1 {
			simulation = "destroy";
			type = "DelayedDestruction";
			lifeTime = 2.5;
			position = "";
			intensity = 1;
			interval = 1;
		};

		class DamageAround1 {
			simulation = "damageAround";
			type = "DamageAroundHouse";
			position = "";
			intensity = 0.1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

#include "ModularBuild\ModularBuild.hpp"
#include "Fences\Fences.hpp"
#include "Storage\Storage.hpp"
#include "StorageLocked\StorageLocked.hpp"

#include "TerritoryMarkers.hpp"
#include "Fireplaces.hpp"
#include "Traps.hpp"	
#include "Supplies.hpp"
#include "Generator.hpp"	
#include "Bridges.hpp"
#include "Defenses.hpp"
#include "CamoNets.hpp"
#include "Sandbags.hpp"
#include "Plants.hpp"
#include "Trees.hpp"
#include "Garages.hpp"
#include "MetalContainer.hpp"
#include "Helipads.hpp"
#include "AnimalStables.hpp"
#include "Structures.hpp"
#include "Furnitures.hpp"
#include "StaticWeapons.hpp"		//Todo
#include "Billboards.hpp"		//Buildables?


