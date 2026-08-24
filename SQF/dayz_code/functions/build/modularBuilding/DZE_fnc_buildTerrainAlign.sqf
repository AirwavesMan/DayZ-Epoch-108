///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildTerrainAlign
//
//	Description:	Places the preview on the terrain and rebuilds an orthogonal orientation that
//			preserves the current horizontal heading.
//	Groups:		Build, Modular Building
//
//	Syntax:		buildContext call DZE_fnc_buildTerrainAlign
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//
//	Return Value:	Array - Updated modular-build context
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_TERRAIN_ALIGN

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_TERRAIN_ALIGN
	diag_log format ['[Client Debug]: [DZE_fnc_buildTerrainAlign]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < BUILD_CONTEXT_SIZE}) exitWith {_this};

local _context = _this;
local _object = _context select BUILD_CONTEXT_OBJECT;
local _objectHelper = _context select BUILD_CONTEXT_OBJECT_HELPER;
local _minHeight = _context select BUILD_CONTEXT_MIN_HEIGHT;
local _moveState = _context select BUILD_CONTEXT_MOVE_STATE;
local _vectoringEnabled = _context select BUILD_CONTEXT_VECTORING_ENABLED;
local _isStaticWeapon = _context select BUILD_CONTEXT_STATIC_WEAPON;
local _positionASL = getPosASL modelSelect;
local _isMoving = helperAttached && {(speed player != 0 || {_moveState != MOVE_STOP})};
local _wasAttached = helperAttached;

/**
DZE_truePitch		DZE_fnc_matrixToEuler
DZE_trueRoll		DZE_fnc_matrixToEuler
DZE_trueYaw		DZE_fnc_matrixToEuler
DZE_apparentPitch	unwrap
DZE_apparentRoll		unwrap
DZE_apparentYaw		unwrap
DZE_apparentDir		special/visual only -- DO NOT STORE in db
**/

if (!_isMoving && {isTerrain(_positionASL)}) then {
	local _heading = getDir _objectHelper;
	skipUpdates = true;	// Prevent temporary values from updating on the snap panel.

	detach _objectHelper;
	detach _object;
	_objectHelper setPosASL _positionASL;
	_object attachTo [_objectHelper];
	setZ(_positionASL,getTerrainHeightASL _positionASL + _minHeight);
	_objectHelper setPosASL _positionASL;

	_context set [BUILD_CONTEXT_HELPER_POSITION_ASL,+_positionASL];	/// **** TODO **** why is this needed?

	if (_vectoringEnabled || {_isStaticWeapon}) then {
		local _vectorUp = vectorNormalized(surfaceNormal _positionASL);
		local _vectorDir = getDirToVectorDir(_heading);
		local _normalZ = getZ(_vectorUp);
		local _slopeDot = vectorDotProduct(_vectorDir,_vectorUp);

		if (abs _normalZ > 0.001) then {
			// Extend the horizontal heading onto the terrain plane without changing its yaw.
			setZ(_vectorDir,-(_slopeDot / _normalZ));
			_vectorDir = vectorNormalized(_vectorDir);
			_objectHelper setVectorDirAndUp [_vectorDir,_vectorUp];
		};
	};

	if (_wasAttached) then {_context call DZE_fnc_buildPreviewAttach};
	_context set [BUILD_CONTEXT_DIRECTION_Y,_heading];
	_context set [BUILD_CONTEXT_MODEL_POSITION_ASL,getPosASL modelSelect];
	BUILD_dir2D = 0;
	BUILD_dir3D = +ORIGIN;

	#ifdef DEBUG_DZE_FNC_BUILD_TERRAIN_ALIGN
		diag_log format ['[Client Debug]: [DZE_fnc_buildTerrainAlign]: Terrain orientation | Position ASL: %1 | Heading: %2 | VectorDirAndUp: %3',_positionASL,_heading,getVectorDirAndUp(_objectHelper)];
	#endif

	if (_wasAttached) then {_context call DZE_fnc_buildCollisionCheck};
	_context call DZE_fnc_buildResetMenus;
	skipUpdates = false;
};

_context
