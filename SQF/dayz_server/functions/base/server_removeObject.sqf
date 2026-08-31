///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_removeObject
//
//	Description:	Authenticates an object-removal request, deletes the object and removes its
//			persistent database entry when present.
//	Groups:		Base
//
//	Syntax:		[playerNetID,objectNetID,clientKey] call server_removeObject
//
//	Parameters:	playerNetID: String - Network ID of the requesting player
//			objectNetID: String - Network ID of the object to remove
//			clientKey: String - Authentication key of the requesting client
//
//	Return Value:	Nothing
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_SERVER_REMOVE_OBJECT

#ifdef DEBUG_SERVER_REMOVE_OBJECT
	diag_log format ['[Server Debug]: [server_removeObject]: Function called with arguments: %1',_this];
#endif

local _player = objectFromNetId (_this select 0);
local _object = objectFromNetId (_this select 1);
local _clientKey = _this select 2;

if (isNull _object) exitWith {
	diag_log format ['[Server Debug]: [server_removeObject]: Warning: Object is null: %1',_this];
};

local _positionASL = [_object] call DZE_fnc_modelCenterWorld;
if !([_this,'server_removeObject',_positionASL,_player,_clientKey] call server_verifySender) exitWith {};

local _playerUID = getPlayerUID _player;
local _playerName = _player call DZE_fnc_getNamePlayer;

local _objectID = _object getVariable ['ObjectID','0'];
local _objectUID = _object getVariable ['ObjectUID','0'];
local _type = typeOf _object;
local _databaseID = _objectUID;
local _queryType = 310;
local _identifier = 'UID';

if (parseNumber _objectID > 0) then {
	_databaseID = _objectID;
	_queryType = 304;
	_identifier = 'ID';
};

deleteVehicle _object;

// Remove persistent objects from the database; transient objects have no database identifier.
if (_databaseID != '0') then {
	local _key = format ['CHILD:%1:%2:',_queryType,_databaseID];
	_key call server_hiveWrite;
	diag_log format ['DELETE: Player %1 (%2) deleted %3 with %4: %5',_playerName,_playerUID,_type,_identifier,_databaseID];
};

#ifdef DEBUG_SERVER_REMOVE_OBJECT
	diag_log format ['[Server Debug]: [server_removeObject]: Deleted: %1 | Class: %2 | Database %3: %4',isNull _object,_type,_identifier,_databaseID];
#endif
