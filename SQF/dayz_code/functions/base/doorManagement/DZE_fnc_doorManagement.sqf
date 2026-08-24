///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_doorManagement
//
//	Description:	Validates access and opens the management dialog for the selected door.
//	Groups:		Base, Door Management
//
//	Syntax:		[] call DZE_fnc_doorManagement
//			Action-menu arguments call DZE_fnc_doorManagement
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_DOOR_MANAGEMENT

#ifdef DEBUG_DZE_FNC_DOOR_MANAGEMENT
	diag_log format ['[Client Debug]: [DZE_fnc_doorManagement]: Function called with argumentes: %1',_this];
#endif

disableSerialization;

local _door = dayz_selectedDoor;

if (typeName _this == 'ARRAY' && {count _this > 3}) then {
	local _actionDoor = _this select 3;
	if (typeName _actionDoor == 'OBJECT') then {_door = _actionDoor};
};

DZE_currentDoor = _door;

local _display = findDisplay 61144;
if (!isNull _display) then {_display closeDisplay 2};

if (isNull _door) exitWith {
	localize 'str_cursorTargetNotFound' call DZE_fnc_rollingMessages;
};

local _hasAccess = [player,_door] call DZE_fnc_checkAccess;

if (typeName _hasAccess != 'ARRAY' || {count _hasAccess < 6}) exitWith {
	#ifdef DEBUG_DZE_FNC_DOOR_MANAGEMENT
		diag_log format ['[Client Debug]: [DZE_fnc_doorManagement]: Error: Invalid access result for door %1: %2',_door,_hasAccess];
	#endif
	localize 'STR_EPOCH_DOORMANAGEMENT_NORIGHTS' call DZE_fnc_rollingMessages;
};

local _canManage = (_hasAccess select 0) ||
	{_hasAccess select 2} ||
	{_hasAccess select 3} ||
	{_hasAccess select 4} ||
	{_hasAccess select 5};

if (!_canManage) exitWith {
	localize 'STR_EPOCH_DOORMANAGEMENT_NORIGHTS' call DZE_fnc_rollingMessages;
};

if (createDialog 'DoorManagement') then {
	call DZE_fnc_doorNearbyHumans;
	call DZE_fnc_doorGetFriends;
};
