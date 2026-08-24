///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_verifySender
//
//	Description:	Validates the player, postion, distance and client authentication key.
//	Groups:		Verification
//
//	Syntax:		[parameters, functionName, object, postionASL, clientKey] call server_verifySender
//
//	Return Value:	Boolean
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_VERIFY_SENDER

#ifdef DEBUG_VERIFY_SENDER
	diag_log format ['[Server Debug]: [Verify Sender]: Function called with argumentes: %1',_this];
#endif

local _params = _this select 0;
local _function = _this select 1;
local _postionASL = _this select 2;
local _player = _this select 3;
local _clientKey = _this select 4;

local _verificationPassed = false;
local _abortMessage = '';
local _playerUID = '';
local _playerName = '';
local _index = -1;

call {
	if (isNull _player) exitwith {
		_abortMessage = format ['Null player found, player: %1',_player];
	};

	_playerUID = getPlayerUID _player;
	_playerName = _player call DZE_fnc_getNamePlayer;
	local _positionASLPlayer = getPosASL _player;

	if (_postionASL distance _positionASLPlayer > (Z_VehicleDistance + 10)) exitwith {
		_abortMessage = format ['Player is too far from object. Distance: %1m/%2m limit',round(_postionASL distance _positionASLPlayer),Z_VehicleDistance + 10];
	}; 

	_index = dayz_serverPUIDArray find _playerUID;

	if (_index < 0) exitwith {
		_abortMessage = 'Player UID not found server';
	};

	if (((dayz_serverClientKeys select _index) select 0 != owner _player) || ((dayz_serverClientKeys select _index) select 1 != _clientKey)) exitwith {
		_abortMessage = 'Client authentication key incorrect or unrecognized ';
	};

	_verificationPassed = true;
};

if !(_verificationPassed) then {
	diag_log format ['[Server Debug]: [Verify Sender]: Verification failed for function: %1 called by %2 (%3), %4, params: %5',_function,_playerName,_playerUID,_abortMessage,_params];
};

#ifdef DEBUG_VERIFY_SENDER
	if (_verificationPassed) then {
		diag_log format ['[Server Debug]: [Verify Sender]: Verification successful for function: %1 called by %2 (%3), params: %4',_function,_playerName,_playerUID,_params];
	};
#endif

_verificationPassed