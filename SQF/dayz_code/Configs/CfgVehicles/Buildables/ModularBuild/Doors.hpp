class DZE_ModularDoor_Base: DZE_Modular_Base {
	vehicleClass = "DayZ Epoch 1071 Modular Door";
};

class DZE_Land_WoodDoor_Base: DZE_ModularDoor_Base {
	model = "\z\addons\dayz_epoch\models\small_wall_door_anim.p3d";
	/* path to the object */
	displayName = "Wood Door Base";
	/* entry in Stringtable.xml */
	nameSound = "";
	mapSize = 8;
	/* Size of the icon */
	icon = "\ca\data\data\Unknown_object.paa";
	/* Path to the picture shown in the editor. */
	accuracy = 1000;
	armor = 2500;
	/* "Lifepoints", if you like to call it that way.*/
	DZE_offset[] = {0,1.5,0};

	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
};

class DZE_Land_WoodDoorLocked_Base: DZE_ModularDoor_Base {
	model = "\z\addons\dayz_epoch\models\small_wall_door_anim.p3d";
	displayName = "Wood Door Base";
	nameSound = "";
	mapSize = 8;
	accuracy = 1000;
	armor = 2500;
	DZE_offset[] = {0,1.5,0};

	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Frame";
	lockable = 3;
};

class DZE_CinderWallDoor_Base: DZE_ModularDoor_Base {
	model = "\z\addons\dayz_epoch\models\steel_garage_door.p3d";
	displayName = "Block Garage Door Base";
	nameSound = "";
	mapSize = 8;
	accuracy = 1000;
	armor = 4000;
	DZE_offset[] = {0,1.5,0};

	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
};

class DZE_CinderWallDoorLocked_Base: DZE_ModularDoor_Base {
	model = "\z\addons\dayz_epoch\models\steel_garage_door.p3d";
	displayName = "Block Garage Door Base";
	nameSound = "";
	mapSize = 8;
	accuracy = 1000;
	armor = 4000;
	DZE_offset[] = {0,1.5,0};
	lockable = 3;
	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
};

