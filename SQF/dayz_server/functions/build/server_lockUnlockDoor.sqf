///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_lockUnlockDoor
//
//	Description:	Validates and logs lock and unlock requests for persisted doors and gates.
//	Groups:		Build
//
//	Syntax:		[playerNetId, doorNetId, operation, suppliedCode, clientKey] call server_lockUnlockDoor
//
//	Parameters:	playerNetId: String - Network ID of the requesting player
//			doorNetId: String - Network ID of the door or gate
//			operation: Number - 0 failed unlock, 1 unlock, 2 lock
//			suppliedCode: String - Combination or access method supplied by the client
//			clientKey: String - Authentication key of the requesting client
//
//	Return Value:	Nothing
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_LOCK_UNLOCK_DOOR

#ifdef DEBUG_SERVER_LOCK_UNLOCK_DOOR
	diag_log format ['[Server Debug]: [server_lockUnlockDoor]: Function called with arguments: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this != 5}) exitWith {
	diag_log format ['[Server Debug]: [server_lockUnlockDoor]: Error: Invalid parameter format: %1',_this];
};

local _player = objectFromNetId (_this select 0);
local _object = objectFromNetId (_this select 1);
local _operation = _this select 2;
local _suppliedCode = _this select 3;
local _clientKey = _this select 4;

if (isNull _player) exitWith {
	diag_log format ['[Server Debug]: [server_lockUnlockDoor]: Error: Player is null: %1',_this];
};

local _playerUID = getPlayerUID _player;
local _playerName = _player call DZE_fnc_getNamePlayer;

if (isNull _object) exitWith {
	diag_log format ['[Server Debug]: [server_lockUnlockDoor]: Warning: Door object is null for %1 (%2): %3',_playerName,_playerUID,_this];
};

local _positionASL = [_object] call DZE_fnc_modelCenterWorld;

if !([_this,'server_lockUnlockDoor',_positionASL,_player,_clientKey] call server_verifySender) exitWith {};

local _objectType = typeOf _object;

if !(_objectType in DZE_DoorsLocked) exitWith {
	diag_log format ['[Server Debug]: [server_lockUnlockDoor]: Warning: Rejected unsupported door from %1 (%2): %3',_playerName,_playerUID,_objectType];
};

if !(_operation in [0,1,2]) exitWith {
	diag_log format ['[Server Debug]: [server_lockUnlockDoor]: Warning: Rejected unsupported operation from %1 (%2): %3',_playerName,_playerUID,_operation];
};

local _actualCode = _object getVariable ['CharacterID','0'];

if (_operation == 0) exitWith {
	diag_log format ['[Server Debug]: [server_lockUnlockDoor]: %1 (%2) FAILED unlocking %3 with code %4 (actual: %5) @%6',_playerName,_playerUID,_objectType,_suppliedCode,_actualCode,_positionASL call server_positionToLocation];
};

local _isUnlock = _operation == 1;
local _operationText = ['LOCKED','UNLOCKED'] select _isUnlock;
local _lockCode = [_actualCode,_suppliedCode] select _isUnlock;

diag_log format ['[Server Debug]: [server_lockUnlockDoor]: %1 (%2) %3 %4 with code %5 @%6',_playerName,_playerUID,_operationText,_objectType,_lockCode,_positionASL call server_positionToLocation];
