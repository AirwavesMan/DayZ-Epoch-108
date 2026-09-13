///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_getDoorActionStates
//
//	Description:	Returns which actions are currently available for a door or gate.
//	Groups:		Build
//
//	Syntax:		[object, animations, lock animation] call DZE_fnc_getDoorActionStates
//
//	Parameters:	object: Object - Door or gate
//			animations: Array - Open and close animation source names
//			lock animation: String - Lock animation source name
//
//	Return Value:	Array - [open, close, lock, unlock, enter code]
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_GET_DOOR_ACTION_STATES

#ifdef DEBUG_DZE_FNC_GET_DOOR_ACTION_STATES
	diag_log format ['[Client Debug]: [DZE_fnc_getDoorActionStates]: Function called with arguments: %1',_this];
#endif

local _object = _this select 0;
local _animations = _this select 1;
local _lockAnimation = _this select 2;
local _type = typeOf _object;
local _doorPhase = _object animationPhase (_animations select 0);
local _isLegacyGate = _type in DZE_LockedGates;
local _isLockedDoor = _type in DZE_DoorsLocked;
local _doorCharacterID = _object getVariable ['CharacterID','0'];
local _knownDoorCode = DZE_Lock_Door == _doorCharacterID;
local _openAllowed = false;
local _closeAllowed = false;
local _lockAllowed = false;
local _unlockAllowed = false;
local _codeAllowed = false;

call {
	if (_isLegacyGate) exitWith {
		_lockAllowed = _doorPhase >= 0.7;
		_unlockAllowed = !keypadCancel && {_knownDoorCode} && {_doorPhase < 0.3};
		_codeAllowed = !keypadCancel && {!_knownDoorCode} && {_doorPhase == 0};
	};

	if (_isLockedDoor) exitWith {
		local _doorLockPhase = _object animationPhase _lockAnimation;
		local _doorClosed = [_object,_animations] call DZE_fnc_isDoorClosed;
		_openAllowed = _doorPhase == 0 && {_doorLockPhase == 1};
		_closeAllowed = _doorPhase == 1 && {_doorLockPhase == 1};
		_lockAllowed = _doorClosed && {_doorLockPhase == 1};
		_unlockAllowed = !keypadCancel && {_knownDoorCode} && {_doorClosed} && {_doorLockPhase == 0};
		_codeAllowed = !keypadCancel && {!_knownDoorCode};
	};

	if (_object isKindOf 'DZE_WoodGate') exitWith {
		_openAllowed = _doorPhase == 0;
		_closeAllowed = _doorPhase == 1;
	};

	_openAllowed = _doorPhase < 0.5;
	_closeAllowed = _doorPhase >= 0.5;
};

local _states = [_openAllowed,_closeAllowed,_lockAllowed,_unlockAllowed,_codeAllowed];

#ifdef DEBUG_DZE_FNC_GET_DOOR_ACTION_STATES
	diag_log format ['[Client Debug]: [DZE_fnc_getDoorActionStates]: Object: %1 | States: %2',_type,_states];
#endif

_states
