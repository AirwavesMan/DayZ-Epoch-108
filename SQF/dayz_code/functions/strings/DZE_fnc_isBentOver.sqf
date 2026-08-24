///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_isBentOver
//
//	Description:	Returns whether a unit is performing a bent-over inventory action.
//	Groups:		Strings
//
//	Syntax:		unit call DZE_fnc_isBentOver
//
//	Parameters:	unit: Object
//
//	Return Value:	Boolean
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
///#define DEBUG_DZE_FNC_IS_BENT_OVER

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_IS_BENT_OVER
	diag_log format ['[Client Debug]: [DZE_fnc_isBentOver]: Function called with argumentes: %1',_this];
#endif

([STATE_ACTION, _this] call DZE_fnc_getAnimation) == ACTION_INV
