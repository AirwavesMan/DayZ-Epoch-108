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
	
	DZE_sfx = "safeopen";
};

class DZE_Safe: DZE_Safe_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE";
	DZE_lockedClass = "DZE_SafeLocked";
	
	DZE_sfx = "safeclose";

	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundKit = "ItemSafe";
		DZE_refundArray[] = {};
	};
};

class DZE_SafeLocked: DZE_Safe_Locked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_LOCKED";
	lockable = 4;
	DZE_unlockedClass = "DZE_Safe";
	upgradeBuilding[] = {"DZE_Safe2Locked",{"ItemToolbox","ItemSolder_DZE"},{{"equip_metal_sheet",4},{"ItemScrews",2},{"equip_scrapelectronics",4},{"equip_floppywire",2}}};
};

class DZE_Safe2: DZE_Safe {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE+";
	armor = 1600;
	transportMaxMagazines = 400;
	transportMaxWeapons = 50;
	transportMaxBackpacks = 20;
	DZE_lockedClass = "DZE_Safe2Locked";

	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundKit = "ItemSafe2";
		DZE_refundArray[] = {};
	};
};

class DZE_Safe2Locked: DZE_Safe_Locked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_LOCKED+";	
	armor = 1600;
	DZE_unlockedClass = "DZE_Safe2";
};

class DZE_SafeTall: DZE_Safe_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE";
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	armor = 2600;
	transportMaxMagazines = 600;
	transportMaxWeapons = 75;
	transportMaxBackpacks = 30;
	DZE_lockedClass = "DZE_SafeTallLocked";
	
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
	
	DZE_sfxClose = "safeclose";

	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundKit = "ItemSafeTall";
		DZE_refundArray[] = {};
	};
};

class DZE_SafeTallLocked: DZE_Safe_Locked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_LOCKED";
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	armor = 2600;
	DZE_unlockedClass = "DZE_SafeTall";
	
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

//	Broken Versions
class DZE_SafeBroken: DZE_Safe_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_BROKEN";
	
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemSafeBroken";
		DZE_refundArray[] = {};
	};	
};

class DZE_Safe2Broken: DZE_SafeBroken {
	displayName = "$STR_EPOCH_SAFE_BROKEN+";
	armor = 1600;
	transportMaxMagazines = 400;
	transportMaxWeapons = 50;
	transportMaxBackpacks = 20;
	
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
	
	//	Broken Tall Safe has always open door
	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 0;
			initPhase = 1;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 0;
			initPhase = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemSafeTallBroken";
		DZE_refundArray[] = {};
	};
};
