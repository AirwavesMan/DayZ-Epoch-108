private ["_player","_playerUID","_key","_message"];
_player = _this select 0;
_playerUID = if (count _this > 1) then {_this select 1} else {getPlayerUID _player};

_key = format["CHILD:803:%1:",_playerUID];
_key call server_hiveWrite;

_message = format["GARAGE: %1 (%2) maintained vehicles linked to UID: %3 @%4 %5",_player call DZE_fnc_getNamePlayer,getPlayerUID _player,_playerUID,mapGridPosition _player,getPosATL _player];
diag_log _message;
