#define MP7_FLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define MP7_MFLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
}

#define MP7_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class DZE_Wep_MP7_Base: MP5A5 {
	scope = 2;
	displayName = "MP7";
	descriptionShort = "HK MP7A1";
	model = "\C1987_Mp7\mp7.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7.paa";
	optics = 0;
	value = 1000;
	dexterity = 1.75;
	handAnim[] = {"OFP2_ManSkeleton","\C1987_Mp7\anim\mp7.rtm"};
	modes[] = {"Single","Fullauto"};
	class Single: Mode_SemiAuto {
		recoil = "MP7Recoil";
		recoilProne = "MP7Recoil";
		begin1[] = {"\C1987_Mp7\sound\mp7_s1.wss",2,1,750};
		begin2[] = {"\C1987_Mp7\sound\mp7_s2.wss",2,1,750};
		begin3[] = {"\C1987_Mp7\sound\mp7_s3.wss",2,1,750};
		begin4[] = {"\C1987_Mp7\sound\mp7_s4.wss",2,1,750};
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		dispersion = 0.004;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "MP7Recoil";
		recoilProne = "MP7Recoil";
		begin1[] = {"\C1987_Mp7\sound\mp7_s1.wss",2,1,750};
		begin2[] = {"\C1987_Mp7\sound\mp7_s2.wss",2,1,750};
		begin3[] = {"\C1987_Mp7\sound\mp7_s3.wss",2,1,750};
		begin4[] = {"\C1987_Mp7\sound\mp7_s4.wss",2,1,750};
		soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		soundContinuous = 0;
		ffCount = 1;
		aiRateOfFire = 0.001;
		dispersion = 0.0035;
		minRange = 2;
		minRangeProbab = 0.2;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};
	reloadMagazineSound[] = {"\C1987_Mp7\sound\mp7_reload.wss",1,1,20};
	drySound[] = {"\C1987_Mp7\sound\mp7_dry.wss",1,1,20};
	magazines[] = {"40Rnd_46x30_mp7"};
	class Library {
		libTextDesc = "The MP7 is a German Submachine Gun Manufactured by Heckler and Koch (HK) and Chambered for the HK 4.6�30mm Cartridge. It was Designed with the new Cartridge to Meet NATO Requirements Published in 1989, as these Requirements call for a Personal Defense Weapon (PDW) Class Firearm, with a greater ability to defeat body armor than current Weapons limited to conventional Pistol Cartridges. The MP7 went into Production in 2001. It is a direct Rival to the FN P90, also Developed in Response to NATO's Requirement. The Weapon has been revised since its Introduction and the current Production Version is the MP7A1.";
	};
};
class DZE_Wep_MP7: DZE_Wep_MP7_Base {
	displayName = "$STR_DZ_WPN_MP7_NAME";
	descriptionShort = "$STR_DZ_WPN_MP7_DESC";
	model = "\C1987_Mp7\mp7.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7.paa";

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_MP7_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_MP7_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_MP7_ACOG";
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_SD";
		DZE_Item_Att_FL_Pist = "DZE_Wep_MP7_FL";
		DZE_Item_Att_MFL_Pist = "DZE_Wep_MP7_MFL";
	};
};

class DZE_Wep_MP7_FL: DZE_Wep_MP7 {
	displayName = "$STR_DZ_WPN_MP7_FL_NAME";
	model = "\C1987_Mp7\mp7_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7.paa";

	MP7_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_MP7_CCO_FL";
		DZE_Item_Att_Holo = "DZE_Wep_MP7_Holo_FL";
		DZE_Item_Att_ACOG = "DZE_Wep_MP7_ACOG_FL";
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_SD_FL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL_Pist',_id,'DZE_Wep_MP7'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_MFL: DZE_Wep_MP7 {
	displayName = "$STR_DZ_WPN_MP7_MFL_NAME";
	model = "\C1987_Mp7\mp7_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7.paa";

	MP7_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_MP7_CCO_MFL";
		DZE_Item_Att_Holo = "DZE_Wep_MP7_Holo_MFL";
		DZE_Item_Att_ACOG = "DZE_Wep_MP7_ACOG_MFL";
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_SD_MFL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL_Pist',_id,'DZE_Wep_MP7'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_Holo: DZE_Wep_MP7 {
	displayName = "$STR_DZ_WPN_MP7_HOLO_NAME";
	model = "\C1987_Mp7\mp7_eot.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot.paa";

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_Holo_SD";
		DZE_Item_Att_FL_Pist = "DZE_Wep_MP7_Holo_FL";
		DZE_Item_Att_MFL_Pist = "DZE_Wep_MP7_Holo_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_MP7'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_Holo_FL: DZE_Wep_MP7 {
	displayName = "$STR_DZ_WPN_MP7_HOLO_FL_NAME";
	model = "\C1987_Mp7\mp7_eot_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot.paa";

