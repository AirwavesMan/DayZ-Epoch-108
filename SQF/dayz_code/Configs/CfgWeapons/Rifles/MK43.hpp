class DZE_Wep_Mk43: DZE_Wep_M60A4_EP1_DZE {
	displayName = "$STR_DZ_WPN_MK43_NAME";
	model = "\RH_mgswp\RH_mk43.p3d";
	picture = "\RH_mgswp\inv\mk43.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\Anim\RH_mk43.rtm"};
	reloadMagazineSound[] = {"\RH_mgswp\sound\m60e4_reload",0.0562341,1,25};
	modes[] = {"manual","close","short","medium","far"};

	class manual: Mode_FullAuto {
		displayName = "";
		recoil = "recoil_auto_machinegun_8outof10";
		recoilProne = "recoil_auto_machinegun_prone_5outof10";
		dispersion = 0.0008;
		begin1[] = {"\RH_mgswp\sound\m60e4",3.16228,1,1500};
		begin2[] = {"\RH_mgswp\sound\m60e4-3",3.16228,1,1500};
		soundBegin[] = {"begin1",0.33,"begin2",0.33};
		soundContinuous = 0;
		soundBurst = 0;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 5;
		midRangeProbab = 0.58;
		maxRange = 10;
		maxRangeProbab = 0.04;
		showToPlayer = 1;
		reloadTime = 0.086;
	};
	class close: manual {
		burst = 10;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 10;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.58;
		maxRange = 50;
		maxRangeProbab = 0.04;
		showToPlayer = 0;
	};
	class short: close {
		burst = 8;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 300;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 300;
		maxRangeProbab = 0.04;
	};
	class medium: close {
		burst = 12;
		aiRateOfFire = 3;
		aiRateOfFireDistance = 600;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 400;
		midRangeProbab = 0.58;
		maxRange = 600;
		maxRangeProbab = 0.04;
	};
	class far: close {
		burst = 16;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 600;
		midRangeProbab = 0.4;
		maxRange = 900;
		maxRangeProbab = 0.01;
	};

	class Attachments {
		Attachment_Holo = "DZE_Wep_MK43_Holo";
		Attachment_ACOG = "DZE_Wep_MK43_ACOG";
	};
};

class DZE_Wep_MK43_Holo: DZE_Wep_Mk43 {
	displayName = "$STR_DZ_WPN_MK43_HOLO_NAME";
	model = "\RH_mgswp\RH_mk43eotech.p3d";
	picture = "\RH_mgswp\inv\mk43eotech.paa";
	irLaserPos = "laser pos";
	irLaserEnd = "laser dir";
	irDistance = 150;

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_Mk43'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK43_ACOG: DZE_Wep_Mk43 {
	displayName = "$STR_DZ_WPN_MK43_ACOG_NAME";
	model = "\RH_mgswp\RH_mk43acog.p3d";
	picture = "\RH_mgswp\inv\mk43acog.paa";
	irLaserPos = "laser pos";
	irLaserEnd = "laser dir";
	modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";
	irDistance = 150;

	class OpticsModes {
		class ACOG {
			memoryPointCamera = "opticView";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = true;
			opticsFlare = true;
			opticsDisablePeripherialVision = true;
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			opticsZoomInit = 0.0623;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			visionMode[] = {"Normal"};
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur3"};
		};

		class Iron {
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

	class Attachments {};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['Attachment_ACOG',_id,'DZE_Wep_Mk43'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_MK43_M145: DZE_Wep_Mk43 {
	displayName = "$STR_DZ_WPN_MK43_M145_NAME";
	model = "\RH_mgswp\RH_mk43elcan.p3d";
	picture = "\RH_mgswp\inv\mk43elcan.paa";
	irLaserPos = "laser pos";
	irLaserEnd = "laser dir";
	modelOptics = "\Ca\weapons_E\M249\M145.p3d";
	irDistance = 150;

	class OpticsModes {
		class Scope {
			memoryPointCamera = "opticView";
			cameraDir = "";
			opticsZoomMin = "0.28778/3.4";
			opticsZoomMax = "0.28778/3.4";
			opticsZoomInit = "0.28778/3.4";
			opticsID = 1;
			useModelOptics = 1;
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			visionMode[] = {"Normal"};
			opticsFlare = 1;
			opticsDisablePeripherialVision = 1;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			discretefov[] = {};
			discreteInitIndex = 0;
		};
		class CQB: Scope {
			memoryPointCamera = "eye";
			opticsZoomInit = "0.33333*2";
			opticsID = 2;
			useModelOptics = 0;
			opticsPPEffects[] = {};
			opticsFlare = 0;
			opticsDisablePeripherialVision = 0;
			visionMode[] = {};
			opticsZoomMin = 0.33333;
			opticsZoomMax = 1;
			discretefov[] = {};
			discreteInitIndex = 0;
		};
	};

	class Attachments {};
};