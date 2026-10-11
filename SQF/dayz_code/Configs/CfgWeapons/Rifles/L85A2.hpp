#define L85A2_FLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define L85A2_MFLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
}

#define L85A2_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
class OpticsModes {\
	class ACOG {\
		memoryPointCamera = "opticView";\
		cameraDir = "";\
		opticsID = 1;\
		useModelOptics = true;\
		opticsFlare = true;\
		opticsDisablePeripherialVision = true;\
		opticsZoomMin = 0.0623;\
		opticsZoomMax = 0.0623;\
		opticsZoomInit = 0.0623;\
		distanceZoomMin = 300;\
		distanceZoomMax = 300;\
		visionMode[] = {"Normal"};\
		opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur3"};\
	};\
	\
	class Iron {\
		memoryPointCamera = "eye";\
		cameraDir = "";\
		opticsID = 2;\
		useModelOptics = false;\
		opticsFlare = false;\
		opticsDisablePeripherialVision = false;\
		opticsZoomMin = 0.25;\
		opticsZoomMax = 1.1;\
		opticsZoomInit = 0.5;\
		distanceZoomMin = 100;\
		distanceZoomMax = 100;\
		visionMode[] = {};\
		opticsPPEffects[] = {};\
	};\
}

//Iron sights

class BAF_L85A2_RIS_Holo;
class DZE_Wep_L85A2 : BAF_L85A2_RIS_Holo {
	displayName = "$STR_DZ_WPN_L85A2_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_ca.paa";

	irDistance = 0;

	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	class Single;
	class FullAuto;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_L85A2_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_L85A2_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_L85A2_ACOG";
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_SD";
		DZE_Item_Att_FL = "DZE_Wep_L85A2_FL";
		DZE_Item_Att_MFL = "DZE_Wep_L85A2_MFL";
	};
};

class DZE_Wep_L85A2_FL : DZE_Wep_L85A2 {
	displayName = "$STR_DZ_WPN_L85A2_FL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_FL.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_fl_ca.paa";

	L85A2_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_L85A2_CCO_FL";
		DZE_Item_Att_Holo = "DZE_Wep_L85A2_Holo_FL";
		DZE_Item_Att_ACOG = "DZE_Wep_L85A2_ACOG_FL";
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_SD_FL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_L85A2'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_MFL : DZE_Wep_L85A2 {
	displayName = "$STR_DZ_WPN_L85A2_MFL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_FL.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_fl_ca.paa";

	L85A2_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_L85A2_CCO_MFL";
		DZE_Item_Att_Holo = "DZE_Wep_L85A2_Holo_MFL";
		DZE_Item_Att_ACOG = "DZE_Wep_L85A2_ACOG_MFL";
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_SD_MFL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_L85A2'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_SD_Base : DZE_Wep_L85A2 {
	magazines[] =
	{
		30Rnd_556x45_StanagSD,
		30Rnd_556x45_G36SD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
	};
	fireLightDuration = 0;
	fireLightIntensity = 0;
	modes[] = {"Single","FullAuto"};
	class Single : Single {
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1,1,300};
		soundBegin[] = {"begin1",1};
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
	class FullAuto : FullAuto {
		recoil = "recoil_auto_primary_2outof10";
		recoilProne = "recoil_auto_primary_prone_2outof10";
		begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1,1,300};
		soundBegin[] = {"begin1",1};
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};
};

class DZE_Wep_L85A2_SD : DZE_Wep_L85A2_SD_Base {
	displayName = "$STR_DZ_WPN_L85A2_SD_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_SD.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_SD_ca.paa";

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_L85A2_CCO_SD";
		DZE_Item_Att_Holo = "DZE_Wep_L85A2_Holo_SD";
		DZE_Item_Att_ACOG = "DZE_Wep_L85A2_ACOG_SD";
		DZE_Item_Att_FL = "DZE_Wep_L85A2_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_L85A2_SD_MFL";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_SD_FL : DZE_Wep_L85A2_SD {
	displayName = "$STR_DZ_WPN_L85A2_sd_FL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_SD_FL.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_sd_fl_ca.paa";

	L85A2_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_L85A2_CCO_SD_FL";
		DZE_Item_Att_Holo = "DZE_Wep_L85A2_Holo_SD_FL";
		DZE_Item_Att_ACOG = "DZE_Wep_L85A2_ACOG_SD_FL";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_L85A2_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_SD_MFL : DZE_Wep_L85A2_SD {
	displayName = "$STR_DZ_WPN_L85A2_sd_MFL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_SD_FL.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_sd_fl_ca.paa";

	L85A2_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_L85A2_CCO_SD_MFL";
		DZE_Item_Att_Holo = "DZE_Wep_L85A2_Holo_SD_MFL";
		DZE_Item_Att_ACOG = "DZE_Wep_L85A2_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_L85A2_SD'] call player_removeAttachment";
		};
	};
};

//CCO

