class DZE_Safe_Base: DZE_StorageLockable_Base {
	model = "\z\addons\dayz_epoch\models\safe.p3d";
	DZE_offset[] = {0,2.5,0};
	
	armor = 800;
	transportMaxMagazines = 200;
	transportMaxWeapons = 25;
	transportMaxBackpacks = 10;	
};

class DZE_Safe_Locked_Base: DZE_Safe_Base {
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;	
	
	lockable = 4;
};

class DZE_Safe: DZE_Safe_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE";
	lockedClass = "DZE_SafeLocked";
	packedClass = "WeaponHolder_ItemSafe";
};

class DZE_SafeLocked: DZE_Safe_Locked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_LOCKED";
	lockable = 4;
	unlockedClass = "DZE_Safe";
	upgradeBuilding[] = {"DZE_Safe2Locked",{"ItemToolbox","ItemSolder_DZE"},{{"equip_metal_sheet",4},{"ItemScrews",2},{"equip_scrapelectronics",4},{"equip_floppywire",2}}};
	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundKit = "ItemSafe";
		DZE_refundArray[] = {};
	};
};

class DZE_Safe2: DZE_Safe {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE+";
	armor = 1600;
	transportMaxMagazines = 400;
	transportMaxWeapons = 50;
	transportMaxBackpacks = 20;
	lockedClass = "DZE_Safe2Locked";
	packedClass = "WeaponHolder_ItemSafe2";
};

class DZE_Safe2Locked: DZE_Safe_Locked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_LOCKED+";	
	armor = 1600;
	unlockedClass = "DZE_Safe2";
	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundKit = "ItemSafe2";
		DZE_refundArray[] = {};
	};
};

class DZE_SafeTall: DZE_Safe_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE";
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	armor = 2600;
	transportMaxMagazines = 600;
	transportMaxWeapons = 75;
	transportMaxBackpacks = 30;
	lockedClass = "DZE_SafeTallLocked";
	packedClass = "WeaponHolder_ItemSafeTall";
	
	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};
};

class DZE_SafeTallLocked: DZE_Safe_Locked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_LOCKED";
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	armor = 2600;
	unlockedClass = "DZE_SafeTall";
	
	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundKit = "ItemSafeTall";
		DZE_refundArray[] = {};
	};
};

//	Broken Versions
class DZE_SafeBroken: DZE_Safe_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_BROKEN";
	packedClass = "WeaponHolder_ItemSafeBroken";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemSafeBroken";
		DZE_refundArray[] = {};
	};
};

class DZE_Safe2Broken: DZE_SafeBroken {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_BROKEN+";
	armor = 1600;
	transportMaxMagazines = 400;
	transportMaxWeapons = 50;
	transportMaxBackpacks = 20;
	packedClass = "WeaponHolder_ItemSafe2Broken";
	class RemoveObject: RemoveObject {		
		DZE_refundKit = "ItemSafe2Broken";
		DZE_refundArray[] = {};
	};
};

class DZE_SafeTallBroken: DZE_Safe_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_BROKEN";
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	armor = 2600;
	transportMaxMagazines = 600;
	transportMaxWeapons = 75;
	transportMaxBackpacks = 30;
	packedClass = "WeaponHolder_ItemSafeTallBroken";
	
	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemSafeTallBroken";
		DZE_refundArray[] = {};
	};
};
