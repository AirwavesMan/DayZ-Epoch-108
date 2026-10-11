#define HK417_M203 muzzles[] = {this, M203Muzzle};\
handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"}

#define HK417C_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class DZE_Wep_HK417 : M14_EP1 {
	displayName = "$STR_DZ_WPN_HK417_NAME";
	model = "\RH_hk416\RH_hk417.p3d";
	picture = "\RH_hk416\inv\hk417.paa";

	handAnim[] = {"OFP2_ManSkeleton"};
	reloadMagazineSound[] = {"\RH_hk416\sound\Hk416_Reload.wss",0.056234,1,20};

	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto {
		recoil = "HK417_Recoil";
		recoilProne = "HK417_RecoilProne";
		begin1[] = {"\RH_hk416\sound\hk417.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		dispersion = 0.0015;
		reloadTime = 0.1;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.5;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "HK417_Recoil";
		recoilProne = "HK417_RecoilProne";
		begin1[] = {"\RH_hk416\sound\hk417.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		dispersion = 0.004;
		reloadTime = 0.1;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.58;
		maxRange = 100;
		maxRangeProbab = 0.04;
	};

	magazines[] =
	{
		20Rnd_762x51_HK417
	};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_HK417_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_HK417_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_HK417_ACOG";
		DZE_Item_Att_Sup762 = "DZE_Wep_HK417_SD";
	};
};

class DZE_Wep_HK417_SD : DZE_Wep_HK417 {
	displayName = "$STR_DZ_WPN_HK417_SD_NAME";
	model = "\RH_hk416\RH_hk416sd.p3d";
	picture = "\RH_hk416\inv\hk416sd.paa";

	handAnim[] = {"OFP2_ManSkeleton"};
	reloadMagazineSound[] = {"\RH_hk416\sound\Hk416_Reload.wss",0.056234,1,20};

	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto {
		recoil = "HK417_Recoil";
		recoilProne = "HK417_RecoilProne";
		begin1[] = {"\RH_hk416\sound\hk417sd.wss",1.0,1,200};
		soundBegin[] = {"begin1",1};
		dispersion = 0.0015;
		reloadTime = 0.1;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.5;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "HK417_Recoil";
		recoilProne = "HK417_RecoilProne";
		begin1[] = {"\RH_hk416\sound\hk417sd.wss",1.0,1,200};
		soundBegin[] = {"begin1",1};
		dispersion = 0.004;
		reloadTime = 0.1;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.58;
		maxRange = 100;
		maxRangeProbab = 0.04;
	};

	magazines[] =
	{
		20Rnd_762x51_HK417SD
	};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_HK417_CCO_SD";
		DZE_Item_Att_Holo = "DZE_Wep_HK417_Holo_SD";
		DZE_Item_Att_ACOG = "DZE_Wep_HK417_ACOG_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup762',_id,'DZE_Wep_HK417'] call player_removeAttachment";
		};
	};
};

//CCO
class DZE_Wep_HK417_CCO : DZE_Wep_HK417 {
	displayName = "$STR_DZ_WPN_HK417_CCO_NAME";
	model = "\RH_hk416\RH_hk417aim.p3d";
	picture = "\RH_hk416\inv\hk417aim.paa";

	class Attachments {
		DZE_Item_Att_Sup762 = "DZE_Wep_HK417_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_HK417'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK417_CCO_SD : DZE_Wep_HK417_SD {
	displayName = "$STR_DZ_WPN_HK417_CCO_SD_NAME";
	model = "\RH_hk416\RH_hk417sdaim.p3d";
	picture = "\RH_hk416\inv\hk417sdaim.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_HK417_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup762',_id,'DZE_Wep_HK417_CCO'] call player_removeAttachment";
		};
	};
};

//Holo

class DZE_Wep_HK417_Holo : DZE_Wep_HK417 {
	displayName = "$STR_DZ_WPN_HK417_HOLO_NAME";
	model = "\RH_hk416\RH_hk417eotech.p3d";
	picture = "\RH_hk416\inv\hk417eotech.paa";

	class Attachments {
		DZE_Item_Att_Sup762 = "DZE_Wep_HK417_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_HK417'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK417_Holo_SD : DZE_Wep_HK417_SD {
	displayName = "$STR_DZ_WPN_HK417_HOLO_SD_NAME";
	model = "\RH_hk416\RH_hk417sdeotech.p3d";
	picture = "\RH_hk416\inv\hk417sdeotech.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_HK417_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup762',_id,'DZE_Wep_HK417_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK417_ACOG : DZE_Wep_HK417 {
	displayName = "$STR_DZ_WPN_HK417_ACOG_NAME";
	model = "\RH_hk416\RH_hk417acog.p3d";
	picture = "\RH_hk416\inv\hk417acog.paa";

	HK417C_ACOG;

	class Attachments {
		DZE_Item_Att_Sup762 = "DZE_Wep_HK417_ACOG_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_HK417'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK417_ACOG_SD : DZE_Wep_HK417_SD {
	displayName = "$STR_DZ_WPN_HK417_ACOG_SD_NAME";
	model = "\RH_hk416\RH_hk417sdacog.p3d";
	picture = "\RH_hk416\inv\hk417sdacog.paa";

