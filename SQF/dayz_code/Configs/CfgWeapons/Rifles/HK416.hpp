#define HK416_M203 muzzles[] = {this, M203Muzzle};\
handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"}

#define HK416C_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class DZE_Wep_HK416 : M4A1 {
	displayName = "$STR_DZ_WPN_HK416_NAME";
	model = "\RH_hk416\RH_hk416.p3d";
	picture = "\RH_hk416\inv\hk416.paa";

	handAnim[] = {"OFP2_ManSkeleton","\RH_hk416\Anim\Hk416_anim.rtm"};
	reloadMagazineSound[] = {"\RH_hk416\sound\Hk416_Reload.wss",0.056234,1,20};

	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\RH_hk416\sound\hk416.wss",1.778279,1,800};
		soundBegin[] = {"begin1",1};
		reloadtime = 0.071;
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\RH_hk416\sound\hk416.wss",1.778279,1,800};
		soundBegin[] = {"begin1",1};
		reloadtime = 0.071;
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 60;
		midRangeProbab = 0.7;
		maxRange = 90;
		maxRangeProbab = 0.05;
	};

	magazines[] =
	{
		30Rnd_556x45_Stanag,
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};

	class Attachments {
		Attachment_CCO = "DZE_Wep_HK416_CCO";
		Attachment_Holo = "DZE_Wep_HK416_Holo";
		Attachment_M203 = "DZE_Wep_HK416_GL";
		Attachment_Sup556 = "DZE_Wep_HK416_SD";
	};
};

class DZE_Wep_HK416_SD : M4A1_AIM_SD_camo {
	displayName = "$STR_DZ_WPN_HK416_SD_NAME";
	model = "\RH_hk416\RH_hk416sd.p3d";
	picture = "\RH_hk416\inv\hk416sd.paa";

	handAnim[] = {"OFP2_ManSkeleton","\RH_hk416\Anim\Hk416_anim.rtm"};
	reloadMagazineSound[] = {"\RH_hk416\sound\Hk416_Reload.wss",0.056234,1,20};

	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		begin1[] = {"\RH_hk416\sound\hk416sd.wss",1.0,1,80};
		soundBegin[] = {"begin1",1};
		reloadtime = 0.071;
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		begin1[] = {"\RH_hk416\sound\hk416sd.wss",1.0,1,80};
		soundBegin[] = {"begin1",1};
		reloadtime = 0.071;
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 60;
		midRangeProbab = 0.7;
		maxRange = 90;
		maxRangeProbab = 0.05;
	};

	magazines[] =
	{
		30Rnd_556x45_StanagSD,
		30Rnd_556x45_G36SD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
	};

	class Attachments {
		Attachment_CCO = "DZE_Wep_HK416_CCO_SD";
		Attachment_Holo = "DZE_Wep_HK416_Holo_SD";
		Attachment_M203 = "DZE_Wep_HK416_GL_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup556',_id,'DZE_Wep_HK416'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_HK416_GL : DZE_Wep_HK416 {
	displayName = "$STR_DZ_WPN_HK416_GL_NAME";
	model = "\RH_hk416\RH_hk416gl.p3d";
	picture = "\RH_hk416\inv\hk416gl.paa";

	HK416_M203;

	class Attachments {
		Attachment_CCO = "DZE_Wep_HK416_GL_CCO";
		Attachment_Holo = "DZE_Wep_HK416_GL_Holo";
		Attachment_Sup556 = "DZE_Wep_HK416_GL_SD";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_HK416'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK416_GL_SD : DZE_Wep_HK416_SD {
	displayName = "$STR_DZ_WPN_HK416_GL_SD_NAME";
	model = "\RH_hk416\RH_hk416sdgl.p3d";
	picture = "\RH_hk416\inv\hk416sdgl.paa";

	HK416_M203;

	class Attachments {
		Attachment_CCO = "DZE_Wep_HK416_GL_CCO_SD";
		Attachment_Holo = "DZE_Wep_HK416_GL_Holo_SD";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_HK416_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup556',_id,'DZE_Wep_HK416_GL'] call player_removeAttachment";
		};
	};
};

