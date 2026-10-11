class DZE_Wep_VAL: DZE_Wep_Groza9 {
	displayname = "$STR_DZ_WPN_ASVAL_NAME";
	descriptionShort = "$STR_DZ_WPN_ASVAL_DESC";
	model = "\RH_aks\RH_asval.p3d";
	picture = "\RH_aks\inv\asval.paa";
	magazines[] = {"20Rnd_9x39_SP5_VSS","10Rnd_9x39_SP5_VSS"};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;

	modes[] = {"Single","Full"};

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_prone_4outof10";
		dispersion = 0.0018;
		soundContinuous = 0;
		reloadTime = 0.1;
		begin1[] = {"\dayz_epoch_c\sounds\weapons\vss_shot",1.0,1,50};
		begin2[] = {"\dayz_epoch_c\sounds\weapons\vss_shot",1.0,1,50};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 500;
		maxRangeProbab = 0.05;
	};
	class Full: Mode_FullAuto {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		dispersion = 0.0018;
		soundContinuous = 0;
		reloadTime = 0.08;
		begin1[] = {"\dayz_epoch_c\sounds\weapons\vss_shot",1.0,1,50};
		begin2[] = {"\dayz_epoch_c\sounds\weapons\vss_shot",1.0,1,50};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 60;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.05;
	};

	reloadMagazineSound[] = {"\RH_aks\sound\val_reload.wss",0.056234,1,20};

	class Attachments {
		Attachment_Kobra = "DZE_Wep_VAL_Kobra";
		Attachment_PSO1 = "DZE_Wep_VAL_PSO1";
	};
};

class DZE_Wep_VAL_Kobra: DZE_Wep_VAL {
	displayName = "$STR_DZ_WPN_ASVAL_Kobra_NAME";
	model = "\RH_aks\RH_asvalk.p3d";
	picture = "\RH_aks\inv\asvalk.paa";
	distanceZoomMin = 200;
	distanceZoomMax = 200;

	class Attachments {};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['Attachment_Kobra',_id,'DZE_Wep_VAL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_VAL_PSO1: DZE_Wep_VAL {
	displayName = "$STR_DZ_WPN_ASVAL_PSO1_NAME";
	model = "\RH_aks\RH_asvalsp.p3d";
	picture = "\RH_aks\inv\asvalsp.paa";
	opticsFlare = "true";
	modelOptics = "\ca\weapons\optika_snpiere";
	optics = true;
	opticsDisablePeripherialVision = true;
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;
	distanceZoomMin = 110;
	distanceZoomMax = 110;
	class Attachments {};

	class ItemActions {
		class RemovePSO1 {
			text = "$STR_DZ_ATT_PSO1_RMVE";
			script = "; ['Attachment_PSO1',_id,'DZE_Wep_VAL'] call player_removeAttachment";
		};
	};
};