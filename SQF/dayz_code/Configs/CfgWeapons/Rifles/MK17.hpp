#define MK17_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

#define MK17_Laser irLaserPos = "laser pos";\
		irLaserEnd = "laser dir";\
		irDistance = 5

#define MK17_M203 muzzles[] = {this, M203Muzzle};\
handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\Anim\RH_scargl.rtm"}

class DZE_Wep_MK17 : M4A1 {
	displayName = "$STR_DZ_WPN_MK17_NAME";
	descriptionShort = "$STR_DZ_WPN_MK17_DESC";
	model = "\RH_mgswp\RH_Scarh.p3d";
	picture = "\RH_mgswp\inv\scarh.paa";
	weaponInfoType = "RscWeaponZeroing";
	handAnim[] = {};
	reloadMagazineSound[] = {"\RH_mgswp\sound\scar_Reload",0.0316228,1,20};
	discreteDistance[] = {100,200,300,400,500,600};
	discreteDistanceInitIndex = 2;
	bullet1[] = {"ca\sounds\weapons\shells\small_shell_metal_04",0.17782794,1,15};
	bullet2[] = {"ca\sounds\weapons\shells\small_shell_metal_03",0.17782794,1,15};
	bullet3[] = {"ca\sounds\weapons\shells\small_shell_metal_02",0.17782794,1,15};
	bullet4[] = {"ca\sounds\weapons\shells\small_shell_metal_01",0.17782794,1,15};
	bullet5[] = {"ca\sounds\weapons\shells\small_shell_dirt_07",0.31622776,1,15};
	bullet6[] = {"ca\sounds\weapons\shells\small_shell_dirt_09",0.31622776,1,15};
	bullet7[] = {"ca\sounds\weapons\shells\small_shell_dirt_10",0.31622776,1,15};
	bullet8[] = {"ca\sounds\weapons\shells\small_shell_dirt_12",0.31622776,1,15};
	bullet9[] = {"ca\sounds\weapons\shells\small_shell_soft_05",0.17782794,1,15};
	bullet10[] = {"ca\sounds\weapons\shells\small_shell_soft_09",0.17782794,1,15};
	bullet11[] = {"ca\sounds\weapons\shells\small_shell_soft_10",0.17782794,1,15};
	bullet12[] = {"ca\sounds\weapons\shells\small_shell_soft_13",0.17782794,1,15};
	soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	modes[] = {"Single","FullAuto"};

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\scarh",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		dispersion = 0.0025;
		reloadtime = 0.096;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 300;
		minRange = 0;
		minRangeProbab = 0.7;
		midRange = 150;
		midRangeProbab = 0.5;
		maxRange = 300;
		maxRangeProbab = 0.03;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\scarh",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		dispersion = 0.0025;
		reloadtime = 0.096;
		aiRateOfFire = 0.2;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.8;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.02;
	};

	magazines[] = {20Rnd_762x51_B_SCAR};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_MK17_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_MK17_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_MK17_ACOG";
		DZE_Item_Att_M203 = "DZE_Wep_MK17_GL";
	};
};

class DZE_Wep_MK17_CCO : DZE_Wep_MK17 {
	displayName = "$STR_DZ_WPN_MK17_CCO_NAME";
	model = "\RH_mgswp\RH_Scarh_aim.p3d";
	picture = "\RH_mgswp\inv\scarh_aim.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};
	MK17_Laser;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_MK17_GL_CCO";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_MK17'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK17_Holo : DZE_Wep_MK17 {
	displayName = "$STR_DZ_WPN_MK17_HOLO_NAME";
	model = "\RH_mgswp\RH_Scarh_eotech.p3d";
	picture = "\RH_mgswp\inv\scarh_eotech.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};
	MK17_Laser;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_MK17_GL_Holo";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_MK17'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK17_ACOG : DZE_Wep_MK17 {
	displayName = "$STR_DZ_WPN_MK17_ACOG_NAME";
	model = "\RH_mgswp\RH_Scarh_acog.p3d";
	picture = "\RH_mgswp\inv\scarh_acog.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};

