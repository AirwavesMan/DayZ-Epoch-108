#define M16A4_FLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define M16A4_MFLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
}

#define M16A4_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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
class DZE_Wep_M16A4 : M16A2 {
	displayName = "$STR_DZ_WPN_M16A4";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_ca.paa";

	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M16A4_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_M16A4_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_M16A4_ACOG";
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL";
		DZE_Item_Att_FL = "DZE_Wep_M16A4_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M16A4_MFL";
	};
};

class DZE_Wep_M16A4_FL : DZE_Wep_M16A4 {
	displayName = "$STR_DZ_WPN_M16A4_FL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_fl_ca.paa";

	M16A4_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M16A4_CCO_FL";
		DZE_Item_Att_Holo = "DZE_Wep_M16A4_Holo_FL";
		DZE_Item_Att_ACOG = "DZE_Wep_M16A4_ACOG_FL";
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL_FL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M16A4'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_MFL : DZE_Wep_M16A4 {
	displayName = "$STR_DZ_WPN_M16A4_MFL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_fl_ca.paa";

	M16A4_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M16A4_CCO_MFL";
		DZE_Item_Att_Holo = "DZE_Wep_M16A4_Holo_MFL";
		DZE_Item_Att_ACOG = "DZE_Wep_M16A4_ACOG_MFL";
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL_MFL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M16A4'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL : DZE_Wep_M16A4 {
	displayName = "$STR_DZ_WPN_M16A4_GL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_ca.paa";

	muzzles[] = {this, M203Muzzle};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M16A4_GL_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_M16A4_GL_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_M16A4_GL_ACOG";
		DZE_Item_Att_FL = "DZE_Wep_M16A4_GL_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M16A4_GL_MFL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL_FL : DZE_Wep_M16A4_GL {
	displayName = "$STR_DZ_WPN_M16A4_GL_FL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_fl_ca.paa";

	M16A4_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M16A4_GL_CCO_FL";
		DZE_Item_Att_Holo = "DZE_Wep_M16A4_GL_Holo_FL";
		DZE_Item_Att_ACOG = "DZE_Wep_M16A4_GL_ACOG_FL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M16A4_GL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL_MFL : DZE_Wep_M16A4_GL {
	displayName = "$STR_DZ_WPN_M16A4_GL_MFL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_fl_ca.paa";

	M16A4_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_M16A4_GL_CCO_MFL";
		DZE_Item_Att_Holo = "DZE_Wep_M16A4_GL_Holo_MFL";
		DZE_Item_Att_ACOG = "DZE_Wep_M16A4_GL_ACOG_MFL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M16A4_GL'] call player_removeAttachment";
		};
	};
};

//CCO
class DZE_Wep_M16A4_CCO : DZE_Wep_M16A4 {
	displayName = "$STR_DZ_WPN_M16A4_CCO";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_cco_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL_CCO";
		DZE_Item_Att_FL = "DZE_Wep_M16A4_CCO_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M16A4_CCO_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M16A4'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_CCO_FL : DZE_Wep_M16A4_FL {
	displayName = "$STR_DZ_WPN_M16A4_CCO_FL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_cco_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL_CCO_FL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M16A4_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M16A4_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_CCO_MFL : DZE_Wep_M16A4_MFL {
	displayName = "$STR_DZ_WPN_M16A4_CCO_MFL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_cco_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL_CCO_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M16A4_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M16A4_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL_CCO : DZE_Wep_M16A4_GL {
	displayName = "$STR_DZ_WPN_M16A4_GL_CCO";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_cco_ca.paa";

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_M16A4_GL_CCO_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M16A4_GL_CCO_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M16A4_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL_CCO_FL : DZE_Wep_M16A4_GL_FL {
	displayName = "$STR_DZ_WPN_M16A4_GL_CCO_FL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_cco_fl_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M16A4_GL_FL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4_CCO_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M16A4_GL_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL_CCO_MFL : DZE_Wep_M16A4_GL_MFL {
	displayName = "$STR_DZ_WPN_M16A4_GL_CCO_MFL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_cco_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_cco_fl_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_M16A4_GL_MFL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4_CCO_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M16A4_GL_CCO'] call player_removeAttachment";
		};
	};
};

