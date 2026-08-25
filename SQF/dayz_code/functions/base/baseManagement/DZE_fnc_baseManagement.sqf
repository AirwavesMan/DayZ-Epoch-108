///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_baseManagement
//
//	Description:	Validates access and opens the management dialog for the selected base marker.
//	Groups:		Base, Base Management
//
//	Syntax:		[] call DZE_fnc_baseManagement
//			Action-menu arguments call DZE_fnc_baseManagement
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_BASE_MANAGEMENT

#ifdef DEBUG_DZE_FNC_BASE_MANAGEMENT
	diag_log format ['[Client Debug]: [DZE_fnc_baseManagement]: Function called with argumentes: %1',_this];
#endif

disableSerialization;

local _base = objNull;

if (typeName _this == 'ARRAY' && {count _this > 3}) then {
	local _actionBase = _this select 3;
	if (typeName _actionBase == 'OBJECT') then {_base = _actionBase};
};

if (isNull _base) then {
	local _nearbyBases = player nearObjects [DZE_Territory_Marker,15];
	if (count _nearbyBases > 0) then {_base = _nearbyBases select 0};
};

DZE_currentBase = _base;

if (isNull _base || {typeOf _base != DZE_Territory_Marker}) exitWith {
	localize 'str_cursorTargetNotFound' call DZE_fnc_rollingMessages;
};

local _hasAccess = [player,_base] call DZE_fnc_checkAccess;

if (typeName _hasAccess != 'ARRAY' || {count _hasAccess < 4}) exitWith {
	#ifdef DEBUG_DZE_FNC_BASE_MANAGEMENT
		diag_log format ['[Client Debug]: [DZE_fnc_baseManagement]: Error: Invalid access result for base %1: %2',_base,_hasAccess];
	#endif
	localize 'STR_BASE_MANAGEMENT_ACCESS_DENIED' call DZE_fnc_rollingMessages;
};

local _canManage = (_hasAccess select 2) ||
	{_hasAccess select 3};

if (!_canManage) exitWith {
	localize 'STR_BASE_MANAGEMENT_ACCESS_DENIED' call DZE_fnc_rollingMessages;
};

if (createDialog 'BaseManagement') then {
	call DZE_fnc_baseNearbyHumans;
	call DZE_fnc_baseGetFriends;
	'preview' call DZE_fnc_baseMaintain;
	call DZE_fnc_baseObjects;
};
