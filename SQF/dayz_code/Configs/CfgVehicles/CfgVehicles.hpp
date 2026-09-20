#include "CommonActions.hpp"
class WeaponFireGun;    // External class reference
class WeaponCloudsGun;  // External class reference
class WeaponFireMGun;   // External class reference
class WeaponCloudsMGun;

class CfgVehicles {
	class ALL;
	
	#include "Vehicles\Vehicles.hpp"
	
	class HouseBase;
	class Ruins: HouseBase {};
	class House : HouseBase
	{
		class DestructionEffects;
	};
	class House_EP1;
	class Land_HouseV_1I2;
	class SpawnableWreck : House {};
	class Strategic;
	class NonStrategic;
	class Thing;
	class BuiltItems;
	class Building;
	class ReammoBox;
	class Land_A_tent;

	#include "RepairParts.hpp"
	//ZEDS
	#include "Zeds\Zeds.hpp" //All type zeds
	#include "Zeds\ViralZeds.hpp" //Viral type zeds
	#include "Zeds\WildZeds.hpp" //Wild type zeds
	#include "Zeds\SwarmZeds.hpp" //Swarm type zeds
	#include "Zeds\PlayerZeds.hpp" //Player type zeds
	#include "Zeds\Bloodsuckers.hpp" //NS Bloodsuckers
	//Skins	
	#include "Skins\Male.hpp"
	#include "Skins\Female.hpp"
	//Bags
	#include "Bags.hpp"	// Backpacks
	//DZAnimal and DZ_Fin
	#include "Animal.hpp"

	#include "CrashSite.hpp"

	//Includes all Building Stuff
	//Houses
	#include "Buildings\Land_A_Crane_02b.hpp"
	#include "Buildings\Land_A_TVTower_Mid.hpp"
	#include "Buildings\Land_A_TVTower_Top.hpp"
	#include "Buildings\Land_Farm_WTower.hpp"
	#include "Buildings\Land_HouseB_Tenement.hpp"
	#include "Buildings\Land_Ind_MalyKomin.hpp"
	#include "Buildings\Land_komin.hpp"
	#include "Buildings\Land_majak.hpp"
	#include "Buildings\Land_Mil_ControlTower.hpp"
	#include "Buildings\Land_NAV_Lighthouse.hpp"
	#include "Buildings\Land_NavigLight.hpp"
	#include "Buildings\Land_Rail_Semafor.hpp"
	#include "Buildings\Land_Rail_Zavora.hpp"
	#include "Buildings\Land_runway_edgelight.hpp"
	#include "Buildings\Land_Stoplight.hpp"
	#include "Buildings\Land_telek1.hpp"
	#include "Buildings\Land_VASICore.hpp"
	#include "Buildings\Land_Vysilac_FM.hpp"
	#include "Buildings\WarfareBBaseStructure.hpp"	
	#include "Buildings\Land_houseV_2T2.hpp"
	#include "Buildings\Land_Ind_Oil_Pump_EP1_DZE.hpp"	//Oil Pump without sound
	#include "Buildings\Fuelstations.hpp"
	#include "Buildings\land_ibr_hangar.hpp" //Works only if Lingor is loaded
	#include "Buildings\Land_Shed_M01.hpp" // Animated door and interior, made by Helion4
	
	#include "WaterSources.hpp"	
	#include "Blood_Trail_DZ.hpp"
	#include "DebugBox.hpp"
	#include "Graves.hpp" // GraveDZE, Massgrave, dead bodies
	#include "Veins.hpp" //Veins and Wrecks
	#include "SupplyCrate.hpp" //Supply Crate and Wreck
	#include "InfectedCamps.hpp"		
	#include "Rubbish.hpp"	
	
	//Buildables
	#include "Buildables\Buildables.hpp"
	
	//Loot Container
	#include "LootContainer\AmmoCrates.hpp"
	#include "LootContainer\CardboardBox.hpp"
	
	//WeaponHolder	
	class WeaponHolder;	// External class reference
	#include "WeaponHolder.hpp"
	#include "Plants.hpp"	

	//Antihack
	#include "AntiHack\antihack_logic.hpp"
	#include "AntiHack\antihack_plants.hpp"
	
	class Land_CncBlock_AntiHack: NonStrategic
	{
		scope = 2;
		vehicleClass = "DayZ Epoch 1071 Helper";
		model = "z\addons\dayz_communityassets\models\CncBlock_D.p3d";
		Icon = "\Ca\misc3\Data\Icons\icon_cnc_con_barrier_CA.paa";
		mapSize = 4;
		displayName = $STR_MISC_CNCBLOCK_D;
		armor = 150;
	};
	
	class waterHoleProxy: House {
		model = "z\addons\dayz_communityassets\models\waterHoleProxy.p3d";
	};	

	class ThingEffect;
	class FxCartridge_Mp7: ThingEffect
	{
		model = "\C1987_Mp7\cartridge\46_30.p3d";
		displayName = "4.6x30mm Cartridge";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
		airRotation = 1.0;
	};
	
	#include "HiddenGearContainer.hpp"
	#include "Helper.hpp"	
};