	HK417C_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_HK417_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup762',_id,'DZE_Wep_HK417_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK417C : DZE_Wep_HK417 {
	displayName = "$STR_DZ_WPN_HK417C_NAME";
	model = "\RH_hk416\RH_hk417s.p3d";
	picture = "\RH_hk416\inv\hk417s.paa";
	handAnim[] = {"OFP2_ManSkeleton"};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_HK417C_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_HK417C_Holo";
		DZE_Item_Att_M203 = "DZE_Wep_HK417C_GL";
		DZE_Item_Att_ACOG = "DZE_Wep_HK417C_ACOG";
	};
};

//Grenade launcher

class DZE_Wep_HK417C_GL : DZE_Wep_HK417C {
	displayName = "$STR_DZ_WPN_HK417C_GL_NAME";
	model = "\RH_hk416\RH_hk417sgl.p3d";
	picture = "\RH_hk416\inv\hk417sgl.paa";

	HK417_M203;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_HK417C_GL_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_HK417C_GL_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_HK417C_GL_ACOG";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_HK417C'] call player_removeAttachment";
		};
	};
};

//CCO

class DZE_Wep_HK417C_CCO : DZE_Wep_HK417C {
	displayName = "$STR_DZ_WPN_HK417C_CCO_NAME";
	model = "\RH_hk416\RH_hk417saim.p3d";
	picture = "\RH_hk416\inv\hk417saim.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_HK417C_GL_CCO";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_HK417C'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_HK417C_GL_CCO : DZE_Wep_HK417C_GL {
	displayName = "$STR_DZ_WPN_HK417C_GL_CCO_NAME";
	model = "\RH_hk416\RH_hk417sglaim.p3d";
	picture = "\RH_hk416\inv\hk417sglaim.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_HK417C_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_HK417C_CCO'] call player_removeAttachment";
		};
	};
};

//Holo

class DZE_Wep_HK417C_Holo : DZE_Wep_HK417C {
	displayName = "$STR_DZ_WPN_HK417C_HOLO_NAME";
	model = "\RH_hk416\RH_hk417seotech.p3d";
	picture = "\RH_hk416\inv\hk417seotech.paa";

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_HK417C_GL_Holo";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_HK417C'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_HK417C_GL_Holo : DZE_Wep_HK417C_GL {
	displayName = "$STR_DZ_WPN_HK417C_GL_HOLO_NAME";
	model = "\RH_hk416\RH_hk417sgleotech.p3d";
	picture = "\RH_hk416\inv\hk417sgleotech.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_HK417C_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_HK417C_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK417C_ACOG : DZE_Wep_HK417C {
	displayName = "$STR_DZ_WPN_HK417C_ACOG_NAME";
	model = "\RH_hk416\RH_hk417sacog.p3d";
	picture = "\RH_hk416\inv\hk417sacog.paa";

	HK417C_ACOG;

	class Attachments {
		DZE_Item_Att_M203 = "DZE_Wep_HK417C_GL_ACOG";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_HK417C'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK417C_GL_ACOG : DZE_Wep_HK417C_GL {
	displayName = "$STR_DZ_WPN_HK417C_GL_ACOG_NAME";
	model = "\RH_hk416\RH_hk417sglacog.p3d";
	picture = "\RH_hk416\inv\hk417sglacog.paa";

	HK417_M203;
	HK417C_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_HK417C_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['DZE_Item_Att_M203',_id,'DZE_Wep_HK417C_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK417_Sniper: DZE_Wep_HK417 {
	displayName = "$STR_DZ_WPN_HK417_SNIPER_NAME";
	model = "\RH_hk416\RH_hk417sp.p3d";
	picture = "\RH_hk416\inv\hk417sp.paa";
	modelOptics = "\RH_hk416\fnc_875x_illum_round_mildot.p3d";
	weaponInfoType = "RscWeaponZeroing";
	optics = 1;
	class OpticsModes {
		class StepScope {
			memoryPointCamera = "eye";
			opticsFlare = "true";
			opticsDisablePeripherialVision = "true";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticsZoomMin = 0.033574;
			opticsZoomMax = 0.087666;
			opticsZoomInit = 0.087666;
			distanceZoomMin = 325;
			distanceZoomMax = 325;
			visionMode[] = {"Normal"};
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 2;
		};
	};

	class Single: Single {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 600;
		midRangeProbab = 0.7;
		maxRange = 1200;
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

class DZE_Wep_HK417_Sniper_SD: DZE_Wep_HK417_SD {
	displayName = "$STR_DZ_WPN_HK417_SNIPER_SD_NAME";
	model = "\RH_hk416\RH_hk417sdsp.p3d";
	picture = "\RH_hk416\inv\hk417sdsp.paa";
	modelOptics = "\RH_hk416\fnc_875x_illum_round_mildot.p3d";
	weaponInfoType = "RscWeaponZeroing";
	optics = 1;
	class OpticsModes {
		class StepScope {
			memoryPointCamera = "eye";
			opticsFlare = "true";
			opticsDisablePeripherialVision = "true";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			opticsZoomMin = 0.033574;
			opticsZoomMax = 0.087666;
			opticsZoomInit = 0.087666;
			distanceZoomMin = 325;
			distanceZoomMax = 325;
			visionMode[] = {"Normal"};
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 2;
		};
	};
	class Single: Single {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 600;
		midRangeProbab = 0.7;
		maxRange = 1200;
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

	class ItemActions {};
	class Attachments {};
};

#undef HK417_M203
#undef HK417C_ACOG
