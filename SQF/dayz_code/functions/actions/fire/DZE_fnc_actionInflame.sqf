///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_actionInflame
//
//	Description:	Turns the flame effect on or off for an ignitable object.
//	Groups:		Actions, Fire
//
//	Syntax:		[target, inflame, proxyClass, proxyPosition] call DZE_fnc_actionInflame
//
//	Parameters:	target: Object - Fireplace or proxy parent
//			inflame: Boolean - true to light the fire, false to put it out
//			proxyClass: String - Optional proxy class name
//			proxyPosition: Array - [parentObject, positionRelative] used for proxy placement
//
//	Return Value:	Number - Action status
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_ACTION_INFLAME

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_ACTION_INFLAME
	diag_log format ['[Client Debug]: [DZE_fnc_actionInflame]: Function called with argumentes: %1',_this];
#endif

local _target		= p0;
local _inflame		= p1;
local _proxyClass	= p2;
local _proxyPosition	= p3;
local _createdProxy	= objNull;
local _proxyPosAGL	= [];

// Validate and consume a match before creating an optional networked flame proxy.
if (_inflame && {!(['matches', 0.1] call fn_dynamicTool)}) exitWith {ACTION_CANCELLED};

if (_inflame && {_proxyClass != ''}) then {

	_createdProxy = _proxyClass createVehicle ORIGIN;
	_createdProxy setVectorDirAndUp [vectorDir _target, vectorUp _target];
	_proxyPosAGL = posAGL((_proxyPosition select 0), (_proxyPosition select 1));
	_createdProxy setPosASL (_proxyPosAGL call DZE_fnc_AGLToASL);

	_target = _createdProxy;
};

// Finish the player animation before changing the networked flame state.
if !(call DZE_fnc_playActionPutDown) exitWith {

	if (!isNull _createdProxy) then {deleteVehicle _createdProxy};
	ACTION_CANCELLED
};

_target inflame _inflame;
local _flameTimeout = diag_tickTime + 5;
waitUntil {uiSleep 0.05; str inflamed _target == str _inflame || {diag_tickTime >= _flameTimeout}};

if (str inflamed _target != str _inflame) exitWith {
	if (!isNull _createdProxy) then {deleteVehicle _createdProxy};

	#ifdef DEBUG_DZE_FNC_ACTION_INFLAME
		diag_log format ['[Client Debug]: [DZE_fnc_actionInflame]: Warning: Flame state update timed out: %1',[_target,_inflame]];
	#endif

	raiseWeapon;
	ACTION_CANCELLED
};

#ifdef DEBUG_DZE_FNC_ACTION_INFLAME
	diag_log format ['[Client Debug]: [DZE_fnc_actionInflame]: Flame state updated: %1',[_target, _inflame]];
#endif

raiseWeapon;

ACTION_COMPLETED
