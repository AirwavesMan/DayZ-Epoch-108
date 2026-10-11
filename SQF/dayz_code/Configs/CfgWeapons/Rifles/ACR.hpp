#define ACR_FLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define ACR_M203 muzzles[] = {this, M203Muzzle};\
handAnim[] = {"OFP2_ManSkeleton","\fhq_remington\anims\acr_gl_anim.rtm"}

#define ACR_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

#define ACR_TWS modelOptics = "\ca\Weapons_baf\cws_optic";\
	weaponInfoType = "RscWeaponZeroing";\
	visionMode[] = {"Normal","Ti"};\
	thermalMode[] = {6};\
	discretefov[] = {0.0755,0.0249};\
	discreteInitIndex = 0;\
	discreteDistance[] = {100,200,300,400,500,600,700,800};\
	discreteDistanceInitIndex = 2;\
	class FlashLight {\
		position = "flash dir";\
		direction = "flash";\
		color[] = {0.9, 0.0, 0.0, 0.9};\
		ambient[] = {0.1, 0.0, 0.0, 1.0};\
		angle = 30;\
		scale[] = {1, 1, 0.5};\
		brightness = 0.08;\
	}

#define ACR_NV modelOptics = "\ca\Weapons_baf\cws_optic";\
	class OpticsModes {\
		class NV {\
			memoryPointCamera = "opticView";\
			weaponInfoType = "RscWeaponZeroing";\
			cameraDir = "";\
			opticsID = 2;\
			useModelOptics = 1;\
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};\
			opticsZoomMin = 0.0623;\
			opticsZoomMax = 0.0623;\
			opticsZoomInit = 0.0623;\
			visionMode[] = {"Normal","NVG"};\
			discretefov[] = {0.0755,0.0249};\
			discreteInitIndex = 0;\
			discreteDistance[] = {100,200,300,400,500,600,700,800};\
			discreteDistanceInitIndex = 2;\
			opticsFlare = 1;\
			opticsDisablePeripherialVision = 1;\
			distanceZoomMin = 300;\
			distanceZoomMax = 300;\
		};\
		class Holo: NV {\
			memoryPointCamera = "eye";\
			opticsID = 1;\
			useModelOptics = 0;\
			opticsFlare = 0;\
			opticsDisablePeripherialVision = 0;\
			discreteInitIndex = 2;\
			discreteDistance[] = {100,200,300};\
			discretefov[] = {};\
			discreteDistanceInitIndex = 2;\
			opticsZoomMin = 0.25;\
			opticsZoomMax = 1.1;\
			opticsZoomInit = 0.5;\
			visionMode[] = {};\
		};\
	};\
	class FlashLight {\
		position = "flash dir";\
		direction = "flash";\
		color[] = {0.9, 0.0, 0.0, 0.9};\
		ambient[] = {0.1, 0.0, 0.0, 1.0};\
		angle = 30;\
		scale[] = {1, 1, 0.5};\
		brightness = 0.08;\
	}

class DZE_Wep_ACR_DZ_BASE: M4A1 {
	scope = 0;
	displayName = "ACR (Woodland)";
	descriptionShort = "$STR_DZ_WPN_ACR_DESC";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_iron.paa";
	model = "\fhq_remington\acr\acr_wdl_iron.p3d";
	ACR_FLASHLIGHT;
	magazines[] = {"ACR_30Rnd_680x43"};
	class Library {
		libTextDesc = "Remington ACR";
	};
	modes[] = {"Single","FullAuto"};
	dexterity = 1.8;
	htMin = 1;
	htMax = 480;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	optics = 1;
	opticsDisablePeripherialVision = 1;
	value = 2;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.00562341,1};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.0562341,1,20};
	class Single: Mode_SemiAuto {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"fhq_remington\ACR\sfx\acr_single.ogg",1.77828,1,1000};
		begin2[] = {"fhq_remington\ACR\sfx\acr_single.ogg",1.77828,1,1000};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		reloadTime = 0.09;
		dispersion = 0.00175;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 300;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"fhq_remington\ACR\sfx\acr_auto.ogg",1.77828,1,1000};
		begin2[] = {"fhq_remington\ACR\sfx\acr_auto.ogg",1.77828,1,1000};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 80;
		maxRangeProbab = 0.05;
	};
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	handAnim[] = {"OFP2_ManSkeleton","\fhq_remington\anims\acr_anim.rtm"};
};

