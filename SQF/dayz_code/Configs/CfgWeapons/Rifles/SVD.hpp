class SVD: Rifle {
	class OpticsModes {
		class Scope;
		class Ironsights;
	};
};
class DZE_Wep_SVD_PSO1 : SVD {
	displayName = "$STR_DZ_WPN_SVD_PSO1_NAME";
	model = "z\addons\dayz_communityweapons\SVD\SVD_PSO.p3d";
	picture = "\ca\weapons\data\equip\w_svd_ca.paa";

	begin1[] = {"\dayz_epoch_c\sounds\weapons\svd_shot",20,1,2000};
	soundBegin[] = {"begin1",1};

	magazines[] = {10Rnd_762x54_SVD};

	class OpticsModes : OpticsModes {
		class Scope : Scope {};
		class Ironsights : Ironsights {};
	};

	class Attachments {
		Attachment_Ghillie = "DZE_Wep_SVD_PSO1_Gh";
		Attachment_Ghillie_Desert = "DZE_Wep_SVD_PSO1_Gh_DES";
	};

	class ItemActions {
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['Attachment_PSO1',_id,'DZE_Wep_SVD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SVD_PSO1_Gh : DZE_Wep_SVD_PSO1 {
	displayName = "$STR_DZ_WPN_SVD_PSO1_GH_NAME";
	model = "z\addons\dayz_communityweapons\SVD\SVD_PSO_Ghilli.p3d";
	picture = "\z\addons\dayz_communityweapons\SVD\data\w_SVD_PSO1_Gh_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveGhillie {
			text = "$STR_DZ_ATT_GHIL_RMVE";
			script = "; ['Attachment_Ghillie',_id,'DZE_Wep_SVD_PSO1'] call player_removeAttachment";
		};
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['Attachment_PSO1',_id,'DZE_Wep_SVD_Gh'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SVD : DZE_Wep_SVD_PSO1 {
	displayName = "$STR_DZ_WPN_SVD_NAME";
	model = "z\addons\dayz_communityweapons\SVD\SVD.p3d";
	picture = "\z\addons\dayz_communityweapons\SVD\data\w_SVD_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	class OpticsModes : OpticsModes {
		class Ironsights : Ironsights {
			opticsID = 1;
			discreteDistanceInitIndex = 2;
		};
	};

	class Attachments {
		Attachment_Ghillie = "DZE_Wep_SVD_Gh";
		Attachment_PSO1 = "DZE_Wep_SVD_PSO1";
		Attachment_NSPU = "DZE_Wep_SVD_NSPU";
	};

	class ItemActions {};
};

class DZE_Wep_SVD_Gh : DZE_Wep_SVD {
	displayName = "$STR_DZ_WPN_SVD_GH_NAME";
	model = "z\addons\dayz_communityweapons\SVD\SVD_Ghilli.p3d";
	picture = "\z\addons\dayz_communityweapons\SVD\data\w_SVD_Gh_ca.paa";

	class Attachments {
		Attachment_PSO1 = "DZE_Wep_SVD_PSO1_Gh";
	};

	class ItemActions {
		class RemoveGhillie {
			text = "$STR_DZ_ATT_GHIL_RMVE";
			script = "; ['Attachment_Ghillie',_id,'DZE_Wep_SVD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SVD_PSO1_Gh_DES : DZE_Wep_SVD_PSO1_Gh {
	displayName = "$STR_DZ_WPN_SVD_PSO1_DES_NAME";
	model = "\CorePatch\CorePatch_CCP_63107\models\SVD_des_EP1";
	picture = "\CA\weapons_E\Data\icons\svd_desert_CA.paa";

	class ItemActions {
		class RemoveGhillie {
			text = "$STR_DZ_ATT_GHIL_RMVE";
			script = "; ['Attachment_Ghillie_Desert',_id,'DZE_Wep_SVD_PSO1'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SVD_NSPU : DZE_Wep_SVD_PSO1 {
	displayname = "$STR_EP1_DN_SVD_NSPU_EP1";
	model = "\ca\weapons_E\SVD\SVD_nspu.p3d";
	picture = "\CA\weapons_E\Data\icons\w_svd_nspu_CA.paa";
	modelOptics = "\Ca\weapons_E\NV_nspu_optic.p3d";
	class OpticsModes {
		class NSPU {
			memoryPointCamera = "opticView";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = 1;
			opticsZoomMin = 0.07082153;
			opticsZoomMax = 0.07082153;
			opticsZoomInit = 0.07082153;
			opticsPPEffects[] = {};
			opticsDisablePeripherialVision = 1;
			visionMode[] = {"NVG"};
			opticsFlare = 1;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
		};
		class Ironsights: NSPU {
			memoryPointCamera = "eye";
			opticsID = 2;
			useModelOptics = 0;
			opticsFlare = 0;
			opticsDisablePeripherialVision = 0;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			visionMode[] = {};
		};
	};

	class ItemActions {
		class RemoveNSPU {
			text = "$STR_DZ_ATT_NSPU_RMVE";
			script = "; ['Attachment_NSPU',_id,'DZE_Wep_SVD'] call player_removeAttachment";
		};
	};

	class Attachments {};
};

class DZE_Wep_SVD_Gold : DZE_Wep_SVD_PSO1 {
	displayname = "$STR_DZ_WPN_SVD_GOLD_NAME";
	model = "\RH_aks\RH_svdg.p3d";
	picture = "\RH_aks\inv\svdg.paa";

	class OpticsModes {
		class Scope {
			cameraDir = "";
			memoryPointCamera = "opticView";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
			discreteDistanceInitIndex = 2;
			distanceZoomMax = 300;
			distanceZoomMin = 300;
			opticsDisablePeripherialVision = 1;
			opticsFlare = 1;
			opticsID = 1;
			opticsPPEffects[] = {"OpticsCHAbera3", "OpticsBlur3"};
			opticsZoomInit = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomMin = 0.0623;
			useModelOptics = 1;
			visionMode[] = {"Normal"};
		};
	};

	class ItemActions {};
	class Attachments {};
};