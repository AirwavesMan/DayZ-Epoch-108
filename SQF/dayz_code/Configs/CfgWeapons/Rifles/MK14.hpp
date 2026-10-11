#define MK14_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class DZE_Wep_MK14: M14_EP1 {
	displayName = "$STR_DZ_WPN_MK14_NAME";
	model = "\RH_mgswp\RH_mk14.p3d";
	picture = "\RH_mgswp\inv\mk14.paa";
	magazines[] = {20Rnd_762x51_DMR};
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M14ebr.rtm"};
	modes[] = {"Single","FullAuto"};

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		begin1[] = {"ca\sounds\weapons\rifles\sniper_single_05",1.7782794,1,1000};
		soundBegin[] = {"begin1",1};
		dispersion = 0.00045;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 300;
		maxRangeProbab = 0.05;
	};
	class FullAuto : Single {
		displayName = "$STR_DN_MODE_FULLAUTO";
		recoil = "recoil_auto_primary_5outof10";
		recoilProne = "recoil_auto_primary_prone_4outof10";
		autoFire = 1;
		dispersion = 0.00050000002;
		maxRange = 200;
		midRange = 80;
	};

	class Attachments {
		Attachment_CCO = "DZE_Wep_MK14_CCO";
		Attachment_Holo = "DZE_Wep_MK14_Holo";
		Attachment_ACOG = "DZE_Wep_MK14_ACOG";
		Attachment_Sup762 = "DZE_Wep_MK14_SD";
	};
};

class DZE_Wep_MK14_CCO: DZE_Wep_MK14 {
	displayName = "$STR_DZ_WPN_MK14_CCO_NAME";
	model = "\RH_mgswp\RH_mk14aim.p3d";
	picture = "\RH_mgswp\inv\mk14aim.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_MK14'] call player_removeAttachment";
		};
	};

	class Attachments {
		Attachment_Sup762 = "DZE_Wep_MK14_CCO_SD";
	};
};

class DZE_Wep_MK14_Holo: DZE_Wep_MK14 {
	displayName = "$STR_DZ_WPN_MK14_HOLO_NAME";
	model = "\RH_mgswp\RH_mk14eotech.p3d";
	picture = "\RH_mgswp\inv\mk14eotech.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};

	class Attachments {
		Attachment_Sup762 = "DZE_Wep_MK14_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_MK14'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK14_ACOG: DZE_Wep_MK14 {
	displayName = "$STR_DZ_WPN_MK14_ACOG_NAME";
	model = "\RH_mgswp\RH_mk14acog.p3d";
	picture = "\RH_mgswp\inv\mk14acog.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};

	MK14_ACOG;

	class Attachments {
		Attachment_Sup762 = "DZE_Wep_MK14_ACOG_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_MK14'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK14_Sniper: DZE_Wep_MK14 {
	displayName = "$STR_DZ_WPN_MK14_SNIPER_NAME";
	model = "\RH_mgswp\RH_m14ebrsp.p3d";
	picture = "\RH_mgswp\inv\m14ebrsp.paa";
	uipicture = "\ca\weapons\data\ico\i_sniper_ca.paa";
	modelOptics = "\ca\Weapons_baf\LRR_optic";
	opticsZoomMin = "0.28778/12";
	opticsZoomMax = "0.28778/3";
	opticsZoomInit = "0.28778/3";
	weaponInfoType = "RscWeaponZeroing";
	discretefov[] = {};
	discreteInitIndex = 0;
	visionMode[] = {"Normal"};
	distanceZoomMin = 329;
	distanceZoomMax = 329;
	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;

	class Single: Single {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.05;
	};
	class FullAuto: FullAuto {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 600;
		maxRangeProbab = 0.05;
	};

	class Attachments {};
};

class DZE_Wep_MK14_SD: M14_EP1 {
	displayName = "$STR_DZ_WPN_MK14_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_MK14SD_DESC";
	model = "\RH_mgswp\RH_mk14sd.p3d";
	picture = "\RH_mgswp\inv\mk14sd.paa";
	magazines[] = {20Rnd_762x51_DMRSD};
	modes[] = {"Single","FullAuto"};
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M14ebr.rtm"};

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		begin1[] = {"\RH_mgswp\sound\m14sd",1.0,1,200};
		soundBegin[] = {"begin1",1};
		dispersion = 0.00045;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 300;
		maxRangeProbab = 0.05;
	};
	class FullAuto : Single {
		displayName = "$STR_DN_MODE_FULLAUTO";
		recoil = "recoil_auto_primary_5outof10";
		recoilProne = "recoil_auto_primary_prone_4outof10";
		begin1[] = {"\RH_mgswp\sound\m14sd",1.0,1,200};
		soundBegin[] = {"begin1",1};
		autoFire = 1;
		dispersion = 0.00050000002;
		maxRange = 200;
		midRange = 80;
	};

	class Attachments {
		Attachment_CCO = "DZE_Wep_MK14_CCO_SD";
		Attachment_Holo = "DZE_Wep_MK14_Holo_SD";
		Attachment_ACOG = "DZE_Wep_MK14_ACOG_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup762',_id,'DZE_Wep_MK14'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK14_CCO_SD: DZE_Wep_MK14_SD {
	displayName = "$STR_DZ_WPN_MK14_CCO_SD_NAME";
	model = "\RH_mgswp\RH_mk14sdaim.p3d";
	picture = "\RH_mgswp\inv\mk14sdaim.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_MK14_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup762',_id,'DZE_Wep_MK14_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK14_Holo_SD: DZE_Wep_MK14_SD {
	displayName = "$STR_DZ_WPN_MK14_HOLO_SD_NAME";
	model = "\RH_mgswp\RH_mk14sdeotech.p3d";
	picture = "\RH_mgswp\inv\mk14sdeotech.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_MK14_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup762',_id,'DZE_Wep_MK14_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK14_ACOG_SD: DZE_Wep_MK14_SD {
	displayName = "$STR_DZ_WPN_MK14_ACOG_SD_NAME";
	descriptionShort = "Suppressed assault rifle<br/>Caliber: 7.62x51mm NATO<br/>Scope power: 4X<br/>Vertical grip";
	model = "\RH_mgswp\RH_mk14sdacog.p3d";
	picture = "\RH_mgswp\inv\mk14sdacog.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};

	MK14_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_MK14_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup762',_id,'DZE_Wep_MK14_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK14_Sniper_SD: DZE_Wep_MK14_SD {
	displayName = "$STR_DZ_WPN_MK14_SNIPER_SD_NAME";
	model = "\RH_mgswp\RH_m14ebrsp_sd.p3d";
	picture = "\RH_mgswp\inv\m14ebrsp_sd.paa";
	uipicture = "\ca\weapons\data\ico\i_sniper_ca.paa";
	modelOptics = "\ca\Weapons_baf\LRR_optic";
	opticsZoomMin = "0.28778/12";
	opticsZoomMax = "0.28778/3";
	opticsZoomInit = "0.28778/3";
	weaponInfoType = "RscWeaponZeroing";
	discretefov[] = {};
	discreteInitIndex = 0;
	visionMode[] = {"Normal"};
	distanceZoomMin = 329;
	distanceZoomMax = 329;
	discreteDistance[] = {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex = 2;

	class Single: Single {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.05;
	};
	class FullAuto: FullAuto {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 600;
		maxRangeProbab = 0.05;
	};

	class Attachments {};
	class ItemActions {};
};

#undef MK14_ACOG