	MP7_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_Holo_SD_FL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_MP7_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL_Pist',_id,'DZE_Wep_MP7_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_Holo_MFL: DZE_Wep_MP7 {
	displayName = "$STR_DZ_WPN_MP7_HOLO_MFL_NAME";
	model = "\C1987_Mp7\mp7_eot_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot.paa";

	MP7_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_Holo_SD_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_MP7_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL_Pist',_id,'DZE_Wep_MP7_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_CCO: DZE_Wep_MP7 {
	displayName = "$STR_DZ_WPN_MP7_CCO_NAME";
	model = "\C1987_Mp7\mp7_aim.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim.paa";

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_CCO_SD";
		DZE_Item_Att_FL_Pist = "DZE_Wep_MP7_CCO_FL";
		DZE_Item_Att_MFL_Pist = "DZE_Wep_MP7_CCO_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_MP7'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_CCO_FL: DZE_Wep_MP7 {
	displayName = "$STR_DZ_WPN_MP7_CCO_FL_NAME";
	model = "\C1987_Mp7\mp7_aim_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim.paa";

	MP7_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_CCO_SD_FL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_MP7_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL_Pist',_id,'DZE_Wep_MP7_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_CCO_MFL: DZE_Wep_MP7 {
	displayName = "$STR_DZ_WPN_MP7_CCO_MFL_NAME";
	model = "\C1987_Mp7\mp7_aim_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim.paa";

	MP7_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_CCO_SD_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_MP7_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL_Pist',_id,'DZE_Wep_MP7_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_ACOG: DZE_Wep_MP7 {
	displayName = "$STR_DZ_WPN_MP7_ACOG_NAME";
	model = "\C1987_Mp7\mp7_acog.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog.paa";

	MP7_ACOG;

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_ACOG_SD";
		DZE_Item_Att_FL_Pist = "DZE_Wep_MP7_ACOG_FL";
		DZE_Item_Att_MFL_Pist = "DZE_Wep_MP7_ACOG_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_MP7'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_ACOG_FL: DZE_Wep_MP7 {
	displayName = "$STR_DZ_WPN_MP7_ACOG_FL_NAME";
	model = "\C1987_Mp7\mp7_acog_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog.paa";

	MP7_FLASHLIGHT;
	MP7_ACOG;

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_ACOG_SD_FL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_MP7_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL_Pist',_id,'DZE_Wep_MP7_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_ACOG_MFL: DZE_Wep_MP7 {
	displayName = "$STR_DZ_WPN_MP7_ACOG_MFL_NAME";
	model = "\C1987_Mp7\mp7_acog_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog.paa";

	MP7_MFLASHLIGHT;
	MP7_ACOG;

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_MP7_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_MP7_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL_Pist',_id,'DZE_Wep_MP7_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_SD: DZE_Wep_MP7_Base {
	displayName = "$STR_DZ_WPN_MP7_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_MP7_SD_DESC";
	model = "\C1987_Mp7\mp7_sd.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_sd.paa";
	class Single: Mode_SemiAuto {
		recoil = "MP7Recoil";
		recoilProne = "MP7Recoil";
		begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss",1,1,200};
		soundBegin[] = {"begin1",1};
		dispersion = 0.002;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "MP7Recoil";
		recoilProne = "MP7Recoil";
		begin1[] = {"\C1987_Mp7\sound\mp7_sd.wss",1,1,200};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		ffCount = 1;
		aiRateOfFire = 0.001;
		dispersion = 0.0035;
		minRange = 2;
		minRangeProbab = 0.2;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;
	magazines[] = {"40Rnd_46x30_sd_mp7"};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_MP7_CCO_SD";
		DZE_Item_Att_Holo = "DZE_Wep_MP7_Holo_SD";
		DZE_Item_Att_ACOG = "DZE_Wep_MP7_ACOG_SD";
		DZE_Item_Att_FL_Pist = "DZE_Wep_MP7_SD_FL";
		DZE_Item_Att_MFL_Pist = "DZE_Wep_MP7_SD_MFL";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_SD_FL: DZE_Wep_MP7_SD {
	displayName = "$STR_DZ_WPN_MP7_SD_FL_NAME";
	model = "\C1987_Mp7\mp7_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_sd.paa";

	MP7_FLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_MP7_CCO_SD_FL";
		DZE_Item_Att_Holo = "DZE_Wep_MP7_Holo_SD_FL";
		DZE_Item_Att_ACOG = "DZE_Wep_MP7_ACOG_SD_FL";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL_Pist',_id,'DZE_Wep_MP7_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_SD_MFL: DZE_Wep_MP7_SD {
	displayName = "$STR_DZ_WPN_MP7_SD_MFL_NAME";
	model = "\C1987_Mp7\mp7_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_sd.paa";

	MP7_MFLASHLIGHT;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_MP7_CCO_SD_MFL";
		DZE_Item_Att_Holo = "DZE_Wep_MP7_Holo_SD_MFL";
		DZE_Item_Att_ACOG = "DZE_Wep_MP7_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL_Pist',_id,'DZE_Wep_MP7_SD'] call player_removeAttachment";
		};
	};
};

class  DZE_Wep_MP7_Holo_SD: DZE_Wep_MP7_SD {
	displayName = "$STR_DZ_WPN_MP7_HOLO_SD_NAME";
	model = "\C1987_Mp7\mp7_eot_sd.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot_sd.paa";

	class Attachments {
		DZE_Item_Att_FL_Pist = "DZE_Wep_MP7_Holo_SD_FL";
		DZE_Item_Att_MFL_Pist = "DZE_Wep_MP7_Holo_SD_MFL";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_MP7_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_Holo_SD_FL: DZE_Wep_MP7_SD {
	displayName = "$STR_DZ_WPN_MP7_HOLO_SD_FL_NAME";
	model = "\C1987_Mp7\mp7_eot_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot_sd.paa";

	MP7_FLASHLIGHT;

	class Attachments {
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_MP7_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7_Holo_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL_Pist',_id,'DZE_Wep_MP7_Holo_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_Holo_SD_MFL: DZE_Wep_MP7_SD {
	displayName = "$STR_DZ_WPN_MP7_HOLO_SD_MFL_NAME";
	model = "\C1987_Mp7\mp7_eot_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_eot_sd.paa";

	MP7_MFLASHLIGHT;

	class Attachments {
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_MP7_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7_Holo_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL_Pist',_id,'DZE_Wep_MP7_Holo_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_CCO_SD: DZE_Wep_MP7_SD {
	displayName = "$STR_DZ_WPN_MP7_CCO_SD_NAME";
	model = "\C1987_Mp7\mp7_aim_sd.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim_sd.paa";

	class Attachments {
		DZE_Item_Att_FL_Pist = "DZE_Wep_MP7_CCO_SD_FL";
		DZE_Item_Att_MFL_Pist = "DZE_Wep_MP7_CCO_SD_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_MP7_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_CCO_SD_FL: DZE_Wep_MP7_SD {
	displayName = "$STR_DZ_WPN_MP7_CCO_SD_FL_NAME";
	model = "\C1987_Mp7\mp7_aim_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim_sd.paa";

	MP7_FLASHLIGHT;

	class Attachments {
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_MP7_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7_CCO_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL_Pist',_id,'DZE_Wep_MP7_CCO_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_CCO_SD_MFL: DZE_Wep_MP7_SD {
	displayName = "$STR_DZ_WPN_MP7_CCO_SD_MFL_NAME";
	model = "\C1987_Mp7\mp7_aim_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_aim_sd.paa";

	MP7_MFLASHLIGHT;

	class Attachments {
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_MP7_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7_CCO_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL_Pist',_id,'DZE_Wep_MP7_CCO_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_ACOG_SD: DZE_Wep_MP7_SD {
	displayName = "$STR_DZ_WPN_MP7_ACOG_SD_NAME";
	model = "\C1987_Mp7\mp7_acog_sd.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog_sd.paa";

	MP7_ACOG;

	class Attachments {
		DZE_Item_Att_FL_Pist = "DZE_Wep_MP7_ACOG_SD_FL";
		DZE_Item_Att_MFL_Pist = "DZE_Wep_MP7_ACOG_SD_MFL";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_MP7_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_ACOG_SD_FL: DZE_Wep_MP7_SD {
	displayName = "$STR_DZ_WPN_MP7_ACOG_SD_FL_NAME";
	model = "\C1987_Mp7\mp7_acog_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog_sd.paa";

	MP7_FLASHLIGHT;
	MP7_ACOG;

	class Attachments {
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_MP7_SD_FL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7_ACOG_FL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL_Pist',_id,'DZE_Wep_MP7_ACOG_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MP7_ACOG_SD_MFL: DZE_Wep_MP7_SD {
	displayName = "$STR_DZ_WPN_MP7_ACOG_SD_MFL_NAME";
	model = "\C1987_Mp7\mp7_acog_sd_t.p3d";
	picture = "\C1987_Mp7\equip\gui_mp7_acog_sd.paa";

	MP7_MFLASHLIGHT;
	MP7_ACOG;

	class Attachments {
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_MP7_SD_MFL'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP7_ACOG_MFL'] call player_removeAttachment";
		};
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL_Pist',_id,'DZE_Wep_MP7_ACOG_SD'] call player_removeAttachment";
		};
	};
};

#undef MP7_FLASHLIGHT
#undef MP7_MFLASHLIGHT
#undef MP7_ACOG