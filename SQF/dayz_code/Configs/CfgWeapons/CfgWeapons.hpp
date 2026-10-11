class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class HandGrenade;

class CfgWeapons {
	class Default {
		canlock = LockNo;
	};
	
	class ItemCore;
	class Rifle;
	class Pistol;
	class GrenadeLauncher;	
	
	/* Dummy weapons */
	#include "Throw.hpp"
	#include "Loot.hpp"	
	
	/* RIFLES */
	#include "Rifles\Rifles.hpp"
	
	/* PISTOLS */
	#include "Pistols\Pistols.hpp"
	
	//	Melee Weapons
	#include "Melee\Melee.hpp"

	//	Tools
	#include "Tools\Tools.hpp"
	
	#include "VehicleWeapons.hpp"
};