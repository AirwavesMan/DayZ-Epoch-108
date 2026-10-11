#define G36C_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class DZE_Wep_G36C : G36C {
	displayName = "$STR_DZ_WPN_G36C_NAME";
	model = "z\addons\dayz_communityweapons\g36c\g36c.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_ca.paa";
	magazines[] =
	{
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
	class Attachments {
		Attachment_CCO = "DZE_Wep_G36C_CCO";
		Attachment_Holo = "DZE_Wep_G36C_Holo";
		Attachment_ACOG = "DZE_Wep_G36C_ACOG";
		Attachment_Sup556 = "DZE_Wep_G36C_SD";
	};
};

class DZE_Wep_G36C_SD : G36_C_SD_eotech {
	displayName = "$STR_DZ_WPN_G36C_SD_NAME";
	model = "z\addons\dayz_communityweapons\g36c\g36c_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_sd_ca.paa";

	magazines[] =
	{
		30Rnd_556x45_G36SD,
		30Rnd_556x45_StanagSD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
	};

	class Attachments {
		Attachment_CCO = "DZE_Wep_G36C_CCO_SD";
		Attachment_Holo = "DZE_Wep_G36C_Holo_SD";
		Attachment_ACOG = "DZE_Wep_G36C_ACOG_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup556',_id,'DZE_Wep_G36C'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G36C_CCO : DZE_Wep_G36C {
	displayName = "$STR_DZ_WPN_G36C_CCO_NAME";
	model = "z\addons\dayz_communityweapons\g36c\g36c_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_cco_ca.paa";

	class Attachments {
		Attachment_Sup556 = "DZE_Wep_G36C_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_G36C'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G36C_CCO_SD : DZE_Wep_G36C_SD {
	displayName = "$STR_DZ_WPN_G36C_CCO_SD_NAME";
	model = "z\addons\dayz_communityweapons\g36c\g36c_cco_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_cco_sd_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_G36C_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup556',_id,'DZE_Wep_G36C_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G36C_Holo : DZE_Wep_G36C {
	displayName = "$STR_DZ_WPN_G36C_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\g36c\g36c_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_holo_ca.paa";

	class Attachments {
		Attachment_Sup556 = "DZE_Wep_G36C_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_G36C'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G36C_Holo_SD : DZE_Wep_G36C_SD {
	displayName = "$STR_DZ_WPN_G36C_HOLO_SD_NAME";
	model = "z\addons\dayz_communityweapons\g36c\g36c_holo_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_holo_sd_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_G36C_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup556',_id,'DZE_Wep_G36C_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G36C_ACOG : DZE_Wep_G36C {
	displayName = "$STR_DZ_WPN_G36C_ACOG_NAME";
	model = "z\addons\dayz_communityweapons\g36c\g36c_acog.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_acog_ca.paa";

	G36C_ACOG;

	class Attachments {
		Attachment_Sup556 = "DZE_Wep_G36C_ACOG_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_G36C'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G36C_ACOG_SD : DZE_Wep_G36C_SD {
	displayName = "$STR_DZ_WPN_G36C_ACOG_SD_NAME";
	model = "z\addons\dayz_communityweapons\g36c\g36c_acog_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g36c\data\w_g36c_acog_sd_ca.paa";

	G36C_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_G36C_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup556',_id,'DZE_Wep_G36C_ACOG'] call player_removeAttachment";
		};
	};
};

class G36C_camo;
class DZE_Wep_G36C_Camo : G36C_camo {
	displayName = "$STR_DZ_WPN_G36C_CAMO_NAME";

	magazines[] =
	{
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};
};

class G36_C_SD_camo;
class DZE_Wep_G36C_Camo_Holo_SD : G36_C_SD_camo {
	displayName = "$STR_DZ_WPN_G36C_CAMO_HOLO_SD_NAME";

	magazines[] =
	{
		30Rnd_556x45_G36SD,
		30Rnd_556x45_StanagSD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
	};
};

#undef G36C_ACOG