class DZE_Wep_SCAR_H_AK: DZE_Wep_AKM {
	displayName = "$STR_DZ_WPN_SCARAK_NAME";
	descriptionShort = "$STR_DZ_WPN_SCARAK_DESC";
	model = "\RH_mgswp\RH_scarAk.p3d";
	picture = "\RH_mgswp\inv\scarAk.paa";
	opticsZoomInit = "0.33333*2";
	dexterity = "3.75/(3.6+ 0.1) + 0.5 + 0.1*(1)";
	handAnim[] = {"OFP2_ManSkeleton","\RH_mgswp\anim\RH_M4cs.rtm"};
	opticsZoomMin = 0.33333;
	opticsZoomMax = 1;
	discretefov[] = {};
	discreteInitIndex = 0;
	reloadMagazineSound[] = {"\RH_mgswp\sound\scar_Reload",0.0316228,1,20};
	class Single: Single {
		recoil = "recoil_single_primary_5outof10";
		recoilProne = "recoil_single_primary_prone_5outof10";
		begin1[] = {"\RH_mgswp\sound\scarAk",1.77828,1,1000};
		soundBegin[] = {"begin1",1};
		dispersion = 0.00175;
		reloadTime = 0.1;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 400;
		minRange = 0;
		minRangeProbab = 0.7;
		midRange = 200;
		midRangeProbab = 0.5;
		maxRange = 400;
		maxRangeProbab = 0.03;
	};
	class FullAuto: FullAuto {
		recoil = "recoil_auto_primary_5outof10";
		recoilProne = "recoil_auto_primary_prone_5outof10";
		begin1[] = {"\RH_mgswp\sound\scarAk",1.77828,1,1000};
		soundBegin[] = {"begin1",1};
		dispersion = 0.00175;
		reloadTime = 0.1;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 100;
		minRange = 0;
		minRangeProbab = 0.8;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.02;
	};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_SCAR_H_AK_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_SCAR_H_AK_HOLO";
		DZE_Item_Att_ACOG = "DZE_Wep_SCAR_H_AK_ACOG";
	};
};
class DZE_Wep_SCAR_H_AK_CCO: DZE_Wep_SCAR_H_AK {
	displayName = "$STR_DZ_WPN_SCARAK_CCO_NAME";
	model = "\RH_mgswp\RH_scarAkaim.p3d";
	picture = "\RH_mgswp\inv\scarAkaim.paa";
	dexterity = "3.75/(3.6+ 0.2+ (0.4)*1.2+ 0.1) + 0.5 + 0.1*(1)";
	weaponInfoType = "RscWeaponEmpty";
	irDistance = 150;
	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_SCAR_H_AK'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SCAR_H_B_AK_CCO: DZE_Wep_SCAR_H_AK_CCO {
	model = "\RH_mgswp\RH_scarAkBaim.p3d";
	picture = "\RH_mgswp\inv\scarAkbaim.paa";
	class ItemActions {};
};

class DZE_Wep_SCAR_H_AK_HOLO: DZE_Wep_SCAR_H_AK_CCO {
	displayName = "$STR_DZ_WPN_SCARAK_HOLO_NAME";
	model = "\RH_mgswp\RH_scarAkeotech.p3d";
	picture = "\RH_mgswp\inv\scarAkeotech.paa";
	dexterity = "3.75/(3.6+ 0.2+ (0.3)*1.2+ 0.1) + 0.5 + 0.1*(1)";

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_SCAR_H_AK'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_SCAR_H_AK_ACOG: DZE_Wep_SCAR_H_AK_CCO {
	displayName = "$STR_DZ_WPN_SCARAK_ACOG_NAME";
	model = "\RH_mgswp\RH_scarAkacog.p3d";
	picture = "\RH_mgswp\inv\scarAkacog.paa";
	modelOptics = "\RH_mgswp\NWD_acog_ta31RMR";
	dexterity = "3.75/(3.6+ 0.2+ (0.3)*1.2+ 0.1) + 0.5 + 0.1*(1)";
	class OpticsModes {
		class ACOG {
			memoryPointCamera = "opticView";
			cameraDir = "";
			opticsZoomMin = "0.28778/4";
			opticsZoomMax = "0.28778/4";
			opticsZoomInit = "0.28778/4";
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
		class CQB: ACOG {
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
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discretefov[] = {};
			discreteInitIndex = 0;
		};
	};
	class Single: Single {
		aiRateOfFire = 3;
		aiRateOfFireDistance = 700;
		minRange = 0;
		minRangeProbab = 0.7;
		midRange = 300;
		midRangeProbab = 0.6;
		maxRange = 700;
		maxRangeProbab = 0.03;
	};

	class ItemActions {
		class RemoveACOG {
			text = "$STR_DZ_ATT_ACOG_RMVE";
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_SCAR_H_AK'] call player_removeAttachment";
		};
	};
};