class m8_carbine;
class DZE_Wep_XM8: m8_carbine {
	scope = 2;
	displayName = "$STR_DZ_WPN_XM8_CARBINE_NAME";
	descriptionShort = "$STR_DSS_XM8";
	model = "\RH_mgswp\RH_xm8.p3d";
	picture = "\RH_mgswp\inv\xm8.paa";
	reloadMagazineSound[] = {"\RH_mgswp\sound\xm8_reload",0.0316228,1,20};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\AK.rtm"};

	magazines[] =
	{
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.08;
		dispersion = 0.00175;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 350;
		maxRangeProbab = 0.05;
	};
	class Burst: Mode_Burst {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.08;
		soundBurst = 0;
		ffCount = 3;
		dispersion = 0.00175;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.08;
		dispersion = 0.00175;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;
	};
};

class DZE_Wep_XM8_DES: DZE_Wep_XM8 {
	model = "\RH_mgswp\RH_xm8d.p3d";
	picture = "\RH_mgswp\inv\xm8d.paa";
};

class DZE_Wep_XM8_GREY: DZE_Wep_XM8 {
	model = "\Ca\Weapons_PMC\XM8\m8_carbine.p3d";
	picture = "\ca\Weapons_PMC\Data\ui\w_xm8_ca.paa";
};

class DZE_Wep_XM8_GREY_2: DZE_Wep_XM8 {
	model = "\Ca\Weapons_PMC\XM8\m8_carbine_pmc.p3d";
	picture = "\ca\Weapons_PMC\Data\ui\w_xm8_CQC_ca.paa";
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};
};

class m8_carbineGL;
class DZE_Wep_XM8_GL: m8_carbineGL {
	displayName = "$STR_DZ_WPN_XM8_GL_CARBINE_NAME";
	model = "\RH_mgswp\RH_xm8gl.p3d";
	picture = "\RH_mgswp\inv\xm8gl.paa";
	muzzles[] = {"this","XM320Muzzle"};
	reloadMagazineSound[] = {"\RH_mgswp\sound\xm8_reload",0.0316228,1,20};
	handAnim[] = {"OFP2_ManSkeleton","\CA\weapons2\Data\Anim\XM8GL.rtm"};

	magazines[] =
	{
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.08;
		dispersion = 0.00175;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 350;
		maxRangeProbab = 0.05;
	};
	class Burst: Mode_Burst {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		soundBurst = 0;
		ffCount = 3;
		reloadTime = 0.08;
		dispersion = 0.00175;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.08;
		dispersion = 0.00175;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;
	};
};

class DZE_Wep_XM8_DES_GL: DZE_Wep_XM8_GL {
	model = "\RH_mgswp\RH_xm8dgl.p3d";
	picture = "\RH_mgswp\inv\xm8dgl.paa";
};

class DZE_Wep_XM8_GREY_GL: DZE_Wep_XM8_GL {
	model = "\Ca\Weapons_PMC\XM8\m8_carbineGL.p3d";
	picture = "\ca\Weapons_PMC\Data\ui\w_xm8_xm320_ca.paa";
};

class m8_compact;
class DZE_Wep_XM8_Compact: m8_compact {
	displayName = "$STR_DZ_WPN_XM8_COMPACT_NAME";
	model = "\RH_mgswp\RH_xm8c.p3d";
	picture = "\RH_mgswp\inv\xm8c.paa";
	reloadMagazineSound[] = {"\RH_mgswp\sound\xm8_reload",0.0316228,1,20};

	magazines[] =
	{
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.08;
		dispersion = 0.002;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 300;
		maxRangeProbab = 0.05;
	};
	class Burst: Mode_Burst {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.08;
		soundBurst = 0;
		ffCount = 3;
		dispersion = 0.002;
		minRange = 1;
		minRangeProbab = 0.1;
		midRange = 60;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.08;
		dispersion = 0.002;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 60;
		maxRangeProbab = 0.05;
	};
};

class DZE_Wep_XM8_DES_Compact: DZE_Wep_XM8_Compact {
	model = "\RH_mgswp\RH_xm8dc.p3d";
	picture = "\RH_mgswp\inv\xm8dc.paa";
};

class DZE_Wep_XM8_GREY_Compact: DZE_Wep_XM8_Compact {
	model = "\Ca\Weapons_PMC\XM8\m8_compact.p3d";
	picture = "\ca\Weapons_PMC\Data\ui\w_xm8_compact_ca.paa";
};

class DZE_Wep_XM8_GREY_2_Compact: DZE_Wep_XM8_Compact {
	model = "\Ca\Weapons_PMC\XM8\m8_compact_pmc.p3d";
	picture = "\ca\Weapons_PMC\Data\ui\w_xm8_compact_cco_ca.paa";
	class FlashLight {
		position = "flash dir";
		direction = "flash";
		color[] = {0.9,0.9,0.7,0.9};
		ambient[] = {0.1,0.1,0.1,1.0};
		angle = 30;
		scale[] = {1,1,0.5};
		brightness = 0.1;
	};
};