class DZE_Wep_ACR_SD_DZ_BASE: M4A1_AIM_SD_camo {
	scope = 0;
	displayName = "ACR (Woodland)";
	descriptionShort = "$STR_DZ_WPN_ACR_SD_DESC";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	model = "\fhq_remington\acr\acr_wdl_iron_sd.p3d";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_iron_sd.paa";
	ACR_FLASHLIGHT;
	magazines[] = {"ACR_30Rnd_680x43_SD"};
	fireLightDuration = 0;
	fireLightIntensity = 0;
	class Library {
		libTextDesc = "Remington ACR";
	};
	modes[] = {"Single","FullAuto"};
	dexterity = 1.8;
	htMin = 1;
	htMax = 480;
	afMax = 0;
	mfMax = 0;
	mFact = 1;
	tBody = 100;
	optics = 1;
	opticsDisablePeripherialVision = 1;
	value = 2;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.00562341,1};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.0562341,1,20};
	class Single: Mode_SemiAuto {
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
	class FullAuto: Mode_FullAuto {
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
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	handAnim[] = {"OFP2_ManSkeleton","\fhq_remington\anims\acr_anim.rtm"};
};

//ACR Woodland
class DZE_Wep_ACR_WDL : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NAME";
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};
	discreteDistanceInitIndex = 2;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_WDL_CCO";
		Attachment_Holo = "DZE_Wep_ACR_WDL_Holo";
		Attachment_ACOG = "DZE_Wep_ACR_WDL_ACOG";
		Attachment_M203 = "DZE_Wep_ACR_WDL_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_SD";
		Attachment_Tws = "DZE_Wep_ACR_WDL_TWS";
	};
};

class DZE_Wep_ACR_WDL_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_SD_NAME";
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};
	discreteDistanceInitIndex = 2;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_WDL_CCO_SD";
		Attachment_Holo = "DZE_Wep_ACR_WDL_Holo_SD";
		Attachment_ACOG = "DZE_Wep_ACR_WDL_ACOG_SD";
		Attachment_M203 = "DZE_Wep_ACR_WDL_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_WDL_TWS_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_GL : DZE_Wep_ACR_WDL {
	displayName = "$STR_DZ_WPN_ACR_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_iron_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_iron_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_WDL_CCO_GL";
		Attachment_Holo = "DZE_Wep_ACR_WDL_Holo_GL";
		Attachment_ACOG = "DZE_Wep_ACR_WDL_ACOG_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_WDL_TWS_GL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_GL_SD : DZE_Wep_ACR_WDL_SD {
	displayName = "$STR_DZ_WPN_ACR_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_iron_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_iron_gl_sd.p3d";

	ACR_M203;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_WDL_CCO_GL_SD";
		Attachment_Holo = "DZE_Wep_ACR_WDL_Holo_GL_SD";
		Attachment_ACOG = "DZE_Wep_ACR_WDL_ACOG_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_WDL_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL_GL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_CCO : DZE_Wep_ACR_WDL {
	displayName = "$STR_DZ_WPN_ACR_COO_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_aim.paa";
	model = "\fhq_remington\acr\acr_wdl_aim.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_WDL_CCO_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_WDL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_CCO_SD : DZE_Wep_ACR_WDL_SD {
	displayName = "$STR_DZ_WPN_ACR_COO_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_aim_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_aim_sd.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_WDL_CCO_GL_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_WDL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_CCO_GL : DZE_Wep_ACR_WDL_GL {
	displayName = "$STR_DZ_WPN_ACR_CCO_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_aim_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_aim_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_CCO_GL_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_WDL_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_CCO_GL_SD : DZE_Wep_ACR_WDL_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_CCO_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_aim_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_aim_gl_sd.p3d";

	ACR_M203;

	class Attachments {
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_WDL_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL_CCO_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL_CCO_GL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_Holo : DZE_Wep_ACR_WDL {
	displayName = "$STR_DZ_WPN_ACR_HOLO_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_hws.paa";
	model = "\fhq_remington\acr\acr_wdl_hws.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_WDL_Holo_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_WDL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_Holo_SD : DZE_Wep_ACR_WDL_SD {
	displayName = "$STR_DZ_WPN_ACR_HOLO_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_hws_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_hws_sd.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_WDL_Holo_GL_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_WDL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_Holo_GL : DZE_Wep_ACR_WDL_GL {
	displayName = "$STR_DZ_WPN_ACR_HOLO_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_hws_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_hws_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_Holo_GL_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_WDL_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_Holo_GL_SD : DZE_Wep_ACR_WDL_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_HOLO_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_hws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_hws_gl_sd.p3d";

	ACR_M203;

	class Attachments {
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_WDL_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL_Holo_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL_Holo_GL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_ACOG : DZE_Wep_ACR_WDL {
	displayName = "$STR_DZ_WPN_ACR_ACOG_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_rco.paa";
	model = "\fhq_remington\acr\acr_wdl_rco.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_WDL_ACOG_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_ACOG_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_WDL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_ACOG_SD : DZE_Wep_ACR_WDL_SD {
	displayName = "$STR_DZ_WPN_ACR_ACOG_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_rco_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_rco_sd.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_WDL_ACOG_GL_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_WDL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_ACOG_GL : DZE_Wep_ACR_WDL_GL {
	displayName = "$STR_DZ_WPN_ACR_ACOG_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_rco_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_rco_gl.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_ACOG_GL_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_WDL_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_ACOG_GL_SD : DZE_Wep_ACR_WDL_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_ACOG_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_rco_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_rco_gl_sd.p3d";

	ACR_ACOG;

	class Attachments {
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_WDL_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL_ACOG_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL_ACOG_GL'] call player_removeAttachment";
		};
	};
};

//ACR Woodland TWS
class DZE_Wep_ACR_WDL_TWS : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_TWS_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_tws.paa";
	model = "\fhq_remington\acr\acr_wdl_tws.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_TWS_SD";
		Attachment_M203 = "DZE_Wep_ACR_WDL_TWS_GL";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_WDL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_TWS_GL : DZE_Wep_ACR_WDL_GL {
	displayName = "$STR_DZ_WPN_ACR_TWS_GL_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_tws_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_tws_gl.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_WDL_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL_TWS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_TWS_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_TWS_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_tws_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_tws_sd.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_WDL_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_WDL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL_TWS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_TWS_GL_SD : DZE_Wep_ACR_WDL_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_TWS_GL_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_tws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_tws_gl_sd.p3d";

	ACR_TWS;

	class Attachments {
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_WDL_GL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL_TWS_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL_TWS_SD'] call player_removeAttachment";
		};
	};
};

//ACR Woodland NV
class DZE_Wep_ACR_WDL_NV : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_g33.paa";
	model = "\fhq_remington\acr\acr_wdl_g33.p3d";
	ACR_NV;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_WDL_NV_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_NV_SD";
	};
};

