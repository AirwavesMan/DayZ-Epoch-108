///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_isStanding
//
//	Description:	Returns true if unit is standing.
//	Groups:		Strings
//
//	Syntax:		unit call DZE_fnc_isStanding
//
//	Return Value:	Boolean
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

///([STATE_POSE, _this] call DZE_fnc_getAnimation) == POSE_STAND
getAnimation(STATE_POSE, _this) == POSE_STAND
