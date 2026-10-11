class RPK_74;
class DZE_Wep_RPK74_Kobra : RPK_74 {
	displayName = "$STR_DZ_WPN_RPK74_KOBRA_NAME";
	model = "z\addons\dayz_communityweapons\rpk74\rpk74_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk74\data\w_rpk74_kobra_ca.paa";

	magazines[] =
	{
		75Rnd_545x39_RPK,
		60Rnd_545x39_AK_Taped,
		30Rnd_545x39_AK
	};

	modes[] = {FullAuto,Single};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['DZE_Item_Att_Kobra',_id,'DZE_Wep_RPK74'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_RPK74 : DZE_Wep_RPK74_Kobra {
	displayName = "$STR_DZ_WPN_RPK74_NAME";
	model = "z\addons\dayz_communityweapons\rpk74\rpk74.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk74\data\w_rpk74_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	//iron sight zeroing
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	//iron sight zeroing end

	class Attachments {
		DZE_Item_Att_Kobra = "DZE_Wep_RPK74_Kobra";
		DZE_Item_Att_PSO1 = "DZE_Wep_RPK74_PSO1";
	};

	class ItemActions {};
};

class DZE_Wep_RPK74_PSO1 : DZE_Wep_RPK74_Kobra {
	displayName = "$STR_DZ_WPN_RPK74_PSO1_NAME";
	model = "z\addons\dayz_communityweapons\rpk74\rpk74_pso.p3d";
	picture = "\z\addons\dayz_communityweapons\rpk74\data\w_rpk74_pso_ca.paa";
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

	class ItemActions {
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['DZE_Item_Att_PSO1',_id,'DZE_Wep_RPK74'] call player_removeAttachment";
		};
	};
};