class DZE_Wep_ACR_WDL_NV_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_g33_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_g33_sd.p3d";
	ACR_NV;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_WDL_NV_GL_SD";
	};
	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL_NV'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_NV_GL : DZE_Wep_ACR_WDL_GL {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_GL_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_g33_gl.paa";
	model = "\fhq_remington\acr\acr_wdl_g33_gl.p3d";
	ACR_NV;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_WDL_NV_GL_SD";
	};
	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL_NV'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_WDL_NV_GL_SD : DZE_Wep_ACR_WDL_GL_SD {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_GL_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_wdl_g33_gl_sd.paa";
	model = "\fhq_remington\acr\acr_wdl_g33_gl_sd.p3d";
	ACR_NV;

	class Attachments {
	};
	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_WDL_NV_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_WDL_NV_SD'] call player_removeAttachment";
		};
	};
};

//ACR Black
class DZE_Wep_ACR_BL : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_iron.paa";
	model = "\fhq_remington\acr\acr_blk_iron.p3d";
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};
	discreteDistanceInitIndex = 2;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_BL_CCO";
		Attachment_Holo = "DZE_Wep_ACR_BL_Holo";
		Attachment_ACOG = "DZE_Wep_ACR_BL_ACOG";
		Attachment_M203 = "DZE_Wep_ACR_BL_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_BL_SD";
		Attachment_Tws = "DZE_Wep_ACR_BL_TWS";
	};
};

class DZE_Wep_ACR_BL_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_iron_sd.paa";
	model = "\fhq_remington\acr\acr_blk_iron_sd.p3d";
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};
	discreteDistanceInitIndex = 2;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_BL_CCO_SD";
		Attachment_Holo = "DZE_Wep_ACR_BL_Holo_SD";
		Attachment_ACOG = "DZE_Wep_ACR_BL_ACOG_SD";
		Attachment_M203 = "DZE_Wep_ACR_BL_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_BL_TWS_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_BL_GL : DZE_Wep_ACR_BL {
	displayName = "$STR_DZ_WPN_ACR_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_iron_gl.paa";
	model = "\fhq_remington\acr\acr_blk_iron_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_BL_CCO_GL";
		Attachment_Holo = "DZE_Wep_ACR_BL_Holo_GL";
		Attachment_ACOG = "DZE_Wep_ACR_BL_ACOG_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_BL_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_BL_TWS_GL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_GL_SD : DZE_Wep_ACR_BL_SD {
	displayName = "$STR_DZ_WPN_ACR_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_iron_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_iron_gl_sd.p3d";

	ACR_M203;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_BL_CCO_GL_SD";
		Attachment_Holo = "DZE_Wep_ACR_BL_Holo_GL_SD";
		Attachment_ACOG = "DZE_Wep_ACR_BL_ACOG_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_BL_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL_GL'] call player_removeAttachment";
		};
	};
};