	MK17_Laser;
	MK17_ACOG;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_MK17_GL_ACOG";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_MK17'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK17_GL : DZE_Wep_MK17 {
	displayName = "$STR_DZ_WPN_MK17_GL_NAME";
	model = "\RH_mgswp\RH_Scarh_gl.p3d";
	picture = "\RH_mgswp\inv\Scarh_gl.paa";

	MK17_M203;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_MK17_GL_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_MK17_GL_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_MK17_GL_ACOG";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_MK17'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK17_GL_CCO : DZE_Wep_MK17_GL {
	displayName = "$STR_DZ_WPN_MK17_GL_CCO_NAME";
	model = "\RH_mgswp\RH_Scarh_gl_aim.p3d";
	picture = "\RH_mgswp\inv\Scarh_gl_aim.paa";

	MK17_Laser;
	MK17_M203;

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_MK17_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_MK17_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK17_GL_Holo : DZE_Wep_MK17_GL {
	displayName = "$STR_DZ_WPN_MK17_GL_HOLO_NAME";
	model = "\RH_mgswp\RH_Scarh_gl_eotech.p3d";
	picture = "\RH_mgswp\inv\Scarh_gl_eotech.paa";

	MK17_Laser;
	MK17_M203;

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_MK17_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_MK17_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK17_GL_ACOG : DZE_Wep_MK17_GL {
	displayName = "$STR_DZ_WPN_MK17_GL_ACOG_NAME";
	model = "\RH_mgswp\RH_Scarh_gl_acog.p3d";
	picture = "\RH_mgswp\inv\Scarh_gl_acog.paa";

	MK17_Laser;
	MK17_M203;
	MK17_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_MK17_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_MK17_ACOG'] call player_removeAttachment";
		};
	};
};

//SD - No SD weapon model without a scope available
class DZE_Wep_MK17_CCO_SD : DZE_Wep_MK17 {
	displayName = "$STR_DZ_WPN_MK17_CCO_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_MK17SD_DESC";
	model = "\RH_mgswp\RH_scarh_sd_aim.p3d";
	picture = "\RH_mgswp\inv\scarh_sd_aim.paa";
	modes[] = {"Single","FullAuto"};
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};

	MK17_Laser;

	class Single: Single {
		begin1[] = {"\RH_mgswp\sound\scarh_sd",1.0,1,200};
		soundBegin[] = {"begin1",1};
	};
	class FullAuto: FullAuto {
		begin1[] = {"\RH_mgswp\sound\scarh_sd",1.0,1,200};
		soundBegin[] = {"begin1",1};
	};

	magazines[] = {20Rnd_762x51_SB_SCAR};

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_MK17_GL_CCO_SD";
	};
	class ItemActions {};
};

class DZE_Wep_MK17_Holo_SD : DZE_Wep_MK17_CCO_SD {
	displayName = "$STR_DZ_WPN_MK17_HOLO_SD_NAME";
	model = "\RH_mgswp\RH_scarh_sd_eotech.p3d";
	picture = "\RH_mgswp\inv\scarh_sd_eotech.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};

	MK17_Laser;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_MK17_GL_Holo_SD";
	};
	class ItemActions {};
};

class DZE_Wep_MK17_ACOG_SD : DZE_Wep_MK17_CCO_SD {
	displayName = "$STR_DZ_WPN_MK17_ACOG_SD_NAME";
	model = "\RH_mgswp\RH_scarh_sd_acog.p3d";
	picture = "\RH_mgswp\inv\scarh_sd_acog.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};

	MK17_Laser;
	MK17_ACOG;

	class Attachments {};
	class ItemActions {};
};

class DZE_Wep_MK17_GL_CCO_SD : DZE_Wep_MK17_CCO_SD {
	displayName = "$STR_DZ_WPN_MK17_GL_CCO_SD_NAME";
	model = "\RH_mgswp\RH_scarh_sd_gl_aim.p3d";
	picture = "\RH_mgswp\inv\scarh_sd_gl_aim.paa";

