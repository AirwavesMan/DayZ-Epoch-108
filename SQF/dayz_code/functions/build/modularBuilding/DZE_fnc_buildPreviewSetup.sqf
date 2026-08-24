///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildPreviewSetup
//
//	Description:	Initializes the attachment chain and transform state of a modular-build preview.
//	Groups:		Build, Modular Building
//
//	Syntax:		buildContext call DZE_fnc_buildPreviewSetup
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//
//	Return Value:	Array - Updated modular-build context
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_SETUP

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_SETUP
	diag_log format['[Client Debug]: [DZE_fnc_buildPreviewSetup]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_CONTEXT_SIZE}) exitWith {
	#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_SETUP
		diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewSetup]: Error: Invalid build context: %1',_this];
	#endif
	_this
};

local _context = _this;
local _object = _context select BUILD_CONTEXT_OBJECT;
local _objectHelper = _context select BUILD_CONTEXT_OBJECT_HELPER;
local _baseHelper = _context select BUILD_CONTEXT_BASE_HELPER;
local _centerHelper = _context select BUILD_CONTEXT_CENTER_HELPER;
local _heightHelper = _context select BUILD_CONTEXT_HEIGHT_HELPER;
local _useModelCenter = _context select BUILD_CONTEXT_USE_MODEL_CENTER;
local _preventUnderground = _context select BUILD_CONTEXT_PREVENT_UNDERGROUND;
local _baseOffset = _context select BUILD_CONTEXT_BASE_OFFSET;
local _minimumHeight = _context select BUILD_CONTEXT_MIN_HEIGHT;
local _offset = _context select BUILD_CONTEXT_OFFSET;
local _positionRelative = +_offset;

modelSelect = [_baseHelper,_centerHelper] select _useModelCenter;

_object attachTo [_objectHelper,[0,0,[abs _baseOffset,0] select _useModelCenter]];	// Align the visual base with the helper.
_objectHelper attachTo [player,_positionRelative];

orientToWorld(_objectHelper);
orientToWorld(_object);
helperAttached = true;

// Resolve the nested attachments before validating the preview at its actual world position.
uiSleep 0.05;

// Correct only the configured center support point during initial placement. The complete support
// plane is checked after an actual transform and again immediately before confirmation.
if (_preventUnderground) then {
	local _heightASL = getPosASL _heightHelper;
	local _heightDifference = 0 max ((0 max getTerrainHeightASL _heightASL) + _minimumHeight - (_heightASL select 2));

	if (_heightDifference > 0) then {
		addZ(_positionRelative,_heightDifference);
		_objectHelper attachTo [player,_positionRelative];
		uiSleep 0.05;
	};
};

_context set [BUILD_CONTEXT_POSITION_RELATIVE,_positionRelative];
_context set [BUILD_CONTEXT_CENTER_PREVIOUS_ASL,getPosASL _centerHelper];
_context set [BUILD_CONTEXT_VECTOR,[VECTOR_DIR,VECTOR_UP]];
_context set [BUILD_CONTEXT_OBJECT_POSITION_ASL,getPosASL _object];
_context set [BUILD_CONTEXT_DIRECTION_Y,getDir _objectHelper];
_context set [BUILD_CONTEXT_TOO_LOW,false];
_context set [BUILD_CONTEXT_UNDERGROUND_CANCELLED,false];

BUILD_AXIS_LOCAL = false;
BUILD_HIDE_PANEL = false;
BUILD_dir3D = +ORIGIN;
BUILD_dir2D = 0;

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_SETUP
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewSetup]: Preview initialized | Object: %1 | Relative position: %2 | Helper ASL: %3',_object,_positionRelative,getPosASL _objectHelper];
#endif

_context