//CCO

class DZE_Wep_ACR_BL_CCO : DZE_Wep_ACR_BL {
	displayName = "$STR_DZ_WPN_ACR_COO_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_aim.paa";
	model = "\fhq_remington\acr\acr_blk_aim.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_BL_CCO_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_BL_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_BL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_CCO_SD : DZE_Wep_ACR_BL_SD {
	displayName = "$STR_DZ_WPN_ACR_COO_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_aim_sd.paa";
	model = "\fhq_remington\acr\acr_blk_aim_sd.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_BL_CCO_GL_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_BL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL_CCO'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_BL_CCO_GL : DZE_Wep_ACR_BL_GL {
	displayName = "$STR_DZ_WPN_ACR_CCO_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_aim_gl.paa";
	model = "\fhq_remington\acr\acr_blk_aim_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_BL_CCO_GL_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_BL_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_CCO_GL_SD : DZE_Wep_ACR_BL_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_CCO_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_aim_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_aim_gl_sd.p3d";

	ACR_M203;

	class Attachments {
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_BL_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL_CCO_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL_CCO_GL'] call player_removeAttachment";
		};
	};
};

//Holo

class DZE_Wep_ACR_BL_Holo : DZE_Wep_ACR_BL {
	displayName = "$STR_DZ_WPN_ACR_HOLO_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_hws.paa";
	model = "\fhq_remington\acr\acr_blk_hws.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_BL_Holo_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_BL_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_BL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_Holo_SD : DZE_Wep_ACR_BL_SD {
	displayName = "$STR_DZ_WPN_ACR_HOLO_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_hws_sd.paa";
	model = "\fhq_remington\acr\acr_blk_hws_sd.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_BL_Holo_GL_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_BL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL_Holo'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_BL_Holo_GL : DZE_Wep_ACR_BL_GL {
	displayName = "$STR_DZ_WPN_ACR_HOLO_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_hws_gl.paa";
	model = "\fhq_remington\acr\acr_blk_hws_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_BL_Holo_GL_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_BL_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_Holo_GL_SD : DZE_Wep_ACR_BL_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_HOLO_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_hws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_hws_gl_sd.p3d";

	ACR_M203;

	class Attachments {
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_BL_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL_Holo_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL_Holo_GL'] call player_removeAttachment";
		};
	};
};

//ACOG

class DZE_Wep_ACR_BL_ACOG : DZE_Wep_ACR_BL {
	displayName = "$STR_DZ_WPN_ACR_ACOG_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_rco.paa";
	model = "\fhq_remington\acr\acr_blk_rco.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_BL_ACOG_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_BL_ACOG_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_BL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_ACOG_SD : DZE_Wep_ACR_BL_SD {
	displayName = "$STR_DZ_WPN_ACR_ACOG_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_rco_sd.paa";
	model = "\fhq_remington\acr\acr_blk_rco_sd.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_BL_ACOG_GL_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_BL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL_ACOG'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_BL_ACOG_GL : DZE_Wep_ACR_BL_GL {
	displayName = "$STR_DZ_WPN_ACR_ACOG_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_rco_gl.paa";
	model = "\fhq_remington\acr\acr_blk_rco_gl.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_BL_ACOG_GL_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_BL_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_ACOG_GL_SD : DZE_Wep_ACR_BL_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_ACOG_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_blk_rco_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_rco_gl_sd.p3d";

	ACR_ACOG;

	class Attachments {
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_BL_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL_ACOG_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL_ACOG_GL'] call player_removeAttachment";
		};
	};
};

//ACR Black TWS
class DZE_Wep_ACR_BL_TWS : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_TWS_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_blk_tws.paa";
	model = "\fhq_remington\acr\acr_blk_tws.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_BL_TWS_SD";
		Attachment_M203 = "DZE_Wep_ACR_BL_TWS_GL";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_BL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_TWS_GL : DZE_Wep_ACR_BL_GL {
	displayName = "$STR_DZ_WPN_ACR_TWS_GL_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_blk_tws_gl.paa";
	model = "\fhq_remington\acr\acr_blk_tws_gl.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_BL_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_BL_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL_TWS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_TWS_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_TWS_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_blk_tws_sd.paa";
	model = "\fhq_remington\acr\acr_blk_tws_sd.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_BL_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_BL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL_TWS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_TWS_GL_SD : DZE_Wep_ACR_BL_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_TWS_GL_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_blk_tws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_tws_gl_sd.p3d";

	ACR_TWS;

	class Attachments {
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_BL_GL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL_TWS_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL_TWS_SD'] call player_removeAttachment";
		};
	};
};

