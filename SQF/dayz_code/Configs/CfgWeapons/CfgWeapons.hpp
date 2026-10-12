class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class HandGrenade;

class CfgWeapons {
	class Default {
		canlock = LockNo;
	};
	
	class Put: Default {
		class PutMuzzle;
		class TimeBombMuzzle: PutMuzzle {
			magazines[] = {"TimeBomb", "DZE_Item_Expl_TimeBomb"};
		};
		class PipeBombMuzzle: PutMuzzle {
			magazines[] = {"PipeBomb", "DZE_Item_Expl_PipeBomb"};
		};
		class MineMuzzle: PutMuzzle {
			magazines[] = {"Mine", "DZE_Item_Expl_Mine"};
		};
		class MineEMuzzle: PutMuzzle {
			magazines[] = {"MineE", "DZE_Item_Expl_MineE"};
		};
	};

	class ItemCore;
	class Rifle;
	class Pistol;
	class GrenadeLauncher;	
	
	/* Dummy weapons */
	#include "Throw.hpp"
	
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