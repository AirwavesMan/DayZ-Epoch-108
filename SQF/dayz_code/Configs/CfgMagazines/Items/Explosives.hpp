class TimeBomb;
class Mine;
class MineE;
class PipeBomb;

class DZE_Item_Expl_TimeBomb: TimeBomb {
	scope = 1;
	displayName = "$STR_MN_TIME_BOMB";
	descriptionShort = "$STR_DSS_TimeBomb";
	picture = "\CA\weapons\data\equip\m_satchel_CA.paa";
	useActionTitle = "$STR_ACTION_PUTBOMB";
	ammo = "TimeBomb";
	nameSoundWeapon = "satchelcharge";
	nameSound = "satchelcharge";
	useAction = 1;
	type = 256;
	value = 5;
	count = 1;
	initSpeed = 0;
	maxLeadSpeed = 0;
	sound[] = {"\ca\Weapons\Data\Sound\gravel_L",0.00031622776,1,10};
};

class DZE_Item_Expl_Mine: Mine {
	scope = 2;
	displayName = "$STR_MN_MINE";
	descriptionShort = "$STR_DSS_MINE";
	picture = "\CA\weapons\data\equip\m_AT15_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\Mine.p3d";
	ammo = "Mine";
	nameSoundWeapon = "mine";
	nameSound = "mine";
	type = 256;
};

class DZE_Item_Expl_MineE: MineE {
	scope = 2;
	displayName = "$STR_MN_MINE";
	descriptionShort = "$STR_DSS_MINE_E";
	picture = "\CA\weapons\data\equip\m_TM46_ca.paa";
	model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\MineE.p3d";
	ammo = "MineE";
	nameSoundWeapon = "mine";
	type = 256;
};

class DZE_Item_Expl_PipeBomb: PipeBomb {
	scope = 2;
	displayName = "$STR_DZ_MAG_SATCHEL_NAME"; // Singular "Satchel Charge" for death messages "with a x"
	descriptionShort = "$STR_DSS_Pipe_Bomb";
	picture = "\CA\weapons\data\equip\m_satchel_CA.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_satchel.p3d";
	ammo = "PipeBomb";
	nameSoundWeapon = "satchelcharge";
	nameSound = "satchelcharge";
	useActionTitle = "$STR_ACTION_PUTBOMB";
	type = 256;
	value = 5;
	count = 1;
	initSpeed = 0;
	maxLeadSpeed = 0;
	useAction = 1;
};

class DZE_Item_Expl_C4Charge: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_C4_CHARGE";
	descriptionShort = "$STR_EPOCH_C4_CHARGE_DESC";
	model = "\ca\weapons\explosive.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\carbomb.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Expl_CarBomb: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_carbomb";
	descriptionShort = "$STR_ITEM_DESC_equip_carbomb";
	model = "\ca\weapons\explosive.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\carbomb.paa";
	count = 1;
	type = 256;
	class ItemActions {
		class Use {
			text = "$STR_ACTIONS_attach_carbomb";
			script = "spawn player_attach_bomb;";
		};
	};
};

class DZE_Item_Expl_SuitcaseBomb: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SUITCASE_BOMB";
	descriptionShort = "$STR_EPOCH_SUITCASE_BOMB_DESC";
	model = "\CA\misc3\briefcase";
	picture = "\dayz_epoch_c\icons\equipment\Suitcase.paa";
	count = 1;
	type = 256;
};