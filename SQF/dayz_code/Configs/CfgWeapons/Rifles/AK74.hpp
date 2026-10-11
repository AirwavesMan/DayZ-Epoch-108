/* Kobra */

class DZE_Wep_AK74_Kobra : AK_74 {
	displayName = "$STR_DZ_WPN_AK74_KOBRA_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_kobra_ca.paa";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {
		DZE_Item_Att_GP25 = "DZE_Wep_AK74_GL_Kobra";
		DZE_Item_Att_Sup545 = "DZE_Wep_AK74_Kobra_SD";
	};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['DZE_Item_Att_Kobra',_id,'DZE_Wep_AK74'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_AK74_Kobra_SD : AKS_74_UN_kobra {
	displayName = "$STR_DZ_WPN_AK74_KOBRA_SD_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74_kobra_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_kobra_sd_ca.paa";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AKSD,
		60Rnd_545x39_AKSD_Taped
	};

	class Attachments {
		DZE_Item_Att_GP25 = "DZE_Wep_AK74_GL_Kobra_SD";
	};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['DZE_Item_Att_Kobra',_id,'DZE_Wep_AK74_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup545',_id,'DZE_Wep_AK74_Kobra'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_AK74_GL_Kobra : DZE_Wep_AK74_Kobra {
	displayName = "$STR_DZ_WPN_AK74_GL_KOBRA_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_kobra_ca.paa";

	//GP-25
	muzzles[] = {this, GP25Muzzle};
	handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};

	class Attachments {
		DZE_Item_Att_Sup545 = "DZE_Wep_AK74_GL_Kobra_SD";
	};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['DZE_Item_Att_Kobra',_id,'DZE_Wep_AK74_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_GP25_RMVE";
			script = "; ['DZE_Item_Att_GP25',_id,'DZE_Wep_AK74_Kobra'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_AK74_GL_Kobra_SD : DZE_Wep_AK74_Kobra_SD {
	displayName = "$STR_DZ_WPN_AK74_GL_KOBRA_SD_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl_kobra_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_kobra_sd_ca.paa";

	//GP-25
	muzzles[] = {this, GP25Muzzle};
	handAnim[]={"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};

	class Attachments {};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['DZE_Item_Att_Kobra',_id,'DZE_Wep_AK74_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_GP25_RMVE";
			script = "; ['DZE_Item_Att_GP25',_id,'DZE_Wep_AK74_Kobra_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup545',_id,'DZE_Wep_AK74_GL_Kobra'] call player_removeAttachment";
		};
	};
};

/* Iron sight */

class DZE_Wep_AK74 : DZE_Wep_AK74_Kobra {
	displayName = "$STR_DZ_WPN_AK74_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	//iron sight zeroing
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end

	class Attachments {
		DZE_Item_Att_Kobra = "DZE_Wep_AK74_Kobra";
		DZE_Item_Att_PSO1 = "DZE_Wep_AK74_PSO1";
		DZE_Item_Att_GP25 = "DZE_Wep_AK74_GL";
		DZE_Item_Att_Sup545 = "DZE_Wep_AK74_SD";
	};

	class ItemActions {};
};

class DZE_Wep_AK74_SD : DZE_Wep_AK74_Kobra_SD {
	displayName = "$STR_DZ_WPN_AK74_SD_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_sd_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	//iron sight zeroing
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end

	class Attachments {
		DZE_Item_Att_Kobra = "DZE_Wep_AK74_Kobra_SD";
		DZE_Item_Att_PSO1 = "DZE_Wep_AK74_PSO1_SD";
		DZE_Item_Att_GP25 = "DZE_Wep_AK74_GL_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup545',_id,'DZE_Wep_AK74'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_AK74_GL : DZE_Wep_AK74_GL_Kobra {
	displayName = "$STR_DZ_WPN_AK74_GL_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	//iron sight zeroing
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end

	class Attachments {
		DZE_Item_Att_Kobra = "DZE_Wep_AK74_GL_Kobra";
		DZE_Item_Att_PSO1 = "DZE_Wep_AK74_GL_PSO1";
		DZE_Item_Att_Sup545 = "DZE_Wep_AK74_GL_SD";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_GP25_RMVE";
			script = "; ['DZE_Item_Att_GP25',_id,'DZE_Wep_AK74'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_AK74_GL_SD : DZE_Wep_AK74_GL_Kobra_SD {
	displayName = "$STR_DZ_WPN_AK74_GL_SD_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl_SD.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_sd_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	//iron sight zeroing
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end

	class Attachments {
		DZE_Item_Att_Kobra = "DZE_Wep_AK74_GL_Kobra_SD";
		DZE_Item_Att_PSO1 = "DZE_Wep_AK74_GL_PSO1_SD";
	};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_GP25_RMVE";
			script = "; ['DZE_Item_Att_GP25',_id,'DZE_Wep_AK74_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup545',_id,'DZE_Wep_AK74_GL'] call player_removeAttachment";
		};
	};
};

/* PSO */

class DZE_Wep_AK74_PSO1 : DZE_Wep_AK74_Kobra {
	displayName = "$STR_DZ_WPN_AK74_PSO1_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74_pso.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_pso_ca.paa";
	modelOptics = "\ca\weapons\optika_snpiere";

	//PSO-1
	optics = true;
	opticsDisablePeripherialVision = true;
	opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
	opticsZoomMin=0.0623; opticsZoomMax=0.0623;
	distanceZoomMin= 200; distanceZoomMax= 200;

	class OpticsModes {
		class Scope {
			memoryPointCamera = "opticView";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit= 0.0623;
			distanceZoomMin= 200;
			distanceZoomMax= 200;
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
		};

		class Ironsights {
			memoryPointCamera = "eye";
			cameraDir = "";
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin= 100;
			distanceZoomMax= 100;
			visionMode[] = {};
			opticsPPEffects[]={};
		};
	};
	//PSO-1 end

	class Attachments {
		DZE_Item_Att_GP25 = "DZE_Wep_AK74_GL_PSO1";
		DZE_Item_Att_Sup545 = "DZE_Wep_AK74_PSO1_SD";
	};

	class ItemActions {
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['DZE_Item_Att_PSO1',_id,'DZE_Wep_AK74'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_AK74_PSO1_SD : DZE_Wep_AK74_Kobra_SD {
	displayName = "$STR_DZ_WPN_AK74_PSO1_SD_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74_pso_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_pso_sd_ca.paa";
	modelOptics = "\ca\weapons\optika_snpiere";

	//PSO-1
	optics = true;
	opticsDisablePeripherialVision = true;
	opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
	opticsZoomMin=0.0623; opticsZoomMax=0.0623;
	distanceZoomMin= 200; distanceZoomMax= 200;

	class OpticsModes {
		class Scope {
			memoryPointCamera = "opticView";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit= 0.0623;
			distanceZoomMin= 200;
			distanceZoomMax= 200;
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
		};

		class Ironsights {
			memoryPointCamera = "eye";
			cameraDir = "";
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin= 100;
			distanceZoomMax= 100;
			visionMode[] = {};
			opticsPPEffects[]={};
		};
	};
	//PSO-1 end

	class Attachments {
		DZE_Item_Att_GP25 = "DZE_Wep_AK74_GL_PSO1_SD";
	};

	class ItemActions {
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['DZE_Item_Att_PSO1',_id,'DZE_Wep_AK74_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup545',_id,'DZE_Wep_AK74_PSO1'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_AK74_GL_PSO1 : DZE_Wep_AK74_GL_Kobra {
	displayName = "$STR_DZ_WPN_AK74_GL_PSO1_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl_pso.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_pso_ca.paa";
	modelOptics = "\ca\weapons\optika_snpiere";

	//PSO-1
	optics = true;
	opticsDisablePeripherialVision = true;
	opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
	opticsZoomMin=0.0623; opticsZoomMax=0.0623;
	distanceZoomMin= 200; distanceZoomMax= 200;

	class OpticsModes {
		class Scope {
			memoryPointCamera = "opticView";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit= 0.0623;
			distanceZoomMin= 200;
			distanceZoomMax= 200;
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
		};

		class Ironsights {
			memoryPointCamera = "eye";
			cameraDir = "";
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin= 100;
			distanceZoomMax= 100;
			visionMode[] = {};
			opticsPPEffects[]={};
		};
	};
	//PSO-1 end

	class Attachments {
		DZE_Item_Att_Sup545 = "DZE_Wep_AK74_GL_PSO1_SD";
	};

	class ItemActions {
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['DZE_Item_Att_PSO1',_id,'DZE_Wep_AK74_GL'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_GP25_RMVE";
			script = "; ['DZE_Item_Att_GP25',_id,'DZE_Wep_AK74_PSO1'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_AK74_GL_PSO1_SD : DZE_Wep_AK74_GL_Kobra_SD {
	displayName = "$STR_DZ_WPN_AK74_GL_PSO1_SD_NAME";
	model = "z\addons\dayz_communityweapons\ak74\ak74_gl_pso_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\ak74\data\w_ak74_gl_pso_sd_ca.paa";
	modelOptics = "\ca\weapons\optika_snpiere";

	//PSO-1
	optics = true;
	opticsDisablePeripherialVision = true;
	opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
	opticsZoomMin=0.0623; opticsZoomMax=0.0623;
	distanceZoomMin= 200; distanceZoomMax= 200;

	class OpticsModes {
		class Scope {
			memoryPointCamera = "opticView";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit= 0.0623;
			distanceZoomMin= 200;
			distanceZoomMax= 200;
			visionMode[] = {"Normal"};
			opticsPPEffects[]={"OpticsCHAbera3","OpticsBlur3"};
		};

		class Ironsights {
			memoryPointCamera = "eye";
			cameraDir = "";
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin=0.25;
			opticsZoomMax=1.1;
			opticsZoomInit=0.5;
			distanceZoomMin= 100;
			distanceZoomMax= 100;
			visionMode[] = {};
			opticsPPEffects[]={};
		};
	};
	//PSO-1 end

	class Attachments {};

	class ItemActions {
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['DZE_Item_Att_PSO1',_id,'DZE_Wep_AK74_GL_SD'] call player_removeAttachment";
		};
		class RemoveGL {
			text = "$STR_DZ_ATT_GP25_RMVE";
			script = "; ['DZE_Item_Att_GP25',_id,'DZE_Wep_AK74_PSO1_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup545',_id,'DZE_Wep_AK74_GL_PSO1'] call player_removeAttachment";
		};
	};
};

class AKS_74;
class DZE_Wep_AKS74: AKS_74 {
	displayName = "$STR_DZ_WPN_AKS74_NAME";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};
	class Attachments {
		DZE_Item_Att_Kobra = "DZE_Wep_AKS74_Kobra";
		DZE_Item_Att_PSO1 = "DZE_Wep_AKS74_PSO1";
		DZE_Item_Att_NSPU = "DZE_Wep_AKS74_NSPU";
		DZE_Item_Att_Tws = "DZE_Wep_AKS74_TWS";
	};

	class ItemActions {};
};

class AKS_74_kobra;
class DZE_Wep_AKS74_Kobra: AKS_74_kobra {
	displayName = "$STR_DZ_WPN_AKS74_KOBRA_NAME";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['DZE_Item_Att_Kobra',_id,'DZE_Wep_AKS74'] call player_removeAttachment";
		};
	};
};

class AKS_74_pso;
class DZE_Wep_AKS74_PSO1: AKS_74_pso {
	displayName = "$STR_DZ_WPN_AKS74_PSO1_NAME";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {};

	class ItemActions {
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['DZE_Item_Att_PSO1',_id,'DZE_Wep_AKS74'] call player_removeAttachment";
		};
	};
};

class AKS_74_NSPU;
class DZE_Wep_AKS74_NSPU: AKS_74_NSPU {
	displayName = "$STR_DZ_WPN_AKS74_NSPU_NAME";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {};

	class ItemActions {
		class RemoveNSPU {
			text = "$STR_DZ_ATT_NSPU_RMVE";
			script = "; ['DZE_Item_Att_NSPU',_id,'DZE_Wep_AKS74'] call player_removeAttachment";
		};
	};
};

class AKS_74_GOSHAWK;
class DZE_Wep_AKS74_TWS: AKS_74_GOSHAWK {
	displayName = "$STR_DZ_WPN_AKS74_TWS_NAME";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {};

	class ItemActions {
		class RemoveNSPU {
			text = "$STR_ATTACHMENT_RMVE_TWS";
			script = "; ['DZE_Item_Att_Tws',_id,'DZE_Wep_AKS74'] call player_removeAttachment";
		};
	};
};