///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_doorAction
//
//	Description:	Executes a door action created by fn_selfActions.
//	Groups:		Build
//
//	Syntax:		addAction arguments call DZE_fnc_doorAction
//
//	Parameters:	arguments: Array - [object, action, animations, lock animation, legacy gate]
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_DOOR_ACTION

#ifdef DEBUG_DZE_FNC_DOOR_ACTION
	diag_log format ['[Client Debug]: [DZE_fnc_doorAction]: Function called with arguments: %1',_this];
#endif

local _arguments = _this select 3;
local _object = _arguments select 0;
local _action = _arguments select 1;
local _animations = _arguments select 2;
local _lockAnimation = _arguments select 3;
local _isLegacyGate = _arguments select 4;

if (isNull _object) exitWith {};

call {
	if (_action == 'OPEN') exitWith {
		{_object animate [_x,1]} count _animations;
	};

	if (_action == 'CLOSE') exitWith {
		{_object animate [_x,0]} count _animations;
	};

	if (_action == 'LOCK') exitWith {
		if (_isLegacyGate) then {[_object,'combo_locked',0,false] spawn dayz_zombieSpeak;};

		PVDZE_lockUnlockDoor = [netID player,netID _object,2,'',dayz_authKey];
		publicVariableServer 'PVDZE_lockUnlockDoor';

		if (_isLegacyGate) then {
			{_object animate [_x,0]} count _animations;
		} else {
			_object animate [_lockAnimation,0];
		};
	};

	if (_action == 'UNLOCK') exitWith {
		if (_isLegacyGate) then {
			[_object,'combo_unlock',0,false] spawn dayz_zombieSpeak;
			{_object animate [_x,1]} count _animations;
		} else {
			_object animate [_lockAnimation,1];
		};

		PVDZE_lockUnlockDoor = [netID player,netID _object,1,if (_isLegacyGate && {!isNil 'GateMethod'}) then {GateMethod} else {DZE_Lock_Door},dayz_authKey];
		publicVariableServer 'PVDZE_lockUnlockDoor';
	};

	if (_action == 'ENTER_CODE') exitWith {
		dayz_selectedDoor = _object;
		DZE_topCombo = 0;
		DZE_midCombo = 0;
		DZE_botCombo = 0;

		if (DZE_doorManagement) exitWith {createDialog 'DoorAccess';};
		if (DZE_doorManagementHarderPenalty && {dayz_lastCodeFail > diag_tickTime}) exitWith {
			format [localize 'STR_EPOCH_PLAYER_19_WAIT',round (dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;
		};

		createDialog 'ComboLockUI';
	};
};

#ifdef DEBUG_DZE_FNC_DOOR_ACTION
	diag_log format ['[Client Debug]: [DZE_fnc_doorAction]: Object: %1 | Action: %2 | Animations: %3',typeOf _object,_action,_animations];
#endif
