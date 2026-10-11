//TODO: configure recoil, rate of fire etc (different from akm)

class DZE_Wep_RPK : AK_47_M {
	displayName = "$STR_DZ_WPN_RPK_NAME";
	descriptionShort = "$STR_DZ_WPN_RPK_DESC";
	model = "z\addons\dayz_communityweapons\rpk\rpk.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk\data\w_rpk_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	magazines[] =
	{
		75Rnd_762x39_RPK,
		30Rnd_762x39_AK47,
		30Rnd_762x39_SA58,
		60Rnd_762x39_AK47_Taped
	};

	modes[] = {FullAuto,Single};

	//iron sight zeroing
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end

	class Attachments {
		Attachment_Kobra = DZE_Wep_RPK_Kobra;
		Attachment_PSO1 = DZE_Wep_RPK_PSO1;
	};

	class ItemActions {};
};

class DZE_Wep_RPK_Kobra : DZE_Wep_RPK {
	displayName = "$STR_DZ_WPN_RPK_KOBRA_NAME";
	model = "z\addons\dayz_communityweapons\rpk\rpk_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk\data\w_rpk_kobra_ca.paa";
	weaponInfoType = "RscWeaponEmpty";

	//kobra zeroing
	discreteDistance[] = {};
	discreteDistanceInitIndex = 0;
	distanceZoomMin = 200;
	distanceZoomMax = 200;
	//kobra zeroing end

	class Attachments {};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['Attachment_Kobra',_id,'DZE_Wep_RPK'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_RPK_PSO1 : DZE_Wep_RPK_Kobra {
	displayName = "$STR_DZ_WPN_RPK_PSO1_NAME";
	model = "z\addons\dayz_communityweapons\rpk\rpk_pso.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk\data\w_rpk_pso_ca.paa";
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
			opticsZoomInit = 0.0623;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			visionMode[] = {"Normal"};
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur3"};
		};

		class Ironsights {
			memoryPointCamera = "eye";
			cameraDir = "";
			opticsID = 2;
			useModelOptics = false;
			opticsFlare = false;
			opticsDisablePeripherialVision = false;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			visionMode[] = {};
			opticsPPEffects[] = {};
		};
	};
	//PSO-1 end

	class Attachments {};

	class ItemActions {
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['Attachment_PSO1',_id,'DZE_Wep_RPK'] call player_removeAttachment";
		};
	};
};