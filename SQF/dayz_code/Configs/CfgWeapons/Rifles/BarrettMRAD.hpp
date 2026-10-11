class DZE_Wep_Barrett_MRAD_Iron: m107 {
	scope = 2;
	displayname = "$STR_DZ_WPN_BARETT_MRAD_IRON_NAME";
	descriptionShort = "$STR_DZ_WPN_BARETT_MRAD_DESC";
	model = "\z\addons\dayz_epoch_w\mrad\h4_mrad.p3d";
	picture = "\dayz_epoch_c\icons\weapons\W_mrad_CA.paa";
	modelOptics = "-";
	type = 1;
	canlock	= 0;
	autoFire = 0;
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\M107b.rtm"};
	begin1[] = {"\z\addons\anzio\fire7",2.5118864,1,1200};
	magazines[] = {10Rnd_86x70_MRAD};
	optics = false;

	class OpticsModes {
		class Ironsights {
			memoryPointCamera = "eye";
			cameraDir = "";
			opticsID = 1;
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
	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_Barrett_MRAD_CCO";
	};
};
class DZE_Wep_Barrett_MRAD_CCO: DZE_Wep_Barrett_MRAD_Iron {
	displayname = "$STR_DZ_WPN_BARETT_MRAD_CCO_NAME";
	model = "\z\addons\dayz_epoch_w\mrad\h4_mrad_aim.p3d";
	picture = "\dayz_epoch_c\icons\weapons\W_mradaim_CA.paa";
	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_Barrett_MRAD_Iron'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Barrett_MRAD_Sniper: m107 {
	scope = 2;
	displayname = "$STR_DZ_WPN_BARETT_MRAD_SNIPER_NAME";
	descriptionShort = "$STR_DZ_WPN_BARETT_MRAD_DESC";
	model = "\z\addons\dayz_epoch_w\mrad\h4_mrad_scope.p3d";
	picture = "\dayz_epoch_c\icons\weapons\W_mradscope_CA.paa";
	type = 1;
	canlock	= 0;
	autoFire = 0;
	magazines[] = {10Rnd_86x70_MRAD};
	begin1[] = {"\z\addons\anzio\fire7",2.5118864,1,1200};
};