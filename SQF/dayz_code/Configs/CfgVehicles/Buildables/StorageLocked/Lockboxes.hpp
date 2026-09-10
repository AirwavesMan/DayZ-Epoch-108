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
	DZE_lockable = 2;
	
	DZE_sfx = "lockboxopen";
};

class DZE_LockboxStorage: DZE_Lockbox_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX;
	DZE_lockedClass = "DZE_LockboxStorageLocked";
	
	DZE_sfx = "lockboxclose";

	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundKit = "ItemLockbox";
		DZE_refundArray[] = {};
	};
};

class DZE_LockboxStorageLocked: DZE_Lockbox_Locked_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX_LOCKED;	
	DZE_unlockedClass = "DZE_LockboxStorage";
	DZE_upgradeBuilding[] = {"DZE_LockboxStorage2Locked",{"ItemToolbox","ItemSolder_DZE"},{{"equip_metal_sheet",2},{"ItemScrews",2},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
};

class DZE_LockboxStorage2: DZE_LockboxStorage {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX+";
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	DZE_lockedClass = "DZE_LockboxStorage2Locked";

	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundKit = "ItemLockbox2";
		DZE_refundArray[] = {};
	};
};

class DZE_LockboxStorage2Locked: DZE_Lockbox_Locked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_LOCKED+";
	armor = 1600;
	DZE_unlockedClass = "DZE_LockboxStorage2";
};

class DZE_LockboxStorageWinter: DZE_Lockbox_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX;
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	DZE_lockedClass = "DZE_LockboxStorageWinterLocked";

	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundKit = "ItemLockboxWinter";
		DZE_refundArray[] = {};
	};
};

class DZE_LockboxStorageWinterLocked: DZE_Lockbox_Locked_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX_LOCKED;
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	DZE_unlockedClass = "DZE_LockboxStorageWinter";	
	DZE_upgradeBuilding[] = {"DZE_LockboxStorageWinter2Locked",{"ItemToolbox","ItemSolder_DZE"},{{"equip_metal_sheet",2},{"ItemScrews",2},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
};

class DZE_LockboxStorageWinter2: DZE_LockboxStorageWinter {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX+";
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	DZE_lockedClass = "DZE_LockboxStorageWinter2Locked";

	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundKit = "ItemLockboxWinter2";
		DZE_refundArray[] = {};
	};
};

class DZE_LockboxStorageWinter2Locked: DZE_Lockbox_Locked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_LOCKED+";
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	armor = 1600;
	DZE_unlockedClass = "DZE_LockboxStorageWinter2";
};

class DZE_LockboxStorageBroken: DZE_Lockbox_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemLockboxBroken";
		DZE_refundArray[] = {};
	};
};

class DZE_LockboxStorage2Broken: DZE_Lockbox_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemLockbox2Broken";
		DZE_refundArray[] = {};
	};
};

class DZE_LockboxStorageWinterBroken: DZE_Lockbox_Base {
	scope = 2;
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemLockboxWinterBroken";
		DZE_refundArray[] = {};
	};
};

class DZE_LockboxStorageWinter2Broken: DZE_Lockbox_Base {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	model = "\z\addons\dayz_epoch\models\lockbox_w.p3d";
	armor = 1600;
	transportMaxMagazines = 100;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemLockboxWinter2Broken";
		DZE_refundArray[] = {};
	};
};
