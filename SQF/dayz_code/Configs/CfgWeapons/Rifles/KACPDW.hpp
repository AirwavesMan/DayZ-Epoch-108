class DZE_Wep_KAC_PDW: Rifle {
	scope = 2;
	displayName = "$STR_DZ_WPN_KACPDW_NAME";
	descriptionShort = "$STR_DZ_WPN_KACPDW_DESC";
	model = "\RH_pdw\RH_pdw.p3d";
	picture = "\RH_pdw\inv\w_pdw_iron_ca.paa";
	handAnim[] = {"OFP2_ManSkeleton","\RH_pdw\Anim\RH_PDW.rtm"};
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	magazines[] = {"30Rnd_6x35_KAC"};
	modes[] = {"Single","FullAuto"};
	dexterity = 2.4;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.000316228,1,10};
	class Single: Mode_SemiAuto {
		recoil = "RH_PDWRecoil";
		recoilProne = "RH_pdwassaultRiflesBaseProne";
		reloadTime = 0.0857;
		dispersion = 0.0025;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 300;
		minRange = 0;
		minRangeProbab = 0.7;
		midRange = 150;
		midRangeProbab = 0.5;
		maxRange = 300;
		maxRangeProbab = 0.05;
		begin1[] = {"\RH_pdw\sound\pdw_fire1",1.77828,1,1000};
		soundBegin[] = {"begin1",1};
	};
	class FullAuto: Mode_FullAuto {
		recoil = "RH_PDWRecoil";
		recoilProne = "RH_pdwassaultRiflesBaseProne";
		reloadTime = 0.0857;
		dispersion = 0.0025;
		aiRateOfFire = 0.2;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.8;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;
		begin1[] = {"\RH_pdw\sound\pdw_fire1",1.77828,1,1000};
		soundBegin[] = {"begin1",1};
	};
	class Library {
		libTextDesc = "The Knight's Armament Company 6x35mm PDW is an experimental personal defense weapon designed by KAC, firing a new 6mm cartridge optimized for short barrel weapons.";
	};

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_KAC_PDW_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_KAC_PDW_HOLO";
		DZE_Item_Att_ACOG = "DZE_Wep_KAC_PDW_ACOG";
	};
};

class DZE_Wep_KAC_PDW_CCO: DZE_Wep_KAC_PDW {
	displayName = "$STR_DZ_WPN_KACPDW_CCO_NAME";
	picture = "\RH_pdw\inv\w_pdw_aim_ca.paa";
	model = "\RH_pdw\RH_pdw_aim.p3d";
	dexterity = 2.2;

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_KAC_PDW'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_KAC_PDW_HOLO: DZE_Wep_KAC_PDW {
	displayName = "$STR_DZ_WPN_KACPDW_HOLO_NAME";
	picture = "\RH_pdw\inv\w_pdw_eotech_ca.paa";
	model = "\RH_pdw\RH_pdw_eotech.p3d";
	dexterity = 2.1;

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_KAC_PDW'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_KAC_PDW_ACOG: DZE_Wep_KAC_PDW {
	displayName = "$STR_DZ_WPN_KACPDW_ACOG_NAME";
	picture = "\RH_pdw\inv\w_pdw_acog_ca.paa";
	model = "\RH_pdw\RH_pdw_acog.p3d";
	modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x.p3d";
	dexterity = 2.1;

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
			script = "; ['DZE_Item_Att_ACOG',_id,'DZE_Wep_KAC_PDW'] call player_removeAttachment";
		};
	};
};