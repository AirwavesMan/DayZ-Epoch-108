class DZE_CinderWallHalf: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\cinder_wall_half.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_CINDERBLOCKWALL_HALF;
	upgradeBuilding[] = {"DZE_CinderWall",{"ItemToolbox"},{{"CinderBlocks",4},{"MortarBucket",1}}};
	//GhostPreview = "DZE_CinderWallHalf_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "half_cinder_wall_kit";
		DZE_refundArray[] = {{{"CinderBlocks",3},{"MortarBucket",1}}};
	};
};

class DZE_CinderWallHalf_Gap: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\cinder_wall_half2.p3d";
	armor = 2200;
	displayName = $STR_EPOCH_CINDERBLOCKWALL_HALF_GAP;
	upgradeBuilding[] = {"DZE_CinderWall",{"ItemToolbox"},{{"CinderBlocks",4},{"MortarBucket",1}}};
	//GhostPreview = "DZE_CinderWallHalf_Gap_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "half_cinder_wall_gap_kit";
		DZE_refundArray[] = {{{"CinderBlocks",3},{"MortarBucket",1}}};
	};
};

class DZE_CinderWall: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\cinder_wall_full.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_CINDERBLOCKWALL;
	//GhostPreview = "DZE_CinderWall_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "full_cinder_wall_kit";
		DZE_refundArray[] = {{{"CinderBlocks",7},{"MortarBucket",2}}};
	};
};

class DZE_CinderWallWindow: DZE_ModularDoor_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	armor = 3400;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_wall_win\h4_cinder_wall_win.p3d";
	displayName = $STR_EPOCH_CINDERBLOCKWALLWINDOW;
	//GhostPreview = "DZE_CinderWallWindow_Preview";
	upgradeBuilding[] = {"DZE_CinderWallWindowLocked",{},{{"ItemComboLock",1}}};

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

	class UserActions {
		class Open_Door {
			displayName = $STR_BLD_ACTIONS_OPEN_WINDOW;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_CLOSE_WINDOW;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};
	};

	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinderwall_window_kit";
		DZE_refundArray[] = {{{"CinderBlocks",5},{"MortarBucket",1},{"ItemTankTrap",1},{"ItemPole",1}}};
	};
};

class DZE_CinderWallWindowLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	armor = 3400;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_wall_win\h4_cinder_wall_win_locked.p3d";
	displayName = $STR_EPOCH_CINDERBLOCKWALLWINDOW_LOCKED;
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

	class UserActions {
		class Open_Door {
			displayName = $STR_BLD_ACTIONS_OPEN_WINDOW;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_CLOSE_WINDOW;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_LOCK_WINDOW;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_UNLOCK_WINDOW;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1]";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_BLD_ACTIONS_UNLOCK_WINDOW;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinderwall_window_locked_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderWallDoorway: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\steel_garage_frame.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_BLOCKGARAGEDOORWAY;
	upgradeBuilding[] = {"DZE_CinderWallDoor",{"ItemToolbox"},{{"ItemPole",3},{"ItemTankTrap",3}}};
	//GhostPreview = "DZE_CinderWallDoorway_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_frame_kit";
		DZE_refundArray[] = {{{"CinderBlocks",3},{"MortarBucket",1},{"ItemTankTrap",1}}};
	};
};

class DZE_CinderWallSmallDoorway: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch\models\Steel_door_frame.p3d";
	armor = 3400;
	displayName = $STR_EPOCH_BLOCKDOORWAY;
	upgradeBuilding[] = {"DZE_CinderWallDoorSmall",{"ItemToolbox"},{{"ItemPole",1},{"ItemTankTrap",1}}};
	//GhostPreview = "DZE_CinderWallSmallDoorway_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_door_frame_kit";
		DZE_refundArray[] = {{{"CinderBlocks",4},{"MortarBucket",1},{"ItemTankTrap",1}}};
	};
};

class DZE_CinderGateFrame: DZE_Modular_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_high_garage\high_steel_garage_frame.p3d";
	armor = 4000;
	displayName = $STR_EPOCH_CINDERGATEFRAME;
	upgradeBuilding[] = {"DZE_CinderGate",{"ItemToolbox"},{{"equip_metal_sheet",6},{"ItemRSJ",2},{"ItemScrews",2}}};
	//GhostPreview = "DZE_CinderGate_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_gate_frame_kit";
		DZE_refundArray[] = {{{"CinderBlocks",8},{"MortarBucket",4}}};
	};
};

class DZE_CinderGarageOpenTopFrame: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\cinder\CinderGaragenotop\cindergarage_notop_frame.p3d";
	armor = 3000;
	displayName = $STR_EPOCH_CINDEROPENTOPGARAGEFRAME;
	upgradeBuilding[] = {"DZE_CinderGarageOpenTop",{"ItemToolbox"},{{"ItemPole",3},{"ItemTankTrap",3}}};
	//GhostPreview = "DZE_CinderGarageOpenTop_Preview";
	class DestructionEffects: DestructionEffects {
		class Ruin1 {
			simulation = "ruin";
			type = "\z\addons\dayz_epoch\models\wreck_cinder.p3d";
			position = "";
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_top_open_frame_kit";
		DZE_refundArray[] = {{{"CinderBlocks",4},{"MortarBucket",1}}};
	};
};

class DZE_Concrete_Bunker: DZE_CinderWallDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\bunker\bunker_01.p3d";
	DZE_offset[] = {0,4,0};
	displayName = $STR_EPOCH_CINDERBUNKER;
	upgradeBuilding[] = {"DZE_Concrete_Bunker_Locked",{},{{"ItemComboLock",1}}};
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

	class UserActions {
		class Open_Door {
			displayName = $STR_BLD_ACTIONS_OPEN_BUNKER;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""raise_all"" < 0.5)";
			statement = "this animate [""raise_all"", 1];this animate [""rollers"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_CLOSE_BUNKER;
			condition = "(this animationPhase ""raise_all"" >= 0.5)";
			statement = "this animate [""raise_all"", 0];this animate [""rollers"", 0];";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_bunker_kit";
		DZE_refundArray[] = {{{"full_cinder_wall_kit",3},{"ItemConcreteBlock",5},{"equip_metal_sheet",3},{"ItemScrews",1}}};
	};
};

class DZE_Concrete_Bunker_Locked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\bunker\bunker_01_locked.p3d";
	DZE_offset[] = {0,4,0};
	displayName = $STR_EPOCH_CINDERBUNKERLOCKED;
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

	class UserActions {
		class Open_Door {
			displayName = $STR_BLD_ACTIONS_OPEN_BUNKER;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""raise_all"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""raise_all"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_CLOSE_BUNKER;
			condition = "(this animationPhase ""raise_all"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""raise_all"", 0];";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_LOCK_BUNKER;
			condition = "(this animationPhase ""raise_all"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_UNLOCK_BUNKER;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""raise_all"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1]";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_BLD_ACTIONS_UNLOCK_BUNKER;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_bunker_kit_locked";
		DZE_refundArray[] = {};
	};
};
