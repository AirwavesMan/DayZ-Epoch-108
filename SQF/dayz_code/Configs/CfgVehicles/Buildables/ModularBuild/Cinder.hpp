class DZE_CinderWallHalf: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBLOCKWALL_HALF";
	model = "\z\addons\dayz_epoch\models\cinder_wall_half.p3d";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	DZE_offset[] = {0,2,0};
	armor = 2200;
	DZE_upgradeBuilding[] = {"DZE_CinderWall",{"DZE_Tool_Toolbox"},{{"CinderBlocks",4},{"MortarBucket",1}}};
	//GhostPreview = "DZE_CinderWallHalf_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "half_cinder_wall_kit";
		DZE_refundArray[] = {{{"CinderBlocks",3},{"MortarBucket",1}}};
	};
};

class DZE_CinderWallHalf_Gap: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBLOCKWALL_HALF_GAP";
	model = "\z\addons\dayz_epoch\models\cinder_wall_half2.p3d";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	DZE_offset[] = {0,2,0};
	armor = 2200;
	DZE_upgradeBuilding[] = {"DZE_CinderWall",{"DZE_Tool_Toolbox"},{{"CinderBlocks",4},{"MortarBucket",1}}};
	//GhostPreview = "DZE_CinderWallHalf_Gap_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "half_cinder_wall_gap_kit";
		DZE_refundArray[] = {{{"CinderBlocks",3},{"MortarBucket",1}}};
	};
};

class DZE_CinderWall: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBLOCKWALL";
	model = "\z\addons\dayz_epoch\models\cinder_wall_full.p3d";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	DZE_offset[] = {0,2,0};
	armor = 3400;
	//GhostPreview = "DZE_CinderWall_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "full_cinder_wall_kit";
		DZE_refundArray[] = {{{"CinderBlocks",7},{"MortarBucket",2}}};
	};
};

class DZE_CinderWallWindow: DZE_ModularDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBLOCKWALLWINDOW";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_wall_win\h4_cinder_wall_win.p3d";
	DZE_doorOpenText = "$STR_BLD_ACTIONS_OPEN_WINDOW";
	DZE_doorCloseText = "$STR_BLD_ACTIONS_CLOSE_WINDOW";
	DZE_doorLockText = "$STR_BLD_ACTIONS_LOCK_WINDOW";
	DZE_doorUnlockText = "$STR_BLD_ACTIONS_UNLOCK_WINDOW";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	DZE_offset[] = {0,2,0};
	armor = 3400;
	//GhostPreview = "DZE_CinderWallWindow_Preview";
	DZE_upgradeBuilding[] = {"DZE_CinderWallWindowLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};


	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinderwall_window_kit";
		DZE_refundArray[] = {{{"CinderBlocks",5},{"MortarBucket",1},{"ItemTankTrap",1},{"ItemPole",1}}};
	};
};

class DZE_CinderWallWindowLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBLOCKWALLWINDOW_LOCKED";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_wall_win\h4_cinder_wall_win_locked.p3d";
	DZE_doorOpenText = "$STR_BLD_ACTIONS_OPEN_WINDOW";
	DZE_doorCloseText = "$STR_BLD_ACTIONS_CLOSE_WINDOW";
	DZE_doorLockText = "$STR_BLD_ACTIONS_LOCK_WINDOW";
	DZE_doorUnlockText = "$STR_BLD_ACTIONS_UNLOCK_WINDOW";
	DZE_offset[] = {0,2,0};
	armor = 3400;
	//GhostPreview = "DZE_CinderWallWindow_Preview";
	downgradeBuilding[] = {"DZE_CinderWallWindow",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinderwall_window_locked_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderWallDoorway: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKGARAGEDOORWAY";
	model = "\z\addons\dayz_epoch\models\steel_garage_frame.p3d";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	DZE_offset[] = {0,2,0};
	armor = 3400;
	DZE_upgradeBuilding[] = {"DZE_CinderWallDoor",{"DZE_Tool_Toolbox"},{{"ItemPole",3},{"ItemTankTrap",3}}};
	//GhostPreview = "DZE_CinderWallDoorway_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_frame_kit";
		DZE_refundArray[] = {{{"CinderBlocks",3},{"MortarBucket",1},{"ItemTankTrap",1}}};
	};
};

