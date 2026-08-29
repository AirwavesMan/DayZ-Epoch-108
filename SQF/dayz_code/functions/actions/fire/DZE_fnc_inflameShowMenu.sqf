///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_inflameShowMenu
//
//	Description:	Checks whether the light or put-out action should be shown for a direct or proxy fire.
//	Groups:		Actions, Fire
//
//	Syntax:		[fireplace, inflame, useProxy] call DZE_fnc_inflameShowMenu
//
//	Parameters:	fireplace: Object - Parent fireplace
//			inflame: Boolean - True checks the light action, false checks the put-out action
//			useProxy: Boolean - (optional, default false) Check the networked flame proxy
//
//	Return Value:	Boolean - True when the requested action can be shown
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_INFLAME_SHOW_MENU

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_INFLAME_SHOW_MENU
	diag_log format ['[Client Debug]: [DZE_fnc_inflameShowMenu]: Function called with argumentes: %1',_this];
#endif

local _fireplace = p0;
local _inflame = p1;
local _useProxy = if (count _this > 2) then {p2} else {false};
local _target = _fireplace;

if (_useProxy) then {
	local _flames = nearestObjects [_fireplace,['DZE_flamable'],1];
	_target = if (count _flames > 0) then {_flames select 0} else {objNull};
};

local _isLit = !isNull _target && {inflamed _target};
local _hasIgnitor = false;

if (!_isLit) then {
	local _playerItems = items player;

	{
		if (_x in _playerItems) exitWith {_hasIgnitor = true};
	} count DZE_Matchboxes;
};

// Return true when the player can light an unlit fire or put out a lit fire.
//systemChat str [_target,_hasIgnitor,_isLit,_inflame];

(_inflame && {!_isLit} && {_hasIgnitor}) || {!_inflame && {_isLit}}