//CCO

class DZE_Wep_HK416_CCO : DZE_Wep_HK416 {
	displayName = "$STR_DZ_WPN_HK416_CCO_NAME";
	model = "\RH_hk416\RH_hk416aim.p3d";
	picture = "\RH_hk416\inv\hk416aim.paa";

	class Attachments {
		Attachment_M203 = "DZE_Wep_HK416_GL_CCO";
		Attachment_Sup556 = "DZE_Wep_HK416_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_HK416'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK416_CCO_SD : DZE_Wep_HK416_SD {
	displayName = "$STR_DZ_WPN_HK416_CCO_SD_NAME";
	model = "\RH_hk416\RH_hk416sdaim.p3d";
	picture = "\RH_hk416\inv\hk416sdaim.paa";

	class Attachments {
		Attachment_M203 = "DZE_Wep_HK416_GL_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_HK416_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup556',_id,'DZE_Wep_HK416_CCO'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_HK416_GL_CCO : DZE_Wep_HK416_GL {
	displayName = "$STR_DZ_WPN_HK416_GL_CCO_NAME";
	model = "\RH_hk416\RH_hk416glaim.p3d";
	picture = "\RH_hk416\inv\hk416glaim.paa";

	class Attachments {
		Attachment_Sup556 = "DZE_Wep_HK416_GL_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_HK416_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_HK416_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK416_GL_CCO_SD : DZE_Wep_HK416_GL_SD {
	displayName = "$STR_DZ_WPN_HK416_GL_CCO_SD_NAME";
	model = "\RH_hk416\RH_hk416sdglaim.p3d";
	picture = "\RH_hk416\inv\hk416sdglaim.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_HK416_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_HK416_CCO_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup556',_id,'DZE_Wep_HK416_GL_CCO'] call player_removeAttachment";
		};
	};
};

//Holo

class DZE_Wep_HK416_Holo : DZE_Wep_HK416 {
	displayName = "$STR_DZ_WPN_HK416_HOLO_NAME";
	model = "\RH_hk416\RH_hk416eotech.p3d";
	picture = "\RH_hk416\inv\hk416eotech.paa";

	class Attachments {
		Attachment_M203 = "DZE_Wep_HK416_GL_Holo";
		Attachment_Sup556 = "DZE_Wep_HK416_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_HK416'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK416_Holo_SD : DZE_Wep_HK416_SD {
	displayName = "$STR_DZ_WPN_HK416_HOLO_SD_NAME";
	model = "\RH_hk416\RH_hk416sdeotech.p3d";
	picture = "\RH_hk416\inv\hk416sdeotech.paa";

	class Attachments {
		Attachment_M203 = "DZE_Wep_HK416_GL_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_HK416_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup556',_id,'DZE_Wep_HK416_Holo'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_HK416_GL_Holo : DZE_Wep_HK416_GL {
	displayName = "$STR_DZ_WPN_HK416_GL_HOLO_NAME";
	model = "\RH_hk416\RH_hk416gleotech.p3d";
	picture = "\RH_hk416\inv\Hk416gleotech.paa";

	class Attachments {
		Attachment_Sup556 = "DZE_Wep_HK416_GL_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_HK416_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_HK416_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK416_GL_Holo_SD : DZE_Wep_HK416_GL_SD {
	displayName = "$STR_DZ_WPN_HK416_GL_HOLO_SD_NAME";
	model = "\RH_hk416\RH_hk416sdgleotech.p3d";
	picture = "\RH_hk416\inv\hk416sdgleotech.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_HK416_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_HK416_Holo_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup556',_id,'DZE_Wep_HK416_GL_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK416C : DZE_Wep_HK416 {
	displayName = "$STR_DZ_WPN_HK416C_NAME";
	model = "\RH_hk416\RH_hk416s.p3d";
	picture = "\RH_hk416\inv\hk416s.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_hk416\Anim\hk416cqb_anim.rtm"};

