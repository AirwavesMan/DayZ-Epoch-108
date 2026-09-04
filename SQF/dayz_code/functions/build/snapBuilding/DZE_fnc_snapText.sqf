///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapText
//
//	Description:	Displays the nearby object and snap-point names over the selected point.
//	Groups:		Build, Snap Building
//
//	Syntax:		[nearbySnapPoint] call DZE_fnc_snapText
//
//	Parameters:	nearbySnapPoint: Object - Nearby snap helper whose label is displayed
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_TEXT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_TEXT
	diag_log format ['[Client Debug]: [DZE_fnc_snapText]: Function called with arguments: %1',_this];
#endif

local _nearbySnapPoint = p0;

if (!DZE_uiSnapText) exitWith {};

local _screenPosition = worldToScreen (_nearbySnapPoint modelToWorld ORIGIN);

if (count _screenPosition == 0) exitWith {};	// object may be off screen

local _snapData = _nearbySnapPoint getVariable ['snappoint', ['', '']];
local _nearbyName = _snapData select 0;

if (_nearbyName == '') exitWith {};

local _format = '<t align=''Center'' size=''0.4'' font=''Zeppelin33'' shadow=''2'' color=';
local _white = _format + '''#E0E0E0''>';
local _green = _format + '''#20E020''>';
local _end = '</t>';
local _newLine = _end + '<br/>';
local _text = format [_white + '%1' + _newLine + _white + localize 'STR_SNAPPING_UI_SNAP_LABEL' + ': ' + _green + '%2' + _end,_nearbyName,_snapData select 1];
[
	_text,
	(_screenPosition select 0) - 0.5,		// center to snap point
	(_screenPosition select 1) - 0.06 * safeZoneH,	// 6% of screen height
	0.1,
	0,
	0,
	18
] spawn BIS_fnc_dynamicText;
