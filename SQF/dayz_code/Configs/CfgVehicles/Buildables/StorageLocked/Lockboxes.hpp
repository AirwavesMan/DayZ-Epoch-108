class DZE_Lockbox_Base: DZE_StorageLockable_Base {
	model = "\z\addons\dayz_epoch\models\lockbox.p3d";
	DZE_offset[] = {0,1.5,-0.1};
	armor = 800;
	
	transportMaxMagazines = 50;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;	
};

class DZE_Lockbox_Locked_Base: DZE_Lockbox_Base {
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;	
	lockable = 2;
};

class DZE_LockboxStorage: DZE_Lockbox_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX;
	lockedClass = "DZE_LockboxStorageLocked";
	packedClass = "WeaponHolder_ItemLockbox";
};

class DZE_LockboxStorageLocked: DZE_Lockbox_Locked_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX_LOCKED;
	
	unlockedClass = "DZE_LockboxStorage";
	upgradeBuilding[] = {"DZE_LockboxStorage2Locked",{"ItemToolbox","ItemSolder_DZE"},{{"equip_metal_sheet",2},{"ItemScrews",2},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
};

class DZE_LockboxStorage2: DZE_LockboxStorage {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX+";
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	lockedClass = "DZE_LockboxStorage2Locked";
	packedClass = "WeaponHolder_ItemLockbox2";
};

class DZE_LockboxStorage2Locked: DZE_Lockbox_Locked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_LOCKED+";
	armor = 1600;
	unlockedClass = "DZE_LockboxStorage2";
};

class DZE_LockboxStorageWinter: DZE_Lockbox_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX;
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	lockedClass = "DZE_LockboxStorageWinterLocked";
	packedClass = "WeaponHolder_ItemLockboxWinter";
};

class DZE_LockboxStorageWinterLocked: DZE_Lockbox_Locked_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX_LOCKED;
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	unlockedClass = "DZE_LockboxStorageWinter";
	upgradeBuilding[] = {"DZE_LockboxStorageWinter2Locked",{"ItemToolbox","ItemSolder_DZE"},{{"equip_metal_sheet",2},{"ItemScrews",2},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
};

class DZE_LockboxStorageWinter2: DZE_LockboxStorageWinter {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX+";
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	lockedClass = "DZE_LockboxStorageWinter2Locked";
	packedClass = "WeaponHolder_ItemLockboxWinter2";
};

class DZE_LockboxStorageWinter2Locked: DZE_Lockbox_Locked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_LOCKED+";
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	armor = 1600;
	unlockedClass = "DZE_LockboxStorageWinter2";
};

class DZE_LockboxStorageBroken: DZE_Lockbox_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	packedClass = "WeaponHolder_ItemLockboxBroken";
};

class DZE_LockboxStorage2Broken: DZE_Lockbox_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	packedClass = "WeaponHolder_ItemLockbox2Broken";
};

class DZE_LockboxStorageWinterBroken: DZE_Lockbox_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	packedClass = "WeaponHolder_ItemLockboxWinterBroken";
};

class DZE_LockboxStorageWinter2Broken: DZE_Lockbox_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	packedClass = "WeaponHolder_ItemLockboxWinter2Broken";
};
