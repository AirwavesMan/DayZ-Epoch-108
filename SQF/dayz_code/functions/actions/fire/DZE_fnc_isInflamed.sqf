///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_isInflamed
//
//	Description:	Checks whether a fireplace or its nearby networked flame proxy is burning.
//	Groups:		Actions, Fire
//
//	Syntax:		fireplace call DZE_fnc_isInflamed
//
//	Parameters:	fireplace: Object - Parent fireplace
//
//	Return Value:	Boolean - True when the fireplace or its flame proxy is burning
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_IS_INFLAMED

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_IS_INFLAMED
	diag_log format ['[Client Debug]: [DZE_fnc_isInflamed]: Function called with argumentes: %1',_this];
#endif

local _fireplace = _this;

if (typeName _fireplace != 'OBJECT' || {isNull _fireplace}) exitWith {
	#ifdef DEBUG_DZE_FNC_IS_INFLAMED
		diag_log format ['[Client Debug]: [DZE_fnc_isInflamed]: Error: Invalid fireplace object: %1',_fireplace];
	#endif

	false
};

if (inflamed _fireplace) exitWith {true};

local _flames = nearestObjects [_fireplace,['DZE_flamable'],1];
local _flame = if (count _flames > 0) then {_flames select 0} else {objNull};

!isNull _flame && {inflamed _flame}
