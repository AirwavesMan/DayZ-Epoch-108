///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_checkBuildGroupLimit
//
//	Description:	Checks whether adding an object would exceed a shared class-group limit inside
//			the base containing the subject.
//	Groups:		Build, Validation
//
//	Syntax:		[className, subject, ignoredObject, classNames, limit, nearestPole] call DZE_fnc_checkBuildGroupLimit
//
//	Parameters:	className: String - CfgVehicles class being added
//			subject: Object - Player or object used to locate the base
//			ignoredObject: Object - Local preview or replaced object excluded from the count
//			classNames: Array - CfgVehicles classes counted as one group
//			limit: Number - Maximum group count; values at or below zero disable the limit
//			nearestPole: Object - Previously resolved territory marker; optional
//
//	Return Value:	Array - [allowed, limit, count, nearestPole], or [] for invalid parameters
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_CHECK_BUILD_GROUP_LIMIT

#ifdef DEBUG_DZE_FNC_CHECK_BUILD_GROUP_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_checkBuildGroupLimit]: Function called with arguments: %1',_this];
#endif

local _className = _this select 0;
local _subject = _this select 1;
local _ignoredObject = _this select 2;
local _classNames = _this select 3;
local _limit = _this select 4;
local _nearestPole = if (count _this > 5) then {_this select 5} else {objNull};

if !(_className in _classNames) exitWith {[true,_limit,0,objNull]};
if (_limit <= 0 || {dayz_playerUID in DZE_baseManagementAdmins}) exitWith {[true,_limit,0,objNull]};

local _baseRadius = DZE_baseRadius select 0;

if (isNull _nearestPole) then {
	local _poles = _subject nearObjects [DZE_Territory_Marker,_baseRadius];
	if (count _poles > 0) then {_nearestPole = _poles select 0};
};

if (isNull _nearestPole) exitWith {[true,_limit,0,objNull]};

local _count = {_x != _ignoredObject && {typeOf _x in _classNames}} count (nearestObjects [_nearestPole,_classNames,_baseRadius]);
local _allowed = _count < _limit;

#ifdef DEBUG_DZE_FNC_CHECK_BUILD_GROUP_LIMIT
	diag_log format ['[Client Debug]: [DZE_fnc_checkBuildGroupLimit]: Class: %1 | Base: %2 | Count: %3 | Limit: %4 | Allowed: %5',_className,_nearestPole,_count,_limit,_allowed];
#endif

[_allowed,_limit,_count,_nearestPole]
