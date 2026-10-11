#define FLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define MFLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
}

class Sa58V_EP1;
class DZE_Wep_SA58 : Sa58V_EP1 {
	displayName = "$STR_DZ_WPN_SA58_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	modes[] = {Single, FullAuto};
	magazines[] = {30Rnd_762x39_SA58,30Rnd_762x39_AK47,60Rnd_762x39_AK47_Taped};

	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;

	class Attachments {
		Attachment_SA58RIS = "DZE_Wep_SA58_RIS";
	};
};

class DZE_Wep_SA58_RIS : DZE_Wep_SA58 {
	displayName = "$STR_DZ_WPN_SA58_RIS_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_ris.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_ris_ca.paa";

	class Attachments {
		Attachment_CCO = "DZE_Wep_SA58_CCO";
		Attachment_Holo = "DZE_Wep_SA58_Holo";
		Attachment_ACOG = "DZE_Wep_SA58_ACOG";
		Attachment_FL = "DZE_Wep_SA58_RIS_FL";
		Attachment_MFL = "DZE_Wep_SA58_RIS_MFL";
	};

	class ItemActions {
		class RemoveRIS {
			text = "$STR_DZ_ATT_RIS_RMVE";
			script = "; ['Attachment_SA58RIS',_id,'DZE_Wep_SA58'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SA58_RIS_FL : DZE_Wep_SA58_RIS {
	displayName = "$STR_DZ_WPN_SA58_RIS_FL_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_ris_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_ris_fl_ca.paa";

	FLASHLIGHT;

	class Attachments {
		Attachment_CCO = "DZE_Wep_SA58_CCO_FL";
		Attachment_Holo = "DZE_Wep_SA58_Holo_FL";
		Attachment_ACOG = "DZE_Wep_SA58_ACOG_FL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['Attachment_FL',_id,'DZE_Wep_SA58_RIS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SA58_RIS_MFL : DZE_Wep_SA58_RIS {
	displayName = "$STR_DZ_WPN_SA58_RIS_MFL_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_ris_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_ris_fl_ca.paa";

	MFLASHLIGHT;

	class Attachments {
		Attachment_CCO = "DZE_Wep_SA58_CCO_MFL";
		Attachment_Holo = "DZE_Wep_SA58_Holo_MFL";
		Attachment_ACOG = "DZE_Wep_SA58_ACOG_MFL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['Attachment_MFL',_id,'DZE_Wep_SA58_RIS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SA58_CCO : DZE_Wep_SA58_RIS {
	displayName = "$STR_DZ_WPN_SA58_CCO_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_cco_ca.paa";
	weaponInfoType = "RscWeaponEmpty";

	discreteDistance[] = {};
	discreteDistanceInitIndex = 0;
	distanceZoomMin = 200;
	distanceZoomMax = 200;

	class Attachments {
		Attachment_FL = "DZE_Wep_SA58_CCO_FL";
		Attachment_MFL = "DZE_Wep_SA58_CCO_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_SA58_RIS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SA58_CCO_FL : DZE_Wep_SA58_CCO {
	displayName = "$STR_DZ_WPN_SA58_CCO_FL_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_cco_fl_ca.paa";

	FLASHLIGHT;

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_SA58_RIS_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['Attachment_FL',_id,'DZE_Wep_SA58_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SA58_CCO_MFL : DZE_Wep_SA58_CCO {
	displayName = "$STR_DZ_WPN_SA58_CCO_MFL_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_cco_fl_ca.paa";

	MFLASHLIGHT;

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_SA58_RIS_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['Attachment_MFL',_id,'DZE_Wep_SA58_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SA58_Holo : DZE_Wep_SA58_CCO {
	displayName = "$STR_DZ_WPN_SA58_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_holo_ca.paa";

	class Attachments {
		Attachment_FL = "DZE_Wep_SA58_Holo_FL";
		Attachment_MFL = "DZE_Wep_SA58_Holo_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_SA58_RIS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SA58_Holo_FL : DZE_Wep_SA58_Holo {
	displayName = "$STR_DZ_WPN_SA58_HOLO_FL_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_holo_fl_ca.paa";

	FLASHLIGHT;

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_SA58_RIS_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['Attachment_FL',_id,'DZE_Wep_SA58_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SA58_Holo_MFL : DZE_Wep_SA58_Holo {
	displayName = "$STR_DZ_WPN_SA58_HOLO_MFL_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_holo_fl_ca.paa";

	MFLASHLIGHT;

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_SA58_RIS_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['Attachment_MFL',_id,'DZE_Wep_SA58_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SA58_ACOG : DZE_Wep_SA58_CCO {
	displayName = "$STR_DZ_WPN_SA58_ACOG_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_acog_ca.paa";
	modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";

	//TODO: new optic for acog
	class OpticsModes {
		class ACOG {
			memoryPointCamera = "opticView";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit = 0.0623;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			visionMode[] = {"Normal"};
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur3"};
		};

		class Iron {
			memoryPointCamera = "eye";
			cameraDir = "";
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			visionMode[] = {};
			opticsPPEffects[] = {};
		};
	};

	class Attachments {
		Attachment_FL = "DZE_Wep_SA58_ACOG_FL";
		Attachment_MFL = "DZE_Wep_SA58_ACOG_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_SA58_RIS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SA58_ACOG_FL : DZE_Wep_SA58_ACOG {
	displayName = "$STR_DZ_WPN_SA58_ACOG_FL_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_acog_fl_ca.paa";

	FLASHLIGHT;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_SA58_RIS_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['Attachment_FL',_id,'DZE_Wep_SA58_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SA58_ACOG_MFL : DZE_Wep_SA58_ACOG {
	displayName = "$STR_DZ_WPN_SA58_ACOG_MFL_NAME";
	model = "z\addons\dayz_communityweapons\sa58\sa58_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\sa58\data\w_sa58_acog_fl_ca.paa";

	MFLASHLIGHT;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_SA58_RIS_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['Attachment_MFL',_id,'DZE_Wep_SA58_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Sa58V: Sa58V_EP1 {
	magazines[] = {30Rnd_762x39_SA58,30Rnd_762x39_AK47,60Rnd_762x39_AK47_Taped};
};
class Sa58V_CCO_EP1;
class DZE_Wep_Sa58V_Camo_CCO: Sa58V_CCO_EP1 {
	magazines[] = {30Rnd_762x39_SA58,30Rnd_762x39_AK47,60Rnd_762x39_AK47_Taped};
};
class Sa58V_RCO_EP1;
class DZE_Wep_Sa58V_Camo_ACOG: Sa58V_RCO_EP1 {
	magazines[] = {30Rnd_762x39_SA58,30Rnd_762x39_AK47,60Rnd_762x39_AK47_Taped};
};