//ACR Black NV
class DZE_Wep_ACR_BL_NV : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_blk_g33.paa";
	model = "\fhq_remington\acr\acr_blk_g33.p3d";
	ACR_NV;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_BL_NV_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_BL_NV_SD";
	};
};

class DZE_Wep_ACR_BL_NV_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_blk_g33_sd.paa";
	model = "\fhq_remington\acr\acr_blk_g33_sd.p3d";
	ACR_NV;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_BL_NV_GL_SD";
	};
	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL_NV'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_NV_GL : DZE_Wep_ACR_BL_GL {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_GL_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_blk_g33_gl.paa";
	model = "\fhq_remington\acr\acr_blk_g33_gl.p3d";
	ACR_NV;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_BL_NV_GL_SD";
	};
	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL_NV'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_BL_NV_GL_SD : DZE_Wep_ACR_BL_GL_SD {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_GL_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_blk_g33_gl_sd.paa";
	model = "\fhq_remington\acr\acr_blk_g33_gl_sd.p3d";
	ACR_NV;

	class Attachments {
	};
	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_BL_NV_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_BL_NV_SD'] call player_removeAttachment";
		};
	};
};

//ACR Desert
class DZE_Wep_ACR_DES : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_iron.paa";
	model = "\fhq_remington\acr\acr_tan_iron.p3d";
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};
	discreteDistanceInitIndex = 2;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_DES_CCO";
		Attachment_Holo = "DZE_Wep_ACR_DES_Holo";
		Attachment_ACOG = "DZE_Wep_ACR_DES_ACOG";
		Attachment_M203 = "DZE_Wep_ACR_DES_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_DES_SD";
		Attachment_Tws = "DZE_Wep_ACR_DES_TWS";
	};
};

class DZE_Wep_ACR_DES_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_iron_sd.paa";
	model = "\fhq_remington\acr\acr_tan_iron_sd.p3d";
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};
	discreteDistanceInitIndex = 2;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_DES_CCO_SD";
		Attachment_Holo = "DZE_Wep_ACR_DES_Holo_SD";
		Attachment_ACOG = "DZE_Wep_ACR_DES_ACOG_SD";
		Attachment_M203 = "DZE_Wep_ACR_DES_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_DES_TWS_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_DES_GL : DZE_Wep_ACR_DES {
	displayName = "$STR_DZ_WPN_ACR_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_iron_gl.paa";
	model = "\fhq_remington\acr\acr_tan_iron_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_DES_CCO_GL";
		Attachment_Holo = "DZE_Wep_ACR_DES_Holo_GL";
		Attachment_ACOG = "DZE_Wep_ACR_DES_ACOG_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_DES_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_DES_TWS_GL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_GL_SD : DZE_Wep_ACR_DES_SD {
	displayName = "$STR_DZ_WPN_ACR_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_iron_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_iron_gl_sd.p3d";

	ACR_M203;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_DES_CCO_GL_SD";
		Attachment_Holo = "DZE_Wep_ACR_DES_Holo_GL_SD";
		Attachment_ACOG = "DZE_Wep_ACR_DES_ACOG_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_DES_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES_GL'] call player_removeAttachment";
		};
	};
};

//CCO

class DZE_Wep_ACR_DES_CCO : DZE_Wep_ACR_DES {
	displayName = "$STR_DZ_WPN_ACR_COO_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_aim.paa";
	model = "\fhq_remington\acr\acr_tan_aim.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_DES_CCO_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_DES_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_DES'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_CCO_SD : DZE_Wep_ACR_DES_SD {
	displayName = "$STR_DZ_WPN_ACR_COO_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_aim_sd.paa";
	model = "\fhq_remington\acr\acr_tan_aim_sd.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_DES_CCO_GL_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_DES_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES_CCO'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_DES_CCO_GL : DZE_Wep_ACR_DES_GL {
	displayName = "$STR_DZ_WPN_ACR_CCO_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_aim_gl.paa";
	model = "\fhq_remington\acr\acr_tan_aim_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_DES_CCO_GL_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_DES_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_CCO_GL_SD : DZE_Wep_ACR_DES_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_CCO_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_aim_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_aim_gl_sd.p3d";

	ACR_M203;

	class Attachments {
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_DES_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES_CCO_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES_CCO_GL'] call player_removeAttachment";
		};
	};
};

//Holo

