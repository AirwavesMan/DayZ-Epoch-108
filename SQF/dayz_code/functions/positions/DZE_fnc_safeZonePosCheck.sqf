///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_safeZonePosCheck
//
//	Description:	Returns true if a contextual action is prohibited within a detected safe zone, or false if allowed.
//	Groups:		Positions
//
//	Syntax:		[position, customRadius] call DZE_fnc_safeZonePosCheck
//
//	Parameters:	position: Object or PositionAGL
//			customRadius: Number - (Optional) If exists, override radius values in DZE_SafeZonePosArray.
//
//	Return Value:	Boolean
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _position		= p0;
local _skipPos		= false;

if (count _this > 1) then {

	local _radius = p1;	// typically used for build checks

	{
		if (_position distance (_x select 0) < _radius) exitWith {_skipPos = true};

	} count DZE_SafeZonePosArray;

} else {

	if (!DZE_SafeZoneZombieLoot) then {

		{
			if (_position distance (_x select 0) < (_x select 1)) exitWith {_skipPos = true}; 		

		} count DZE_SafeZonePosArray;
	};
};

_skipPos
