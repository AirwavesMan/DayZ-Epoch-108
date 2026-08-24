///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_modularBuild
//
//	Description:	Construct and position a base-building object and save it to the database.
//	Groups:		Build
//
//	Syntax:		buildItem spawn DZE_fnc_modularBuild
//
//	Parameters:	buildItem: String - CfgMagazines class of the build item
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_MODULAR_BUILD

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#define validate(arr,stage)     [_buildValidationContext,arr,stage] call DZE_fnc_buildValidate
#define handleExit              if (BUILD_STAGE == BUILD_CANCELLED) exitWith {[_buildValidationContext,_reason,_format,_isStanding] call DZE_fnc_buildExit}
#define isStopped               (_moveState == MOVE_STOP)
#define isMoving                (helperAttached && {(speed player != 0 || {!isStopped})})
#define NO_CODE                 {}

#ifdef DEBUG_DZE_FNC_MODULAR_BUILD
	diag_log format['[Client Debug]: [DZE_fnc_modularBuild]: Function called with argumentes: %1',_this];
#endif

local _buildItem = _this;	// CfgMagazines class, e.g. "full_cinder_wall_kit"

if (dayz_actionInProgress) exitWith {localize 'STR_BUILD_ALREADY_IN_PROGRESS' call DZE_fnc_rollingMessages};	// Building already in progress.
dayz_actionInProgress = true;

call gear_ui_init;
closeDialog 1;

/**
magClass	= build
objectClass	= move
if (isClass (configFile >> 'CfgMagazines' >> _this)) then {BUILD} else {MOVE};

BUILD	= standard

MOVE	= custom (no pre-build checks, get pos/vdu, flip, attach helpers, re-flip, do not attach to player during setup)

**/

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Stage 1: Pre-build
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _cfgM		= configFile >> 'CfgMagazines' >> _buildItem;
local _className	= getText  (_cfgM >> 'ItemActions' >> 'Build' >> 'create');
local _require		= getArray (_cfgM >> 'ItemActions' >> 'Build' >> 'require');
local _text		= getText  (_cfgM >> 'displayName');
local _cfgV		= configFile >> 'CfgVehicles' >> _className;
local _isAdmin		= dayz_playerUID in DZE_baseManagementAdmins;
local _isPole		= _className == DZE_Territory_Marker;
local _requiresPlot	= getNumber (_cfgV >> 'DZE_bypassBase') == 0;
local _distance		= DZE_baseRadius select _isPole;
local _playerASL	= getPosASL player;
local _nearestPole	= objNull;
local _reason		= '';
local _format		= true;
local _isStanding	= false;

#include "DZE_BuildFunctions.sqf"

_reason = validate(_buildStage1,BUILD_VALIDATION_STAGE_PREBUILD);

handleExit;

_nearestPole = _buildValidationContext select BUILD_VALIDATION_NEAREST_POLE;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Stage 2: Build
//
///////////////////////////////////////////////////////////////////////////////////////////////////

_isStanding = isStanding(player);

player playActionNow 'PlayerCrouch';					// prevent instant cancel from moving too fast

local _OFF		= localize 'STR_SNAPPING_STATE_OFF';
local _moveState	= MOVE_STOP;
local _centerHelperPrevPosASL = [];

BUILD_ROTATION_MODE	= true;

local _buildContext = [];
local _modelNewASL = ORIGIN;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Transform 2D Rotation
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _dirY	= 0;
BUILD_dir2D	= 0;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Transform 3D Rotation
//
///////////////////////////////////////////////////////////////////////////////////////////////////

BUILD_dir3D	= ORIGIN;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Get config data
//
///////////////////////////////////////////////////////////////////////////////////////////////////

_className		= getText	(_cfgM >> 'ItemActions' >> 'Build' >> 'create');	// e.g. "DZE_CinderWall"
_text			= getText	(_cfgV >> 'displayName');				// e.g. "Cinder Wall Full"
local _offset		= getArray	(_cfgV >> 'DZE_offset');
local _lockable		= getNumber	(_cfgV >> 'lockable');
local _useModelCenter	= getNumber	(_cfgV >> 'useModelCenter' ) == 1;
local _preventUnderground = getNumber (_cfgV >> 'DZE_preventUnderground') == 1;
local _allowRotation	= getNumber (_cfgV >> 'DZE_allowRotation') == 1;