class DZE_CinderWallSmallDoorway: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_BLOCKDOORWAY";
	model = "\z\addons\dayz_epoch\models\Steel_door_frame.p3d";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	DZE_offset[] = {0,2,0};
	armor = 3400;
	DZE_upgradeBuilding[] = {"DZE_CinderWallDoorSmall",{"DZE_Tool_Toolbox"},{{"ItemPole",1},{"ItemTankTrap",1}}};
	//GhostPreview = "DZE_CinderWallSmallDoorway_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_door_frame_kit";
		DZE_refundArray[] = {{{"CinderBlocks",4},{"MortarBucket",1},{"ItemTankTrap",1}}};
	};
};

class DZE_CinderGateFrame: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERGATEFRAME";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_high_garage\high_steel_garage_frame.p3d";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	armor = 4000;
	DZE_upgradeBuilding[] = {"DZE_CinderGate",{"DZE_Tool_Toolbox"},{{"equip_metal_sheet",6},{"ItemRSJ",2},{"ItemScrews",2}}};
	//GhostPreview = "DZE_CinderGate_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_gate_frame_kit";
		DZE_refundArray[] = {{{"CinderBlocks",8},{"MortarBucket",4}}};
	};
};

class DZE_CinderGarageOpenTopFrame: DZE_Modular_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDEROPENTOPGARAGEFRAME";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\CinderGaragenotop\cindergarage_notop_frame.p3d";
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	DZE_offset[] = {0,2,0};
	armor = 3000;
	DZE_upgradeBuilding[] = {"DZE_CinderGarageOpenTop",{"DZE_Tool_Toolbox"},{{"ItemPole",3},{"ItemTankTrap",3}}};
	//GhostPreview = "DZE_CinderGarageOpenTop_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_top_open_frame_kit";
		DZE_refundArray[] = {{{"CinderBlocks",4},{"MortarBucket",1}}};
	};
};

class DZE_Concrete_Bunker: DZE_CinderWallDoor_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBUNKER";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\bunker\bunker_01.p3d";
	DZE_doorOpenText = "$STR_BLD_ACTIONS_OPEN_BUNKER";
	DZE_doorCloseText = "$STR_BLD_ACTIONS_CLOSE_BUNKER";
	DZE_doorLockText = "$STR_BLD_ACTIONS_LOCK_BUNKER";
	DZE_doorUnlockText = "$STR_BLD_ACTIONS_UNLOCK_BUNKER";
	DZE_offset[] = {0,4,0};
	DZE_upgradeBuilding[] = {"DZE_Concrete_Bunker_Locked",{},{{"ItemComboLock",1}}};
	//GhostPreview = "DZE_Concrete_Bunker_Preview";
	class AnimationSources {
		class raise_all {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class rollers {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_bunker_kit";
		DZE_refundArray[] = {{{"full_cinder_wall_kit",3},{"ItemConcreteBlock",5},{"equip_metal_sheet",3},{"ItemScrews",1}}};
	};
};

class DZE_Concrete_Bunker_Locked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBUNKERLOCKED";
	model = "\z\addons\dayz_epoch_v\base_building\cinder\bunker\bunker_01_locked.p3d";
	DZE_doorOpenText = "$STR_BLD_ACTIONS_OPEN_BUNKER";
	DZE_doorCloseText = "$STR_BLD_ACTIONS_CLOSE_BUNKER";
	DZE_doorLockText = "$STR_BLD_ACTIONS_LOCK_BUNKER";
	DZE_doorUnlockText = "$STR_BLD_ACTIONS_UNLOCK_BUNKER";
	DZE_offset[] = {0,4,0};
	//GhostPreview = "DZE_Concrete_Bunker_Preview";
	downgradeBuilding[] = {"DZE_Concrete_Bunker",{{"ItemComboLock",1}}};

	class AnimationSources {
		class raise_all {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class rollers {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_bunker_kit_locked";
		DZE_refundArray[] = {};
	};
};
