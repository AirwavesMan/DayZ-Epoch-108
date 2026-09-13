///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_garageDoorOpener
//
//	Description:	Opens or closes a nearby garage door from the player's vehicle.
//	Groups:		Build
//
//	Syntax:		garageDoor call DZE_fnc_garageDoorOpener
//
//	Parameters:	garageDoor: Object - Garage door, or Array - addAction arguments
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
//	Based on the garage door opener script by salival (https://github.com/oiad).
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_GARAGE_DOOR_OPENER

#ifdef DEBUG_DZE_FNC_GARAGE_DOOR_OPENER
	diag_log format ['[Client Debug]: [DZE_fnc_garageDoorOpener]: Function called with arguments: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'str_player_actionslimit' call DZE_fnc_rollingMessages;};
dayz_actionInProgress = true;

local _door = if (typeName _this == 'ARRAY') then {_this select 3} else {_this};

if (isNull _door) exitWith {
	dayz_actionInProgress = false;
	systemChat localize 'str_cursorTargetNotFound';
};

{DZE_myVehicle removeAction _x} count s_player_gdoor_opener;
s_player_gdoor_opener = [];
s_player_gdoor_opener_ctrl = 1;

local _animations = _door call DZE_fnc_getDoorAnimations;
local _openDoor = _door animationPhase (_animations select 0) == 0;
local _message = ['STR_CL_GDO_DOOR_CLOSE','STR_CL_GDO_DOOR_OPEN'] select _openDoor;
systemChat localize _message;

local _animationPhase = [0,1] select _openDoor;
{_door animate [_x,_animationPhase]} count _animations;

local _operation = [2,1] select _openDoor;

PVDZE_lockUnlockDoor = [netID player,netID _door,_operation,'DoorOpener',dayz_authKey];
publicVariableServer 'PVDZE_lockUnlockDoor';

#ifdef DEBUG_DZE_FNC_GARAGE_DOOR_OPENER
	diag_log format ['[Client Debug]: [DZE_fnc_garageDoorOpener]: Door: %1 | Operation: %2 | Animations: %3',typeOf _door,_operation,_animations];
#endif

s_player_gdoor_opener_ctrl = -1;
dayz_actionInProgress = false;