_buildValidationContext set [BUILD_VALIDATION_CLASS_NAME,_className];
_buildValidationContext set [BUILD_VALIDATION_DISPLAY_NAME,_text];

_buildContext = [_className,_offset,_useModelCenter,_preventUnderground,_text] call DZE_fnc_buildPreviewCreate;

if (count _buildContext < BUILD_CONTEXT_SIZE) exitWith {
	#ifdef DEBUG_DZE_FNC_MODULAR_BUILD
		diag_log format ['[Client Debug]: [DZE_fnc_modularBuild]: Error: Could not initialize build preview for: %1',_className];
	#endif
	BUILD_STAGE = BUILD_INACTIVE;
	dayz_actionInProgress = false;
};

local _object = _buildContext select BUILD_CONTEXT_OBJECT;
local _objectHelper = _buildContext select BUILD_CONTEXT_OBJECT_HELPER;
local _centerHelper = _buildContext select BUILD_CONTEXT_CENTER_HELPER;
local _pArray = _buildContext select BUILD_CONTEXT_HELPERS;

_buildValidationContext set [BUILD_VALIDATION_OBJECT,_object];

_buildContext call DZE_fnc_buildPreviewSetup;

_offset = _buildContext select BUILD_CONTEXT_OFFSET;
_centerHelperPrevPosASL = _buildContext select BUILD_CONTEXT_CENTER_PREVIOUS_ASL;
_dirY = _buildContext select BUILD_CONTEXT_DIRECTION_Y;

#ifdef DEBUG_DZE_FNC_MODULAR_BUILD
	diag_log text format ['[Client Debug]: [DZE_fnc_modularBuild]: Offset: %1',_offset];
	systemChat format ['offset: %1',_offset];
	systemChat format ['_baseOffset: %1',_buildContext select BUILD_CONTEXT_BASE_OFFSET];
#endif

local _vector = _buildContext select BUILD_CONTEXT_VECTOR;
local _objectPosASL = _buildContext select BUILD_CONTEXT_OBJECT_POSITION_ASL;
local _heightPosASL	= [];

