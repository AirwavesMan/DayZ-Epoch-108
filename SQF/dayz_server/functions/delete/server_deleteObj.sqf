if (count _this < 3) exitWith {diag_log "Server_DeleteObj error: Improper parameter format";};

local _player = objectFromNetID(_this select 0);
local _object = objectFromNetID(_this select 1);
local _clientKey = _this select 2;
local _playerUID = getPlayerUID _player;

if !([_this,"DeleteObj",_object,_player,_clientKey] call server_verifySender) exitWith {};

local _id = _object getVariable ["ObjectID","0"];
local _uid = _object getVariable ["ObjectUID","0"];
_type = typeOf _object;

local _processDelete = [true,_this select 3] select (count _this > 3);
if (_processDelete) then {deleteVehicle _object};

//remove from database
if (parseNumber _id > 0) then {
	//Send request
	_key = format["CHILD:304:%1:",_id];
	_key call server_hiveWrite;
	diag_log format["DELETE: Player %1(%2) deleted %4 with ID: %3",_player call DZE_fnc_getNamePlayer, _playerUID, _id, _type];
} else  {
	//Send request
	_key = format["CHILD:310:%1:",_uid];
	_key call server_hiveWrite;
	diag_log format["DELETE: Player %1(%2) deleted %4 with UID: %3",_player call DZE_fnc_getNamePlayer, _playerUID, _uid, _type];
};
