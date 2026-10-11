#define MOSIN_FLASHLIGHT class FlashLight {\
	position = "fl_start";\
	direction = "fl_dir";\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	angle = 40;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
};

#define MOSIN_MFLASHLIGHT class FlashLight {\
	position = "fl_start";\
	direction = "fl_dir";\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	angle = 40;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
};

#define MOSIN_BELT magazineReloadTime = 4.7;

#define MOSIN_BROKEN magazines[] = {};

class DZE_Wep_Mosin_Base : Rifle {
	recoil = "recoil_single_primary_9outof10";
	recoilProne = "recoil_single_primary_prone_8outof10";
	magazineReloadTime = 7.5;
	reloadMagazineSound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\reload.ogg, 0.010000, 1};
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.01,1,10};
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M24.rtm"};
	dexterity = 1.6;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	magazines[] = {5Rnd_762x54_Mosin};

	//recoil = "Mosin_NagantRecoil";
	//recoilProne = "Mosin_NagantRecoilProne";

	dispersion = 0.00091;
	reloadTime = 1.4;
	//sound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\Mosin.ogg,1.778279,1,1000};
	sound[] = {z\addons\dayz_communityweapons\models\mosin_nagant\sound\Mosin.ogg,db-20,1,800};
};

/* Iron sights */

class DZE_Wep_Mosin : DZE_Wep_Mosin_Base {
	scope = 2;
	displayName = "$STR_DZ_WPN_MOSIN_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891.paa";
	weaponInfoType = "RscWeaponZeroing";

	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
	discreteDistanceInitIndex = 2;

	class Attachments {
		DZE_Item_Att_SCOPED = "DZE_Wep_Mosin_PU";
		DZE_Item_Att_FL = "DZE_Wep_Mosin_FL";
		DZE_Item_Att_MFL = "DZE_Wep_Mosin_MFL";
		DZE_Item_Att_BELT = "DZE_Wep_Mosin_Belt";
	};
};

class DZE_Wep_Mosin_BR : DZE_Wep_Mosin {
	MOSIN_BROKEN
};

class DZE_Wep_Mosin_FL : DZE_Wep_Mosin {
	displayName = "$STR_DZ_WPN_MOSIN_FL_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891_FL.paa";

	MOSIN_FLASHLIGHT

	class Attachments {
		DZE_Item_Att_SCOPED = "DZE_Wep_Mosin_PU_FL";
		DZE_Item_Att_BELT = "DZE_Wep_Mosin_Belt_FL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_Mosin'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Mosin_MFL : DZE_Wep_Mosin {
	displayName = "$STR_DZ_WPN_MOSIN_MFL_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891_FL.paa";

	MOSIN_MFLASHLIGHT

	class Attachments {
		DZE_Item_Att_SCOPED = "DZE_Wep_Mosin_PU_MFL";
		DZE_Item_Att_BELT = "DZE_Wep_Mosin_Belt_MFL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_Mosin'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Mosin_Belt : DZE_Wep_Mosin {
	displayName = "$STR_DZ_WPN_MOSIN_BELT_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891B.paa";

	MOSIN_BELT

	class Attachments {
		DZE_Item_Att_SCOPED = "DZE_Wep_Mosin_PU_Belt";
		DZE_Item_Att_FL = "DZE_Wep_Mosin_Belt_FL";
		DZE_Item_Att_MFL = "DZE_Wep_Mosin_Belt_MFL";
	};

	class ItemActions {
		class RemoveBelt {
			text = "$STR_DZ_ATT_BELT_RMVE";
			script = "; ['DZE_Item_Att_BELT',_id,'DZE_Wep_Mosin'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Mosin_Belt_FL : DZE_Wep_Mosin_FL {
	displayName = "$STR_DZ_WPN_MOSIN_BELT_FL_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891B_FL.paa";

	MOSIN_BELT

	class Attachments {
		DZE_Item_Att_SCOPED = "DZE_Wep_Mosin_PU_Belt_FL";
	};

	class ItemActions {
		class RemoveBelt {
			text = "$STR_DZ_ATT_BELT_RMVE";
			script = "; ['DZE_Item_Att_BELT',_id,'DZE_Wep_Mosin_FL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_Mosin_Belt'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Mosin_Belt_MFL : DZE_Wep_Mosin_MFL {
	displayName = "$STR_DZ_WPN_MOSIN_BELT_MFL_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891B_FL.paa";

	MOSIN_BELT

	class Attachments {
		DZE_Item_Att_SCOPED = "DZE_Wep_Mosin_PU_Belt_MFL";
	};

	class ItemActions {
		class RemoveBelt {
			text = "$STR_DZ_ATT_BELT_RMVE";
			script = "; ['DZE_Item_Att_BELT',_id,'DZE_Wep_Mosin_MFL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_Mosin_Belt'] call player_removeAttachment";
		};
	};
};

/* PU Scope */

class DZE_Wep_Mosin_PU : DZE_Wep_Mosin_Base {
	scope = 2;
	displayName = "$STR_DZ_WPN_MOSIN_PU_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_scoped_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891S.paa";
	weaponInfoType = "RscWeaponZeroing";

	opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
	opticsZoomInit = 0.083;
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;

	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300};
	discreteDistanceInitIndex = 2;

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_Mosin_PU_FL";
		DZE_Item_Att_MFL = "DZE_Wep_Mosin_PU_MFL";
		DZE_Item_Att_BELT = "DZE_Wep_Mosin_PU_Belt";
	};

	class ItemActions {
		class RemoveScope {
			text = "$STR_DZ_ATT_PU_RMVE";
			script = "; ['DZE_Item_Att_SCOPED',_id,'DZE_Wep_Mosin'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Mosin_PU_FL : DZE_Wep_Mosin_PU {
	displayName = "$STR_DZ_WPN_MOSIN_PU_FL_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_scoped_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891S_FL.paa";

	MOSIN_FLASHLIGHT

	class Attachments {
		DZE_Item_Att_BELT = "DZE_Wep_Mosin_PU_Belt_FL";
	};

	class ItemActions {
		class RemoveScope {
			text = "$STR_DZ_ATT_PU_RMVE";
			script = "; ['DZE_Item_Att_SCOPED',_id,'DZE_Wep_Mosin_FL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_Mosin_PU'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Mosin_PU_MFL : DZE_Wep_Mosin_PU {
	displayName = "$STR_DZ_WPN_MOSIN_PU_MFL_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_scoped_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891S_FL.paa";

	MOSIN_MFLASHLIGHT

	class Attachments {
		DZE_Item_Att_BELT = "DZE_Wep_Mosin_PU_Belt_MFL";
	};

	class ItemActions {
		class RemoveScope {
			text = "$STR_DZ_ATT_PU_RMVE";
			script = "; ['DZE_Item_Att_SCOPED',_id,'DZE_Wep_Mosin_MFL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_Mosin_PU'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Mosin_PU_Belt : DZE_Wep_Mosin_PU {
	displayName = "$STR_DZ_WPN_MOSIN_PU_BELT_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_scoped_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891SB.paa";

	MOSIN_BELT

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_Mosin_PU_Belt_FL";
		DZE_Item_Att_MFL = "DZE_Wep_Mosin_PU_Belt_MFL";
	};

	class ItemActions {
		class RemoveScope {
			text = "$STR_DZ_ATT_PU_RMVE";
			script = "; ['DZE_Item_Att_SCOPED',_id,'DZE_Wep_Mosin_Belt'] call player_removeAttachment";
		};

		class RemoveBelt {
			text = "$STR_DZ_ATT_BELT_RMVE";
			script = "; ['DZE_Item_Att_BELT',_id,'DZE_Wep_Mosin_PU'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Mosin_PU_Belt_FL :  DZE_Wep_Mosin_PU_FL {
	displayName = "$STR_DZ_WPN_MOSIN_PU_BELT_FL_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_scoped_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891SB_FL.paa";

	MOSIN_BELT

	class Attachments {};

	class ItemActions {
		class RemoveScope {
			text = "$STR_DZ_ATT_PU_RMVE";
			script = "; ['DZE_Item_Att_SCOPED',_id,'DZE_Wep_Mosin_Belt_FL'] call player_removeAttachment";
		};

		class RemoveBelt {
			text = "$STR_DZ_ATT_BELT_RMVE";
			script = "; ['DZE_Item_Att_BELT',_id,'DZE_Wep_Mosin_PU_FL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_Mosin_PU_Belt'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Mosin_PU_Belt_MFL :  DZE_Wep_Mosin_PU_MFL {
	displayName = "$STR_DZ_WPN_MOSIN_PU_BELT_MFL_NAME";
	descriptionShort = "$STR_DZ_WPN_MOSIN_DESC";
	model = "z\addons\dayz_communityweapons\models\mosin_nagant\mosin_1891_belt_scoped_FL_animated";
	picture = "\z\addons\dayz_communityweapons\models\mosin_nagant\images\1891SB_FL.paa";

	MOSIN_BELT

	class Attachments {};

	class ItemActions {
		class RemoveScope {
			text = "$STR_DZ_ATT_PU_RMVE";
			script = "; ['DZE_Item_Att_SCOPED',_id,'DZE_Wep_Mosin_Belt_MFL'] call player_removeAttachment";
		};

		class RemoveBelt {
			text = "$STR_DZ_ATT_BELT_RMVE";
			script = "; ['DZE_Item_Att_BELT',_id,'DZE_Wep_Mosin_PU_MFL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_Mosin_PU_Belt'] call player_removeAttachment";
		};
	};
};

#undef MOSIN_FLASHLIGHT
#undef MOSIN_MFLASHLIGHT
#undef MOSIN_BELT
