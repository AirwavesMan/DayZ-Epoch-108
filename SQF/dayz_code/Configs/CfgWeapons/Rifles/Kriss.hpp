class DZE_Wep_Kriss: DZE_Wep_MP5 {
	displayName = "$STR_DZ_WPN_KRISS_NAME";
	descriptionShort = "$STR_DZ_WPN_KRISS_DESC";
	model = "\RH_smg\RH_kriss.p3d";
	picture = "\RH_smg\inv\kriss.paa";
	magazines[] = {"33Rnd_45ACP_KRISS"};
	handAnim[] = {"OFP2_ManSkeleton","\RH_smg\Anim\NORRN_RH_Kris1.rtm"};
	reloadMagazineSound[] = {"\RH_smg\Sound\kriss_reload.wss",0.056234,1,25};
	modes[] = {"Single","FullAuto"};

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_1outof10";
		begin1[] = {"\RH_smg\sound\kriss.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.07;
		dispersion = 0.003;
		minRange = 2;
		minRangeProbab = 0.25;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};

	delete Burst;

	class FullAuto: Mode_FullAuto {
		recoil = "recoil_auto_primary_2outof10";
		recoilProne = "recoil_auto_primary_prone_1outof10";
		begin1[] = {"\RH_smg\sound\kriss.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.1;
		ffCount = 1;
		dispersion = 0.003;
		minRange = 0;
		minRangeProbab = 0.2;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};

	class FlashLight {
		position = "flash dir";
		direction = "flash";
		color[] = {0.9,0.9,0.7,0.9};
		ambient[] = {0.1,0.1,0.1,1.0};
		angle = 30;
		scale[] = {1,1,0.5};
		brightness = 0.1;
	};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_Kriss_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_Kriss_Holo";
		DZE_Item_Att_Sup45 = "DZE_Wep_Kriss_SD";
	};
};

class DZE_Wep_Kriss_CCO: DZE_Wep_Kriss {
	displayname = "$STR_DZ_WPN_KRISS_CCO_NAME";
	model = "\RH_smg\RH_krissaim.p3d";
	picture = "\RH_smg\inv\krissaim.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;

	class Attachments {
		DZE_Item_Att_Sup45 = "DZE_Wep_Kriss_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_Kriss'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Kriss_Holo: DZE_Wep_Kriss {
	displayname = "$STR_DZ_WPN_KRISS_HOLO_NAME";
	model = "\RH_smg\RH_krisseot.p3d";
	picture = "\RH_smg\inv\krisseot.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;

	class Attachments {
		DZE_Item_Att_Sup45 = "DZE_Wep_Kriss_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_Kriss'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Kriss_SD: DZE_Wep_MP5_SD {
	displayName = "$STR_DZ_WPN_KRISS_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_KRISS_SD_DESC";
	model = "\RH_smg\RH_krisssd.p3d";
	picture = "\RH_smg\inv\krisssd.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_smg\Anim\NORRN_RH_Kris1.rtm"};
	reloadMagazineSound[] = {"\RH_smg\Sound\kriss_reload.wss",0.056234,1,25};
	magazines[] = {"33Rnd_45ACP_KRISSSD"};
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;
	modes[] = {"Single","FullAuto"};

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_1outof10";
		begin1[] = {"\RH_smg\sound\umpsd.wss",1.778279,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.07;
		dispersion = 0.003;
		minRange = 2;
		minRangeProbab = 0.25;
		midRange = 40;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};

	delete Burst;

	class FullAuto: Mode_FullAuto {
		recoil = "recoil_auto_primary_2outof10";
		recoilProne = "recoil_auto_primary_prone_1outof10";
		begin1[] = {"\RH_smg\sound\umpsd.wss",1.778279,1,50};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.1;
		ffCount = 1;
		dispersion = 0.003;
		minRange = 0;
		minRangeProbab = 0.2;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.05;
	};

	class FlashLight {
		position = "flash dir";
		direction = "flash";
		color[] = {0.9,0.9,0.7,0.9};
		ambient[] = {0.1,0.1,0.1,1.0};
		angle = 30;
		scale[] = {1,1,0.5};
		brightness = 0.1;
	};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_Kriss_CCO_SD";
		DZE_Item_Att_Holo = "DZE_Wep_Kriss_Holo_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup45',_id,'DZE_Wep_Kriss'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Kriss_CCO_SD: DZE_Wep_Kriss_SD {
	displayname = "$STR_DZ_WPN_KRISS_CCO_SD_NAME";
	model = "\RH_smg\RH_krisssdaim.p3d";
	picture = "\RH_smg\inv\krisssdaim.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_Kriss_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup45',_id,'DZE_Wep_Kriss_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Kriss_Holo_SD: DZE_Wep_Kriss_SD {
	displayname = "$STR_DZ_WPN_KRISS_HOLO_SD_NAME";
	model = "\RH_smg\RH_krisssdeot.p3d";
	picture = "\RH_smg\inv\krisssdeot.paa";
	opticsDisablePeripherialVision = 1;
	distanceZoomMin = 100;
	distanceZoomMax = 100;

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_Kriss_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup45',_id,'DZE_Wep_Kriss_Holo'] call player_removeAttachment";
		};
	};
};