///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildPreviewCreate
//
//	Description:	Creates every local preview object and initializes the shared modular-build
//			context used by the preview transformation functions.
//	Groups:		Build, Modular Building
//
//	Syntax:		[className, offset, useModelCenter, preventUnderground, displayName] call DZE_fnc_buildPreviewCreate
//
//	Parameters:	className: String - CfgVehicles class of the preview object
//			offset: Array - Initial player-relative placement offset
//			useModelCenter: Boolean - Use the model center as the transform pivot
//			preventUnderground: Boolean - Prevent placement below terrain or sea level
//			displayName: String - Localized object name used in messages
//
//	Return Value:	Array - Initialized modular-build context
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_CREATE

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CREATE
	diag_log format['[Client Debug]: [DZE_fnc_buildPreviewCreate]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < 5}) exitWith {
	#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CREATE
		diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewCreate]: Error: Invalid parameters: %1',_this];
	#endif
	[]
};

local _className = p0;
local _offset = +(p1);
local _useModelCenter = p2;
local _preventUnderground = p3;
local _displayName = p4;
local _object = _className createVehicleLocal ORIGIN;

if (isNull _object) exitWith {
	#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CREATE
		diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewCreate]: Error: Could not create local preview object: %1',_className];
	#endif
	[]
};

orientToWorld(_object);

// The fallback depends on the model bounding box and must run after the object exists.
if (count _offset == 0) then {
	_offset = [0, abs (((boundingBox _object) select 0) select 1), 0];
};

local _objectPositionASL = getPosASL _object;
local _centerPositionASL = [_object] call DZE_fnc_modelCenterWorld;
local _baseOffset = (getZ(_objectPositionASL)) - (getZ(_centerPositionASL));

// Every preview component stays local. Only the final object is created by the server.
local _objectHelper = BUILD_HELPER createVehicleLocal ORIGIN;
local _baseHelper = BUILD_HELPER createVehicleLocal ORIGIN;
local _centerHelper = BUILD_HELPER createVehicleLocal ORIGIN;
local _heightHelper = _baseHelper;
local _helpers = [_baseHelper,_centerHelper,_objectHelper];
local _minHeight = getZ(_offset);
local _positionRelative = +_offset;

_baseHelper attachTo [_object,[0,0,_baseOffset]];		// LandContact offset is more reliable than boundingCenter.
_centerHelper attachTo [_object,ORIGIN];

if (_preventUnderground) then {
	_heightHelper = BUILD_HELPER createVehicleLocal ORIGIN;
	_heightHelper attachTo [_object,[0,0,[_baseOffset + _minHeight,_minHeight] select _useModelCenter]];
	addArray(_helpers,_heightHelper);
};

local _hitSounds = [[0,1,3,5],4] call fn_shuffleArray;
local _hitIndex = 0;
local _screamPrefix = 'z_scream_';
local _screamSounds = [[0,1,2,3],4] call fn_shuffleArray;
local _screamIndex = 0;
local _screamCount = 4;
local _isWoman = getText (configFile >> 'cfgVehicles' >> typeOf player >> 'TextSingular') == 'Woman';

if (_isWoman) then {
	_screamPrefix = _screamPrefix + 'w_';
	_screamSounds = [[1,3,4],3] call fn_shuffleArray;
	_screamCount = 3;
};

local _context = [
	_object,
	_objectHelper,
	_baseHelper,
	_centerHelper,
	_heightHelper,
	_useModelCenter,
	_preventUnderground,
	_baseOffset,
	_minHeight,
	_offset,
	_positionRelative,
	[],
	[],
	_objectPositionASL,
	0,
	false,
	ORIGIN,
	[],
	[],
	MOVE_STOP,
	_displayName,
	false,
	false,
	_hitSounds,
	_hitIndex,
	_screamPrefix,
	_screamSounds,
	_screamIndex,
	_screamCount,
	false,
	_className,
	-1,
	_helpers,
	[],
	false
];

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CREATE
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewCreate]: Preview created | Object: %1 | Offset: %2 | Base offset: %3 | Helpers: %4',_object,_offset,_baseOffset,count _helpers];
#endif

_context
