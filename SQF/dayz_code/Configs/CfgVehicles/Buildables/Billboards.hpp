class DZE_Billboards_Base: Strategic {
	vehicleClass = "DayZ Epoch 1071 Billboards";
	scope = 0;
	model = "\z\addons\dayz_epoch_v\props\billboards\h4_dz_billboard.p3d";
	icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
	displayName = "";
	animated = false;
	// typicalCargo[] = {};
	destrType = "DestructNo";
	// transportAmmo = 0;
	// transportRepair = 0;
	// transportFuel = 0;
	mapSize = 2;
	cost = 0;
	armor = 1000;
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch_v\props\billboards\data\ammo_co.paa"};
};

class DZE_Billboard_Ammo: DZE_Billboards_Base {
	scope = 2;
	displayName = $STR_EPOCH_TRADER_CATEGORY_AMMUNITION;
	model = "\z\addons\dayz_epoch_v\props\billboards\h4_dz_billboard_ammo.p3d";
};

class DZE_Billboard_Bandit: DZE_Billboards_Base {
	scope = 2;
	displayName = $STR_PLAYERSTATS_BANDIT;
	model = "\z\addons\dayz_epoch_v\props\billboards\h4_dz_billboard_bandit.p3d";
};

class DZE_Billboard_Black_Market: DZE_Billboards_Base {
	scope = 2;
	displayName = $STR_EPOCH_TRADER_CATEGORY_BLACKMARKET;
	model = "\z\addons\dayz_epoch_v\props\billboards\h4_dz_billboard_black.p3d";
};

class DZE_Billboard_Building: DZE_Billboards_Base {
	scope = 2;
	displayName = $STR_EPOCH_TRADER_CATEGORY_BUILDINGSUPPLIES;
	model = "\z\addons\dayz_epoch_v\props\billboards\h4_dz_billboard_build.p3d";
};

class DZE_Billboard_Hero: DZE_Billboards_Base {
	scope = 2;
	displayName = $STR_PLAYERSTATS_HERO;
	model = "\z\addons\dayz_epoch_v\props\billboards\h4_dz_billboard_hero.p3d";
};

class DZE_Billboard_Items: DZE_Billboards_Base {
	scope = 2;
	displayName = $STR_EPOCH_TRADER_CATEGORY_MISCELLANEOUS;
	model = "\z\addons\dayz_epoch_v\props\billboards\h4_dz_billboard_items.p3d";
};

class DZE_Billboard_Medical: DZE_Billboards_Base {
	scope = 2;
	displayName = $STR_EPOCH_TRADER_CATEGORY_MEDICALSUPPLIES;
	model = "\z\addons\dayz_epoch_v\props\billboards\h4_dz_billboard_medical.p3d";
};

class DZE_Billboard_Weapons: DZE_Billboards_Base {
	scope = 2;
	displayName = $STR_EPOCH_TRADER_CATEGORY_WEAPONS;
	model = "\z\addons\dayz_epoch_v\props\billboards\h4_dz_billboard_weapons.p3d";
};

class DZE_Billboard_Wholesale: DZE_Billboards_Base {
	scope = 2;
	displayName = $STR_EPOCH_TRADER_CATEGORY_WHOLESALE;
	model = "\z\addons\dayz_epoch_v\props\billboards\h4_dz_billboard_whole.p3d";
};
