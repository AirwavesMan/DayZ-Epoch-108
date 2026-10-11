class PK: Rifle {
	class manual;
};
class DZE_Wep_PKM : PK { //Iron sight PKM
	displayName = "$STR_DZ_WPN_PKM_NAME";
	model = "z\addons\dayz_communityweapons\pkm\pkm.p3d";
	weaponInfoType = "RscWeaponZeroing";
	type = 1;

	magazines[] = {100Rnd_762x54_PK};

	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 2;

	modes[] = {FullAuto};

	class FullAuto : manual {
		reloadTime = 0.08;
	};
};

class Pecheneg;
class DZE_Wep_PKP: Pecheneg { //PKP with long range scope
	type = 1;
};