class m8_sharpshooter;
class DZE_Wep_XM8_Sharpsh: m8_sharpshooter {
	displayName = "$STR_DZ_WPN_XM8_SHARPSHOOTER_NAME";
	model = "\RH_mgswp\RH_xm8sh.p3d";
	picture = "\RH_mgswp\inv\xm8sh.paa";
	reloadMagazineSound[] = {"\RH_mgswp\sound\xm8_reload",0.0316228,1,20};

	magazines[] =
	{
		30Rnd_556x45_G36,
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.08;
		dispersion = 0.0007;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	class Burst: Mode_Burst {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.08;
		soundBurst = 0;
		ffCount = 3;
		dispersion = 0.0007;
		minRange = 1;
		minRangeProbab = 0.2;
		midRange = 80;
		midRangeProbab = 0.7;
		maxRange = 120;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.08;
		dispersion = 0.0007;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;
	};
};

class DZE_Wep_XM8_DES_Sharpsh: DZE_Wep_XM8_Sharpsh {
	model = "\RH_mgswp\RH_xm8dsh.p3d";
	picture = "\RH_mgswp\inv\xm8dsh.paa";
};

class DZE_Wep_XM8_GREY_Sharpsh: DZE_Wep_XM8_Sharpsh {
	model = "\Ca\Weapons_PMC\XM8\m8_sharpshooter.p3d";
	picture = "\ca\Weapons_PMC\Data\ui\w_xm8_sharp_ca.paa";
};

class m8_SAW;
class DZE_Wep_XM8_SAW: m8_SAW {
	displayName = "$STR_DZ_WPN_XM8_SAW_NAME";
	model = "\RH_mgswp\RH_xm8saw.p3d";
	picture = "\RH_mgswp\inv\xm8saw.paa";
	reloadMagazineSound[] = {"\RH_mgswp\sound\xm8_reload",0.0316228,1,20};

	magazines[] =
	{
		100Rnd_556x45_BetaCMag,
		30Rnd_556x45_G36,
		30Rnd_556x45_Stanag,
		20Rnd_556x45_Stanag,
		60Rnd_556x45_Stanag_Taped
	};

	modes[] = {"FullAuto"};

	class FullAuto: Mode_FullAuto {
		recoil = "recoil_auto_machinegun_5outof10";
		recoilProne = "recoil_auto_machinegun_prone_4outof10";
		dispersion = 0.002;
		begin1[] = {"\RH_mgswp\sound\xm8",1.77828,1,1100};
		soundBegin[] = {"begin1",1};
		soundBurst = 0;
		minRange = 1;
		minRangeProbab = 0.3;
		midRange = 5;
		midRangeProbab = 0.58;
		maxRange = 10;
		maxRangeProbab = 0.04;
		showToPlayer = 1;
	};
};

class DZE_Wep_XM8_DES_SAW: DZE_Wep_XM8_SAW {
	model = "\RH_mgswp\RH_xm8dsaw.p3d";
	picture = "\RH_mgswp\inv\xm8dsaw.paa";
};

class DZE_Wep_XM8_GREY_SAW: DZE_Wep_XM8_SAW {
	model = "\Ca\Weapons_PMC\XM8\m8_SAW.p3d";
	picture = "\ca\Weapons_PMC\Data\ui\w_xm8_auto_ca.paa";
};

class DZE_Wep_XM8_SD: DZE_Wep_XM8 {
	displayName = "$STR_DZ_WPN_XM8_CARBINE_SD_NAME";
	model = "\Ca\Weapons_PMC\XM8\m8_Sup_HOLO.p3d";
	picture = "\ca\Weapons_PMC\Data\ui\w_xm8_supHOLO_ca.paa";
	reloadMagazineSound[] = {"\RH_mgswp\sound\xm8_reload",0.0316228,1,20};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"};

	class OpticsModes {
		class CCO {
			memoryPointCamera = "eye";
			cameraDir = "";
			opticsID = 1;
			useModelOptics = 0;
			opticsPPEffects[] = {};
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			opticsZoomMin = 0.25;
			opticsZoomInit = 0.5;
			opticsZoomMax = 1.1;
			visionMode[] = {};
			opticsFlare = 0;
			opticsDisablePeripherialVision = 0;
		};
	};

	magazines[] =
	{
		30Rnd_556x45_G36SD,
		30Rnd_556x45_StanagSD,
		60Rnd_556x45_StanagSD_Taped,
		100Rnd_556x45_BetaCMagSD
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

	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_3outof10";
		recoilProne = "recoil_single_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\m4sd",1.0,1,110};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.08;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 100;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.05;
	};
	class Burst: Mode_Burst {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\m4sd",1.0,1,110};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.08;
		soundBurst = 0;
		ffCount = 3;
		minRange = 1;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.05;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_auto_primary_3outof10";
		recoilProne = "recoil_auto_primary_prone_3outof10";
		begin1[] = {"\RH_mgswp\sound\m4sd",1.0,1,110};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		reloadTime = 0.08;
		end1[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_single1",2.5118864,1,50};
		end2[] = {"ca\sounds_E\weapons_E\SCAR\SCAR_SD_single2",2.5118864,1,50};
		soundEnd[] = {"end1",0.5,"end2",0.5};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 30;
		maxRangeProbab = 0.05;
	};
};
