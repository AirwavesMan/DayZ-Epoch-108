///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_getNamePlayer
//
//	Description:	Gets the name from a unit.
//	Syntax:			player call DZE_fnc_getNamePlayer;
//
//	Return Value:	String - Name of the player
//
//	Called by:		Client and Server
//
//	Note:			Handles the Error no Unit error message.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _player = _this;
local _playerName = '';

if (!isNull _player) then {
    if (alive _player) then {
        _playerName = [name _player,1] call fnc_sanitizeInput;
    } else {
        local _bodyName = _player getVariable ['bodyName', 'unknown'];

        //  Player is dead, get bodyname
        if (_bodyName != 'unknown') then {
            _playerName = _bodyName;
        } else {
            //  Use PlayerUID if no bodyname was unknown
            _playerName = getPlayerUID _player;
        };
    };
} else {
    _playerName = 'Null Player';
};

_playerName