if (DZE_AxialHelper && _requiresPlot) then {
	_pArray = [_nearestPole,_distance,_pArray] call DZE_fnc_buildAxialHelper;
	_buildContext set [BUILD_CONTEXT_HELPERS,_pArray];
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//				Initialize Snapping and Vectoring
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _isStaticWeapon	= _object isKindof 'StaticWeapon' || {_className in DZE_StaticWeapons};
local _vectoringEnabled	= false;
local _snappingEnabled	= false;

local _snapList		= [];		// helper panel array of valid snapping points
local _snapTabMax	= 0;		// hotkey index
local _snapSelMax	= 0;		// snapping point index
local _snapSession	= -1;		// active snap-state session
local _refreshDist	= 0;		// init snap auto-refresh distance
local _snapObjectDiag	= 0;		// full bounding-box diagonal of the held object
local _snapCenterReach	= 0;		// maximum center distance for points still inside snap range
local _snapCacheRadius	= 0;		// center reach plus movement padding retained until the next refresh
local _snapRefreshInterval = 0.25;	// avoid checking the refresh radius every preview frame
local _nextSnapRefreshAt = diag_tickTime;
local _snapPointPosition = ORIGIN;
local _snapPointRadius = 0;

local _points = [_object,true] call DZE_fnc_snapPointsForObject; // configured or generated snapping points

skipUpdates		= false;	// skip over multiple snapActionState updates from single keypress
distanceFromPlot	= 0;		// realtime updates on snap building panel
DZE_snapRadius		= 0;
DZE_snapCandidatePadding = 0;
DZE_snapHeldPointRadius = 0;

if (count _points > 0) then {
	{
		_snapPointPosition = [_x select 0,_x select 1,_x select 2];
		_snapPointRadius = vectorMagnitude(_snapPointPosition);
		if (_snapPointRadius > DZE_snapHeldPointRadius) then {DZE_snapHeldPointRadius = _snapPointRadius};
	} forEach _points;

	_snapList = [localize 'STR_SNAPPING_STATE_OFF', localize 'STR_SNAPPING_MODE_AUTOMATIC'];	// initialize

	{addArray(_snapList, _x select 3)} forEach _points;

	_snapTabMax		= count _snapList - 1;
	_snapSelMax		= count _points - 1;
	_snappingEnabled	= true;

	// Calculate the padded cache radius before Init performs the first nearby-object search.
	_snapObjectDiag	= boundingBoxDiagonal(_object);
	_snapCenterReach = ((_snapObjectDiag + DZE_maxSnapObjectDiag) * 0.5) + DZE_snapDistance;
	_refreshDist	= _snapCenterReach * 0.5;						// distance object moves before the snap auto-refresh triggers
	_snapCacheRadius = ceil(_snapCenterReach + _refreshDist);					// include objects entering snap reach before the next refresh
	DZE_snapRadius	= _snapCacheRadius;
	DZE_snapCandidatePadding = _refreshDist;

	['Init',_object,_className,_objectHelper,-1] call DZE_fnc_snapStateTransition;	// initialize state, hotkey indices and root action
	_snapSession = DZE_snapStateSession;

	#ifdef DEBUG_DZE_FNC_MODULAR_BUILD
		diag_log format ['[Client Debug]: [DZE_fnc_modularBuild]: Snap cache initialized | Object/Maximum diagonal: %1/%2 | Snap distance: %3 | Center reach/Refresh distance/Cache radius: %4/%5/%6 | Held point radius: %7',_snapObjectDiag,DZE_maxSnapObjectDiag,DZE_snapDistance,_snapCenterReach,_refreshDist,DZE_snapRadius,DZE_snapHeldPointRadius];
	#endif
};

if (_allowRotation && {!_isStaticWeapon}) then {
	_vectoringEnabled = true;
	['','','',['Init', 'Init', BUILD_VECTOR_ACTION_TYPE_BOTH]] spawn DZE_fnc_vectorBuildAction;
};

_buildContext set [BUILD_CONTEXT_STATIC_WEAPON,_isStaticWeapon];
_buildContext set [BUILD_CONTEXT_VECTORING_ENABLED,_vectoringEnabled];
_buildContext set [BUILD_CONTEXT_SNAPPING_ENABLED,_snappingEnabled];
_buildContext set [BUILD_CONTEXT_SNAP_SESSION,_snapSession];

local _distFromPlot = ['-','0'] select !isNull _nearestPole;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//		 			Main Loop
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _keyArray =
[
	NO_CODE,			// no action
	{[_buildContext,p0,p1] call DZE_fnc_buildPreviewMove},	// PGUP/PGDN / ARROW KEYS
	{				// Q/E
		if (!isMoving) then {
			_dirY = [_objectHelper, p1, helperAttached, player] call DZE_fnc_vectorRotate2D;
			_buildContext set [BUILD_CONTEXT_DIRECTION_Y,_dirY];
			if (helperAttached) then {_buildContext call DZE_fnc_buildCollisionCheck};
		};
	},
	{				// Q/E / ARROW KEYS
		if (_vectoringEnabled && {!isMoving}) then {
			[_objectHelper, p0, p1, helperAttached, player] call DZE_fnc_vectorRotate3D;
			_dirY = getDir _objectHelper;
			_buildContext set [BUILD_CONTEXT_DIRECTION_Y,_dirY];
			if (helperAttached) then {_buildContext call DZE_fnc_buildCollisionCheck};
			vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			[1,1] call DZE_fnc_vectorActionCleanup;
		};
	},
	{[_this, _vectoringEnabled] call DZE_fnc_vectorChangeDegree},	// MINUS/EQUALS
	{[_this,_snappingEnabled,_object,_className,_objectHelper,_snapTabMax,_snapSelMax] call DZE_fnc_snapSelect},	// TAB/SHIFT-TAB
	{_buildContext call DZE_fnc_buildTerrainAlign},	// T
	{if (_requiresPlot) then {[_nearestPole] call DZE_fnc_baseToggleMarkers}},	// P
	{				// F
		if (!r_drag_sqf && {!r_player_unconscious}) then {
			if (helperAttached) then {
				_buildContext call DZE_fnc_buildPreviewDetach;
			} else {
				_buildContext call DZE_fnc_buildPreviewAttach;
			};
		};
	},
	{_buildContext call DZE_fnc_buildPreviewReset},	// BACKSPACE
	{_buildContext call DZE_fnc_buildPreviewConfirm},	// SPACE BAR
	{				// Vector action menu
		_objectHelper call DZE_fnc_vectorReset;
		_dirY = getDir _objectHelper;
		_buildContext set [BUILD_CONTEXT_DIRECTION_Y,_dirY];
		if (helperAttached) then {_buildContext call DZE_fnc_buildCollisionCheck};
	}
];

if (!_vectoringEnabled)	then {_keyArray set [3, NO_CODE]};
if (!_snappingEnabled)	then {_keyArray set [5, NO_CODE]};
if (_isPole)		then {_keyArray set [7, NO_CODE]};

local _index	= BUILD_NOKEY;
local _keyInput	= [BUILD_NOKEY];
local _keyQueueHead = 0;
local _undergroundValidationKeys = [BUILD_MOVE,BUILD_ROTATE2D,BUILD_ROTATE3D,BUILD_TERRAIN_ALIGN,BUILD_VECTOR_RESET];
BUILD_KEY_QUEUE = [];
BUILD_STAGE	= BUILD_HOTKEYS_ACTIVE;
[_distFromPlot,_distance,_snappingEnabled,_vectoringEnabled,_isStaticWeapon,_snapList,_object] spawn DZE_fnc_snapBuilding;

while {BUILD_STAGE == BUILD_HOTKEYS_ACTIVE && {!isNull _object && {!isNull _objectHelper}}} do {
	_dirY		 = getDir _objectHelper;		// actual world yaw is the single orientation source
	_moveState	 = getAnimation(STATE_MOVE, player);
	_buildContext set [BUILD_CONTEXT_PLAYER_POSITION_ASL,getPosASL player];		// Used by the collision displacement check.
	_buildContext set [BUILD_CONTEXT_HELPER_POSITION_ASL,getPosASL _objectHelper];	// Used to restore the preview after a collision.
	_buildContext set [BUILD_CONTEXT_DIRECTION_Y,_dirY];
	_buildContext set [BUILD_CONTEXT_MOVE_STATE,_moveState];
	_buildValidationContext set [BUILD_VALIDATION_MOVE_STATE,_moveState];

	///////////////////////////////////////////////////////////////////////////////////////////

	// Dequeue atomically so input arriving during a yielding handler remains queued for the next pass.

	_keyInput = [BUILD_NOKEY];

	if (_keyQueueHead < count BUILD_KEY_QUEUE) then {
		_keyInput = +(BUILD_KEY_QUEUE select _keyQueueHead);
		_keyQueueHead = _keyQueueHead + 1;

		if (_keyQueueHead >= count BUILD_KEY_QUEUE) then {
			BUILD_KEY_QUEUE = [];
			_keyQueueHead = 0;
		};
	};

	_index = _keyInput select 0;

	if (_index != BUILD_NOKEY) then {

		_keyInput select 1 call (_keyArray select _index);		// process the captured key

		if (_preventUnderground && {BUILD_STAGE == BUILD_HOTKEYS_ACTIVE && {_index in _undergroundValidationKeys}}) then {
			_buildContext call DZE_fnc_buildPreviewPreventUnderground;
		};
	};

	if (BUILD_STAGE == BUILD_HOTKEYS_ACTIVE) then {
		_modelNewASL = _buildContext select BUILD_CONTEXT_MODEL_POSITION_ASL;
		_centerHelperPrevPosASL = _buildContext select BUILD_CONTEXT_CENTER_PREVIOUS_ASL;
		_vector = _buildContext select BUILD_CONTEXT_VECTOR;
		_objectPosASL = _buildContext select BUILD_CONTEXT_OBJECT_POSITION_ASL;
		_heightPosASL = _buildContext select BUILD_CONTEXT_HEIGHT_POSITION_ASL;

		///////////////////////////////////////////////////////////////////////////////////////////

		if (_snappingEnabled && {diag_tickTime >= _nextSnapRefreshAt}) then {
			_nextSnapRefreshAt = diag_tickTime + _snapRefreshInterval;
			_centerHelperPrevPosASL = [_snappingEnabled,_OFF,_centerHelper,_centerHelperPrevPosASL,_refreshDist,_object,_snapSession,DZE_snapStateRevision] call DZE_fnc_snapRefresh;	// auto-refresh snap radius
			_buildContext set [BUILD_CONTEXT_CENTER_PREVIOUS_ASL,_centerHelperPrevPosASL];
		};

		_modelNewASL	= getPosASL modelSelect;
		_buildContext set [BUILD_CONTEXT_MODEL_POSITION_ASL,_modelNewASL];
		_buildValidationContext set [BUILD_VALIDATION_MODEL_POSITION_ASL,_modelNewASL];
		_reason		= validate(_buildStage2,BUILD_VALIDATION_STAGE_PREVIEW);

		uiSleep 0.02;
	};
};

// Confirmation changes the build stage before the active-preview refresh can copy the final
// transform. Read it directly from the context so publishing uses the selected position and vector.
if (BUILD_STAGE == BUILD_NOW_BUILDING) then {
	_modelNewASL = _buildContext select BUILD_CONTEXT_MODEL_POSITION_ASL;
	_vector = _buildContext select BUILD_CONTEXT_VECTOR;
	_objectPosASL = _buildContext select BUILD_CONTEXT_OBJECT_POSITION_ASL;
	_heightPosASL = _buildContext select BUILD_CONTEXT_HEIGHT_POSITION_ASL;

	#ifdef DEBUG_DZE_FNC_MODULAR_BUILD
		diag_log format ['[Client Debug]: [DZE_fnc_modularBuild]: Final preview transform captured | Position ASL: %1 | Vector: %2',_objectPosASL,_vector];
	#endif
};

// A missing preview cannot recover while the build loop is active. Cancel the complete build so
// the shared snap shutdown and cleanup path runs without requiring an additional Escape input.
if (BUILD_STAGE == BUILD_HOTKEYS_ACTIVE && {isNull _object || {isNull _objectHelper}}) then {
	if (_preventUnderground) then {
		_buildContext set [BUILD_CONTEXT_TOO_LOW,true];
		_buildContext set [BUILD_CONTEXT_UNDERGROUND_CANCELLED,true];
	};
	BUILD_STAGE = BUILD_CANCELLED;

	#ifdef DEBUG_DZE_FNC_MODULAR_BUILD
		diag_log format ['[Client Debug]: [DZE_fnc_modularBuild]: Warning: Build cancelled because the preview object or helper is null: %1 | %2',_object,_objectHelper];
	#endif
};

BUILD_KEY_QUEUE = [];

_format = true;

if (BUILD_STAGE == BUILD_CANCELLED && {_buildContext select BUILD_CONTEXT_UNDERGROUND_CANCELLED}) then {
	local _undergroundPositionASL = _buildContext select BUILD_CONTEXT_MODEL_POSITION_ASL;
	local _undergroundLevel = localize (['STR_BUILD_PLACEMENT_BELOW_GROUND','STR_BUILD_PLACEMENT_BELOW_SEA_LEVEL'] select surfaceIsWater _undergroundPositionASL);
	_reason = format [localize 'STR_BUILD_PLACEMENT_UNDERGROUND_DENIED',_text,_undergroundLevel];
	_format = false;
};

if (_snappingEnabled) then {
	['Shutdown',_object,_className,_objectHelper,-1,_snapSession,DZE_snapStateRevision] call DZE_fnc_snapStateTransition;
};

helperAttached = true;	// normalize attachment state after the distance checker has stopped

[_buildContext,false,true] call DZE_fnc_buildPreviewCleanup;	// Delete every local build helper.

handleExit;

_buildValidationContext set [BUILD_VALIDATION_MODEL_POSITION_ASL,_modelNewASL];
_buildValidationContext set [BUILD_VALIDATION_HEIGHT_POSITION_ASL,_heightPosASL];
_reason = validate(_buildStage3,BUILD_VALIDATION_STAGE_FINAL);

handleExit;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Build Animation
//
///////////////////////////////////////////////////////////////////////////////////////////////////

local _limit	= if (DZE_StaticConstructionCount > 0) then {DZE_StaticConstructionCount} else {0 max getNumber (configFile >> 'CfgVehicles' >> _className >> 'DZE_buildingSteps')};
local _counter	= 0;
_reason		= localize 'STR_BUILD_CANCELLED';	// Canceled building.
_format		= false;

while {BUILD_STAGE == BUILD_NOW_BUILDING && {_counter < _limit}} do {

	format [localize 'STR_BUILD_PROGRESS', _text, _counter + 1, _limit] call DZE_fnc_rollingMessages; // Constructing %1 stage %2 of %3, move to cancel.
	[player, getPosATL player, 40, 'repair'] spawn fnc_alertZombies;

	BUILD_STAGE	= [BUILD_CANCELLED, BUILD_NOW_BUILDING] select (['Medic', 1, {BUILD_STAGE == BUILD_CANCELLED || {player getVariable ['inCombat', false]}}] call fn_loopAction);
	_counter	= _counter + 1;
};

handleExit;

BUILD_STAGE = [BUILD_CANCELLED, BUILD_NOW_BUILDING] select ([player, _buildItem] call BIS_fnc_invRemove == 1);	// remove item's magazine from inventory

handleExit;

///breakTool(_require);

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Finalize Details
//
///////////////////////////////////////////////////////////////////////////////////////////////////

if (_isStanding) then {[] spawn {player playAction 'PlayerStand'}};

local _characterID		= '0';
local _combinationDisplay	= '';

['Working', 0, [20,10,5,0]] call dayz_NutritionSystem;
call player_forceSave;

if (_lockable > 1) then {		// item has code lock

	local _codeResult		= _lockable call DZE_fnc_generateCode;
	local _combination		= _codeResult select 0;
	_combinationDisplay		= _codeResult select 1;

	_characterID	= _combination;	// set combination as a character ID
};

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					Publish to Database
//
///////////////////////////////////////////////////////////////////////////////////////////////////

[_buildContext,true,false] call DZE_fnc_buildPreviewCleanup;

//	Send the object to the server and save it in the database
DZE_Wait_For_Object = nil;
PVDZE_build_Object = [netId player, _className, _characterID, [_objectPosASL, _vector, []], _buildItem, dayz_authKey];
publicVariableServer 'PVDZE_build_Object';

_object = call DZE_fnc_revealServerObject;

if !(isNull _object) then {
	[format [localize 'STR_BUILD_COMPLETED', _text], 1] call DZE_fnc_rollingMessages;

	if (_combinationDisplay != '') then {
		if (_className in DZE_LockedGates) then {GateMethod = _characterID};

		_format = format [localize 'STR_BUILD_COMPLETED_WITH_COMBINATION', _combinationDisplay, _text];
		[_format, 1] call DZE_fnc_rollingMessages;	// display new combination
		systemChat _format;				// You have setup your %2. The combination is %1
	};

	if (getNumber (_cfgV >> 'DZE_isFireplace') == 1) then {
		//	Ignite fire only if the config entry allows it
		if (getNumber (_cfgV >> 'DZE_spawnFireOnBuild') == 1) then {
			[_object,true,'',[]] call DZE_fnc_actionInflame;
		};
	};
} else {
	player addMagazine _buildItem;
	localize 'STR_BUILD_FAILED' call DZE_fnc_rollingMessages;
};

BUILD_STAGE		= BUILD_INACTIVE;
dayz_actionInProgress	= false;
