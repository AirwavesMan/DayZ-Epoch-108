///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_findBases
//
//	Description:	Finds base markers around the supplied object using either the base radius or
//			the configured minimum distance between bases.
//	Groups:		Base
//
//	Syntax:		[object, checkMinimumDistance] call DZE_fnc_findBases
//
//	Parameters:	object: Object - Object whose position is used for the search
//			checkMinimumDistance: Boolean - Use the minimum distance between bases
//
//	Return Value:	Array - [searchDistance, baseCount, nearestBase]
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_FIND_BASES

#ifdef DEBUG_DZE_FNC_FIND_BASES
	diag_log format ['[Client Debug]: [DZE_fnc_findBases]: Function called with argumentes: %1',_this];
#endif

local _object = _this select 0;
local _checkMinimumDistance = if (count _this > 1 && {typeName (_this select 1) == 'BOOL'}) then {_this select 1} else {false};

local _searchDistance = DZE_baseRadius select 0;
if (_checkMinimumDistance) then {
	_searchDistance = DZE_baseRadius select 1;
};

if (isNull _object) exitWith {
	#ifdef DEBUG_DZE_FNC_FIND_BASES
		diag_log format ['[Client Debug]: [DZE_fnc_findBases]: Warning: Invalid object: %1',_object];
	#endif
	[_searchDistance,0,objNull]
};

local _baseMarkers = vehicle _object nearObjects [DZE_Territory_Marker,_searchDistance];
local _baseCount = count _baseMarkers;
local _nearestBase = objNull;

if (_baseCount > 0) then {
	_nearestBase = _baseMarkers select 0;
};

local _result = [_searchDistance,_baseCount,_nearestBase];

#ifdef DEBUG_DZE_FNC_FIND_BASES
	diag_log format ['[Client Debug]: [DZE_fnc_findBases]: Search result: %1',_result];
#endif

_result
