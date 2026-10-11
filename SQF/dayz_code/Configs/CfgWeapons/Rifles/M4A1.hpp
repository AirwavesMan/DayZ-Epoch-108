#define M4A1_FLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define M4A1_MFLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
}

#define M4A1_M203 muzzles[] = {this, M203Muzzle};\
handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"}

#define M4A1_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class DZE_Wep_M4A1 : M4A1 {
	displayName = "$STR_DZ_WPN_M4A1_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_ca.paa";

	handAnim[]={"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};

	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_ACOG";
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_MFL";
	};
};

class DZE_Wep_M4A1_FL : DZE_Wep_M4A1 {
	displayName = "$STR_DZ_WPN_M4A1_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_fl_ca.paa";

	M4A1_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_CCO_FL";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_Holo_FL";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_ACOG_FL";
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_FL";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_SD_FL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1'] call player_removeAttachment";
			//script is formatted by ui_selectSlot to:
			//"_id = 'DZE_Wep_M4A1_FL' ; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1'] call player_removeAttachment;"

			//REGEX
			//script = "\[Attachment_([_a-zA-Z0-9]+)\,[_a-zA-Z0-9]+\,([_a-zA-Z0-9]+)\] call player_removeAttachment";
			//script = "; \['Attachment_$1',_id,'$2'\] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_MFL : DZE_Wep_M4A1 {
	displayName = "$STR_DZ_WPN_M4A1_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_fl_ca.paa";

	M4A1_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_CCO_MFL";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_Holo_MFL";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_ACOG_MFL";
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_MFL";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_SD_MFL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1'] call player_removeAttachment";
			//script is formatted by ui_selectSlot to:
			//"_id = 'DZE_Wep_M4A1_MFL' ; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1'] call player_removeAttachment;"

			//REGEX
			//script = "\[Attachment_([_a-zA-Z0-9]+)\,[_a-zA-Z0-9]+\,([_a-zA-Z0-9]+)\] call player_removeAttachment";
			//script = "; \['Attachment_$1',_id,'$2'\] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_SD : M4A1_AIM_SD_camo {
	displayName = "$STR_DZ_WPN_M4A1_SD_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_sd_ca.paa";