class DZE_Land_WoodDoor: DZE_Land_WoodDoor_Base {
	scope = 2;
	displayName = $STR_EPOCH_WALLWITHDOOR;
	//GhostPreview = "DZE_WoodDoor_Preview";
	upgradeBuilding[] = {"DZE_Land_WoodDoorLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class UserActions {
		class Open_Door {
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0];";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWithDoor";
		DZE_refundArray[] = {{{"ItemWoodWallDoor",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	};
};

class DZE_Land_WoodDoorLocked: DZE_Land_WoodDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\small_wall_door_locked_anim.p3d";
	displayName = $STR_EPOCH_WALLWITHDOORLOCKED;
	//GhostPreview = "DZE_WoodDoor_Preview";
	downgradeBuilding[] = {"DZE_Land_WoodDoor",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_hinge {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class UserActions {
		class Open_Door {
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 0]";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_hinge"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement = "this animate [""Open_hinge"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWithDoorLocked";
		DZE_refundArray[] = {};
	};
};

class DZE_Land_LargeWoodDoor: DZE_Land_WoodDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\large_wall_door_anim.p3d";
	displayName = $STR_EPOCH_LARGEWALLWITHDOOR;
	//GhostPreview = "DZE_LargeWoodDoor_Preview";
	upgradeBuilding[] = {"DZE_Land_LargeWoodDoorLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class UserActions {
		class Open_Door {
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0]";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWithDoorLg";
		DZE_refundArray[] = {{{"ItemWoodWallDoorLg",1},{"PartWoodPlywood",1},{"PartWoodLumber",1}}};
	};
};

class DZE_Land_LargeWoodDoorLocked: DZE_Land_WoodDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\large_wall_door_locked_anim.p3d";
	displayName = $STR_EPOCH_LARGEWALLWITHDOORLOCKED;
	//GhostPreview = "DZE_LargeWoodDoor_Preview";
	downgradeBuilding[] = {"DZE_Land_LargeWoodDoor",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_hinge {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class UserActions {
		class Open_Door {
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 0]";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_hinge"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement = "this animate [""Open_hinge"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallWithDoorLgLocked";
		DZE_refundArray[] = {};
	};
};

class DZE_Land_GarageWoodDoor: DZE_Land_WoodDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\Garage_door_anim.p3d";
	displayName = $STR_EPOCH_WOODGARAGEDOOR;
	//GhostPreview = "DZE_GarageWoodDoor_Preview";
	upgradeBuilding[] = {"DZE_Land_GarageWoodDoorLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class UserActions {
		class Open_Door {
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0]";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallGarageDoor";
		DZE_refundArray[] = {{{"ItemWoodWallLg",1},{"PartWoodLumber",2}}};
	};
};

class DZE_Land_GarageWoodDoorLocked: DZE_Land_WoodDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\Garage_door_locked_anim.p3d";
	displayName = $STR_EPOCH_WOODGARAGEDOORLOCKED;
	//GhostPreview = "DZE_GarageWoodDoor_Preview";
	downgradeBuilding[] = {"DZE_Land_GarageWoodDoor",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class Open_hinge {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class UserActions {
		class Open_Door {
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "this animate [""Open_door"", 0]";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_hinge"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_hinge"" == 0)";
			statement = "this animate [""Open_hinge"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodWallGarageDoorLocked";
		DZE_refundArray[] = {};
	};
};

class DZE_Land_WoodGate: DZE_Land_WoodDoor_Base {
	scope = 2;
	armor = 3200;
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage.p3d";
	displayName = $STR_EPOCH_WOODGATE;
	//GhostPreview = "DZE_WoodGate_Preview";
	upgradeBuilding[] = {"DZE_Land_WoodGateLocked",{},{{"ItemComboLock",1}}};

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
			displayName = $STR_BLD_ACTIONS_OPEN_GATE;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_CLOSE_GATE;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};
	};
	

	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodGate";
		DZE_refundArray[] = {{{"ItemWoodGateFrame",1},{"PartWoodPlywood",8},{"PartWoodLumber",2},{"equip_nails",1}}};
	};
};

class DZE_Land_WoodGateLocked: DZE_Land_WoodDoorLocked_Base {
	scope = 2;
	armor = 3200;
	model = "\z\addons\dayz_epoch_v\base_building\wood\high_wood_garage\high_wood_garage_locked.p3d";
	displayName = $STR_EPOCH_WOODGATELOCKED;
	//GhostPreview = "DZE_WoodGate_Preview";
	downgradeBuilding[] = {"DZE_Land_WoodGate",{{"ItemComboLock",1}}};

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
			displayName = $STR_BLD_ACTIONS_OPEN_GATE;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_CLOSE_GATE;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	

	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodGateLocked";
		DZE_refundArray[] = {};
	};
};

class DZE_Land_WoodOpenTopGarageDoor: DZE_Land_WoodDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\garage_notop\wood_garage_notop.p3d";
	displayName = $STR_EPOCH_WOODOPENTOPGARAGEDOOR;
	//GhostPreview = "DZE_Wood_GarageOpenTop_Preview";
	upgradeBuilding[] = {"DZE_Land_WoodOpenTopGarageLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class doorl {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class UserActions {
		class Open_Door {
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""doorl"" < 0.5";
			statement = "this animate [""doorl"", 1];this animate [""doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""doorl"" >= 0.5";
			statement = "this animate [""doorl"", 0];this animate [""doorR"", 0];";
		};
	};
	

	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodOpenTopGarageDoor";
		DZE_refundArray[] = {{{"ItemWoodWallLg",1},{"PartWoodLumber",2}}};
	};
};

