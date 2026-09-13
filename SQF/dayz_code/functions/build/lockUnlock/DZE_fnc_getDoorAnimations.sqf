///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_getDoorAnimations
//
//	Description:	Returns the animation sources used to open and close a door or gate.
//	Groups:		Build
//
//	Syntax:		object call DZE_fnc_getDoorAnimations
//
//	Parameters:	object: Object - Door or gate
//
//	Return Value:	Array - Animation source names
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_GET_DOOR_ANIMATIONS

#ifdef DEBUG_DZE_FNC_GET_DOOR_ANIMATIONS
	diag_log format ['[Client Debug]: [DZE_fnc_getDoorAnimations]: Function called with arguments: %1',_this];
#endif

local _object = _this;
local _type = typeOf _object;
local _animations = call {
	if (_type in ['DZE_Metal_Drawbridge','DZE_Metal_DrawbridgeLocked']) exitWith {['Open_inner','Open_outer']};
	if (_type in ['DZE_Concrete_Bunker','DZE_Concrete_Bunker_Locked']) exitWith {[['raise_all'],['raise_all','rollers']] select !(_type in DZE_DoorsLocked)};
	if (_type in ['DZE_Land_WoodOpenTopGarageDoor','DZE_Land_WoodOpenTopGarageLocked','DZE_CinderGarageOpenTop','DZE_CinderGarageOpenTopLocked']) exitWith {['doorl','doorR']};
	if (_type in DZE_LockedGates) exitWith {['DoorR','DoorL']};
	if (_object isKindOf 'DZE_WoodGate') exitWith {['DoorR']};
	if (_object isKindOf 'DZE_MetalGate') exitWith {['DoorL']};

	local _doorConfig = configFile >> 'CfgVehicles' >> _type;
	local _defaultAnimations = ['Open_door'];
	if (isClass (_doorConfig >> 'AnimationSources' >> 'Open_doorR')) then {_defaultAnimations set [1,'Open_doorR'];};
	_defaultAnimations
};

#ifdef DEBUG_DZE_FNC_GET_DOOR_ANIMATIONS
	diag_log format ['[Client Debug]: [DZE_fnc_getDoorAnimations]: Object: %1 | Animations: %2',_type,_animations];
#endif

_animations
