class DZE_Wep_AN94: AK_74 {
	scope = 2;
	displayName = "$STR_DZ_WPN_AN94_NAME";
	model = "\RH_aks\RH_an94.p3d";
	picture = "\RH_aks\inv\an94.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	modelOptics = "-";
	opticsZoomInit = 0.375;
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\AK.rtm"};
	optics = 1;
	dexterity = 1.7;
	reloadMagazineSound[] = {"\RH_aks\sound\an94_reload.wss",0.056234,1,20};
	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};
	modes[] = {"Single","Burst","Fullauto"};
	class Single: Mode_SemiAuto {
		recoil = "AN94_Recoil";
		recoilProne = "AN94_RecoilProne";
		flash = "gunfire";
		useActionTitle = "";
		begin1[] = {"\RH_aks\sound\an94.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		multiplier = 1;
		burst = 1;
		dispersion = 0.002;
		reloadTime = 0.087;
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		autofire = 0;
		flashSize = 0.1;
		useAction = 0;
		showToPlayer = 1;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 500;
		minRange = 2;
		minRangeProbab = 0.6;
		midRange = 250;
		midRangeProbab = 0.8;
		maxRange = 500;
		maxRangeProbab = 0.2;
	};
	class Burst: Mode_Burst {
		recoil = "AN94_BurstRecoil";
		recoilProne = "AN94_BurstRecoilProne";
		flash = "gunfire";
		useActionTitle = "";
		begin1[] = {"\RH_aks\sound\an942.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		soundBurst = 1;
		multiplier = 1;
		burst = 2;
		dispersion = 0.002;
		reloadTime = 0.03;
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		autofire = 0;
		flashSize = 0.1;
		useAction = 0;
		showToPlayer = 1;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 200;
		minRange = 1;
		minRangeProbab = 0.6;
		midRange = 150;
		midRangeProbab = 0.9;
		maxRange = 230;
		maxRangeProbab = 0.6;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "AN94_Recoil";
		recoilProne = "AN94_RecoilProne";
		flash = "gunfire";
		useActionTitle = "";
		begin1[] = {"\RH_aks\sound\an94.wss",1.778279,1,1000};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		multiplier = 1;
		burst = 1;
		dispersion = 0.002;
		reloadTime = 0.087;
		ffCount = 1;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		autofire = 2;
		flashSize = 0.1;
		useAction = 0;
		showToPlayer = 1;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 100;
		minRange = 0.1;
		minRangeProbab = 0.9;
		midRange = 80;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.3;
	};
	class Library {
		libTextDesc = "The AN-94 Abakan is a modern Russian assault rifle. The acronym stands for Avtomat Nikonova (after Gennadiy Nikonov) Model 1994, and it was chosen over many other competing firearms in an extensive trial, including the AEK-971 design by a team led by the son of AK-47 designer Mikhail Kalashnikov, Sergey Koksharov. The AN-94 was designed at the Izhmash state factories, as a replacement for the AK-74 assault rifle currently in use in the Russian military. Currently, the Russian military is retaining the AK-74M as its standard shoulder arm and the AN-94 is only being issued to the elite forces of the Russian military, some Russian police forces, and the MVD.";
	};

	class Attachments {
		Attachment_GP25 = "DZE_Wep_AN94_GL";
	};
};
class DZE_Wep_AN94_GL: DZE_Wep_AN94 {
	scope = 2;
	displayName = "$STR_DZ_WPN_AN94_GL_NAME";
	model = "\RH_aks\RH_an94gl.p3d";
	modelOptics = "-";
	picture = "\RH_aks\inv\an94gl.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	optics = 1;
	dexterity = 1.4;
	reloadMagazineSound[] = {"\RH_aks\sound\an94_reload.wss",0.056234,1,20};
	muzzles[] = {this, GP25Muzzle};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};

	class Attachments {};

	class ItemActions {
		class RemoveGL {
			text = "$STR_DZ_ATT_GP25_RMVE";
			script = "; ['Attachment_GP25',_id,'DZE_Wep_AN94'] call player_removeAttachment";
		};
	};
};