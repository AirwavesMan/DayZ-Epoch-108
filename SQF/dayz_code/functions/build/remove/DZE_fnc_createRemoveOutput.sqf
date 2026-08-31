///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_createRemoveOutput
//
//	Description:	Creates the resolved removal output and places backpack objects without repeatedly
//			scanning nearby buildings.
//	Groups:		Build
//
//	Syntax:		[removeOutput,objectPositionASL,objectDirection,isStorage,objectBounds] call DZE_fnc_createRemoveOutput
//
//	Parameters:	removeOutput: Array - Output entries in [className,count,cargoType] format
//			objectPositionASL: Array - PositionASL captured before deletion
//			objectDirection: Number - Direction captured before deletion
//			isStorage: Boolean - Whether storage-safe placement is required
//			objectBounds: Array - Positive bounding-box dimensions captured for backpack spacing
//
//	Return Value:	Number - Delay before restoring the standing animation
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_CREATE_REMOVE_OUTPUT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_CREATE_REMOVE_OUTPUT
	diag_log format ['[Client Debug]: [DZE_fnc_createRemoveOutput]: Function called with arguments: %1',_this];
#endif

local _removeOutput = param(0,[]);
local _objectPositionASL = param(1,[]);
local _objectDirection = param(2,0);
local _isStorage = param(3,false);
local _objectBounds = param(4,[]);

local _resolvedOutput = [];
local _backpackClasses = [];
local _backpackTotal = 0;
local _hasHolderOutput = false;
local _itemClass = '';
local _itemCount = 0;
local _minimum = 0;
local _range = 0;
local _cargoType = 3;
{
	_itemClass = _x select 0;
	_itemCount = _x select 1;
	_cargoType = if (count _x > 2) then {_x select 2} else {3};

	if (typeName _itemCount == 'ARRAY') then {
		_minimum = _itemCount select 0;
		_range = abs ((_itemCount select 1) - _minimum) + 1;
		_itemCount = floor (random _range) + _minimum;
	};

	if (_itemCount > 0) then {
		_resolvedOutput set [count _resolvedOutput,[_itemClass,_itemCount,_cargoType]];

		if (_cargoType == 5) then {
			_backpackTotal = _backpackTotal + _itemCount;

			if !(_itemClass in _backpackClasses) then {
				_backpackClasses set [count _backpackClasses,_itemClass];
			};
		} else {
			_hasHolderOutput = true;
		};
	};
} forEach _removeOutput;

if (count _resolvedOutput == 0) exitWith {
	localize 'STR_BUILD_REMOVE_NO_PARTS' call DZE_fnc_rollingMessages;
	0
};

if (_hasHolderOutput) then {
	['WeaponHolder',objNull] call fn_waitForObject;
};
{
	[_x,objNull] call fn_waitForObject;
} forEach _backpackClasses;

local _playerPositionASL = getPosASL player;
local _outputPositionASL = [_objectPositionASL select 0,_objectPositionASL select 1,_playerPositionASL select 2];
local _outputDirection = _objectDirection;

if (([_playerPositionASL,_objectPositionASL] call BIS_fnc_distance2D) > 1.5) then {
	// Place distant output in front of the player instead of at the removed object.
	_outputDirection = [_playerPositionASL,_objectPositionASL] call BIS_fnc_dirTo;
	_outputPositionASL = [_playerPositionASL,1.5,_outputDirection] call BIS_fnc_relPos;
	_outputPositionASL set [2,_playerPositionASL select 2];
};

local _holder = objNull;
if (_hasHolderOutput) then {
	_holder = 'WeaponHolder' createVehicle [0,0,0];
	_holder setDir _outputDirection;
};

local _nearbyBuildingBounds = [];
if (_isStorage || _backpackTotal > 0) then {
	// Reuse one building scan for the holder and every backpack position.
	{
		_nearbyBuildingBounds set [count _nearbyBuildingBounds,[_x,boundingBox _x select 1]];
	} forEach (nearestObjects [ASLToAGL(_outputPositionASL),['Building'],50]);
};

local _isInsideBuilding = {
	local _positionAGL = ASLToAGL(_this);
	local _inside = false;
	local _building = objNull;
	local _relativePosition = [];
	local _maximumBounds = [];
	{
		_building = _x select 0;
		_relativePosition = _building worldToModel _positionAGL;
		_maximumBounds = _x select 1;

		if (
			abs (_relativePosition select 0) < (_maximumBounds select 0) &&
			abs (_relativePosition select 1) < (_maximumBounds select 1) &&
			abs (_relativePosition select 2) < (_maximumBounds select 2)
		) then {
			_inside = true;
		};

		if (_inside) exitWith {};
	} forEach _nearbyBuildingBounds;

	_inside
};

local _minimumBounds = ((_objectBounds select 0) min (_objectBounds select 1)) * 0.5;
local _backpackDistance = (_minimumBounds max 0.3) min 0.75;

if (_isStorage && {_outputPositionASL call _isInsideBuilding}) then {
	// Prevent storage output from spawning inside an unenterable building.
	_outputPositionASL = _playerPositionASL;
	_backpackDistance = 0.1;
};

local _backpackDirection = floor (random 360);
local _backpackArc = 360 / (_backpackTotal max 1);
local _backpackObject = objNull;
local _backpackPositionASL = [];
{
	_itemClass = _x select 0;
	_itemCount = _x select 1;
	_cargoType = _x select 2;

	call {
		if (_cargoType == 2) exitWith {_holder addWeaponCargoGlobal [_itemClass,_itemCount]};
		if (_cargoType == 3) exitWith {_holder addMagazineCargoGlobal [_itemClass,_itemCount]};
		if (_cargoType == 5) exitWith {
			for '_index' from 1 to _itemCount do {
				_backpackObject = _itemClass createVehicle [0,0,0];	// Create backpack as a world object.
				_backpackPositionASL = [_outputPositionASL,_backpackDistance,_backpackDirection] call BIS_fnc_relPos;
				_backpackObject setVectorDirAndUp [[0,0,-1],[[0,1,0],-_backpackDirection] call BIS_fnc_rotateVector2D];	// Lay it flat and align it to the holder.
				_backpackPositionASL set [2,(_outputPositionASL select 2) - 0.15];

				if (_backpackPositionASL call _isInsideBuilding) then {
					_backpackObject setPosASL _playerPositionASL;
				} else {
					_backpackObject setPosASL _backpackPositionASL;
				};

				_backpackDirection = (_backpackDirection + _backpackArc) % 360;	// Arrange backpacks evenly around the holder.
			};
		};
	};
} forEach _resolvedOutput;

if (_hasHolderOutput) then {
	_holder setPosASL _outputPositionASL;
	DZE_GearCheckBypass = true;
	player action ['Gear',_holder];
};

#ifdef DEBUG_DZE_FNC_CREATE_REMOVE_OUTPUT
	diag_log format ['[Client Debug]: [DZE_fnc_createRemoveOutput]: Entries: %1 | Holder: %2 | Backpacks: %3 | Position ASL: %4',count _resolvedOutput,_hasHolderOutput,_backpackTotal,_outputPositionASL];
#endif

[0,1] select _hasHolderOutput
