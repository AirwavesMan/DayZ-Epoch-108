///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_addFireFuel
//
//	Description:	Adds the configured burn time of one magazine and returns the remaining time.
//	Groups:		Fire
//
//	Syntax:		[playerNetId, fireplaceNetId, magazineClass] call server_addFireFuel
//
//	Parameters:	playerNetId: String - Network ID of the requesting player
//			fireplaceNetId: String - Network ID of the fireplace receiving fuel
//			magazineClass: String - Consumed magazine class with DZE_burnTimer
//
//	Return Value:	Nothing
//
//	Called by:	Server public variable event handler
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_ADD_FIRE_FUEL

#ifdef DEBUG_SERVER_ADD_FIRE_FUEL
	diag_log format ['[Server Debug]: [server_addFireFuel]: Function called with argumentes: %1',_this];
#endif

local _player = objectFromNetId (_this select 0);
local _fireplace = objectFromNetId (_this select 1);
local _magazine = _this select 2;

local _magazineConfig = configFile >> 'CfgMagazines' >> _magazine;
local _addedBurnTime = getNumber (_magazineConfig >> 'DZE_burnTimer');

local _burnEnd = _fireplace getVariable ['DZE_fireBurnEnd',-1];
local _remainingBurnTime = if (_burnEnd >= 0) then {(_burnEnd - diag_tickTime) max 0} else {_fireplace getVariable ['DZE_fireBurnTime',0]};

_remainingBurnTime = ((_remainingBurnTime max 0) + _addedBurnTime) min DZE_fireMaximumBurnTime;
local _maximumReached = _remainingBurnTime >= DZE_fireMaximumBurnTime;

// Keep the absolute end time while burning and store seconds while the fireplace is unlit.
if (_burnEnd >= 0) then {
	_fireplace setVariable ['DZE_fireBurnTime',0];
	_fireplace setVariable ['DZE_fireBurnEnd',diag_tickTime + _remainingBurnTime];
} else {
	_fireplace setVariable ['DZE_fireBurnTime',_remainingBurnTime];
	_fireplace setVariable ['DZE_fireBurnEnd',-1];
};
if !(_fireplace in DZE_fireObjects) then {
	DZE_fireObjects set [count DZE_fireObjects,_fireplace];
};

// Return only the server-calculated remaining time and whether the maximum was reached.
PVDZE_fireFuelResult = [ceil _remainingBurnTime,_maximumReached];
owner _player publicVariableClient 'PVDZE_fireFuelResult';

#ifdef DEBUG_SERVER_ADD_FIRE_FUEL
	diag_log format ['[Server Debug]: [server_addFireFuel]: Added %1 seconds from %2 to %3; remaining burn time: %4',_addedBurnTime,_magazine,_fireplace,_remainingBurnTime];
#endif
