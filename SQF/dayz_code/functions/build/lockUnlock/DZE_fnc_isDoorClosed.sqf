///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_isDoorClosed
//
//	Description:	Checks whether all open and close animations of a door or gate are at their initial phase.
//	Groups:		Build
//
//	Syntax:		[object, animations] call DZE_fnc_isDoorClosed
//
//	Parameters:	object: Object - Door or gate
//			animations: Array - Open and close animation source names
//
//	Return Value:	Boolean - True when every door animation is at its initial phase
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_IS_DOOR_CLOSED

#ifdef DEBUG_DZE_FNC_IS_DOOR_CLOSED
	diag_log format ['[Client Debug]: [DZE_fnc_isDoorClosed]: Function called with arguments: %1',_this];
#endif

local _object = _this select 0;
local _animations = _this select 1;
local _animationConfig = configFile >> 'CfgVehicles' >> typeOf _object >> 'AnimationSources';
local _isClosed = true;

{
	if ((_object animationPhase _x) != getNumber (_animationConfig >> _x >> 'initPhase')) exitWith {_isClosed = false;};
} count _animations;

#ifdef DEBUG_DZE_FNC_IS_DOOR_CLOSED
	diag_log format ['[Client Debug]: [DZE_fnc_isDoorClosed]: Object: %1 | Is closed: %2',typeOf _object,_isClosed];
#endif

_isClosed
