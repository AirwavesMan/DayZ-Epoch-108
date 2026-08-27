///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_createRemoveObjectOutput
//
//	Description:	Creates the resolved removal output in a holder and places backpack objects around
//			the output without repeatedly scanning nearby buildings.
//	Groups:		Build
//
//	Syntax:		[removeOutput,objectPosition,objectDirection,isStorage,objectBounds] call DZE_fnc_createRemoveObjectOutput
//
//	Parameters:	removeOutput: Array - Output entries in [className,count,cargoType] format
//			objectPosition: Array - Position captured before deletion
//			objectDirection: Number - Direction captured before deletion
//			isStorage: Boolean - Whether storage-safe placement is required
//			objectBounds: Array - Positive bounding-box dimensions captured for backpack spacing
//
//	Return Value:	Number - Delay before restoring the standing animation
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_CREATE_REMOVE_OBJECT_OUTPUT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_CREATE_REMOVE_OBJECT_OUTPUT
	diag_log format ['[Client Debug]: [DZE_fnc_createRemoveObjectOutput]: Function called with arguments: %1',_this];
#endif

local _removeOutput = param(0,[]);
local _objectPosition = param(1,[]);
local _objectDirection = param(2,0);
local _isStorage = param(3,false);
local _objectBounds = param(4,[]);

if (count _removeOutput == 0) exitWith {
	localize 'STR_BUILD_REMOVE_NO_PARTS' call DZE_fnc_rollingMessages;
	0
};

local _resolvedOutput = [];
local _backpackClasses = [];
local _backpackTotal = 0;
local _totalCount = 0;
local _itemClass = '';
local _itemCount = 0;
local _minimum = 0;
local _maximum = 0;
local _range = 0;
local _cargoType = 3;
{
	_itemClass = _x select 0;
	_itemCount = _x select 1;
	_cargoType = if (count _x > 2) then {_x select 2} else {3};

	if (typeName _itemCount == 'ARRAY') then {
		_minimum = _itemCount select 0;
		_maximum = _itemCount select 1;
		_range = abs (_maximum - _minimum) + 1;
		_itemCount = floor (random _range) + _minimum;
	};

	if (_itemCount > 0) then {
		_resolvedOutput set [count _resolvedOutput,[_itemClass,_itemCount,_cargoType]];
		_totalCount = _totalCount + _itemCount;

		if (_cargoType == 5) then {
			_backpackTotal = _backpackTotal + _itemCount;

			if !(_itemClass in _backpackClasses) then {
				_backpackClasses set [count _backpackClasses,_itemClass];
			};
		};
	};
} forEach _removeOutput;

if (_totalCount == 0) exitWith {0};

['WeaponHolder',objNull] call fn_waitForObject;
{
	[_x,objNull] call fn_waitForObject;
} forEach _backpackClasses;

local _holder = 'WeaponHolder' createVehicle [0,0,0];
local _outputPosition = _objectPosition;
local _outputDirection = _objectDirection;

if ((player distance _objectPosition) > 1.5) then {
	// Place distant output in front of the player instead of at the removed object.
	_outputDirection = [player,_objectPosition] call BIS_fnc_dirTo;
	_outputPosition = [player,1.5,_outputDirection] call BIS_fnc_relPos;
};

_outputPosition set [2,((getPosATL player) select 2) max 0];
_holder setDir _outputDirection;

local _playerPosition = getPosATL player;
local _nearbyBuildingBounds = [];
if (_isStorage || {_backpackTotal > 0}) then {
	// Reuse one building scan for the holder and every backpack position.
	{
		_nearbyBuildingBounds set [count _nearbyBuildingBounds,[_x,boundingBox _x select 1]];
	} forEach (nearestObjects [_outputPosition,['Building'],50]);
};

local _isInsideBuilding = {
	local _position = _this;
	local _inside = false;
	local _buildingData = [];
	local _building = objNull;
	local _relativePosition = [];
	local _maximumBounds = [];
	local _positionX = 0;
	local _positionY = 0;
	local _positionZ = 0;
	local _maximumX = 0;
	local _maximumY = 0;
	local _maximumZ = 0;
	{
		_buildingData = _x;
		_building = _buildingData select 0;

		if (_building != _holder) then {
			_relativePosition = _building worldToModel _position;
			_maximumBounds = _buildingData select 1;
			_positionX = abs (_relativePosition select 0);
			_positionY = abs (_relativePosition select 1);
			_positionZ = abs (_relativePosition select 2);
			_maximumX = _maximumBounds select 0;
			_maximumY = _maximumBounds select 1;
			_maximumZ = _maximumBounds select 2;

			if (_positionX < _maximumX && {_positionY < _maximumY} && {_positionZ < _maximumZ}) then {
				_inside = true;
			};
		};

		if (_inside) exitWith {};
	} forEach _nearbyBuildingBounds;

	_inside
};

local _backpackDistance = 0.3;
if (count _objectBounds >= 2) then {
	local _minimumBounds = ((_objectBounds select 0) min (_objectBounds select 1)) * 0.5;
	_backpackDistance = (_minimumBounds max 0.3) min 0.75;
};

if (_isStorage && {_outputPosition call _isInsideBuilding}) then {
	// Prevent storage output from spawning inside an unenterable building.
	_outputPosition = _playerPosition;
	_backpackDistance = 0.1;
};

local _backpackDirection = floor (random 360);
local _backpackArc = 360 / (_backpackTotal max 1);
local _backpackObject = objNull;
local _backpackPosition = [];
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
				_backpackPosition = [_outputPosition,_backpackDistance,_backpackDirection] call BIS_fnc_relPos;
				_backpackObject setVectorDirAndUp [[0,0,-1],[[0,1,0],-_backpackDirection] call BIS_fnc_rotateVector2D];	// Lay it flat and align it to the holder.
				_backpackPosition set [2,((_backpackPosition select 2) max 0) - 0.15];

				if (_backpackPosition call _isInsideBuilding) then {
					_backpackObject setPosATL _playerPosition;
				} else {
					_backpackObject setPosATL _backpackPosition;
				};

				_backpackDirection = (_backpackDirection + _backpackArc) % 360;	// Arrange backpacks evenly around the holder.
			};
		};
	};
} forEach _resolvedOutput;

_holder setPosATL _outputPosition;
DZE_GearCheckBypass = true;
player action ['Gear',_holder];	// The gear dialog always opens on a non-empty holder.

#ifdef DEBUG_DZE_FNC_CREATE_REMOVE_OBJECT_OUTPUT
	diag_log format ['[Client Debug]: [DZE_fnc_createRemoveObjectOutput]: Entries: %1 | Total items: %2 | Backpacks: %3 | Position: %4',count _resolvedOutput,_totalCount,_backpackTotal,_outputPosition];
#endif

1
