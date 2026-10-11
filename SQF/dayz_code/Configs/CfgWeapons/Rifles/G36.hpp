class DZE_Wep_G36K_Camo : G36C {
	displayName = "$STR_DZ_WPN_G36K_CAMO_NAME";
	model = "z\addons\dayz_communityweapons\g36\g36k_camo.p3d";
	picture = "\z\addons\dayz_communityweapons\g36\data\w_g36k_camo_ca.paa";
	modelOptics = "z\addons\dayz_communityweapons\g36\2dscope_g36.p3d";
	magazines[] =
	{
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	//G36 Optic
	optics = true;
	opticsDisablePeripherialVision = true;
	opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur2"};
	opticsZoomMin=0.083; opticsZoomMax=0.083;
	distanceZoomMin=100; distanceZoomMax=100;

	dexterity = 1.8;

	class Single : Single {
		dispersion = 0.0011;
	};

	class Burst : Burst {
		dispersion = 0.0011;
	};

	class FullAuto : FullAuto {
		dispersion = 0.0011;
	};

	class OpticsModes {
		class Kolimator {
			memoryPointCamera = "eye";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin=100;
			distanceZoomMax=100;
			visionMode[] = {};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
		};

		class Scope {
			memoryPointCamera = "opticView";
			cameraDir = "";
			opticsID = 2;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.083;
			opticsZoomMax = 0.083;
			opticsZoomInit= 0.083;
			distanceZoomMin=200;
			distanceZoomMax=200;
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
		};
	};
	//G36 Optic end

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_G36K_Camo_SD";
	};
};

class DZE_Wep_G36K_Camo_SD : G36_C_SD_eotech {
	displayName = "$STR_DZ_WPN_G36K_CAMO_SD_NAME";
	model = "z\addons\dayz_communityweapons\g36\g36k_camo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36\data\w_g36k_camo_sd_ca.paa";
	modelOptics = "z\addons\dayz_communityweapons\g36\2dscope_g36_noflash.p3d";

	magazines[] =
	{
		30Rnd_556x45_G36SD,
		30Rnd_556x45_StanagSD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
	};

	//G36 Optic
	optics = true;
	opticsDisablePeripherialVision = true;
	opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur2"};
	opticsZoomMin=0.083; opticsZoomMax=0.083;
	distanceZoomMin=100; distanceZoomMax=100;

	dexterity = 1.7;

	class Single : Single {
		dispersion = 0.0011;
	};

	class Burst : Burst {
		dispersion = 0.0011;
	};

	class FullAuto : FullAuto {
		dispersion = 0.0011;
	};

	class OpticsModes {
		class Kolimator {
			memoryPointCamera = "eye";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin=100;
			distanceZoomMax=100;
			visionMode[] = {};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
		};

		class Scope {
			memoryPointCamera = "opticView";
			cameraDir = "";
			opticsID = 2;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.083;
			opticsZoomMax = 0.083;
			opticsZoomInit= 0.083;
			distanceZoomMin=200;
			distanceZoomMax=200;
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
		};
	};
	//G36 Optic end

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_G36K_Camo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G36K : DZE_Wep_G36K_Camo {
	displayName = "$STR_DZ_WPN_G36K_NAME";
    model = "\ca\weapons\G36\G36_K";
    picture = "\ca\weapons\G36\Data\Equip\w_g36k_ca.paa";
	class Attachments {};
};

class DZE_Wep_G36A_Camo : DZE_Wep_G36K_Camo {
	displayName = "$STR_DZ_WPN_G36A_CAMO_NAME";
	model = "z\addons\dayz_communityweapons\g36\g36a_camo.p3d";
	picture = "\z\addons\dayz_communityweapons\g36\data\w_g36a_camo_ca.paa";

	dexterity = 1.66;

	class Single : Single {
		dispersion = 0.0007;
	};

	class Burst : Burst {
		dispersion = 0.0007;
	};

	class FullAuto : FullAuto {
		dispersion = 0.0007;
	};

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_G36A_Camo_SD";
	};
};

class DZE_Wep_G36A_Camo_SD : DZE_Wep_G36K_Camo_SD {
	displayName = "$STR_DZ_WPN_G36A_CAMO_SD_NAME";
	model = "z\addons\dayz_communityweapons\g36\g36a_camo_sd";
	picture = "\dayz_epoch_c\icons\weapons\G36A_Camo_SD.paa";

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_G36A_Camo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G36A : DZE_Wep_G36A_Camo {
	displayName = "$STR_DZ_WPN_G36A_NAME";
    model = "\ca\weapons\G36\G36";
    picture = "\ca\weapons\G36\Data\Equip\w_g36_ca.paa";
	class Attachments {};
};