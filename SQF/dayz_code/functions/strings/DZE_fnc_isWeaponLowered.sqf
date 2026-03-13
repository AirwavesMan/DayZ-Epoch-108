///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_isWeaponLowered
//
//	Description:	Returns true if unit's weapon is lowered.
//	Groups:		Strings
//
//	Syntax:		unit call DZE_fnc_isWeaponLowered
//
//	Return Value:	Boolean
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

///([STATE_STANCE, _this] call DZE_fnc_getAnimation) == STANCE_LOWERED
getAnimation(STATE_STANCE, _this) == STANCE_LOWERED
