///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_lockStorage
//
//	Description:	Locks an open safe or lockbox using its combination or owner access.
//	Groups:		Build
//
//	Syntax:		object spawn DZE_fnc_lockStorage
//
//	Parameters:	object: Object - Unlocked storage, or Array - addAction arguments
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_LOCK_STORAGE

#ifdef DEBUG_DZE_FNC_LOCK_STORAGE
	diag_log format ['[Client Debug]: [DZE_fnc_lockStorage]: Function called with arguments: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'str_player_actionslimit' call DZE_fnc_rollingMessages;};
dayz_actionInProgress = true;

local _object = if (typeName _this == 'ARRAY') then {_this select 3} else {_this};

player removeAction s_player_lockvault;
s_player_lockvault = 1;

local _objectType = typeOf _object;
if (isNull _object || !alive _object || {!(_objectType in DZE_UnLockedStorage)}) exitWith {
	s_player_lockvault = -1;
	dayz_actionInProgress = false;
};

local _characterID = _object getVariable ['CharacterID','0'];
local _comboMatch = _characterID == dayz_combination;
local _ownerID = _object getVariable ['ownerPUID','0'];
local _configPath = configFile >> 'CfgVehicles' >> _objectType;
local _text = getText (_configPath >> 'displayName');

if (!_comboMatch && {_ownerID != dayz_playerUID}) exitWith {
	s_player_lockvault = -1;
	dayz_actionInProgress = false;
	format [localize 'str_epoch_player_115',_text] call DZE_fnc_rollingMessages;
};

(findDisplay 106) closeDisplay 0;

local _sfx = getText (_configPath >> 'DZE_sfx');

if (_sfx != '') then {
	[player,getPosATL player,20,_sfx] spawn fnc_alertZombies;
};

if (_objectType == 'DZE_SafeTall' && {(_object animationPhase 'Open_door' > 0) || {_object animationPhase 'Open_doorR' > 0}}) then {
	local _animationTime = getNumber (_configPath >> 'AnimationSources' >> 'Open_door' >> 'animPeriod');
	_object animate ['Open_door',0];
	_object animate ['Open_doorR',0];
	uiSleep _animationTime;
};

local _code = if (_comboMatch) then {dayz_combination} else {_characterID};

DZE_Wait_For_Object = nil;
PVDZE_lockUnlockStorage = [netID player,netID _object,2,_code,dayz_authKey];
publicVariableServer 'PVDZE_lockUnlockStorage';

local _newObject = call DZE_fnc_revealServerObject;

#ifdef DEBUG_DZE_FNC_LOCK_STORAGE
	diag_log format ['[Client Debug]: [DZE_fnc_lockStorage]: Revealed server object: %1',_newObject];
#endif

if !(isNull _newObject) then {
	format [localize 'str_epoch_player_117',_text] call DZE_fnc_rollingMessages;
};

s_player_lockvault = -1;
dayz_actionInProgress = false;