	handAnim[]={"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};

	magazines[] =
	{
		30Rnd_556x45_StanagSD,
		30Rnd_556x45_G36SD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
	};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_CCO_SD";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_Holo_SD";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_ACOG_SD";
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_SD_MFL";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_SD_FL : DZE_Wep_M4A1_SD {
	displayName = "$STR_DZ_WPN_M4A1_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_sd_fl_ca.paa";

	M4A1_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_CCO_SD_FL";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_Holo_SD_FL";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_ACOG_SD_FL";
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_SD_FL";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_SD_MFL : DZE_Wep_M4A1_SD {
	displayName = "$STR_DZ_WPN_M4A1_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_sd_fl_ca.paa";

	M4A1_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_CCO_SD_MFL";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_Holo_SD_MFL";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_ACOG_SD_MFL";
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_SD_MFL";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_SD'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_M4A1_GL : DZE_Wep_M4A1 {
	displayName = "$STR_DZ_WPN_M4A1_GL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_ca.paa";

	M4A1_M203;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_GL_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_GL_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_GL_ACOG";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_GL_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_GL_MFL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_FL : DZE_Wep_M4A1_GL {
	displayName = "$STR_DZ_WPN_M4A1_GL_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_fl_ca.paa";

	M4A1_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_GL_CCO_FL";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_GL_Holo_FL";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_GL_ACOG_FL";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_SD_FL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_GL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_MFL : DZE_Wep_M4A1_GL {
	displayName = "$STR_DZ_WPN_M4A1_GL_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_fl_ca.paa";

	M4A1_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_GL_CCO_MFL";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_GL_Holo_MFL";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_GL_ACOG_MFL";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_SD_MFL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_GL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_SD : DZE_Wep_M4A1_SD {
	displayName = "$STR_DZ_WPN_M4A1_GL_SD_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_sd_ca.paa";

	M4A1_M203;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_GL_CCO_SD";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_GL_Holo_SD";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_GL_ACOG_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_GL_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_GL_SD_MFL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_SD_FL : DZE_Wep_M4A1_GL_SD {
	displayName = "$STR_DZ_WPN_M4A1_GL_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_sd_fl_ca.paa";

	M4A1_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_GL_CCO_SD_FL";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_GL_Holo_SD_FL";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_GL_ACOG_SD_FL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_GL_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_SD_MFL : DZE_Wep_M4A1_GL_SD {
	displayName = "$STR_DZ_WPN_M4A1_GL_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_sd_fl_ca.paa";

	M4A1_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M4A1_GL_CCO_SD_MFL";
		DZE_Item_Att_Holo = "DZE_Wep_M4A1_GL_Holo_SD_MFL";
		DZE_Item_Att_ACOG = "DZE_Wep_M4A1_GL_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_GL_SD'] call player_removeAttachment";
		};
	};
};

//CCO

class DZE_Wep_M4A1_CCO : DZE_Wep_M4A1 {
	displayName = "$STR_DZ_WPN_M4A1_CCO_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_CCO";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_CCO_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_CCO_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_CCO_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_CCO_FL : DZE_Wep_M4A1_FL {
	displayName = "$STR_DZ_WPN_M4A1_CCO_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_CCO_FL";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_CCO_SD_FL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_CCO_MFL : DZE_Wep_M4A1_MFL {
	displayName = "$STR_DZ_WPN_M4A1_CCO_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_CCO_MFL";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_CCO_SD_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_CCO_SD : DZE_Wep_M4A1_SD {
	displayName = "$STR_DZ_WPN_M4A1_CCO_SD_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_sd_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_CCO_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_CCO_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_CCO_SD_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_CCO_SD_FL : DZE_Wep_M4A1_SD_FL {
	displayName = "$STR_DZ_WPN_M4A1_CCO_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_sd_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_CCO_SD_FL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_CCO_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_CCO_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_CCO_SD_MFL : DZE_Wep_M4A1_SD_MFL {
	displayName = "$STR_DZ_WPN_M4A1_CCO_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_cco_sd_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_CCO_SD_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_CCO_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_CCO_SD'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_M4A1_GL_CCO : DZE_Wep_M4A1_GL {
	displayName = "$STR_DZ_WPN_M4A1_GL_CCO_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_CCO_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_GL_CCO_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_GL_CCO_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_CCO_FL : DZE_Wep_M4A1_GL_FL {
	displayName = "$STR_DZ_WPN_M4A1_GL_CCO_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_CCO_SD_FL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1_GL_FL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_CCO_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_GL_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_CCO_MFL : DZE_Wep_M4A1_GL_MFL {
	displayName = "$STR_DZ_WPN_M4A1_GL_CCO_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_CCO_SD_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1_GL_MFL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_CCO_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_GL_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_CCO_SD : DZE_Wep_M4A1_GL_SD {
	displayName = "$STR_DZ_WPN_M4A1_GL_CCO_SD_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_sd_ca.paa";

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_M4A1_GL_CCO_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_GL_CCO_SD_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_CCO_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_CCO_SD_FL : DZE_Wep_M4A1_GL_SD_FL {
	displayName = "$STR_DZ_WPN_M4A1_GL_CCO_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_sd_fl_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1_GL_SD_FL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_CCO_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL_CCO_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_GL_CCO_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_CCO_SD_MFL : DZE_Wep_M4A1_GL_SD_MFL {
	displayName = "$STR_DZ_WPN_M4A1_GL_CCO_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_cco_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_cco_sd_fl_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M4A1_GL_SD_MFL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_CCO_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL_CCO_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_GL_CCO_SD'] call player_removeAttachment";
		};
	};
};

//Holo

class DZE_Wep_M4A1_Holo : DZE_Wep_M4A1 {
	displayName = "$STR_DZ_WPN_M4A1_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_Holo";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_Holo_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_Holo_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_Holo_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_Holo_FL : DZE_Wep_M4A1_FL {
	displayName = "$STR_DZ_WPN_M4A1_HOLO_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_Holo_FL";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_Holo_SD_FL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_Holo_MFL : DZE_Wep_M4A1_MFL {
	displayName = "$STR_DZ_WPN_M4A1_HOLO_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_Holo_MFL";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_Holo_SD_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_Holo_SD : DZE_Wep_M4A1_SD {
	displayName = "$STR_DZ_WPN_M4A1_HOLO_SD_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_sd_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_Holo_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_Holo_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_Holo_SD_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_Holo_SD_FL : DZE_Wep_M4A1_SD_FL {
	displayName = "$STR_DZ_WPN_M4A1_HOLO_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_sd_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_Holo_SD_FL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_Holo_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_Holo_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_Holo_SD_MFL : DZE_Wep_M4A1_SD_MFL {
	displayName = "$STR_DZ_WPN_M4A1_HOLO_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_holo_sd_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_Holo_SD_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_Holo_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_Holo_SD'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_M4A1_GL_Holo : DZE_Wep_M4A1_GL {
	displayName = "$STR_DZ_WPN_M4A1_GL_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_Holo_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_GL_Holo_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_GL_Holo_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_Holo_FL : DZE_Wep_M4A1_GL_FL {
	displayName = "$STR_DZ_WPN_M4A1_GL_HOLO_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_Holo_SD_FL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1_GL_FL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_Holo_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_GL_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_Holo_MFL : DZE_Wep_M4A1_GL_MFL {
	displayName = "$STR_DZ_WPN_M4A1_GL_HOLO_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_Holo_SD_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1_GL_MFL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_Holo_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_GL_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_Holo_SD : DZE_Wep_M4A1_GL_SD {
	displayName = "$STR_DZ_WPN_M4A1_GL_HOLO_SD_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_sd_ca.paa";

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_M4A1_GL_Holo_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_GL_Holo_SD_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_Holo_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_Holo_SD_FL : DZE_Wep_M4A1_GL_SD_FL {
	displayName = "$STR_DZ_WPN_M4A1_GL_HOLO_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_sd_fl_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1_GL_SD_FL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_Holo_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL_Holo_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_GL_Holo_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_Holo_SD_MFL : DZE_Wep_M4A1_GL_SD_MFL {
	displayName = "$STR_DZ_WPN_M4A1_GL_HOLO_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_holo_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_holo_sd_fl_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M4A1_GL_SD_MFL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_Holo_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL_Holo_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_GL_Holo_SD'] call player_removeAttachment";
		};
	};
};

//ACOG

class DZE_Wep_M4A1_ACOG : DZE_Wep_M4A1 {
	displayName = "$STR_DZ_WPN_M4A1_ACOG_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_ca.paa";

	M4A1_ACOG;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_ACOG";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_ACOG_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_ACOG_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_ACOG_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_ACOG_FL : DZE_Wep_M4A1_FL {
	displayName = "$STR_DZ_WPN_M4A1_ACOG_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_fl_ca.paa";

	M4A1_ACOG;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_ACOG_FL";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_ACOG_SD_FL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_ACOG_MFL : DZE_Wep_M4A1_MFL {
	displayName = "$STR_DZ_WPN_M4A1_ACOG_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_fl_ca.paa";

	M4A1_ACOG;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_ACOG_MFL";
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_ACOG_SD : DZE_Wep_M4A1_SD {
	displayName = "$STR_DZ_WPN_M4A1_ACOG_SD_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_sd_ca.paa";

	M4A1_ACOG;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_ACOG_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_ACOG_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_ACOG_SD_FL : DZE_Wep_M4A1_SD_FL {
	displayName = "$STR_DZ_WPN_M4A1_ACOG_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_sd_fl_ca.paa";

	M4A1_ACOG;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_ACOG_SD_FL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_ACOG_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_ACOG_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_ACOG_SD_MFL : DZE_Wep_M4A1_SD_MFL {
	displayName = "$STR_DZ_WPN_M4A1_ACOG_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_acog_sd_fl_ca.paa";

	M4A1_ACOG;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M4A1_GL_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_ACOG_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_ACOG_SD'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_M4A1_GL_ACOG : DZE_Wep_M4A1_GL {
	displayName = "$STR_DZ_WPN_M4A1_GL_ACOG_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_ca.paa";

	M4A1_ACOG;

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_ACOG_SD";
		DZE_Item_Att_FL = "DZE_Wep_M4A1_GL_ACOG_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_GL_ACOG_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_ACOG_FL : DZE_Wep_M4A1_GL_FL {
	displayName = "$STR_DZ_WPN_M4A1_GL_ACOG_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_fl_ca.paa";

	M4A1_ACOG;

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_ACOG_SD_FL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1_GL_FL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_ACOG_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_GL_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_ACOG_MFL : DZE_Wep_M4A1_GL_MFL {
	displayName = "$STR_DZ_WPN_M4A1_GL_ACOG_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_fl_ca.paa";

	M4A1_ACOG;

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_GL_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1_GL_MFL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_ACOG_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_GL_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_ACOG_SD : DZE_Wep_M4A1_GL_SD {
	displayName = "$STR_DZ_WPN_M4A1_GL_ACOG_SD_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_sd_ca.paa";

	M4A1_ACOG;

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_M4A1_GL_ACOG_SD_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M4A1_GL_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_ACOG_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_ACOG_SD_FL : DZE_Wep_M4A1_GL_SD_FL {
	displayName = "$STR_DZ_WPN_M4A1_GL_ACOG_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_sd_fl_ca.paa";

	M4A1_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1_GL_SD_FL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_ACOG_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL_ACOG_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M4A1_GL_ACOG_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M4A1_GL_ACOG_SD_MFL : DZE_Wep_M4A1_GL_SD_MFL {
	displayName = "$STR_DZ_WPN_M4A1_GL_ACOG_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m4a1\m4a1_gl_acog_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m4a1\data\w_m4a1_gl_acog_sd_fl_ca.paa";

	M4A1_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M4A1_GL_SD_MFL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M4A1_ACOG_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_GL_ACOG_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M4A1_GL_ACOG_SD'] call player_removeAttachment";
		};
	};
};

//ice apo resistance mod m4
class DZE_Wep_M4A1_Rusty : M4A1 {
	scope = 2;
	displayName = "$STR_DZE_WPN_M4RUSTY_NAME";
	descriptionShort = "$STR_DZE_WPN_M4RUSTY_DESC";
	model = "\ice_apo_weapons\M4_ironsight";
	picture = "\ice_apo_weapons\Data\m4a1_ca.paa";
	selectionFireAnim = "zasleh";
	M4A1_FLASHLIGHT;

	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	class Library {
		libTextDesc = "This M4 rifle is in a very bad shape.";
	};
};

class M4A1_AIM_camo;
class DZE_Wep_M4A1_Camo_CCO: M4A1_AIM_camo {
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_Camo_CCO_SD";
	};
};

class DZE_Wep_M4A1_Camo_CCO_SD: M4A1_AIM_SD_camo {
	magazines[] =
	{
		30Rnd_556x45_StanagSD,
		30Rnd_556x45_G36SD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
	};

	class Attachments {};
	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_Camo_CCO'] call player_removeAttachment";
		};
	};
};

class M4A1_HWS_GL_camo;
class DZE_Wep_M4A1_Camo_Holo_GL: M4A1_HWS_GL_camo {
	displayName = "$STR_DZ_WPN_M4A1_GL_HOLO_NAME";
	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_M4A1_Camo_Holo_GL_SD";
	};
};

class M4A1_HWS_GL_SD_Camo;
class DZE_Wep_M4A1_Camo_Holo_GL_SD: M4A1_HWS_GL_SD_Camo {
	displayName = "$STR_DZ_WPN_M4A1_GL_HOLO_SD_NAME";
	magazines[] =
	{
		30Rnd_556x45_StanagSD,
		30Rnd_556x45_G36SD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
	};

	class Attachments {};
	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_M4A1_Camo_Holo_GL'] call player_removeAttachment";
		};
	};
};

#undef M4A1_FLASHLIGHT
#undef M4A1_MFLASHLIGHT
#undef M4A1_M203
#undef M4A1_ACOG
