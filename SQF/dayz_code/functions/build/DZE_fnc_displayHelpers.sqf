///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_displayHelpers
//
//	Description:	Creates local colored helper spheres from configured or generated points around
//			a selected buildable, or removes the currently displayed helper set.
//	Groups:		Build
//
//	Syntax:		[object] call DZE_fnc_displayHelpers
//			[object, texture] call DZE_fnc_displayHelpers
//			[object, texture, fallback] call DZE_fnc_displayHelpers
//			[] call DZE_fnc_displayHelpers
//
//	Parameters:	object: Object - Object whose configured or generated helper points are displayed
//			texture: Array - Optional setObjectTexture argument; defaults to DZE_removeTexture
//			fallback: Boolean - Optional center helper when no configured or generated points exist
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_DISPLAY_HELPERS

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_DISPLAY_HELPERS
	diag_log format ['[Client Debug]: [DZE_fnc_displayHelpers]: Function called with argumentes: %1',_this];
#endif

local _object = param(0,objNull);
local _helperTexture = param(1,DZE_removeTexture);
local _showFallback = param(2,false);

// Only one helper set may be active. Cleanup also runs when helper display is disabled.
{
	if (!isNull _x) then {
		detach _x;
		deleteVehicle _x;
	};
} forEach DZE_displayHelperObjects;
DZE_displayHelperObjects = [];

local _objectType = typeOf _object;
local _matchingObjectFound = true;
local _nearbyRadius = 0;

// Green removal helpers can optionally require another object of the exact same class nearby.
if (DZE_displayOnlyIfNearby && {[_helperTexture,DZE_removeTexture] call BIS_fnc_areEqual}) then {
	local _box = boundingBox _object;
	local _lowerDiagonal = _box select 0;
	local _upperDiagonal = _box select 1;
	local _width = abs (_lowerDiagonal select 0) + abs (_upperDiagonal select 0);
	local _length = abs (_lowerDiagonal select 1) + abs (_upperDiagonal select 1);
	local _height = abs (_lowerDiagonal select 2) + abs (_upperDiagonal select 2);
	_nearbyRadius = sqrt (_width^2 + _length^2 + _height^2) + 0.5;
	local _nearbyObjects = _object nearObjects [_objectType,_nearbyRadius];
	_matchingObjectFound = false;

	{
		if (_x != _object && {typeOf _x == _objectType}) exitWith {_matchingObjectFound = true};
	} forEach _nearbyObjects;
};

if (!_matchingObjectFound) exitWith {
	#ifdef DEBUG_DZE_FNC_DISPLAY_HELPERS
		diag_log format ['[Client Debug]: [DZE_fnc_displayHelpers]: No matching nearby object | Object type: %1 | Radius: %2',_objectType,_nearbyRadius];
	#endif
};

local _helperConfig = configFile >> 'HelperVectors' >> _objectType;
local _points = getArray (_helperConfig >> 'points');
local _usesHelperVectors = count _points > 0;

// Objects without dedicated helper vectors reuse their snapping points.
if (!_usesHelperVectors) then {_points = getArray (configFile >> 'SnapBuilding' >> _objectType >> 'points')};

// Camo nets have no curated points, so derive removal helpers from their collision geometry.
if (count _points == 0 && {_objectType in DZE_CamoNets}) then {_points = [_object,true] call DZE_fnc_snapPointsForObject};

if (count _points == 0 && {_showFallback}) then {
	_points = [[0,0,0]];

	#ifdef DEBUG_DZE_FNC_DISPLAY_HELPERS
		diag_log format ['[Client Debug]: [DZE_fnc_displayHelpers]: Using fallback center helper | Object type: %1',_objectType];
	#endif
};

if (count _points == 0) exitWith {
	#ifdef DEBUG_DZE_FNC_DISPLAY_HELPERS
		diag_log format ['[Client Debug]: [DZE_fnc_displayHelpers]: Warning: No helper points available for object type: %1',_objectType];
	#endif
};

