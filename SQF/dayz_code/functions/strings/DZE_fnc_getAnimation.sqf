///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_getAnimation
//
//	Description:	Returns the specified sub-string of the unit's animation state.
//			0-based index from "APMSWD" prefixes listed under AnimationTitles.
//	Groups:		Strings
//
//	Syntax:		[index, unit] call DZE_fnc_getAnimation
//
//	Parameters:	index: Number
//			unit: Object
//
//	Return Value:	String
//
//	Example 1:	[0, player] call DZE_fnc_getAnimation;	// returns "amov"
//	Example 2:	[20, player] call DZE_fnc_getAnimation;	// returns "df"
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _state	= toArray animationState (p1);
local _max	= _state find CHAR_UNDERSCORE;		// animation transition

if (_max >= 0) then {_state resize _max};		// found transition

toString (subSelect(_state, p0, -4))
