///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_requestObjectDeletion
//
//	Description:	Deletes transient wrecks locally or requests persistent deletion from the server
//			and waits for client-visible confirmation.
//	Groups:		Build
//
//	Syntax:		[object,isWreck,isWreckBuilding,objectPosition] call DZE_fnc_requestObjectDeletion
//
//	Parameters:	object: Object - Object to delete
//			isWreck: Boolean - Whether the object is transient debris
//			isWreckBuilding: Boolean - Whether wreck removal is broadcast by position
//			objectPosition: Array - Position captured before deletion
//
//	Return Value:	Boolean - Whether deletion became visible on the client
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_REQUEST_OBJECT_DELETION

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_REQUEST_OBJECT_DELETION
	diag_log format ['[Client Debug]: [DZE_fnc_requestObjectDeletion]: Function called with arguments: %1',_this];
#endif

local _object = param(0,objNull);
local _isWreck = param(1,false);
local _isWreckBuilding = param(2,false);
local _objectPosition = param(3,[]);

if (isNull _object) exitWith {false};

if (!_isWreck && {!_isWreckBuilding}) then {
	// The server performs deleteVehicle for persistent objects.
	PVDZ_obj_Destroy = [netID player,netID _object,dayz_authKey];
	publicVariableServer 'PVDZ_obj_Destroy';

	local _deleteTimeout = diag_tickTime + 3;
	waitUntil {
		uiSleep 0.1;
		isNull _object || {diag_tickTime > _deleteTimeout}
	};
} else {
	deleteVehicle _object;
};

if (_isWreckBuilding) then {
	PVDZ_send = [player,'RemoveObject',_objectPosition,[_objectPosition,dayz_authKey,player]];
	publicVariableServer 'PVDZ_send';
};

local _deleted = isNull _object;

#ifdef DEBUG_DZE_FNC_REQUEST_OBJECT_DELETION
	diag_log format ['[Client Debug]: [DZE_fnc_requestObjectDeletion]: Deleted: %1 | Wreck: %2 | Wreck building: %3',_deleted,_isWreck,_isWreckBuilding];
#endif

_deleted