//Holo
class DZE_Wep_M16A4_Holo : DZE_Wep_M16A4 {
	displayName = "$STR_DZ_WPN_M16A4_HOLO";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_holo_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL_Holo";
		DZE_Item_Att_FL = "DZE_Wep_M16A4_Holo_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M16A4_Holo_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M16A4'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_Holo_FL : DZE_Wep_M16A4_FL {
	displayName = "$STR_DZ_WPN_M16A4_HOLO_FL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_holo_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL_Holo_FL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M16A4_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M16A4_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_Holo_MFL : DZE_Wep_M16A4_MFL {
	displayName = "$STR_DZ_WPN_M16A4_HOLO_MFL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_holo_fl_ca.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL_Holo_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M16A4_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M16A4_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL_Holo : DZE_Wep_M16A4_GL {
	displayName = "$STR_DZ_WPN_M16A4_gl_HOLO";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_holo_ca.paa";

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_M16A4_GL_Holo_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M16A4_GL_Holo_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M16A4_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL_Holo_FL : DZE_Wep_M16A4_GL_FL {
	displayName = "$STR_DZ_WPN_M16A4_GL_HOLO_FL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_holo_fl_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M16A4_GL_FL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4_Holo_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M16A4_GL_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL_Holo_MFL : DZE_Wep_M16A4_GL_MFL {
	displayName = "$STR_DZ_WPN_M16A4_GL_HOLO_MFL";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_holo_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_holo_fl_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_M16A4_GL_MFL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4_Holo_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M16A4_GL_Holo'] call player_removeAttachment";
		};
	};
};

//ACOG

class DZE_Wep_M16A4_ACOG : DZE_Wep_M16A4 {
	displayName = "$STR_DZ_WPN_M16A4_ACOG_NAME";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_acog_ca.paa";

	M16A4_ACOG;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL_ACOG";
		DZE_Item_Att_FL = "DZE_Wep_M16A4_ACOG_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M16A4_ACOG_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M16A4'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_ACOG_FL : DZE_Wep_M16A4_FL {
	displayName = "$STR_DZ_WPN_M16A4_ACOG_FL_NAME";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_acog_fl_ca.paa";

	M16A4_ACOG;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL_ACOG_FL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M16A4_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M16A4_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_ACOG_MFL : DZE_Wep_M16A4_MFL {
	displayName = "$STR_DZ_WPN_M16A4_ACOG_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_acog_fl_ca.paa";

	M16A4_ACOG;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_M16A4_GL_ACOG_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M16A4_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M16A4_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL_ACOG : DZE_Wep_M16A4_GL {
	displayName = "$STR_DZ_WPN_M16A4_GL_ACOG_NAME";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_acog_ca.paa";

	M16A4_ACOG;

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_M16A4_GL_ACOG_FL";
		DZE_Item_Att_MFL = "DZE_Wep_M16A4_GL_ACOG_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M16A4_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL_ACOG_FL : DZE_Wep_M16A4_GL_FL {
	displayName = "$STR_DZ_WPN_M16A4_GL_ACOG_FL_NAME";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_acog_fl_ca.paa";

	M16A4_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M16A4_GL_FL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4_ACOG_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_M16A4_GL_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M16A4_GL_ACOG_MFL : DZE_Wep_M16A4_GL_MFL {
	displayName = "$STR_DZ_WPN_M16A4_GL_ACOG_MFL_NAME";
	model = "z\addons\dayz_communityweapons\m16a4\m16a4_gl_acog_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\m16a4\data\w_m16a4_gl_acog_fl_ca.paa";

	M16A4_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_M16A4_GL_MFL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_M16A4_ACOG_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_M16A4_GL_ACOG'] call player_removeAttachment";
		};
	};
};
