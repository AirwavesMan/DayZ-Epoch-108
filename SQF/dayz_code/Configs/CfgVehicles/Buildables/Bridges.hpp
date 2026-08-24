class DZE_Metal_Drawbridge: DZE_CinderWallDoor_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\draw_bridge\wood_draw_bridge.p3d";
	displayName = $STR_EPOCH_METALDRAWBRIDGE;
	//GhostPreview = "DZE_Drawbridge_Preview";
	DZE_offset[] = {0,2.5,0};
	DZE_allowRotation = 0;
	upgradeBuilding[] = {"DZE_Metal_DrawbridgeLocked",{},{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_inner {
			source = "user";
			animPeriod = 4;
			initPhase = 1;
		};

		class Open_outer {
			source = "user";
			animPeriod = 4;
			initPhase = 1;
		};
	};

	class UserActions {
		class Raise_Bridge {
			displayName = $STR_EPOCH_ACTION_RAISE_BRIDGE;
			onlyforplayer = true;
			position = "action";
			radius = 7;
			condition = "this animationPhase ""Open_inner"" < 0.5";
			statement = "this animate [""Open_inner"", 1];this animate [""Open_outer"", 1];";
		};

		class Lower_Bridge: Raise_Bridge {
			displayName = $STR_EPOCH_ACTION_LOWER_BRIDGE;
			condition = "this animationPhase ""Open_inner"" >= 0.5";
			statement = "this animate [""Open_inner"", 0];this animate [""Open_outer"", 0];";
		};
	};
};

class DZE_Metal_DrawbridgeLocked: DZE_CinderWallDoorLocked_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\wood\draw_bridge\wood_draw_bridge_locked.p3d";
	displayName = $STR_EPOCH_METALDRAWBRIDGELOCKED;
	//GhostPreview = "DZE_Drawbridge_Preview";
	DZE_offset[] = {0,2.5,0};
	DZE_allowRotation = 0;
	downgradeBuilding[] = {"DZE_Metal_Drawbridge",{{"ItemComboLock",1}}};

	class AnimationSources {
		class Open_inner {
			source = "user";
			animPeriod = 4;
			initPhase = 1;
		};

		class Open_outer {
			source = "user";
			animPeriod = 4;
			initPhase = 1;
		};

		class Open_latch {
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class UserActions {
		class Raise_Bridge {
			displayName = $STR_EPOCH_ACTION_RAISE_BRIDGE;
			onlyforplayer = true;
			position = "action";
			radius = 7;
			condition = "(this animationPhase ""Open_inner"" == 0) && (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_inner"", 1];this animate [""Open_outer"", 1];";
		};

		class Lower_Bridge: Raise_Bridge {
			displayName = $STR_EPOCH_ACTION_LOWER_BRIDGE;
			condition = "(this animationPhase ""Open_inner"" == 1) && (this animationPhase ""Open_latch"" == 1)";
			statement = "this animate [""Open_inner"", 0];this animate [""Open_outer"", 0];";
		};

		class Lock_Door: Raise_Bridge {
			displayName = $STR_EPOCH_ACTION_LOCK_BRIDGE;
			condition = "(this animationPhase ""Open_outer"" == 1) and (this animationPhase ""Open_latch"" == 1)";
			statement = "PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate [""Open_latch"", 0]";
		};

		class Unlock_Door: Raise_Bridge {
			displayName = $STR_EPOCH_ACTION_UNLOCK_BRIDGE;
			condition = "(!keypadCancel and DZE_Lock_Door == (this getvariable['CharacterID','0'])) and (this animationPhase ""Open_outer"" == 1) and (this animationPhase ""Open_latch"" == 0)";
			statement = "this animate [""Open_latch"", 1];PVDZE_handleSafeGear = [player,this,5,DZE_Lock_Door];publicVariableServer ""PVDZE_handleSafeGear"";";
		};

		class Unlock_Door_Dialog: Raise_Bridge {
			displayName = $STR_EPOCH_ACTION_UNLOCK_BRIDGE;
			condition = "!keypadCancel and DZE_Lock_Door != (this getvariable['CharacterID','0'])";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};
	};
};

class DZE_SimpleFootbridge: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,4,0.05};
	useModelCenter = 1;
	model = "mbg_killhouses\m\MBG_Woodplanks.p3d";
	armor = 200;
	DZE_preventUnderground = 0;
	displayName = $STR_EQUIP_NAME_SIMPLE_FOOTBRIDGE;
	maintainBuilding[] = {{"ItemPlank",1}};
};

class DZE_WoodenFootbridge: DZE_Modular_Base {
	scope = 2;
	DZE_offset[] = {0,3.5,0};
	useModelCenter = 1;
	model = "ca\misc_acr\scaffoldingsmall\misc_crossing0st.p3d";
	armor = 200;
	DZE_preventUnderground = 0;
	displayName = $STR_EQUIP_NAME_WOODEN_FOOTBRIDGE;
	maintainBuilding[] = {{"ItemPlank",1}};
};
