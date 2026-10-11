//Groza-9
class DZE_Wep_Groza9: DZE_Wep_AKM {
	scope = 2;
	displayName = "$STR_DZ_WPN_Groza9_NAME";
	descriptionShort = "$STR_DZ_WPN_Groza9_DESC";
	model = "\RH_aks\RH_oc14.p3d";
	picture = "\RH_aks\inv\oc14.paa";
	reloadMagazineSound[] = {"\RH_aks\sound\oc14_reload.wss",0.056234,1,20};
	modes[] = {"Single","FullAuto"};
	magazines[] = {"20Rnd_9x39_Groza9"};
	distanceZoomMin = 110;
	distanceZoomMax = 110;
	handAnim[] = {"OFP2_ManSkeleton","\RH_aks\RH_oc14.rtm"};
	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		begin1[] = {"\RH_aks\sound\oc14.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.085;
		dispersion = 0.0025;
		minRange = 1;
		minRangeProbab = 0.6;
		midRange = 200;
		midRangeProbab = 0.8;
		maxRange = 300;
		maxRangeProbab = 0.1;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_single_primary_2outof10";
		recoilProne = "recoil_single_primary_prone_2outof10";
		begin1[] = {"\RH_aks\sound\oc14.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.08;
		ffCount = 30;
		dispersion = 0.0025;
		minRange = 0.1;
		minRangeProbab = 0.9;
		midRange = 60;
		midRangeProbab = 0.8;
		maxRange = 100;
		maxRangeProbab = 0.3;
	};

	class Attachments {
		DZE_Item_Att_GP25 = "DZE_Wep_Groza9_GL";
		DZE_Item_Att_Sup939 = "DZE_Wep_Groza9_SD";
	};
};

class DZE_Wep_Groza9_Sniper: DZE_Wep_Groza9 {
	displayName = "$STR_DZ_WPN_Groza9_SNIPER_NAME";
	model = "\RH_aks\RH_oc14sp.p3d";
	picture = "\RH_aks\inv\oc14sp.paa";
	modelOptics = "\RH_m14\fnc_10x_round_mildot";
	opticsFlare = "true";
	opticsDisablePeripherialVision = "true";
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;
	distanceZoomMin = 182;
	distanceZoomMax = 182;

	class Single: Single {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 800;
		maxRangeProbab = 0.05;
	};
	class FullAuto: FullAuto {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 800;
		maxRangeProbab = 0.05;
	};

	class Attachments {};
};

class DZE_Wep_Groza9_GL: DZE_Wep_Groza9 {
	displayName = "$STR_DZ_WPN_Groza9_GL_NAME";
	model = "\RH_aks\RH_oc14gl.p3d";
	picture = "\RH_aks\inv\oc14gl.paa";
	handAnim[] = {"OFP2_ManSkeleton","\CA\weapons\Data\Anim\Bizon.rtm"};
	muzzles[] = {this, GP25Muzzle};

	class Attachments {};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_GP25_RMVE";
			script = "; ['DZE_Item_Att_GP25',_id,'DZE_Wep_Groza9'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Groza9_GL_Sniper: DZE_Wep_Groza9_Sniper {
	displayName = "$STR_DZ_WPN_Groza9_GL_SNIPER_NAME";
	model = "\RH_aks\RH_oc14glsp.p3d";
	picture = "\RH_aks\inv\oc14glsp.paa";
	muzzles[] = {this, GP25Muzzle};
};

class DZE_Wep_Groza9_SD: DZE_Wep_Groza9 {
	displayName = "$STR_DZ_WPN_Groza9_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_Groza9SD_DESC";
	model = "\RH_aks\RH_oc14sd.p3d";
	picture = "\RH_aks\inv\oc14sd.paa";
	fireLightDuration = 0;
	fireLightIntensity = 0;
	distanceZoomMin = 110;
	distanceZoomMax = 110;
	magazines[] = {"20Rnd_9x39_Groza9SD"};
	handAnim[] = {"OFP2_ManSkeleton","\CA\weapons\Data\Anim\Bizon.rtm"};
	modes[] = {"Single","FullAuto"};
	class Single: Single {
		begin1[] = {"\RH_aks\sound\oc14sd.wss",0.562341,1,150};
		soundBegin[] = {"begin1",1};
	};
	class FullAuto: FullAuto {
		begin1[] = {"\RH_aks\sound\oc14sd.wss",0.562341,1,150};
		soundBegin[] = {"begin1",1};
	};

	class Attachments {};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup939',_id,'DZE_Wep_Groza9'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Groza9_Sniper_SD: DZE_Wep_Groza9_SD {
	displayName = "$STR_DZ_WPN_Groza9_SNIPER_SD_NAME";
	model = "\RH_aks\RH_oc14sdsp.p3d";
	picture = "\RH_aks\inv\oc14sdsp.paa";
	modelOptics = "\RH_m14\fnc_10x_round_mildot";
	opticsFlare = "true";
	opticsDisablePeripherialVision = "true";
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;
	distanceZoomMin = 182;
	distanceZoomMax = 182;

