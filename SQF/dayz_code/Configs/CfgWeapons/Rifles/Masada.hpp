#define MasadaC_ACOG modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";\
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

class DZE_Wep_Masada : M4A1 {
	displayName = "$STR_DZ_WPN_Masada_NAME";
	model = "\RH_hk416\RH_mas.p3d";
	picture = "\RH_hk416\inv\mas.paa";
	handAnim[] = {"OFP2_ManSkeleton"};
	reloadMagazineSound[] = {"\RH_hk416\sound\ctar21_Reload.wss",0.056234,1,20};
	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		begin1[] = {"\RH_hk416\sound\acr.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.075;
		dispersion = 0.001;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_auto_primary_2outof10";
		recoilProne = "recoil_auto_primary_prone_2outof10";
		begin1[] = {"\RH_hk416\sound\acr.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.09;
		dispersion = 0.00175;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
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
		DZE_Item_Att_CCO = "DZE_Wep_Masada_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_Masada_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_Masada_ACOG";
		DZE_Item_Att_Sup556 = "DZE_Wep_Masada_SD";
	};
};

class DZE_Wep_Masada_SD : M4A1_AIM_SD_camo {
	displayName = "$STR_DZ_WPN_Masada_SD_NAME";
	model = "\RH_hk416\RH_massd.p3d";
	picture = "\RH_hk416\inv\massd.paa";

	handAnim[] = {"OFP2_ManSkeleton"};
	reloadMagazineSound[] = {"\RH_hk416\sound\Hk416_Reload.wss",0.056234,1,20};

	modes[] = {"Single","FullAuto"};
	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		begin1[] = {"\RH_hk416\sound\massd.wss",1.0,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.075;
		dispersion = 0.001;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_auto_primary_2outof10";
		recoilProne = "recoil_auto_primary_prone_2outof10";
		begin1[] = {"\RH_hk416\sound\massd.wss",1.0,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.09;
		dispersion = 0.00175;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
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
		DZE_Item_Att_CCO = "DZE_Wep_Masada_CCO_SD";
		DZE_Item_Att_Holo = "DZE_Wep_Masada_Holo_SD";
		DZE_Item_Att_ACOG = "DZE_Wep_Masada_ACOG_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_Masada'] call player_removeAttachment";
		};
	};
};

//CCO
class DZE_Wep_Masada_CCO : DZE_Wep_Masada {
	displayName = "$STR_DZ_WPN_Masada_CCO_NAME";
	model = "\RH_hk416\RH_masaim.p3d";
	picture = "\RH_hk416\inv\masaim.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_Masada_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_Masada'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Masada_CCO_SD : DZE_Wep_Masada_SD {
	displayName = "$STR_DZ_WPN_Masada_CCO_SD_NAME";
	model = "\RH_hk416\RH_massdaim.p3d";
	picture = "\RH_hk416\inv\massdaim.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_Masada_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_Masada_CCO'] call player_removeAttachment";
		};
	};
};

//Holo

class DZE_Wep_Masada_Holo : DZE_Wep_Masada {
	displayName = "$STR_DZ_WPN_Masada_HOLO_NAME";
	model = "\RH_hk416\RH_maseotech.p3d";
	picture = "\RH_hk416\inv\maseotech.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_Masada_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_Masada'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Masada_Holo_SD : DZE_Wep_Masada_SD {
	displayName = "$STR_DZ_WPN_Masada_HOLO_SD_NAME";
	model = "\RH_hk416\RH_massdeotech.p3d";
	picture = "\RH_hk416\inv\massdeotech.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_Masada_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_Masada_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Masada_ACOG : DZE_Wep_Masada {
	displayName = "$STR_DZ_WPN_Masada_ACOG_NAME";
	model = "\RH_hk416\RH_masacog.p3d";
	picture = "\RH_hk416\inv\masacog.paa";