class DZE_Wep_ACR_DES_Holo : DZE_Wep_ACR_DES {
	displayName = "$STR_DZ_WPN_ACR_HOLO_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_hws.paa";
	model = "\fhq_remington\acr\acr_tan_hws.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_DES_Holo_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_DES_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_DES'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_Holo_SD : DZE_Wep_ACR_DES_SD {
	displayName = "$STR_DZ_WPN_ACR_HOLO_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_hws_sd.paa";
	model = "\fhq_remington\acr\acr_tan_hws_sd.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_DES_Holo_GL_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_DES_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES_Holo'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_DES_Holo_GL : DZE_Wep_ACR_DES_GL {
	displayName = "$STR_DZ_WPN_ACR_HOLO_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_hws_gl.paa";
	model = "\fhq_remington\acr\acr_tan_hws_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_DES_Holo_GL_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_DES_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_Holo_GL_SD : DZE_Wep_ACR_DES_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_HOLO_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_hws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_hws_gl_sd.p3d";

	ACR_M203;

	class Attachments {
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_DES_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES_Holo_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES_Holo_GL'] call player_removeAttachment";
		};
	};
};

//ACOG

class DZE_Wep_ACR_DES_ACOG : DZE_Wep_ACR_DES {
	displayName = "$STR_DZ_WPN_ACR_ACOG_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_rco.paa";
	model = "\fhq_remington\acr\acr_tan_rco.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_DES_ACOG_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_DES_ACOG_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_DES'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_ACOG_SD : DZE_Wep_ACR_DES_SD {
	displayName = "$STR_DZ_WPN_ACR_ACOG_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_rco_sd.paa";
	model = "\fhq_remington\acr\acr_tan_rco_sd.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_DES_ACOG_GL_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_DES_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES_ACOG'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_DES_ACOG_GL : DZE_Wep_ACR_DES_GL {
	displayName = "$STR_DZ_WPN_ACR_ACOG_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_rco_gl.paa";
	model = "\fhq_remington\acr\acr_tan_rco_gl.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_DES_ACOG_GL_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_DES_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_ACOG_GL_SD : DZE_Wep_ACR_DES_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_ACOG_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_tan_rco_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_rco_gl_sd.p3d";

	ACR_ACOG;

	class Attachments {
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_DES_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES_ACOG_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES_ACOG_GL'] call player_removeAttachment";
		};
	};
};

//ACR Desert TWS
class DZE_Wep_ACR_DES_TWS : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_TWS_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_tan_tws.paa";
	model = "\fhq_remington\acr\acr_tan_tws.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_DES_TWS_SD";
		Attachment_M203 = "DZE_Wep_ACR_DES_TWS_GL";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_DES'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_TWS_GL : DZE_Wep_ACR_DES_GL {
	displayName = "$STR_DZ_WPN_ACR_TWS_GL_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_tan_tws_gl.paa";
	model = "\fhq_remington\acr\acr_tan_tws_gl.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_DES_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_DES_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES_TWS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_TWS_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_TWS_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_tan_tws_sd.paa";
	model = "\fhq_remington\acr\acr_tan_tws_sd.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_DES_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_DES_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES_TWS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_TWS_GL_SD : DZE_Wep_ACR_DES_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_TWS_GL_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_tan_tws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_tws_gl_sd.p3d";

	ACR_TWS;

	class Attachments {
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_DES_GL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES_TWS_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES_TWS_SD'] call player_removeAttachment";
		};
	};
};

//ACR Desert NV
class DZE_Wep_ACR_DES_NV : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_tan_g33.paa";
	model = "\fhq_remington\acr\acr_tan_g33.p3d";
	ACR_NV;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_DES_NV_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_DES_NV_SD";
	};
};

class DZE_Wep_ACR_DES_NV_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_tan_g33_sd.paa";
	model = "\fhq_remington\acr\acr_tan_g33_sd.p3d";
	ACR_NV;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_DES_NV_GL_SD";
	};
	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES_NV'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_NV_GL : DZE_Wep_ACR_DES_GL {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_GL_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_tan_g33_gl.paa";
	model = "\fhq_remington\acr\acr_tan_g33_gl.p3d";
	ACR_NV;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_DES_NV_GL_SD";
	};
	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES_NV'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_DES_NV_GL_SD : DZE_Wep_ACR_DES_GL_SD {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_GL_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_tan_g33_gl_sd.paa";
	model = "\fhq_remington\acr\acr_tan_g33_gl_sd.p3d";
	ACR_NV;

	class Attachments {
	};
	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_DES_NV_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_DES_NV_SD'] call player_removeAttachment";
		};
	};
};

