class DZE_Tool_ChainSaw: Rifle {
	scope = 2;
	displayName = "$STR_EPOCH_CHAINSAW";
	descriptionShort = "$STR_EPOCH_DESC_CHAINSAW";
	model = "\z\addons\dayz_epoch\models\chainsaw.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_chainsaw_CA.paa";
	cursor = "";
	cursoraim = "\ca\Weapons\Data\clear_empty";
	emptySound[] = {"",10,1};
	soundBullet[] = {"emptySound",1};

	modes[] = {"manual"};
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\z\addons\dayz_code\anim\saw_idle.rtm"
	};
	class manual: Mode_FullAuto {
		displayName = "$STR_EPOCH_CHAINSAW_GAS";
		recoil = "recoil_auto_machinegun_10outof10";
		recoilProne = "recoil_auto_machinegun_prone_10outof10";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		modelOptics = "-";
		useActionTitle = "";
		dispersion = 0.2;

		begin1[] = {"\dayz_sfx\chainsaw\running2.ogg",1.77828,1,1000};
		soundBegin[] = {"begin1",1};

		distanceZoomMin = 50;
		distanceZoomMax = 50;
		canDrop = 0;
		optics = 1;

		burst = 1;
		multiplier = 1;

		soundContinuous = 0;
		soundBurst = 0;

		useAction = 0;

		// from hatchet
		minRange = 0.5;
		minRangeProbab = 0.8;
		midRange = 1;
		midRangeProbab = 1.5;
		maxRange = 2;
		maxRangeProbab = 2.5;

		showToPlayer = 1;
		//reloadTime = 0.0708762;
		reloadTime = 0.12;
	};
	aiDispersionCoefY = 21;
	aiDispersionCoefX = 21;
	dexterity = 0.51;
	reloadMagazineSound[] = {"\dayz_sfx\chainsaw\start-attempt.ogg",0.1,1,20};
	drySound[] = {"\dayz_sfx\chainsaw\start-attempt.ogg",0.01,1,10};
	magazines[] = {"CSGAS"};
	class Library {
		libTextDesc = "$STR_EPOCH_DESC_CHAINSAW";
	};
};
class DZE_Tool_ChainSawB : DZE_Tool_ChainSaw {
	displayName = "$STR_EPOCH_CHAINSAW_BLUE";
	descriptionShort = "$STR_EPOCH_DESC_CHAINSAW_BLUE";
	model = "\z\addons\dayz_epoch\models\chainsaw_B.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_chainsawB_CA.paa";
	class Library {
		libTextDesc = "$STR_EPOCH_DESC_CHAINSAW_BLUE";
	};	
};
class DZE_Tool_ChainSawG : DZE_Tool_ChainSaw {
	displayName = "$STR_EPOCH_CHAINSAW_GREEN";
	descriptionShort = "$STR_EPOCH_DESC_CHAINSAW_GREEN";
	model = "\z\addons\dayz_epoch\models\chainsaw_G.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_chainsawG_CA.paa";
	class Library {
		libTextDesc = "$STR_EPOCH_DESC_CHAINSAW_GREEN";
	};	
};
class DZE_Tool_ChainSawP : DZE_Tool_ChainSaw {
	displayName = "$STR_EPOCH_CHAINSAW_PINK";
	descriptionShort = "$STR_EPOCH_DESC_CHAINSAW_PINK";
	model = "\z\addons\dayz_epoch\models\chainsaw_P.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_chainsawP_CA.paa";
	class Library {
		libTextDesc = "$STR_EPOCH_DESC_CHAINSAW_PINK";
	};	
};
class DZE_Tool_ChainSawR : DZE_Tool_ChainSaw {
	displayName = "$STR_EPOCH_CHAINSAW_RED";
	descriptionShort = "$STR_EPOCH_DESC_CHAINSAW_RED";
	model = "\z\addons\dayz_epoch\models\chainsaw_R.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_chainsawR_CA.paa";
	class Library {
		libTextDesc = "$STR_EPOCH_DESC_CHAINSAW_RED";
	};	
};

class DZE_Tool_ChainSawBroken : DZE_Tool_ChainSaw {
	displayName = "$STR_EPOCH_CHAINSAW_BROKEN";
	descriptionShort = "$STR_EPOCH_DESC_CHAINSAW_BROKEN";
	picture = "\dayz_epoch_c\icons\tools\ItemChainsawBroken.paa";
	magazines[] = {};
	class Library {
		libTextDesc = "$STR_EPOCH_DESC_CHAINSAW_BROKEN";
	};	
};

class DZE_Tool_ChainSawBBroken : DZE_Tool_ChainSawB {
	displayName = "$STR_EPOCH_CHAINSAW_BLUE_BROKEN";
	descriptionShort = "$STR_EPOCH_DESC_CHAINSAW_BLUE_BROKEN";
	picture = "\dayz_epoch_c\icons\tools\ItemChainsawBlueBroken.paa";
	magazines[] = {};
	class Library {
		libTextDesc = "$STR_EPOCH_DESC_CHAINSAW_BLUE_BROKEN";
	};		
};
class DZE_Tool_ChainSawGBroken : DZE_Tool_ChainSawG {
	displayName = "$STR_EPOCH_CHAINSAW_GREEN_BROKEN";
	descriptionShort = "$STR_EPOCH_DESC_CHAINSAW_GREEN_BROKEN";
	picture = "\dayz_epoch_c\icons\tools\ItemChainsawGreenBroken.paa";
	magazines[] = {};
	class Library {
		libTextDesc = "$STR_EPOCH_DESC_CHAINSAW_GREEN_BROKEN";
	};		
};
class DZE_Tool_ChainSawPBroken : DZE_Tool_ChainSawP {
	displayName = "$STR_EPOCH_CHAINSAW_PINK_BROKEN";
	descriptionShort = "$STR_EPOCH_DESC_CHAINSAW_PINK_BROKEN";
	picture = "\dayz_epoch_c\icons\tools\ItemChainsawPinkBroken.paa";
	magazines[] = {};
	class Library {
		libTextDesc = "$STR_EPOCH_DESC_CHAINSAW_PINK_BROKEN";
	};	
};
class DZE_Tool_ChainSawRBroken : DZE_Tool_ChainSawR {
	displayName = "$STR_EPOCH_CHAINSAW_RED_BROKEN";
	descriptionShort = "$STR_EPOCH_DESC_CHAINSAW_RED_BROKEN";
	picture = "\dayz_epoch_c\icons\tools\ItemChainsawRedBroken.paa";
	magazines[] = {};
	class Library {
		libTextDesc = "$STR_EPOCH_DESC_CHAINSAW_RED_BROKEN";
	};
};