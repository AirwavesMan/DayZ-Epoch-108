///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_inflame
//
//	Description:	Controls the flame state of a fireplace directly or through a networked proxy.
//	Groups:		Actions, Fire
//
//	Syntax:		[fireplace, inflame, useProxy] call DZE_fnc_inflame
//
//	Parameters:	fireplace: Object - Parent fireplace
//			inflame: Boolean - True to light the fire, false to put it out
//			useProxy: Boolean - (optional, default false) Use a networked flame proxy
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_INFLAME

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_INFLAME
	diag_log format ['[Client Debug]: [DZE_fnc_inflame]: Function called with argumentes: %1',_this];
#endif

local _fireplace = p0;
local _inflame = p1;
local _useProxy = if (count _this > 2) then {p2} else {false};
local _target = _fireplace;

if (_useProxy) then {
	local _flames = nearestObjects [_fireplace,['DZE_flamable'],1];
	_target = if (count _flames > 0) then {_flames select 0} else {objNull};

	if (_inflame && {isNull _target}) then {
		// The fireplace can be local (town generator, POI), but its flame must be networked.
		_target = createVehicle ['DZE_flamable',ORIGIN,[],0,'CAN_COLLIDE'];
		local _positionASL = [_fireplace,_fireplace selectionPosition 'ohniste'] call DZE_fnc_modelToWorldASL;
		_target setPosASL _positionASL;
	};
};

if (_inflame) then { // Light the fire.
	if (['matches',0.1] call fn_dynamicTool) then {_target inflame true};
} else { // Put out the fire.
	if (!isNull _target) then {_target inflame false};
};
