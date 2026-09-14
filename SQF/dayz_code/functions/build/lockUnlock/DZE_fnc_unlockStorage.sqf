///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_unlockStorage
//
//	Description:	Unlocks storage using its combination, ownership or storage-list opening access.
//	Groups:		Build
//
//	Syntax:		object spawn DZE_fnc_unlockStorage
//
//	Parameters:	object: Object - Locked storage, or Array - addAction arguments
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_UNLOCK_STORAGE

#ifdef DEBUG_DZE_FNC_UNLOCK_STORAGE
	diag_log format ['[Client Debug]: [DZE_fnc_unlockStorage]: Function called with arguments: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'str_player_actionslimit' call DZE_fnc_rollingMessages;};
dayz_actionInProgress = true;

local _object = if (typeName _this == 'ARRAY') then {_this select 3} else {_this};

{player removeAction _x} count s_player_combi;
s_player_combi = [];
s_player_unlockvault = 1;

local _objectType = typeOf _object;
if (isNull _object || !alive _object || {!(_objectType in DZE_LockedStorage)}) exitWith {
	s_player_unlockvault = -1;
	dayz_actionInProgress = false;
};

local _code = _object getVariable ['CharacterID','0'];
local _comboMatch = _code == dayz_combination;
local _ownerID = _object getVariable ['ownerPUID','0'];
local _storageFriend = DZE_storageManagement && {{(_x select 0) == dayz_playerUID} count (_object getVariable ['storageFriends',[]]) > 0};

if (isNil 'dayz_UnlockTime') then {dayz_UnlockTime = 5;};
if (DZE_lockablesHarderPenalty && (diag_tickTime - dayz_lastCodeFail + dayz_UnlockTime / 2) > 120) then {dayz_UnlockTime = 5;};

if (_comboMatch || _ownerID == dayz_playerUID || _storageFriend) then {
	(findDisplay 106) closeDisplay 0;
	dayz_UnlockTime = 5;
	dayz_lastCodeFail = 0;

	local _configPath = configFile >> 'CfgVehicles' >> _objectType;
	local _sfx = getText (_configPath >> 'DZE_sfx');

	if (_sfx != '') then {
		[player,getPosATL player,20,_sfx] spawn fnc_alertZombies;
	};	

	if (_comboMatch) then {_code = dayz_combination;};
	// The list-only operation is checked against current membership without checking a code.
	local _operation = if (_storageFriend && {!_comboMatch} && {_ownerID != dayz_playerUID}) then {3} else {1};

	DZE_Wait_For_Object = nil;
	PVDZE_lockUnlockStorage = [netID player,netID _object,_operation,_code,dayz_authKey];
	publicVariableServer 'PVDZE_lockUnlockStorage';

	local _newObject = call DZE_fnc_revealServerObject;

	#ifdef DEBUG_DZE_FNC_UNLOCK_STORAGE
		diag_log format ['[Client Debug]: [DZE_fnc_unlockStorage]: Revealed server object: %1',_newObject];
	#endif

	if !(isNull _newObject) then {
		if (typeOf _newObject == 'DZE_SafeTall') then {
			_newObject animate ['Open_door',1];
			_newObject animate ['Open_doorR',1];
		};

		local _text = getText (_configPath >> 'displayName');
		format [localize 'STR_BLD_UNLOCKED',_text] call DZE_fnc_rollingMessages;
	};
} else {
	PVDZE_lockUnlockStorage = [netID player,netID _object,0,dayz_combination,dayz_authKey];
	publicVariableServer 'PVDZE_lockUnlockStorage';

	[player,getPosATL player,20,'repair'] spawn fnc_alertZombies;

	dayz_lastCodeFail = diag_tickTime + dayz_UnlockTime;
	if (DZE_lockablesHarderPenalty) then {
		dayz_UnlockTime = dayz_UnlockTime * 2;
	};

	#ifdef DEBUG_DZE_FNC_UNLOCK_STORAGE
		diag_log format ['[Client Debug]: [DZE_fnc_unlockStorage]: Incorrect combination; retry delay: %1',dayz_lastCodeFail - diag_tickTime];
	#endif

	format [localize 'str_epoch_player_19',round (dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;
};

s_player_unlockvault = -1;
dayz_actionInProgress = false;
