///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_eh_getIn_staticWeapon
//
//	Description:	Ejects players who enter a static weapon inside a base without base access.
//	Groups:		Event Handler
//
//	Syntax:		[weapon,position,player] call server_eh_getIn_staticWeapon
//
//	Parameters:	weapon: Object - Static weapon that was entered
//			position: String - Entered vehicle position supplied by the GetIn event handler
//			player: Object - Player who entered the static weapon
//
//	Return Value:	Nothing
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_SERVER_EH_GET_IN_STATIC_WEAPON

#ifdef DEBUG_SERVER_EH_GET_IN_STATIC_WEAPON
	diag_log format ['[Server Debug]: [server_eh_getIn_staticWeapon]: Function called with arguments: %1',_this];
#endif

local _weapon = _this select 0;
local _nearestBase = ([_weapon,false] call DZE_fnc_findBases) select 2;
diag_log "Test1";
if (isNull _nearestBase) exitWith {};

local _player = _this select 2;
local _playerUID = getPlayerUID _player;

local _baseFriends = _nearestBase getVariable 'baseFriends'; // owner is index 0.
local _isBaseFriend = false;
systemChat "Test";
diag_log "Test2";
{
	if ((_x select 0) == _playerUID) exitWith {_isBaseFriend = true;};
} count _baseFriends;

if (_isBaseFriend) exitWith {};

// "eject" action cannot be used for remote players
moveOut _player; 	

//	uncomment to log the offender to the server rpt.
//diag_log format ['[Server Debug]: [server_eh_getIn_staticWeapon]: Ejected %1 (%2) from %3 at base %4',_player call DZE_fnc_getNamePlayer,_playerUID,typeOf _weapon,_nearestBase];