local _helperSize = getNumber (_helperConfig >> 'size');
if (_helperSize == 0) then {_helperSize = DZE_helperSizeDefault};

local _helperClass = '';
{
	if (_helperSize == _x select 0) exitWith {_helperClass = _x select 1};
} forEach DZE_helperSize;

if (_helperClass == '' || {!isClass (configFile >> 'CfgVehicles' >> _helperClass)}) exitWith {
	#ifdef DEBUG_DZE_FNC_DISPLAY_HELPERS
		diag_log format ['[Client Debug]: [DZE_fnc_displayHelpers]: Error: Invalid helper size mapping | Object type: %1 | Helper size: %2 | Helper class: %3',_objectType,_helperSize,_helperClass];
	#endif
};

// The last dedicated point represents a moving door part and is hidden while that part is open.
if (_usesHelperVectors && {!(_objectType in ['DZE_Concrete_Bunker','DZE_Concrete_Bunker_Locked','DZE_Door'])}) then {
	local _doorAnimation = 'Open_door';
	local _doorL = ['DZE_MetalGate','DZE_Land_WoodOpenTopGarageDoor','DZE_Land_WoodOpenTopGarageLocked','DZE_CinderGarageOpenTop','DZE_CinderGarageOpenTopLocked'];
	local _open = ['DZE_StorageShed','DZE_StorageShed2'];
	local _dvere1 = ['DZE_OutHouse'];
	local _customDvere1 = ['DZE_Wooden_shed','DZE_Wooden_shed2'];
	local _customOpenInner = ['DZE_Metal_Drawbridge','DZE_Metal_DrawbridgeLocked'];
	local _doorIsOpen = false;

	call {
		if (_objectType in _doorL) exitWith {_doorAnimation = 'doorl'};
		if (_objectType in _open) exitWith {_doorAnimation = 'open'};
		if (_objectType in _dvere1) exitWith {_doorAnimation = 'dvere1'};
	};

	call {
		if (_objectType in _customDvere1) exitWith {_doorIsOpen = _object animationPhase 'dvere1' < 1};
		if (_objectType in _customOpenInner) exitWith {_doorIsOpen = _object animationPhase 'Open_inner' < 1};
		_doorIsOpen = _object animationPhase _doorAnimation > 0;
	};

	if (_doorIsOpen) then {_points resize ((count _points) - 1)};
};

local _helperObject = objNull;
local _helperPosition = [];
local _validPoint = false;

{
	_validPoint = typeName _x == 'ARRAY';
	if (_validPoint) then {_validPoint = count _x >= 3};
	if (_validPoint) then {_validPoint = typeName (_x select 0) == 'SCALAR' && {typeName (_x select 1) == 'SCALAR'} && {typeName (_x select 2) == 'SCALAR'}};

	if (_validPoint) then {
		_helperPosition = [_x select 0,_x select 1,_x select 2];
		_helperObject = _helperClass createVehicleLocal [0,0,0];

		if (!isNull _helperObject) then {
			_helperObject setObjectTexture _helperTexture;
			_helperObject attachTo [_object,_helperPosition];
			DZE_displayHelperObjects set [count DZE_displayHelperObjects,_helperObject];
		};
	} else {
		#ifdef DEBUG_DZE_FNC_DISPLAY_HELPERS
			diag_log format ['[Client Debug]: [DZE_fnc_displayHelpers]: Warning: Invalid helper point skipped | Object type: %1 | Point: %2',_objectType,_x];
		#endif
	};
} forEach _points;

#ifdef DEBUG_DZE_FNC_DISPLAY_HELPERS
	diag_log format ['[Client Debug]: [DZE_fnc_displayHelpers]: Created helper objects: %1 | Object type: %2 | Helper class: %3',count DZE_displayHelperObjects,_objectType,_helperClass];
#endif