class DZE_Land_WoodOpenTopGarageLocked: DZE_Land_WoodDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\garage_notop\locked_wood_garage_notop.p3d";
	displayName = $STR_EPOCH_WOODOPENTOPGARAGEDOORLOCKED;
	//GhostPreview = "DZE_Wood_GarageOpenTop_Preview";
	downgradeBuilding[] = {"DZE_Land_WoodOpenTopGarageDoor",{{"ItemComboLock",1}}};

	class AnimationSources {
		class doorl {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class doorR {
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
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""doorl"", 1];this animate [""doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""doorl"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""doorl"", 0];this animate [""doorR"", 0];";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	

	DZE_destroyedRuin = "DZE_Land_Wood_Wreck_Third";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodOpenTopGarageDoorLocked";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderWallDoorLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\steel_garage_locked.p3d";
	displayName = $STR_EPOCH_BLOCKGARAGEDOORLOCKED;
	//GhostPreview = "DZE_CinderWallDoorway_Preview";
	downgradeBuilding[] = {"DZE_CinderWallDoor",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
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
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0]";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_kit_locked";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderWallDoor: DZE_CinderWallDoor_Base {
	scope = 2;
	displayName = $STR_EPOCH_BLOCKGARAGEDOOR;
	//GhostPreview = "DZE_CinderWallDoorway_Preview";
	upgradeBuilding[] = {"DZE_CinderWallDoorLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class UserActions {
		class Open_Door {
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0]";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_kit";
		DZE_refundArray[] = {{{"cinder_garage_frame_kit",1},{"ItemTankTrap",3},{"ItemPole",3}}};
	};
};

class DZE_CinderWallDoorSmallLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\Steel_door_locked.p3d";
	displayName = $STR_EPOCH_BLOCKDOORLOCKED;
	//GhostPreview = "DZE_CinderWallSmallDoorway_Preview";
	downgradeBuilding[] = {"DZE_CinderWallDoorSmall",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
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
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0]";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_door_kit_locked";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderWallDoorSmall: DZE_CinderWallDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\Steel_door.p3d";
	displayName = $STR_EPOCH_BLOCKDOOR;
	//GhostPreview = "DZE_CinderWallSmallDoorway_Preview";
	upgradeBuilding[] = {"DZE_CinderWallDoorSmallLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class UserActions {
		class Open_Door {
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0]";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_door_kit";
		DZE_refundArray[] = {{{"cinder_door_frame_kit",1},{"ItemTankTrap",1},{"ItemPole",1}}};
	};
};

class DZE_CinderGate: DZE_CinderWallDoor_Base {
	scope = 2;
	armor = 4600;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_high_garage\high_steel_garage_door.p3d";
	displayName = $STR_EPOCH_CINDERGATE;
	//GhostPreview = "DZE_CinderGate_Preview";
	upgradeBuilding[] = {"DZE_CinderGateLocked",{},{{"ItemComboLock",1}}};

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
			displayName = $STR_BLD_ACTIONS_OPEN_GATE;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_CLOSE_GATE;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_gate_kit";
		DZE_refundArray[] = {{{"cinder_gate_frame_kit",1},{"equip_metal_sheet",6},{"ItemRSJ",2},{"ItemScrews",2}}};
	};
};

class DZE_CinderGateLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	armor = 4600;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_high_garage\high_steel_garage_locked.p3d";
	displayName = $STR_EPOCH_CINDERGATELOCKED;
	//GhostPreview = "DZE_CinderGate_Preview";
	downgradeBuilding[] = {"DZE_CinderGate",{{"ItemComboLock",1}}};

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
			displayName = $STR_BLD_ACTIONS_OPEN_GATE;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_CLOSE_GATE;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_gate_kit_locked";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderGarageOpenTop: DZE_CinderWallDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\CinderGaragenotop\cindergarage_notop.p3d";
	displayName = $STR_EPOCH_CINDEROPENTOPGARAGEDOOR;
	//GhostPreview = "DZE_CinderGarageOpenTop_Preview";
	upgradeBuilding[] = {"DZE_CinderGarageOpenTopLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class doorl {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class doorR {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class UserActions {
		class Open_Door {
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""doorl"" < 0.5";
			statement = "this animate [""doorl"", 1];this animate [""doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""doorl"" >= 0.5";
			statement = "this animate [""doorl"", 0];this animate [""doorR"", 0];";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_top_open_kit";
		DZE_refundArray[] = {{{"cinder_garage_top_open_frame_kit",1},{"ItemTankTrap",3},{"ItemPole",3}}};
	};
};

class DZE_CinderGarageOpenTopLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\CinderGaragenotop\locked_cindergarage_notop.p3d";
	displayName = $STR_EPOCH_CINDEROPENTOPGARAGEDOORLOCKED;
	//GhostPreview = "DZE_CinderGarageOpenTop_Preview";
	downgradeBuilding[] = {"DZE_CinderGarageOpenTop",{{"ItemComboLock",1}}};

	class AnimationSources {
		class doorl {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};

		class doorR {
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
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""doorl"", 1];this animate [""doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""doorl"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""doorl"", 0];this animate [""doorR"", 0];";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""doorl"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_garage_top_open_kit_locked";
		DZE_refundArray[] = {};
	};
};

class DZE_CinderDoorHatch: DZE_CinderWallDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_door_window\cinderdoor_hatch.p3d";
	displayName = $STR_EPOCH_BLOCKDOOR_HATCH;
	//GhostPreview = "DZE_CinderDoorHatch_Preview";
	upgradeBuilding[] = {"DZE_CinderDoorHatchLocked",{},{{"ItemComboLock",1}}};

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
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_door_hatch_kit";
		DZE_refundArray[] = {{{"CinderBlocks",4},{"MortarBucket",1},{"ItemTankTrap",2},{"ItemPole",1}}};
	};
};

