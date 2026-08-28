///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_checkBuildOpenGearLimit
//
//	Description:	Checks whether adding a buildable object with open gear would exceed the
//			configured limit inside the base containing the subject.
//	Groups:		Build, Validation
//
//	Syntax:		[className, subject, ignoredObject, nearestPole] call DZE_fnc_checkBuildOpenGearLimit
//
//	Parameters:	className: String - CfgVehicles class being added
//			subject: Object - Player or object used to locate the base
//			ignoredObject: Object - Local preview excluded from the count
//			nearestPole: Object - Previously resolved territory marker; optional
//
//	Return Value:	Array - [allowed, limit, count, nearestPole]
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_CHECK_BUILD_OPEN_GEAR_LIMIT

#ifdef DEBUG_DZE_FNC_CHECK_BUILD_OPEN_GEAR_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_checkBuildOpenGearLimit]: Function called with arguments: %1',_this];
#endif

local _className = _this select 0;
local _subject = _this select 1;
local _ignoredObject = _this select 2;
local _nearestPole = objNull;
if (count _this > 3) then {_nearestPole = _this select 3};

local _config = configFile >> 'CfgVehicles' >> _className;
local _isBuildable = getNumber (_config >> 'DZE_allowBuilding') == 1;
local _hasOpenGear = getNumber (_config >> 'transportMaxMagazines') > 0 || {getNumber (_config >> 'transportMaxWeapons') > 0} || {getNumber (_config >> 'transportMaxBackpacks') > 0};

if (!_isBuildable || {!_hasOpenGear} || {_className in DZE_UnLockedStorage}) exitWith {[true,DZE_OpenGearLimit,0,objNull]};
if (DZE_OpenGearLimit <= 0 || {dayz_playerUID in DZE_baseManagementAdmins}) exitWith {[true,DZE_OpenGearLimit,0,objNull]};

local _baseRadius = DZE_baseRadius select 0;

if (isNull _nearestPole) then {
	local _poles = _subject nearObjects [DZE_Territory_Marker,_baseRadius];
	if (count _poles > 0) then {_nearestPole = _poles select 0};
};

if (isNull _nearestPole) exitWith {[true,DZE_OpenGearLimit,0,objNull]};

local _objects = [_nearestPole,_baseRadius] call DZE_fnc_findBuildableObjects;
local _count = {
	_x != _ignoredObject && {!((typeOf _x) in DZE_UnLockedStorage)} && {
		getNumber (configFile >> 'CfgVehicles' >> (typeOf _x) >> 'transportMaxMagazines') > 0 ||
		{getNumber (configFile >> 'CfgVehicles' >> (typeOf _x) >> 'transportMaxWeapons') > 0} ||
		{getNumber (configFile >> 'CfgVehicles' >> (typeOf _x) >> 'transportMaxBackpacks') > 0}
	}
} count _objects;
local _allowed = _count < DZE_OpenGearLimit;

#ifdef DEBUG_DZE_FNC_CHECK_BUILD_OPEN_GEAR_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_checkBuildOpenGearLimit]: Class: %1 | Base: %2 | Count: %3 | Limit: %4 | Allowed: %5',_className,_nearestPole,_count,DZE_OpenGearLimit,_allowed];
#endif

[_allowed,DZE_OpenGearLimit,_count,_nearestPole]
