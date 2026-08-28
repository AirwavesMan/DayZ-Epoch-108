///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_checkBuildClassLimit
//
//	Description:	Checks the exact object-class count configured through DZE_perBaseLimit inside
//			the base containing the subject.
//	Groups:		Build, Validation
//
//	Syntax:		[className, subject, ignoredObject, nearestPole] call DZE_fnc_checkBuildClassLimit
//
//	Parameters:	className: String - CfgVehicles class to count
//			subject: Object - Player or object used to locate the base
//			ignoredObject: Object - Local preview or replaced object excluded from the count
//			nearestPole: Object - Previously resolved territory marker; optional
//
//	Return Value:	Array - [allowed, limit, count, nearestPole], or [] for invalid parameters
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_CHECK_BUILD_CLASS_LIMIT

#ifdef DEBUG_DZE_FNC_CHECK_BUILD_CLASS_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_checkBuildClassLimit]: Function called with arguments: %1',_this];
#endif

local _className = _this select 0;
local _subject = _this select 1;
local _ignoredObject = _this select 2;
local _nearestPole = objNull;
if (count _this > 3) then {_nearestPole = _this select 3};

local _limit = floor (getNumber (configFile >> 'CfgVehicles' >> _className >> 'DZE_perBaseLimit'));

if (_limit < 0) exitWith {[false,_limit,0,objNull]};
if (_limit == 0 || {dayz_playerUID in DZE_baseManagementAdmins}) exitWith {[true,_limit,0,objNull]};

local _baseRadius = DZE_baseRadius select 0;

if (isNull _nearestPole) then {
	local _poles = _subject nearObjects [DZE_Territory_Marker,_baseRadius];
	if (count _poles > 0) then {_nearestPole = _poles select 0};
};

if (isNull _nearestPole) exitWith {[true,_limit,0,objNull]};

local _objects = _nearestPole nearObjects [_className,_baseRadius];
local _count = {typeOf _x == _className && {_x != _ignoredObject}} count _objects;
local _allowed = _count < _limit;

#ifdef DEBUG_DZE_FNC_CHECK_BUILD_CLASS_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_checkBuildClassLimit]: Class: %1 | Base: %2 | Count: %3 | Limit: %4 | Allowed: %5',_className,_nearestPole,_count,_limit,_allowed];
#endif

[_allowed,_limit,_count,_nearestPole]