class DZE_Wep_L85A2_CCO : DZE_Wep_L85A2 {
	displayName = "$STR_DZ_WPN_L85A2_CCO_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_CCO.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_CCO_SD";
		DZE_Item_Att_FL = "DZE_Wep_L85A2_CCO_FL";
		DZE_Item_Att_MFL = "DZE_Wep_L85A2_CCO_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_L85A2'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_CCO_FL : DZE_Wep_L85A2_FL {
	displayName = "$STR_DZ_WPN_L85A2_CCO_FL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_CCO_SD_FL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_L85A2_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_L85A2_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_CCO_MFL : DZE_Wep_L85A2_MFL {
	displayName = "$STR_DZ_WPN_L85A2_CCO_MFL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_CCO_SD_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_L85A2_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_L85A2_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_CCO_SD : DZE_Wep_L85A2_SD {
	displayName = "$STR_DZ_WPN_L85A2_CCO_SD_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_cco_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_sd_ca.paa";

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_L85A2_CCO_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_L85A2_CCO_SD_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_L85A2_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_CCO_SD_FL : DZE_Wep_L85A2_SD_FL {
	displayName = "$STR_DZ_WPN_L85A2_CCO_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_sd_fl_ca.paa";

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_L85A2_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2_CCO_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_L85A2_CCO_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_CCO_SD_MFL : DZE_Wep_L85A2_SD_MFL {
	displayName = "$STR_DZ_WPN_L85A2_CCO_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_cco_sd_fl_ca.paa";

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_L85A2_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2_CCO_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_L85A2_CCO_SD'] call player_removeAttachment";
		};
	};
};

//Holo

class DZE_Wep_L85A2_Holo : DZE_Wep_L85A2 {
	displayName = "$STR_DZ_WPN_L85A2_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_Holo_SD";
		DZE_Item_Att_FL = "DZE_Wep_L85A2_Holo_FL";
		DZE_Item_Att_MFL = "DZE_Wep_L85A2_Holo_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_L85A2'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_Holo_FL : DZE_Wep_L85A2_FL {
	displayName = "$STR_DZ_WPN_L85A2_HOLO_FL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_Holo_SD_FL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_L85A2_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_L85A2_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_Holo_MFL : DZE_Wep_L85A2_MFL {
	displayName = "$STR_DZ_WPN_L85A2_HOLO_MFL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_Holo_SD_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_L85A2_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_L85A2_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_Holo_SD : DZE_Wep_L85A2_SD {
	displayName = "$STR_DZ_WPN_L85A2_HOLO_SD_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_sd_ca.paa";

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_L85A2_Holo_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_L85A2_Holo_SD_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_L85A2_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_Holo_SD_FL : DZE_Wep_L85A2_SD_FL {
	displayName = "$STR_DZ_WPN_L85A2_HOLO_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_sd_fl_ca.paa";

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_L85A2_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2_Holo_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_L85A2_Holo_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_Holo_SD_MFL : DZE_Wep_L85A2_SD_MFL {
	displayName = "$STR_DZ_WPN_L85A2_HOLO_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_holo_sd_fl_ca.paa";

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_L85A2_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2_Holo_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_L85A2_Holo_SD'] call player_removeAttachment";
		};
	};
};

//ACOG

class DZE_Wep_L85A2_ACOG : DZE_Wep_L85A2 {
	displayName = "$STR_DZ_WPN_L85A2_ACOG_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_ca.paa";

	L85A2_ACOG;

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_ACOG_SD";
		DZE_Item_Att_FL = "DZE_Wep_L85A2_ACOG_FL";
		DZE_Item_Att_MFL = "DZE_Wep_L85A2_ACOG_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_L85A2'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_ACOG_FL : DZE_Wep_L85A2_FL {
	displayName = "$STR_DZ_WPN_L85A2_ACOG_FL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_fl_ca.paa";

	L85A2_ACOG;

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_ACOG_SD_FL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_L85A2_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_L85A2_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_ACOG_MFL : DZE_Wep_L85A2_MFL {
	displayName = "$STR_DZ_WPN_L85A2_ACOG_MFL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_fl_ca.paa";

	L85A2_ACOG;

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_L85A2_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_L85A2_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_L85A2_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_ACOG_SD : DZE_Wep_L85A2_SD {
	displayName = "$STR_DZ_WPN_L85A2_ACOG_SD_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_sd_ca.paa";

	L85A2_ACOG;

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_L85A2_ACOG_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_L85A2_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_L85A2_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_ACOG_SD_FL : DZE_Wep_L85A2_SD_FL {
	displayName = "$STR_DZ_WPN_L85A2_ACOG_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_sd_fl_ca.paa";

	L85A2_ACOG;

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_L85A2_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2_ACOG_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_L85A2_ACOG_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_L85A2_ACOG_SD_MFL : DZE_Wep_L85A2_SD_MFL {
	displayName = "$STR_DZ_WPN_L85A2_ACOG_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\L85A2\L85A2_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\L85A2\data\w_L85A2_acog_sd_fl_ca.paa";

	L85A2_ACOG;

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_L85A2_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_L85A2_ACOG_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_L85A2_ACOG_SD'] call player_removeAttachment";
		};
	};
};

class BAF_L85A2_RIS_CWS;
class DZE_Wep_BAF_L85A2_RIS_TWS : BAF_L85A2_RIS_CWS {
	displayName = "L85A2 TWS";
	visionMode[] = {"Normal","NVG","Ti"};
	thermalMode[] = {6};
	discretefov[] = {0.0755,0.0249};
	discreteInitIndex = 0;
	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;

	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
};
