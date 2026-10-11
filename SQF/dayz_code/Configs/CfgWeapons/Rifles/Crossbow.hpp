#define CROSSBOW_FLASHLIGHT class FlashLight {\
	position = "fl_start";\
	direction = "fl_dir";\
	color[] = {0.9, 0.9, 0.7, 0.9};\
	ambient[] = {0.1, 0.1, 0.1, 1.0};\
	angle = 40;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.1;\
};

#define CROSSBOW_MFLASHLIGHT class FlashLight {\
	position = "fl_start";\
	direction = "fl_dir";\
	color[] = {0.9, 0.0, 0.0, 0.9};\
	ambient[] = {0.1, 0.0, 0.0, 1.0};\
	angle = 40;\
	scale[] = {1, 1, 0.5};\
	brightness = 0.08;\
};

class DZE_Wep_Crossbow_Base : Rifle {
	magazines[] =
	{
		12Rnd_Quiver_Wood,
		1Rnd_Arrow_Wood,
		1Rnd_Bolt_Explosive,
		1Rnd_Bolt_Tranquilizer
	};

	dexterity = 1.6;
	magazineReloadTime = 0;
	//reloadMagazineSound[] = {"", 1, 1};
	//reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\FAL_reload", 0.316228, 1, 20};
	//reloadMagazineSound[] = {"\ca\sounds\weapons\rifles\M1014-reload", 0.316228, 1, 20};
	reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3", 0.0562341, 1, 20};
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Bizon.rtm"};
	distanceZoomMin = 20;
	distanceZoomMax = 20;
	fireLightDuration = 0;
	fireLightIntensity = 0;
	reloadTime = 2;
	drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.00032,1,10};
	begin1[] = {"z\addons\community_crossbow\sound\crossbow.ogg", 0.177828, 1, 15};
	soundBegin[] = {"begin1",1};
	soundBullet[] = {"emptySound",1};
};

/*Iron sights*/

class DZE_Wep_Crossbow : DZE_Wep_Crossbow_Base {
	scope = 2;
	displayName = "$STR_DZ_WPN_CROSSBOW_NAME";
	descriptionShort = "$STR_WPN_DESC_4";
	model = "z\addons\community_crossbow\models\crossbow.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_icon.paa";

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_Crossbow_CCO";
		DZE_Item_Att_FL = "DZE_Wep_Crossbow_FL";
		DZE_Item_Att_MFL = "DZE_Wep_Crossbow_MFL";
		DZE_Item_Att_SCOPED = "DZE_Wep_Crossbow_Scope";
	};
};

class DZE_Wep_Crossbow_FL : DZE_Wep_Crossbow {
	displayName = "$STR_DZ_WPN_CROSSBOW_FL_NAME";
	model = "z\addons\community_crossbow\models\crossbow_fl.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_fl.paa";

	CROSSBOW_FLASHLIGHT

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_Crossbow_CCO_FL";
		DZE_Item_Att_SCOPED = "DZE_Wep_Crossbow_Scope_FL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_Crossbow'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Crossbow_MFL : DZE_Wep_Crossbow {
	displayName = "$STR_DZ_WPN_CROSSBOW_MFL_NAME";
	model = "z\addons\community_crossbow\models\crossbow_fl.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_fl.paa";

	CROSSBOW_MFLASHLIGHT

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_Crossbow_CCO_MFL";
		DZE_Item_Att_SCOPED = "DZE_Wep_Crossbow_Scope_MFL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_Crossbow'] call player_removeAttachment";
		};
	};
};

/*CCO*/

class DZE_Wep_Crossbow_CCO : DZE_Wep_Crossbow {
	displayName = "$STR_DZ_WPN_CROSSBOW_CCO_NAME";
	model = "z\addons\community_crossbow\models\crossbow_cco.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_cco.paa";

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_Crossbow_CCO_FL";
		DZE_Item_Att_MFL = "DZE_Wep_Crossbow_CCO_MFL";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_Crossbow'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Crossbow_CCO_FL : DZE_Wep_Crossbow_CCO {
	displayName = "$STR_DZ_WPN_CROSSBOW_CCO_FL_NAME";
	model = "z\addons\community_crossbow\models\crossbow_cco_fl.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_scoped.paa";

	CROSSBOW_FLASHLIGHT

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_Crossbow_FL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_Crossbow_CCO'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Crossbow_CCO_MFL : DZE_Wep_Crossbow_CCO {
	displayName = "$STR_DZ_WPN_CROSSBOW_CCO_MFL_NAME";
	model = "z\addons\community_crossbow\models\crossbow_cco_fl.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_scoped.paa";

	CROSSBOW_MFLASHLIGHT

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_Crossbow_MFL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_Crossbow_CCO'] call player_removeAttachment";
		};
	};
};

/*Scope*/

class DZE_Wep_Crossbow_Scope : DZE_Wep_Crossbow {
	displayName = "$STR_DZ_WPN_CROSSBOW_SCOPE_NAME";
	model = "z\addons\community_crossbow\models\crossbow_scoped.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_cco.paa";

	opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
	opticsZoomInit = 0.071945;
	opticsZoomMin = 0.071945;
	opticsZoomMax = 0.071945;
	distanceZoomMin = 110;
	distanceZoomMax = 110;

	class Attachments {
		DZE_Item_Att_FL = "DZE_Wep_Crossbow_Scope_FL";
		DZE_Item_Att_MFL = "DZE_Wep_Crossbow_Scope_MFL";
	};

	class ItemActions {
		class RemoveScope {
			text = "$STR_DZ_ATT_PU_RMVE";
			script = "; ['DZE_Item_Att_SCOPED',_id,'DZE_Wep_Crossbow'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Crossbow_Scope_FL : DZE_Wep_Crossbow_Scope {
	displayName = "$STR_DZ_WPN_CROSSBOW_SCOPE_FL_NAME";
	model = "z\addons\community_crossbow\models\crossbow_scoped_fl.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_scoped_fl.paa";

	CROSSBOW_FLASHLIGHT

	class Attachments {};

	class ItemActions {
		class RemoveScope {
			text = "$STR_DZ_ATT_PU_RMVE";
			script = "; ['DZE_Item_Att_SCOPED',_id,'DZE_Wep_Crossbow_FL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_FL',_id,'DZE_Wep_Crossbow_Scope'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Crossbow_Scope_MFL : DZE_Wep_Crossbow_Scope {
	displayName = "$STR_DZ_WPN_CROSSBOW_SCOPE_MFL_NAME";
	model = "z\addons\community_crossbow\models\crossbow_scoped_fl.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_scoped_fl.paa";

	CROSSBOW_MFLASHLIGHT

	class Attachments {};

	class ItemActions {
		class RemoveScope {
			text = "$STR_DZ_ATT_PU_RMVE";
			script = "; ['DZE_Item_Att_SCOPED',_id,'DZE_Wep_Crossbow_MFL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_RFL_RMVE";
			script = "; ['DZE_Item_Att_MFL',_id,'DZE_Wep_Crossbow_Scope'] call player_removeAttachment";
		};
	};
};

#undef CROSSBOW_FLASHLIGHT

#undef CROSSBOW_MFLASHLIGHT
