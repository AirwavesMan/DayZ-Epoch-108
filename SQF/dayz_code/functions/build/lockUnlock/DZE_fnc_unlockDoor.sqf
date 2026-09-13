///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_unlockDoor
//
//	Description:	Validates door access and unlocks the selected door.
//	Groups:		Build
//
//	Syntax:		door call DZE_fnc_unlockDoor
//
//	Parameters:	door: Object - Locked door or gate selected for unlocking
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
//	Based on DayZ Epoch player_unlockDoor by vbawol@veteranbastards.com.
//	Includes Zupa's DoorManagement changes.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_UNLOCK_DOOR

#ifdef DEBUG_DZE_FNC_UNLOCK_DOOR
	diag_log format ['[Client Debug]: [DZE_fnc_unlockDoor]: Function called with arguments: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'str_epoch_player_21' call DZE_fnc_rollingMessages;};
dayz_actionInProgress = true;

local _object = _this;
local _displayCombo = findDisplay 41144;
local _displayEye = findDisplay 61144;
local _isEye = isNull _displayCombo && {!isNull _displayEye};
local _display = [_displayCombo,_displayEye] select _isEye;
local _objectType = typeOf _object;

call {
	if (isNull _object || {!alive _object} || {!(_objectType in DZE_DoorsLocked)}) exitWith {};

	if (_object call dze_isnearest_player) exitWith {
		localize 'STR_EPOCH_ACTIONS_16' call DZE_fnc_rollingMessages;
	};

	local _actualCode = _object getVariable ['CharacterID','0'];

	if (DZE_doorManagement) then {
		local _hasAccess = [player,_object] call DZE_fnc_checkAccess;
		if ((_hasAccess select 0) || {(_hasAccess select 2)} || {(_hasAccess select 3)} || {(_hasAccess select 4)} || {(_hasAccess select 5)}) then {
			DZE_Lock_Door = _actualCode;
		};
	};

	if (isNil 'dayz_UnlockTime') then {dayz_UnlockTime = 5;};
	if (DZE_doorManagementHarderPenalty && (diag_tickTime - dayz_lastCodeFail + dayz_UnlockTime / 2) > 120) then {dayz_UnlockTime = 5;};

	if (DZE_Lock_Door == _actualCode) exitWith {
		local _code = if (_isEye) then {format ['%1 - EYESCAN',_actualCode]} else {DZE_Lock_Door};
		local _isLegacyGate = _objectType in DZE_LockedGates;

		if (_isLegacyGate) then {
			GateMethod = _code;
		} else {
			[player,'combo_unlock',0,false] call dayz_zombieSpeak;

			local _doorActionData = _object getVariable ['DZE_doorActionData',[]];
			local _lockAnimation = _doorActionData select 1;
			_object animate [_lockAnimation,1];

			PVDZE_lockUnlockDoor = [netID player,netID _object,1,_code,dayz_authKey];
			publicVariableServer 'PVDZE_lockUnlockDoor';
		};

		if (_isEye) then {localize 'STR_EPOCH_DOORACCESS_SUCCESS' call DZE_fnc_rollingMessages;};
		dayz_UnlockTime = 5;
		dayz_lastCodeFail = 0;
	};

	PVDZE_lockUnlockDoor = [netID player,netID _object,0,if (_isEye) then {'EYESCAN'} else {DZE_Lock_Door},dayz_authKey];
	publicVariableServer 'PVDZE_lockUnlockDoor';

	DZE_Lock_Door = '';
	[player,getPosATL player,20,'combo_locked'] spawn fnc_alertZombies;

	if (_isEye) then {
		localize 'STR_EPOCH_DOORACCESS_FAILURE' call DZE_fnc_rollingMessages;
	} else {
		local _message = localize 'str_epoch_player_19_1';
		if (DZE_doorManagementHarderPenalty) then {
			dayz_lastCodeFail = diag_tickTime + dayz_UnlockTime;
			dayz_UnlockTime = dayz_UnlockTime * 2;
			_message = format [localize 'str_epoch_player_19',round (dayz_lastCodeFail - diag_tickTime)];
		};

		_message call DZE_fnc_rollingMessages;
	};
};

if !(isNull _display) then {_display closeDisplay 2;};
dayz_actionInProgress = false;