	class Attachments {
		Attachment_CCO = "DZE_Wep_HK416C_CCO";
		Attachment_Holo = "DZE_Wep_HK416C_Holo";
		Attachment_M203 = "DZE_Wep_HK416C_GL";
		Attachment_ACOG = "DZE_Wep_HK416C_ACOG";
	};
};

//Grenade launcher

class DZE_Wep_HK416C_GL : DZE_Wep_HK416C {
	displayName = "$STR_DZ_WPN_HK416C_GL_NAME";
	model = "\RH_hk416\RH_hk416sgl.p3d";
	picture = "\RH_hk416\inv\hk416sgl.paa";

	HK416_M203;

	class Attachments {
		Attachment_CCO = "DZE_Wep_HK416C_GL_CCO";
		Attachment_Holo = "DZE_Wep_HK416C_GL_Holo";
		Attachment_ACOG = "DZE_Wep_HK416C_GL_ACOG";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_HK416C'] call player_removeAttachment";
		};
	};
};

//CCO

class DZE_Wep_HK416C_CCO : DZE_Wep_HK416C {
	displayName = "$STR_DZ_WPN_HK416C_CCO_NAME";
	model = "\RH_hk416\RH_hk416saim.p3d";
	picture = "\RH_hk416\inv\hk416saim.paa";

	class Attachments {
		Attachment_M203 = "DZE_Wep_HK416C_GL_CCO";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_HK416C'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_HK416C_GL_CCO : DZE_Wep_HK416C_GL {
	displayName = "$STR_DZ_WPN_HK416C_GL_CCO_NAME";
	model = "\RH_hk416\RH_hk416sglaim.p3d";
	picture = "\RH_hk416\inv\hk416sglaim.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_HK416C_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_HK416C_CCO'] call player_removeAttachment";
		};
	};
};

//Holo

class DZE_Wep_HK416C_Holo : DZE_Wep_HK416C {
	displayName = "$STR_DZ_WPN_HK416C_HOLO_NAME";
	model = "\RH_hk416\RH_hk416seotech.p3d";
	picture = "\RH_hk416\inv\hk416seotech.paa";

	class Attachments {
		Attachment_M203 = "DZE_Wep_HK416C_GL_Holo";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_HK416C'] call player_removeAttachment";
		};
	};
};

//Grenade launcher

class DZE_Wep_HK416C_GL_Holo : DZE_Wep_HK416C_GL {
	displayName = "$STR_DZ_WPN_HK416C_GL_HOLO_NAME";
	model = "\RH_hk416\RH_hk416sgleotech.p3d";
	picture = "\RH_hk416\inv\Hk416sgleotech.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_HK416C_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_HK416C_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK416C_ACOG : DZE_Wep_HK416C {
	displayName = "$STR_DZ_WPN_HK416C_ACOG_NAME";
	model = "\RH_hk416\RH_hk416sacog.p3d";
	picture = "\RH_hk416\inv\hk416sacog.paa";

	HK416C_ACOG;

	class Attachments {
		Attachment_M203 = "DZE_Wep_HK416C_GL_ACOG";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_HK416C'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_HK416C_GL_ACOG : DZE_Wep_HK416C_GL {
	displayName = "$STR_DZ_WPN_HK416C_GL_ACOG_NAME";
	model = "\RH_hk416\RH_hk416sglacog.p3d";
	picture = "\RH_hk416\inv\hk416sglacog.paa";

	HK416_M203;
	HK416C_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_HK416C_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_M203_RMVE";
			script = "; ['Attachment_M203',_id,'DZE_Wep_HK416C_ACOG'] call player_removeAttachment";
		};
	};
};

#undef HK416_M203
#undef HK416C_ACOG