	class Single: Single {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 800;
		maxRangeProbab = 0.05;
	};
	class FullAuto: FullAuto {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 800;
		maxRangeProbab = 0.05;
	};

	class ItemActions {};
};

//Groza-1
class DZE_Wep_Groza1: DZE_Wep_AKM {
	scope = 2;
	displayName = "$STR_DZ_WPN_Groza1_NAME";
	descriptionShort = "$STR_DZ_WPN_Groza1_DESC";
	model = "\RH_aks\RH_gr1.p3d";
	picture = "\RH_aks\inv\gr1.paa";
	reloadMagazineSound[] = {"\RH_aks\sound\oc14_reload.wss",0.056234,1,20};
	handAnim[] = {"OFP2_ManSkeleton","\CA\weapons\Data\Anim\Bizon.rtm"};
	modes[] = {"Single","FullAuto"};
	magazines[] = {"30Rnd_762x39_Groza1"};
	distanceZoomMin = 322;
	distanceZoomMax = 322;

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\RH_aks\Sound\gr1.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.08;
		dispersion = 0.0027;
		minRange = 2;
		minRangeProbab = 0.6;
		midRange = 250;
		midRangeProbab = 0.8;
		maxRange = 400;
		maxRangeProbab = 0.1;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\RH_aks\Sound\gr1.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.08;
		ffCount = 30;
		dispersion = 0.0027;
		minRange = 0.1;
		minRangeProbab = 0.9;
		midRange = 60;
		midRangeProbab = 0.8;
		maxRange = 100;
		maxRangeProbab = 0.5;
	};

	class Attachments {
		DZE_Item_Att_Sup762 = "DZE_Wep_Groza1_SD";
	};
};

class DZE_Wep_Groza1_Sniper: DZE_Wep_Groza1 {
	displayName = "$STR_DZ_WPN_Groza1_SNIPER_NAME";
	model = "\RH_aks\RH_gr1sp.p3d";
	picture = "\RH_aks\inv\gr1sp.paa";
	modelOptics = "\RH_m14\fnc_10x_round_mildot";
	opticsFlare = "true";
	opticsDisablePeripherialVision = "true";
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;
	distanceZoomMin = 228;
	distanceZoomMax = 228;

	class Single: Single {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 800;
		maxRangeProbab = 0.05;
	};
	class FullAuto: FullAuto {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 800;
		maxRangeProbab = 0.05;
	};

	class Attachments {};
};

class DZE_Wep_Groza1_SD: DZE_Wep_Groza1 {
	displayName = "$STR_DZ_WPN_Groza1_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_Groza1SD_DESC";
	model = "\RH_aks\RH_gr1sd.p3d";
	picture = "\RH_aks\inv\gr1sd.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	fireLightDuration = 0;
	fireLightIntensity = 0;
	distanceZoomMin = 110;
	distanceZoomMax = 110;
	reloadMagazineSound[] = {"\RH_aks\sound\oc14_reload.wss",0.056234,1,20};
	modes[] = {"Single","FullAuto"};
	magazines[] = {"30Rnd_762x39_Groza1SD"};

	class Single: Single {
		begin1[] = {"\RH_aks\sound\gr1sd.wss",0.562341,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.08;
		dispersion = 0.0027;
		minRange = 2;
		minRangeProbab = 0.6;
		midRange = 150;
		midRangeProbab = 0.8;
		maxRange = 200;
		maxRangeProbab = 0.1;
	};
	class FullAuto: FullAuto {
		begin1[] = {"\RH_aks\sound\gr1sd.wss",0.562341,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.08;
		ffCount = 30;
		dispersion = 0.0027;
		minRange = 0.1;
		minRangeProbab = 0.9;
		midRange = 60;
		midRangeProbab = 0.8;
		maxRange = 100;
		maxRangeProbab = 0.5;
	};

	class Attachments {};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup762',_id,'DZE_Wep_Groza1'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Groza1_Sniper_SD: DZE_Wep_Groza1_SD {
	displayName = "$STR_DZ_WPN_Groza1_SNIPER_SD_NAME";
	model = "\RH_aks\RH_gr1sdsp.p3d";
	picture = "\RH_aks\inv\gr1sdsp.paa";
	modelOptics = "\RH_m14\fnc_10x_round_mildot";
	opticsFlare = "true";
	opticsDisablePeripherialVision = "true";
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;
	distanceZoomMin = 182;
	distanceZoomMax = 182;

	class Single: Single {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 900;
		maxRangeProbab = 0.05;
	};
	class FullAuto: FullAuto {
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 900;
		maxRangeProbab = 0.05;
	};

	class ItemActions {};
};