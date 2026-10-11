class revolver_EP1;
class DZE_Wep_Revolver: revolver_EP1 {
	magazines[] = {6Rnd_45ACP};
};

class revolver_gold_EP1;
class DZE_Wep_Revolver_Gold: revolver_gold_EP1 {
	magazines[] = {6Rnd_45ACP};
};

class DZE_Wep_Colt_Anaconda: Pistol {
	scope = 2;
	displayName = "$STR_DZ_WPN_COLT_ANACONDA_NAME";
	descriptionShort = "$STR_DZ_WPN_COLT_ANACONDA_DESC";
	model = "\RH_de\RH_anac.p3d";
	picture = "\RH_de\inv\anac.paa";
	modelOptics = "-";
	optics = "true";
	recoil = "ColtAnaconda_Recoil";
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 30;
	midRangeProbab = 0.8;
	maxRange = 50;
	maxRangeProbab = 0.04;
	distanceZoomMin = 56;
	distanceZoomMax = 56;
	dexterity = 1.85;
	begin1[] = {"\RH_de\sound\anac.wss",0.794328,1,800};
	soundBegin[] = {"begin1",1};
	drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
	reloadMagazineSound[] = {"\RH_de\sound\bullreload.wss",0.1,1,20};
	magazines[] = {"6Rnd_44Magnum"};
	dispersion = 0.0085;
	ffCount = 1;
	reloadTime = 0.2;
	aiRateOfFire = 2.9;
	aiRateOfFireDistance = 50;
};

class DZE_Wep_Colt_Anaconda_Gold: DZE_Wep_Colt_Anaconda {
	displayName = "$STR_DZ_WPN_COLT_ANACONDA_GOLD_NAME";
	model = "\RH_de\RH_anacg.p3d";
	picture = "\RH_de\inv\anacg.paa";
};

class DZE_Wep_Colt_Bull: DZE_Wep_Colt_Anaconda {
	displayName = "$STR_DZ_WPN_TAURUS_NAME";
	descriptionShort = "$STR_DZ_WPN_TAURUS_DESC";
	model = "\RH_de\RH_bull.p3d";
	picture = "\RH_de\inv\bull.paa";
	begin1[] = {"\RH_de\sound\bull.wss",0.794328,1,800};
	soundBegin[] = {"begin1",1};
};

class DZE_Wep_Colt_Python: DZE_Wep_Colt_Anaconda {
	displayName = "$STR_DZ_WPN_COLT_PYTHON_NAME";
	descriptionShort = "$STR_DZ_WPN_COLT_PYTHON_DESC";
	model = "\RH_de\RH_python.p3d";
	picture = "\RH_de\inv\python.paa";
	recoil = "ColtPython_Recoil";
	begin1[] = {"\RH_de\sound\python.wss",0.794328,1,1000};
	soundBegin[] = {"begin1",1};
	magazines[] = {"6Rnd_357Magnum"};
};

class DZE_Wep_Colt_Revolver: DZE_Wep_Revolver {
	displayName	= "$STR_DZ_WPN_COLT_REVOLVER_NAME";
	descriptionShort = "$STR_DZ_WPN_COLT_REVOLVER_DESC";
	model = "\z\addons\dayz_epoch_w\colt\h4_colt";
	picture	= "\z\addons\dayz_epoch_w\colt\data\w_colt_ca.paa";
	begin1[] = {"\RH_de\sound\anac.wss",0.794328,1,800};
	soundBegin[] = {begin1,1};
};
