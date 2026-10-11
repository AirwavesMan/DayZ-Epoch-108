#define R870_FLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
}

#define R870_MFLASHLIGHT class FlashLight {\
	position = "flash dir";\
	direction = "flash";\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	angle = 30;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
}

class DZE_Wep_Remington870_Base : Rifle {
	scope = 2;
	descriptionShort = "$STR_DZ_WPN_R870_DESC";

	magazines[] =
	{
		8Rnd_12Gauge_Slug,
		8Rnd_12Gauge_Buck,
		2Rnd_12Gauge_Slug,
		2Rnd_12Gauge_Buck
	};

	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons_E\Data\Anim\LeeEnfield.rtm"};

	distanceZoomMin = 100;
	distanceZoomMax = 100;

	modes[] = {"Single"};

	class Single : Mode_SemiAuto {
		recoil = "recoil_single_primary_9outof10";
		recoilProne = "recoil_single_primary_prone_8outof10";
		dispersion = 0.003;
		soundContinuous = 0;
		reloadTime = 0.5;
		begin1[] = {"\dayz_epoch_c\sounds\weapons\shotgun_0", 1.77828, 1, 1000};
		begin2[] = {"\dayz_epoch_c\sounds\weapons\shotgun_1", 1.77828, 1, 1000};
		begin3[] = {"\dayz_epoch_c\sounds\weapons\shotgun_2", 1.77828, 1, 1000};
		soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.33};
		drySound[] = {"ca\sounds\weapons\rifles\dry", 0.01, 1, 10};
	};
};

class DZE_Wep_Remington870 : DZE_Wep_Remington870_Base {
	displayname = "$STR_DZ_WPN_R870_NAME";
	model = "\dayz_weapons\models\Remington870.p3d";
	picture = "\dayz_weapons\textures\equip_remington870_CA.paa";

	class Attachments {
		Attachment_FL = "DZE_Wep_Remington870_FL";
		Attachment_MFL = "DZE_Wep_Remington870_MFL";
	};
};

class DZE_Wep_Remington870_FL : DZE_Wep_Remington870 {
	displayname = "$STR_DZ_WPN_R870_FL_NAME";
	descriptionShort = "$STR_DZ_WPN_R870_FL_DESC";
	model = "\dayz_weapons\models\Remington870_lamp.p3d";

	R870_FLASHLIGHT;

	class Attachments {};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['Attachment_FL',_id,'DZE_Wep_Remington870'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Remington870_MFL : DZE_Wep_Remington870 {
	displayname = "$STR_DZ_WPN_R870_MFL_NAME";
	descriptionShort = "$STR_DZ_WPN_R870_FL_DESC";
	model = "\dayz_weapons\models\Remington870_lamp.p3d";

	R870_MFLASHLIGHT;

	class Attachments {};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['Attachment_MFL',_id,'DZE_Wep_Remington870'] call player_removeAttachment";
		};
	};
};
