class DZE_WoodGate: DZE_Modular_Base {
	scope = 2;
	destrType = "DestructTree";
	DZE_offset[] = {0,1.5,0};
	model = "\ca\structures\Wall\Gate_wood2_5";
	displayName = "Wood Panel";
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class UserActions {
		class CloseDoor {
			position = "";
			displayName = "Close Door";
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "this animationPhase 'DoorR' == 1";
			statement = "this animate ['DoorR', 0];";
		};

		class OpenDoor {
			position = "";
			displayName = "Open Door";
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "this animationPhase 'DoorR' == 0";
			statement = "this animate ['DoorR', 1];";
		};
	};
};

class DZE_MetalGate: DZE_Building_Base {
	scope = 2;
	model = "\ca\structures\Wall\Wall_Gate_Ind1_L";
	armor = 400;
	destrType = "DestructTree";
	DZE_offset[] = {2,3,0};
	displayName = $STR_EPOCH_RUSTYGATE;
	removeoutput[] = {{"rusty_gate_kit",1}};
	actionBegin1 = "OpenDoors";
	actionEnd1 = "OpenDoors";

	class AnimationSources {
		class DoorL {
			source = "User";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class UserActions {
		class OpenDoors {
			displayNameDefault = "<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
			displayName = "Open door";
			position = "DoorL";
			radius = 10;
			onlyForPlayer = 0;
			condition = "this animationPhase ""DoorL"" < 0.5";
			statement = "this animate [""DoorL"", 1]";
		};

		class CloseDoors: OpenDoors {
			displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
			displayName = "Close door";
			condition = "this animationPhase ""DoorL"" >= 0.5";
			statement = "this animate [""DoorL"", 0]";
		};
	};
};

class DZE_WoodenGate_foundation: DZE_Modular_Base {
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_Foundation;
	model = "z\addons\dayz_buildings\models\gates\gate0_dzam.p3d";
	armor = 1000;
	mapSize = 8;
	DZE_offset[] = {0,4,0};
	upgradeBuilding[] = {"DZE_WoodenGate_1",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",8},{"equip_nails",1},{"ItemComboLock",1}}};
};

class DZE_WoodenGate_1: DZE_Building_Base {
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_1;
	model = "z\addons\dayz_buildings\models\gates\gate1_dzam.p3d";
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	DZE_offset[] = {0,4,0};
	armor = 2000;	
	upgradeBuilding[] = {"DZE_WoodenGate_2",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",10},{"equip_nails",1}}};
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};

		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};

	class UserActions {
		class Lock_Door {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "this animationPhase 'DoorR' >= 0.7";
			statement = "[this,'combo_locked',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 0];this animate ['DoorL', 0]";
		};

		class Unlock_Door {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel && DZE_Lock_Door == (this getvariable['CharacterID','0'])) && (this animationPhase 'DoorR' < 0.3)";
			statement = "[this,'combo_unlock',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,5,GateMethod];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 1];this animate ['DoorL', 1];";
		};

		class Unlock_Door_Dialog {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;	
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel && (DZE_Lock_Door != (this getvariable['CharacterID','0'])) && (this animationPhase ""DoorR"" == 0)";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};		
	};

	lockable = 3;
	removeoutput[] = {{"ItemComboLock",1}};
};

class DZE_WoodenGate_2: DZE_WoodenGate_1 {
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_2;
	model = "z\addons\dayz_buildings\models\gates\gate2_dzam.p3d";
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	DZE_offset[] = {0,4,0};
	armor = 2500;
	upgradeBuilding[] = {"DZE_WoodenGate_3",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",10},{"equip_nails",1}}};
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};

		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};

	class UserActions {
		class Lock_Door {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "this animationPhase 'DoorR' >= 0.7";
			statement = "[this,'combo_locked',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 0];this animate ['DoorL', 0]";
		};