//ACR Snow
class DZE_Wep_ACR_SNOW : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_iron.paa";
	model = "\fhq_remington\acr\acr_snw_iron.p3d";
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};
	discreteDistanceInitIndex = 2;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_SNOW_CCO";
		Attachment_Holo = "DZE_Wep_ACR_SNOW_Holo";
		Attachment_ACOG = "DZE_Wep_ACR_SNOW_ACOG";
		Attachment_M203 = "DZE_Wep_ACR_SNOW_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_SD";
		Attachment_Tws = "DZE_Wep_ACR_SNOW_TWS";
	};
};

class DZE_Wep_ACR_SNOW_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_iron_sd.paa";
	model = "\fhq_remington\acr\acr_snw_iron_sd.p3d";
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600};
	discreteDistanceInitIndex = 2;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_SNOW_CCO_SD";
		Attachment_Holo = "DZE_Wep_ACR_SNOW_Holo_SD";
		Attachment_ACOG = "DZE_Wep_ACR_SNOW_ACOG_SD";
		Attachment_M203 = "DZE_Wep_ACR_SNOW_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_SNOW_TWS_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_SNOW_GL : DZE_Wep_ACR_SNOW {
	displayName = "$STR_DZ_WPN_ACR_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_iron_gl.paa";
	model = "\fhq_remington\acr\acr_snw_iron_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_SNOW_CCO_GL";
		Attachment_Holo = "DZE_Wep_ACR_SNOW_Holo_GL";
		Attachment_ACOG = "DZE_Wep_ACR_SNOW_ACOG_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_SNOW_TWS_GL";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_GL_SD : DZE_Wep_ACR_SNOW_SD {
	displayName = "$STR_DZ_WPN_ACR_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_iron_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_iron_gl_sd.p3d";

	ACR_M203;

	class Attachments {
		Attachment_CCO = "DZE_Wep_ACR_SNOW_CCO_GL_SD";
		Attachment_Holo = "DZE_Wep_ACR_SNOW_Holo_GL_SD";
		Attachment_ACOG = "DZE_Wep_ACR_SNOW_ACOG_GL_SD";
		Attachment_Tws = "DZE_Wep_ACR_SNOW_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW_GL'] call player_removeAttachment";
		};
	};
};

//CCO

class DZE_Wep_ACR_SNOW_CCO : DZE_Wep_ACR_SNOW {
	displayName = "$STR_DZ_WPN_ACR_COO_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_aim.paa";
	model = "\fhq_remington\acr\acr_snw_aim.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_SNOW_CCO_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_SNOW'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_CCO_SD : DZE_Wep_ACR_SNOW_SD {
	displayName = "$STR_DZ_WPN_ACR_COO_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_aim_sd.paa";
	model = "\fhq_remington\acr\acr_snw_aim_sd.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_SNOW_CCO_GL_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_SNOW_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW_CCO'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_SNOW_CCO_GL : DZE_Wep_ACR_SNOW_GL {
	displayName = "$STR_DZ_WPN_ACR_CCO_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_aim_gl.paa";
	model = "\fhq_remington\acr\acr_snw_aim_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_CCO_GL_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_SNOW_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_CCO_GL_SD : DZE_Wep_ACR_SNOW_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_CCO_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_aim_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_aim_gl_sd.p3d";

	ACR_M203;

	class Attachments {
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_ACR_SNOW_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW_CCO_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW_CCO_GL'] call player_removeAttachment";
		};
	};
};

//Holo

class DZE_Wep_ACR_SNOW_Holo : DZE_Wep_ACR_SNOW {
	displayName = "$STR_DZ_WPN_ACR_HOLO_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_hws.paa";
	model = "\fhq_remington\acr\acr_snw_hws.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_SNOW_Holo_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_SNOW'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_Holo_SD : DZE_Wep_ACR_SNOW_SD {
	displayName = "$STR_DZ_WPN_ACR_HOLO_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_hws_sd.paa";
	model = "\fhq_remington\acr\acr_snw_hws_sd.p3d";

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_SNOW_Holo_GL_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_SNOW_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW_Holo'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_SNOW_Holo_GL : DZE_Wep_ACR_SNOW_GL {
	displayName = "$STR_DZ_WPN_ACR_HOLO_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_hws_gl.paa";
	model = "\fhq_remington\acr\acr_snw_hws_gl.p3d";

	ACR_M203;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_Holo_GL_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_SNOW_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_Holo_GL_SD : DZE_Wep_ACR_SNOW_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_HOLO_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_hws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_hws_gl_sd.p3d";

	ACR_M203;

	class Attachments {
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_ACR_SNOW_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW_Holo_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW_Holo_GL'] call player_removeAttachment";
		};
	};
};

