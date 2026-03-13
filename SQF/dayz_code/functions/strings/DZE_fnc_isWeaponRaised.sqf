///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_isWeaponRaised
//
//	Description:	Returns true if unit's weapon is raised.
//	Groups:		Strings
//
//	Syntax:		unit call DZE_fnc_isWeaponRaised
//
//	Return Value:	Boolean
//
//	Called by:	Client
//
//	Note:		'sras' when armed, 'snon' when unarmed.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

///([STATE_STANCE, _this] call DZE_fnc_getAnimation) in [STANCE_RAISED, STANCE_NOWEAPON]
getAnimation(STATE_STANCE, _this) in [STANCE_RAISED, STANCE_NOWEAPON]
