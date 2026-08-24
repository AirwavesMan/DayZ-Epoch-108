///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_enableFlashlight
//
//	Description:	-
//	Groups:		Lights
//
//	Syntax:		? call DZE_fnc_enableFlashlight
//
//	Return Value:	-
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"
#define hasFlashlight           count _lightData > 0

///	player action ["gunLightOn"]; player action ["handGunOn", player];
///	local _handgun	= call DZE_fnc_handgunWeapon;
///	if (_handgun != '') then {};

/// **** TODO **** needs DZR variable to store the weapon name this relates to, so that when player switches weapons (e.g. rifle => pistol) the correct settings are made

local _handled = false;

if (p_notInVehicle) then {	// player is on foot

	local _lightData = p_currentWeapon call DZE_fnc_getFlashlightData;

	local _fnc_flashlightOff = {

		player action ['GunLightOff', player];

		DZR_FLASHLIGHT_ON = false;

		if (!isNil 'DZR_LIGHTPOINT') then {
			deleteVehicle DZR_LIGHTPOINT;
			DZR_LIGHTPOINT = nil;
		};
	};

	if (hasFlashlight && {isNighttime}) then {	// weapon has flashlight, and time is between dusk & dawn

		DZR_FLASHLIGHT_ON = !DZR_FLASHLIGHT_ON;

		if (DZR_FLASHLIGHT_ON) then {

			player action ['GunLightOn', player];

			if (!isNil 'DZR_LIGHTPOINT') then {deleteVehicle DZR_LIGHTPOINT};

			DZR_LIGHTPOINT = '#lightpoint' createVehicleLocal ORIGIN;
			DZR_LIGHTPOINT attachTo [player, [0.05,0.25,0], 'granat2'];	// aligns to actual light cone, not light attachment

			DZR_LIGHTPOINT setLightColor		(_lightData select FL_COLOR);						// match flashlight config
			DZR_LIGHTPOINT setLightAmbient		(_lightData select FL_AMBIENT);						// match flashlight config
			DZR_LIGHTPOINT setLightBrightness	([0.005, 0.01] select ((_lightData select FL_BRIGHTNESS) < 0.1));	// 0.005 is min value to avoid glitching on most geometry, but certain buildings and animatable doors seem to absorb light

		} else {

			call _fnc_flashlightOff;
		};

	} else {

		call _fnc_flashlightOff;
	};

	_handled = true;
};

systemChat format ['Flashlight: %1', ['OFF','ON'] select DZR_FLASHLIGHT_ON];

_handled