//ACOG

class DZE_Wep_ACR_SNOW_ACOG : DZE_Wep_ACR_SNOW {
	displayName = "$STR_DZ_WPN_ACR_ACOG_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_rco.paa";
	model = "\fhq_remington\acr\acr_snw_rco.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_SNOW_ACOG_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_ACOG_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_SNOW'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_ACOG_SD : DZE_Wep_ACR_SNOW_SD {
	displayName = "$STR_DZ_WPN_ACR_ACOG_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_rco_sd.paa";
	model = "\fhq_remington\acr\acr_snw_rco_sd.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_SNOW_ACOG_GL_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_SNOW_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW_ACOG'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_ACR_SNOW_ACOG_GL : DZE_Wep_ACR_SNOW_GL {
	displayName = "$STR_DZ_WPN_ACR_ACOG_GL_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_rco_gl.paa";
	model = "\fhq_remington\acr\acr_snw_rco_gl.p3d";

	ACR_ACOG;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_ACOG_GL_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_SNOW_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_ACOG_GL_SD : DZE_Wep_ACR_SNOW_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_ACOG_GL_SD_NAME";
	picture = "\fhq_remington\acr\ui\i_acr_snw_rco_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_rco_gl_sd.p3d";

	ACR_ACOG;

	class Attachments {
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_ACR_SNOW_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW_ACOG_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW_ACOG_GL'] call player_removeAttachment";
		};
	};
};

//ACR Snow TWS
class DZE_Wep_ACR_SNOW_TWS : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_TWS_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_snw_tws.paa";
	model = "\fhq_remington\acr\acr_snw_tws.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_TWS_SD";
		Attachment_M203 = "DZE_Wep_ACR_SNOW_TWS_GL";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_SNOW'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_TWS_GL : DZE_Wep_ACR_SNOW_GL {
	displayName = "$STR_DZ_WPN_ACR_TWS_GL_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_snw_tws_gl.paa";
	model = "\fhq_remington\acr\acr_snw_tws_gl.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_SNOW_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW_TWS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_TWS_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_TWS_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_snw_tws_sd.paa";
	model = "\fhq_remington\acr\acr_snw_tws_sd.p3d";

	ACR_TWS;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_SNOW_TWS_GL_SD";
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_SNOW_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW_TWS'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_TWS_GL_SD : DZE_Wep_ACR_SNOW_GL_SD {
	displayName = "$STR_DZ_WPN_ACR_TWS_GL_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_TWS_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_snw_tws_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_tws_gl_sd.p3d";

	ACR_TWS;

	class Attachments {
	};

	class ItemActions {
		class RemoveTWS {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['Attachment_Tws',_id,'DZE_Wep_ACR_SNOW_GL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW_TWS_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW_TWS_SD'] call player_removeAttachment";
		};
	};
};

//ACR Snow NV
class DZE_Wep_ACR_SNOW_NV : DZE_Wep_ACR_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_snw_g33.paa";
	model = "\fhq_remington\acr\acr_snw_g33.p3d";
	ACR_NV;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_SNOW_NV_GL";
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_NV_SD";
	};
};

class DZE_Wep_ACR_SNOW_NV_SD : DZE_Wep_ACR_SD_DZ_BASE {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_snw_g33_sd.paa";
	model = "\fhq_remington\acr\acr_snw_g33_sd.p3d";
	ACR_NV;

	class Attachments {
		Attachment_M203 = "DZE_Wep_ACR_SNOW_NV_GL_SD";
	};
	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW_NV'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_NV_GL : DZE_Wep_ACR_SNOW_GL {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_GL_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_snw_g33_gl.paa";
	model = "\fhq_remington\acr\acr_snw_g33_gl.p3d";
	ACR_NV;

	class Attachments {
		Attachment_Sup68 = "DZE_Wep_ACR_SNOW_NV_GL_SD";
	};
	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW_NV'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_ACR_SNOW_NV_GL_SD : DZE_Wep_ACR_SNOW_GL_SD {
	scope = 2;
	displayName = "$STR_DZ_WPN_ACR_NV_GL_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_ACR_NV_SD_DESC";
	picture = "\fhq_remington\acr\ui\i_acr_snw_g33_gl_sd.paa";
	model = "\fhq_remington\acr\acr_snw_g33_gl_sd.p3d";
	ACR_NV;

	class Attachments {
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup68',_id,'DZE_Wep_ACR_SNOW_NV_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_ACR_SNOW_NV_SD'] call player_removeAttachment";
		};
	};
};

#undef ACR_FLASHLIGHT
#undef ACR_M203
#undef ACR_ACOG
#undef ACR_TWS