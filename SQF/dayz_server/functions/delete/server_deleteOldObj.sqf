///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_deleteOldObj
//
//	Description:	Deletes the supplied persisted object after validating its database identifiers.
//	Groups:		Build, Delete
//
//	Syntax:		[oldObject, functionName] call server_deleteOldObj
//
//	Parameters:	oldObject: Object - Persisted object to delete
//			functionName: String - Calling function used for diagnostic messages
//
//	Return Value:	Boolean - True when the object was deleted, otherwise false
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_DELETE_OLD_OBJ

#ifdef DEBUG_SERVER_DELETE_OLD_OBJ
	diag_log format['[Server Debug]: [server_deleteOldObj]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < 2}) exitWith {
	diag_log format['[Server Debug]: [server_deleteOldObj]: Error: Invalid parameter format: %1',_this];
	false
};

local _oldObject = _this select 0;
local _functionName = _this select 1;

if (typeName _oldObject != 'OBJECT' || {typeName _functionName != 'STRING'}) exitWith {
	diag_log format['[Server Debug]: [server_deleteOldObj]: Error: Invalid parameter types: %1',_this];
	false
};

if (isNull _oldObject) exitWith {
	diag_log format['[Server Debug]: [server_deleteOldObj]: Warning: %1 rejected a null object.',_functionName];
	false
};

//	Old object IDs
local _oldObjectID = _oldObject getVariable ['ObjectID','0'];
local _oldObjectUID = _oldObject getVariable ['ObjectUID','0'];

if (_oldObjectID == '0' && {_oldObjectUID == '0'}) exitWith {
	diag_log format['[Server Debug]: [server_deleteOldObj]: Warning: %1 rejected %2 because ObjectID and ObjectUID are 0.',_functionName,typeOf _oldObject];
	false
};

//	Delete old object
[_oldObjectID,_oldObjectUID,_oldObject] call server_deleteObjDirect;
deleteVehicle _oldObject;

true