	MasadaC_ACOG;

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_Masada_ACOG_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_Masada'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Masada_ACOG_SD : DZE_Wep_Masada_SD {
	displayName = "$STR_DZ_WPN_Masada_ACOG_SD_NAME";
	model = "\RH_hk416\RH_massdacog.p3d";
	picture = "\RH_hk416\inv\massdacog.paa";

	MasadaC_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_Masada_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_Masada_ACOG'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Masada_BL : DZE_Wep_Masada {
	displayName = "$STR_DZ_WPN_Masada_NAME";
	model = "\RH_hk416\RH_masb.p3d";
	picture = "\RH_hk416\inv\masb.paa";

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_Masada_BL_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_Masada_BL_Holo";
		DZE_Item_Att_ACOG = "DZE_Wep_Masada_BL_ACOG";
		DZE_Item_Att_Sup556 = "DZE_Wep_Masada_BL_SD";
	};
};

class DZE_Wep_Masada_BL_SD : DZE_Wep_Masada_SD {
	displayName = "$STR_DZ_WPN_Masada_SD_NAME";
	model = "\RH_hk416\RH_masbsd.p3d";
	picture = "\RH_hk416\inv\masbsd.paa";

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_Masada_BL_CCO_SD";
		DZE_Item_Att_Holo = "DZE_Wep_Masada_BL_Holo_SD";
		DZE_Item_Att_ACOG = "DZE_Wep_Masada_BL_ACOG_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_Masada_BL'] call player_removeAttachment";
		};
	};
};

//CCO
class DZE_Wep_Masada_BL_CCO : DZE_Wep_Masada_BL {
	displayName = "$STR_DZ_WPN_Masada_CCO_NAME";
	model = "\RH_hk416\RH_masbaim.p3d";
	picture = "\RH_hk416\inv\masbaim.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_Masada_BL_CCO_SD";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_Masada_BL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Masada_BL_CCO_SD : DZE_Wep_Masada_BL_SD {
	displayName = "$STR_DZ_WPN_Masada_CCO_SD_NAME";
	model = "\RH_hk416\RH_masbsdaim.p3d";
	picture = "\RH_hk416\inv\masbsdaim.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_Masada_BL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_Masada_BL_CCO'] call player_removeAttachment";
		};
	};
};

//Holo

class DZE_Wep_Masada_BL_Holo : DZE_Wep_Masada_BL {
	displayName = "$STR_DZ_WPN_Masada_HOLO_NAME";
	model = "\RH_hk416\RH_masbeotech.p3d";
	picture = "\RH_hk416\inv\masbeotech.paa";

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_Masada_BL_Holo_SD";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_Masada_BL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Masada_BL_Holo_SD : DZE_Wep_Masada_BL_SD {
	displayName = "$STR_DZ_WPN_Masada_HOLO_SD_NAME";
	model = "\RH_hk416\RH_masbsdeotech.p3d";
	picture = "\RH_hk416\inv\masbsdeotech.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_Masada_BL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_Masada_BL_Holo'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Masada_BL_ACOG : DZE_Wep_Masada_BL {
	displayName = "$STR_DZ_WPN_Masada_ACOG_NAME";
	model = "\RH_hk416\RH_masbacog.p3d";
	picture = "\RH_hk416\inv\masbacog.paa";

	MasadaC_ACOG;

	class Attachments {
		DZE_Item_Att_Sup556 = "DZE_Wep_Masada_BL_ACOG_SD";
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_Masada_BL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Masada_BL_ACOG_SD : DZE_Wep_Masada_BL_SD {
	displayName = "$STR_DZ_WPN_Masada_ACOG_SD_NAME";
	model = "\RH_hk416\RH_masbsdacog.p3d";
	picture = "\RH_hk416\inv\masbsdacog.paa";

	MasadaC_ACOG;

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_Masada_BL_SD'] call player_removeAttachment";
		};
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup556',_id,'DZE_Wep_Masada_BL_ACOG'] call player_removeAttachment";
		};
	};
};

#undef MasadaC_ACOG