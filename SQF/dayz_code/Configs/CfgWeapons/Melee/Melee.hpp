class DZE_Melee_Weapon_Base : Rifle {
	melee = true;
	
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	fireLightDuration = 0;
	fireLightIntensity = 0;
	
	autoReload = true;
	magazineReloadTime = 0;
	
	soundBullet[] = {"emptySound", 1};
	drySound[] = {"", 1, 1};
	reloadMagazineSound[] = {"", 1, 1};
	
	cursor = "Vehicle_Grenade_W";
	cursorAim = "\ca\Weapons\Data\clear_empty";
	cursorSize = 1;
	
	handAnim[] = {"OFP2_ManSkeleton","\dayz_weapons\anim\melee_hatchet_holding.rtm"};
	
	modes[] = {Single};
	
	class Single : Mode_FullAuto {
		displayName = "$STR_ACTION_HACK";
		dispersion = 0.1;
		reloadTime = 1;
		recoil = "DZ_Swing";
		recoilProne = "DZ_Swing";
		
		sound[] = {"", 0, 1};
		swing0[] = {"dayz_weapons\sounds\swing_0", 1.77828, 1, 30};
		swing1[] = {"dayz_weapons\sounds\swing_1", 1.77828, 1, 30};
		soundBegin[] = {"swing0", 0.5, "swing1", 0.5};
	};
};

#include "Hatchet.hpp"
#include "Crowbar.hpp"
#include "Machete.hpp"
#include "BaseballBat.hpp"
#include "FishingPole.hpp"
#include "Sledgehammer.hpp"