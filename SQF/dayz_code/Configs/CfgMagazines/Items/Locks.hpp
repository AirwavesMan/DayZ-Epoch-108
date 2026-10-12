class DZE_Item_Locks_ComboLock: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_COMBINATIONLOCK";
	descriptionShort = "$STR_EPOCH_COMBINATIONLOCK_DESC";
	model = "\z\addons\dayz_epoch\models\combo_lock_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_combolock_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Locks_Padlock: CA_Magazine { //Vanilla lock, left in config for potential admin use, but all scripts changed to use Epoch DZE_Item_Locks_ComboLock
	scope = 2;
	displayName = "$STR_BLD_name_ItemPadlock";//"Padlock"
	descriptionShort = "$STR_BLD_desc_ItemPadlock";//"Padlock - Used for securing Workshop's and Houses."
	picture = "\z\addons\dayz_buildings\equip\padlock.paa";
	model = "z\addons\dayz_buildings\models\padlock.p3d";
	count = 1;
	type = 256;
};