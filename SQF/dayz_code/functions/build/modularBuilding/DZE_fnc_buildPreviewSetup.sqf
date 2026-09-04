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
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_SETUP

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_SETUP
	diag_log format['[Client Debug]: [DZE_fnc_buildPreviewSetup]: Function called with arguments: %1',_this];
#endif

local _context = _this;
local _object = _context select BUILD_CONTEXT_OBJECT;
local _objectHelper = _context select BUILD_CONTEXT_OBJECT_HELPER;
local _centerHelper = _context select BUILD_CONTEXT_CENTER_HELPER;
local _useModelCenter = _context select BUILD_CONTEXT_USE_MODEL_CENTER;
local _baseOffset = _context select BUILD_CONTEXT_BASE_OFFSET;
local _minimumHeight = _context select BUILD_CONTEXT_MIN_HEIGHT;
local _positionRelative = +(_context select BUILD_CONTEXT_OFFSET);

modelSelect = [_context select BUILD_CONTEXT_BASE_HELPER,_centerHelper] select _useModelCenter;

_object attachTo [_objectHelper,[0,0,[abs _baseOffset,0] select _useModelCenter]];	// Align the visual base with the helper.
_objectHelper attachTo [player,_positionRelative];

orientToWorld(_objectHelper);
orientToWorld(_object);
helperAttached = true;

// Resolve the nested attachments before validating the preview at its actual world position.
uiSleep 0.05;

// Correct only the configured center support point during initial placement. The complete support
// plane is checked after an actual transform and again immediately before confirmation.
if (_context select BUILD_CONTEXT_PREVENT_UNDERGROUND) then {
	local _heightASL = getPosASL (_context select BUILD_CONTEXT_HEIGHT_HELPER);
	local _heightDifference = (0 max getTerrainHeightASL _heightASL) + _minimumHeight - (_heightASL select 2);

	if (_heightDifference > 0) then {
		addZ(_positionRelative,_heightDifference);
		_objectHelper attachTo [player,_positionRelative];
		uiSleep 0.05;
	};
};

_context set [BUILD_CONTEXT_POSITION_RELATIVE,_positionRelative];
_context set [BUILD_CONTEXT_CENTER_PREVIOUS_ASL,getPosASL _centerHelper];
_context set [BUILD_CONTEXT_TOO_LOW,false];
_context set [BUILD_CONTEXT_UNDERGROUND_CANCELLED,false];

BUILD_AXIS_LOCAL = false;
BUILD_HIDE_PANEL = false;

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_SETUP
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewSetup]: Preview initialized | Object: %1 | Relative position: %2 | Helper ASL: %3',_object,_positionRelative,getPosASL _objectHelper];
#endif