		class Unlock_Door {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel && DZE_Lock_Door == (this getvariable['CharacterID','0'])) && (this animationPhase 'DoorR' < 0.3)";
			statement = "[this,'combo_unlock',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,5,GateMethod];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 1];this animate ['DoorL', 1];";
		};

		class Unlock_Door_Dialog {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;	
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel && (DZE_Lock_Door != (this getvariable['CharacterID','0'])) && (this animationPhase ""DoorR"" == 0)";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};		
	};
	
	lockable = 3;
	removeoutput[] = {{"ItemComboLock",1}};
};

class DZE_WoodenGate_3: DZE_WoodenGate_2 {
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_3;
	model = "z\addons\dayz_buildings\models\gates\gate3_dzam.p3d";
	armor = 3000;
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	DZE_offset[] = {0,4,0};
	upgradeBuilding[] = {"DZE_WoodenGate_4",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",10},{"equip_nails",1}}};
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};

		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};

	class UserActions {
		class Lock_Door {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "this animationPhase 'DoorR' >= 0.7";
			statement = "[this,'combo_locked',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 0];this animate ['DoorL', 0]";
		};

		class Unlock_Door {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel && DZE_Lock_Door == (this getvariable['CharacterID','0'])) && (this animationPhase 'DoorR' < 0.3)";
			statement = "[this,'combo_unlock',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,5,GateMethod];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 1];this animate ['DoorL', 1];";
		};

		class Unlock_Door_Dialog {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;	
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel && (DZE_Lock_Door != (this getvariable['CharacterID','0'])) && (this animationPhase ""DoorR"" == 0)";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};		
	};
	
	lockable = 3;
	removeoutput[] = {{"ItemComboLock",1}};
};

class DZE_WoodenGate_4: DZE_WoodenGate_3 {
	armor = 3500;
	scope = 2;
	displayName = $STR_BLD_name_WoodenGate_4;
	icon = "\ca\data\data\Unknown_object.paa";	
	mapSize = 8;	
	DZE_offset[] = {0,4,0};
	model = "z\addons\dayz_buildings\models\gates\gate4_dzam.p3d";
	
	class AnimationSources {
		class DoorR {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};

		class DoorL {
			source = "User";
			animPeriod = 3;
			initPhase = 0;
		};
	};

	class UserActions {
		class Lock_Door {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_LOCKGATE;
			condition = "this animationPhase 'DoorR' >= 0.7";
			statement = "[this,'combo_locked',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,4];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 0];this animate ['DoorL', 0]";
		};

		class Unlock_Door {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;			
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "(!keypadCancel && DZE_Lock_Door == (this getvariable['CharacterID','0'])) && (this animationPhase 'DoorR' < 0.3)";
			statement = "[this,'combo_unlock',0,false] spawn dayz_zombieSpeak;PVDZE_handleSafeGear = [player,this,5,GateMethod];publicVariableServer ""PVDZE_handleSafeGear"";this animate ['DoorR', 1];this animate ['DoorL', 1];";
		};

		class Unlock_Door_Dialog {
			radius = 4;
			position = "Door";
			onlyForPlayer = 1;
			priority = 6;	
			displayName = $STR_BLD_ACTIONS_UNLOCKGATE;
			condition = "!keypadCancel && (DZE_Lock_Door != (this getvariable['CharacterID','0'])) && (this animationPhase ""DoorR"" == 0)";
			statement = "dayz_selectedDoor = this;DZE_topCombo = 0;DZE_midCombo = 0;DZE_botCombo = 0;if(DZE_doorManagement) then {createdialog 'DoorAccess';} else {if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) then {format [localize 'STR_EPOCH_PLAYER_19_WAIT',round(dayz_lastCodeFail - diag_tickTime)] call dayz_rollingMessages;} else {createdialog 'ComboLockUI';};};";
		};		
	};
	
	lockable = 3;
	removeoutput[] = {{"ItemComboLock",1}};
};
