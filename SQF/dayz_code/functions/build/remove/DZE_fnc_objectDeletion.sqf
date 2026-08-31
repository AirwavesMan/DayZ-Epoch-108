///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_objectDeletion
//
//	Description:	Requests deletion from the server and waits for client-visible confirmation.
//	Groups:		Build
//
//	Syntax:		object call DZE_fnc_objectDeletion
//
//	Parameters:	object: Object - Object to delete
//
//	Return Value:	Boolean - Whether deletion became visible on the client
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_OBJECT_DELETION

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_OBJECT_DELETION
	diag_log format ['[Client Debug]: [DZE_fnc_objectDeletion]: Function called with arguments: %1',_this];
#endif

local _object = _this;
if (isNull _object) exitWith {false};

// The server performs deleteVehicle for every removal request.
PVDZE_removeObject = [netID player,netID _object,dayz_authKey];
publicVariableServer 'PVDZE_removeObject';

local _deleteTimeout = diag_tickTime + 3;
waitUntil {
	uiSleep 0.1;
	isNull _object || diag_tickTime > _deleteTimeout
};

local _deleted = isNull _object;

#ifdef DEBUG_DZE_FNC_OBJECT_DELETION
	diag_log format ['[Client Debug]: [DZE_fnc_objectDeletion]: Deleted: %1',_deleted];
#endif

_deleted
