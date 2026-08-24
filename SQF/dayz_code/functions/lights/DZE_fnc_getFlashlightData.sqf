///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_getFlashlightData
//
//	Description:	Returns flashlight config values for current weapon.
//	Groups:		Lights
//
//	Syntax:		call DZE_fnc_getFlashlightData
//
//	Return Value:	Array of [color, ambient, brightness] or [] if no flashlight
//
//	Called by:	Client
//
//	Note:		This works for all flashlights and weapons with flashlight attachments.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _cfg	= configFile >> 'CfgWeapons' >> currentWeapon player >> 'FlashLight';
local _data	= [];

if (isClass _cfg) then {

	local _color	= getArray (_cfg >> 'color');	// rgba
	local _ambient	= getArray (_cfg >> 'ambient');	// rgba

	_color resize 3;
	_ambient resize 3;

	_data = [_color, _ambient, getNumber (_cfg >> 'brightness')];
};

_data