class DZE_CinderDoorHatchLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\cinder\cinder_door_window\cinder_door_hatch_locked.p3d";
	displayName = $STR_EPOCH_BLOCKDOORLOCKED_HATCH;
	//GhostPreview = "DZE_CinderDoorHatch_Preview";
	downgradeBuilding[] = {"DZE_CinderDoorHatch",{{"ItemComboLock",1}}};

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
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1];this animate [""Open_doorR"", 1];";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0];this animate [""Open_doorR"", 0];";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1]";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cinder_door_hatch_kit_locked";
		DZE_refundArray[] = {};
	};
};

class DZE_Door: DZE_CinderWallDoor_Base {
	scope = 2;
	armor = 1200;
	model = "\z\addons\dayz_epoch\models\Steel_door_single.p3d";
	displayName = $STR_EPOCH_DOOR;
	//GhostPreview = "DZE_DoorFrame_Preview";
	upgradeBuilding[] = {"DZE_DoorLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
			source = "user";
			animPeriod = 4;
			initPhase = 0;
		};
	};

	class UserActions {
		class Open_Door {
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "this animationPhase ""Open_door"" < 0.5";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "this animationPhase ""Open_door"" >= 0.5";
			statement = "this animate [""Open_door"", 0]";
		};
	};

	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "door_kit";
		DZE_refundArray[] = {{{"door_frame_kit",1},{"ItemTankTrap",1},{"ItemPole",1}}};
	};
};

class DZE_DoorLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	armor = 1200;
	model = "\z\addons\dayz_epoch\models\Steel_door_locked_single.p3d";
	displayName = $STR_EPOCH_DOORLOCKED;
	//GhostPreview = "DZE_DoorFrame_Preview";
	downgradeBuilding[] = {"DZE_Door",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_door {
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
			displayName = $STR_DN_OUT_O_DOOR;
			onlyforplayer = true;
			position = "action";
			radius = 3;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 1]";
		};

		class Close_Door: Open_Door {
			displayName = $STR_DN_OUT_C_DOOR;
			condition = "(this animationPhase ""Open_door"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_door"", 0]";
		};

		class Lock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_LOCK;
			condition = "(this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};

		class Unlock_Door: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_door"" == 0) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};

		class Unlock_Door_Dialog: Open_Door {
			displayName = $STR_EPOCH_DOORS_UNLOCK;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};

	DZE_destroyedRuin = "DZE_Land_Wreck_Cinder";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "door_locked_kit";
		DZE_refundArray[] = {};
	};
};

/*
	Vanilla DayZ buildables are defined in \dayz_buildings\configs\
	Only included here to overwrite vanilla ItemPadlock with Epoch ItemComboLock
*/
class WoodenGate_Base;
class WoodenGate_1: WoodenGate_Base {
	class Upgrade {
		//to next stage
		requiredTools[] = {"ItemEtool","ItemToolbox"};
		requiredParts[] = {"ItemLog","ItemComboLock"};
		create = "WoodenGate_2";
	};

	class Disassembly {
		requiredTools[] = {"ItemToolbox"};
	};
};