	MK17_Laser;
	MK17_M203;

	class Attachments {};
	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_MK17_CCO_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK17_GL_Holo_SD : DZE_Wep_MK17_CCO_SD {
	displayName = "$STR_DZ_WPN_MK17_GL_HOLO_SD_NAME";
	model = "\RH_mgswp\RH_scarh_sd_gl_eotech.p3d";
	picture = "\RH_mgswp\inv\scarh_sd_gl_eotech.paa";

	MK17_Laser;
	MK17_M203;

	class Attachments {};
	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_MK17_Holo_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK17_BL_Holo : DZE_Wep_MK17_Holo {
	model = "\RH_mgswp\RH_Scarhb_eotech.p3d";
	picture = "\RH_mgswp\inv\scarhb_eotech.paa";
	class Attachments {};
	class ItemActions {};
};

class DZE_Wep_MK17_BL_GL_ACOG : DZE_Wep_MK17_GL_ACOG {
	model = "\RH_mgswp\RH_Scarhb_gl_acog.p3d";
	picture = "\RH_mgswp\inv\Scarhb_gl_acog.paa";
	class Attachments {};
	class ItemActions {};
};

class DZE_Wep_MK17_BL_CCO_SD : DZE_Wep_MK17_CCO_SD {
	model = "\RH_mgswp\RH_scarhb_sd_aim.p3d";
	picture = "\RH_mgswp\inv\scarhb_sd_aim.paa";
	class Attachments {};
	class ItemActions {};
};

class DZE_Wep_MK17_BL_GL_Holo_SD : DZE_Wep_MK17_GL_Holo_SD {
	model = "\RH_mgswp\RH_scarhb_sd_gl_eotech.p3d";
	picture = "\RH_mgswp\inv\scarhb_sd_gl_eotech.paa";
	class Attachments {};
	class ItemActions {};
};

class SCAR_H_LNG_Sniper;
class DZE_Wep_MK17_Sniper: SCAR_H_LNG_Sniper {
	descriptionShort = "$STR_DZ_WPN_MK17_SNIPER_DESC";
};

class SCAR_H_LNG_Sniper_SD;
class DZE_Wep_MK17_Sniper_SD: SCAR_H_LNG_Sniper_SD {
	descriptionShort = "$STR_DZ_WPN_MK17SD_SNIPER_DESC";
	modelOptics = "\Ca\weapons_E\SCAR\TacMil_optic_8x.p3d";
	weaponInfoType = "RscWeaponZeroing";
	opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
	modes[] = {"SCAR_H_SD_Single", "SCAR_H_SD_FullAuto"};
	class OpticsModes {
		class StepScope {
			memoryPointCamera = "eye";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
			opticsFlare = 1;
			opticsDisablePeripherialVision = 1;
			visionMode[] = {"Normal"};
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
			discreteDistanceInitIndex = 2;
			distanceZoomMax = 120;
			distanceZoomMin = 400;
			opticsZoomInit = 0.1;
			opticsZoomMax = 0.1;
			opticsZoomMin = 0.03125;
		};
	};
	class SCAR_H_SD_Single : Mode_SemiAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		begin1[] = {"\RH_mgswp\sound\scarh_sd",1.0,1,75};
		soundBegin[] = {"begin1",1};
		dispersion = 0.00045;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.05;
		aiRateOfFireDistance = 600;
	};
	class SCAR_H_SD_FullAuto : Mode_FullAuto {
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		begin1[] = {"\RH_mgswp\sound\scarh_sd",1.0,1,75};
		soundBegin[] = {"begin1",1};
		dispersion = 0.00045;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 600;
		maxRangeProbab = 0.05;
	};
	distanceZoomMax = 120;
	distanceZoomMin = 400;
	opticsZoomInit = 0.1;
	opticsZoomMax = 0.1;
	opticsZoomMin = 0.03125;
};

#undef MK17_ACOG
#undef MK17_Laser
#undef MK17_M203