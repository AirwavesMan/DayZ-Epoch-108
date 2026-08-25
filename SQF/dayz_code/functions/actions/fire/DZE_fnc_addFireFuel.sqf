///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_addFireFuel
//
//	Description:	Consumes one magazine and requests its configured burn time for a fireplace.
//	Groups:		Actions, Fire
//
//	Syntax:		Called through addAction with [fireplace, magazineClass]
//
//	Parameters:	fireplace: Object - Fuel-using fireplace receiving the burn time
//			magazineClass: String - Magazine class with DZE_burnTimer
//
//	Return Value:	Nothing
//
//	Called by:	Client self action
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "\z\addons\dayz_code\functions\include\defines.hpp"

//#define DEBUG_DZE_FNC_ADD_FIRE_FUEL

#ifdef DEBUG_DZE_FNC_ADD_FIRE_FUEL
	diag_log format ['[Client Debug]: [DZE_fnc_addFireFuel]: Function called with argumentes: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'str_player_actionslimit' call DZE_fnc_rollingMessages};
dayz_actionInProgress = true;

local _arguments = _this select 3;
local _fireplace = _arguments select 0;
local _magazine = _arguments select 1;

if (isNull _fireplace || {!alive _fireplace} || {player distance _fireplace > 3.5} || {getNumber (configFile >> 'CfgVehicles' >> typeOf _fireplace >> 'DZE_fireUseFuel') != 1}) exitWith {
	dayz_actionInProgress = false;
	systemChat localize 'str_cursorTargetNotFound';
};

local _magazineConfig = configFile >> 'CfgMagazines' >> _magazine;
local _burnTimer = getNumber (_magazineConfig >> 'DZE_burnTimer');
local _backpack = unitBackpack player;
local _backpackCargo = [[],[]];
local _backpackMagazineIndex = -1;
local _hasFuelMagazine = _magazine in magazines player;

if (!_hasFuelMagazine && {!isNull _backpack}) then {
	_backpackCargo = getMagazineCargo _backpack;
	_backpackMagazineIndex = (_backpackCargo select 0) find _magazine;
	_hasFuelMagazine = _backpackMagazineIndex >= 0 && {(_backpackCargo select 1) select _backpackMagazineIndex > 0};
};

if (!isClass _magazineConfig || {_burnTimer <= 0} || {!_hasFuelMagazine}) exitWith {
	dayz_actionInProgress = false;
	localize 'STR_FIREPLACE_FUEL_MISSING' call DZE_fnc_rollingMessages;
};

if (getNumber (_magazineConfig >> 'DZE_fuelQuantity') > 0) then {
	[player,(getPosATL player),25,'refuel'] spawn fnc_alertZombies;
};

if !(call DZE_fnc_playActionPutDown) exitWith {dayz_actionInProgress = false};
raiseWeapon;

// Refresh the inventory state after the animation before consuming the selected magazine.
_backpack = unitBackpack player;
_backpackCargo = [[],[]];
_backpackMagazineIndex = -1;
_hasFuelMagazine = _magazine in magazines player;

if (!_hasFuelMagazine && {!isNull _backpack}) then {
	_backpackCargo = getMagazineCargo _backpack;
	_backpackMagazineIndex = (_backpackCargo select 0) find _magazine;
	_hasFuelMagazine = _backpackMagazineIndex >= 0 && {(_backpackCargo select 1) select _backpackMagazineIndex > 0};
};

if (isNull _fireplace || {!alive _fireplace} || {player distance _fireplace > 3.5} || {!_hasFuelMagazine}) exitWith {
	dayz_actionInProgress = false;
	localize 'STR_FIREPLACE_FUEL_MISSING' call DZE_fnc_rollingMessages;
};

local _removed = [player,_magazine] call BIS_fnc_invRemove;
local _removedFromBackpack = false;
local _backpackMagazineClass = '';
local _backpackMagazineCount = 0;

if (_removed != 1 && {!isNull _backpack} && {_backpackMagazineIndex >= 0}) then {
	// Rebuild only the player's backpack cargo and subtract one unit of the selected fuel.
	clearMagazineCargoGlobal _backpack;

	{
		_backpackMagazineClass = _x;
		_backpackMagazineCount = (_backpackCargo select 1) select _forEachIndex;

		if (_forEachIndex == _backpackMagazineIndex && {_backpackMagazineCount > 0}) then {
			_backpackMagazineCount = _backpackMagazineCount - 1;
			_removed = 1;
			_removedFromBackpack = true;
		};

		if (_backpackMagazineCount > 0) then {
			_backpack addMagazineCargoGlobal [_backpackMagazineClass,_backpackMagazineCount];
		};
	} forEach (_backpackCargo select 0);
};

if (_removed != 1) exitWith {
	dayz_actionInProgress = false;
	localize 'STR_FIREPLACE_FUEL_MISSING' call DZE_fnc_rollingMessages;
};

local _emptyContainer = getText (_magazineConfig >> 'containerEmpty');
local _responseTimeout = diag_tickTime + 15;
local _responseReceived = false;
local _remainingBurnTime = 0;
local _maximumReached = false;

PVDZE_fireFuelResult = [];
PVDZE_addFireFuel = [netId player,netId _fireplace,_magazine];
publicVariableServer 'PVDZE_addFireFuel';

waitUntil {
	uiSleep 0.05;
	_responseReceived = count PVDZE_fireFuelResult >= 2;
	_responseReceived || {diag_tickTime >= _responseTimeout}
};

if (_responseReceived) then {
	_remainingBurnTime = PVDZE_fireFuelResult select 0;
	_maximumReached = PVDZE_fireFuelResult select 1;
};

if (_responseReceived) then {
	// Convert the server-calculated seconds only for the client message.
	local _remainingBurnMinutes = round (_remainingBurnTime / 60);

	// Return an empty container only after the server accepted the fuel.
	if (_emptyContainer != '') then {
		if (_removedFromBackpack && {!isNull _backpack} && {_backpack == unitBackpack player}) then {
			_backpack addMagazineCargoGlobal [_emptyContainer,1];
		} else {
			player addMagazine _emptyContainer;
		};
	};

	if (_maximumReached) then {
		[format [localize 'STR_FIREPLACE_FUEL_MAXIMUM_REACHED',_remainingBurnMinutes],1] call DZE_fnc_rollingMessages;
	} else {
		[format [localize 'STR_FIREPLACE_FUEL_ADDED',getText (_magazineConfig >> 'displayName'),_remainingBurnMinutes],1] call DZE_fnc_rollingMessages;
	};
} else {
	// Restore the magazine when the server does not answer.
	if (_removedFromBackpack && {!isNull _backpack} && {_backpack == unitBackpack player}) then {
		_backpack addMagazineCargoGlobal [_magazine,1];
	} else {
		player addMagazine _magazine;
	};

	localize 'STR_FIREPLACE_FUEL_REQUEST_FAILED' call DZE_fnc_rollingMessages;
};

call player_forceSave;

{player removeAction _x} count s_player_fireFuelActions;
s_player_fireFuelActions = [];
DZE_fireFuelTarget = objNull;
DZE_fireFuelMagazines = [];
PVDZE_fireFuelResult = [];

#ifdef DEBUG_DZE_FNC_ADD_FIRE_FUEL
	diag_log format ['[Client Debug]: [DZE_fnc_addFireFuel]: Server response for %1 using %2: %3',_fireplace,_magazine,[_remainingBurnTime,_maximumReached]];
#endif

dayz_actionInProgress = false;
