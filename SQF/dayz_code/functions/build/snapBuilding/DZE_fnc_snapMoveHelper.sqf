///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapMoveHelper
//
//	Description:	Moves the build helper to the selected held-object snap point or visual base
//			and preserves its world orientation when reattaching it to the player.
//	Groups:		Build, Snap Building
//
//	Syntax:		[object, objectHelper, session, revision] call DZE_fnc_snapMoveHelper
//
//	Parameters:	object: Object - Object being built
//			objectHelper: Object - Build helper
//			session: Number - Expected snap-state session
//			revision: Number - Expected snap-state revision
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_MOVE_HELPER

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_MOVE_HELPER
	diag_log format ['[Client Debug]: [DZE_fnc_snapMoveHelper]: Function called with arguments: %1',_this];
#endif

local _object = p0;
local _objectHelper = p1;
local _expectedSession = p2;
local _expectedRevision = p3;

// Moving the shared helper must not interleave with a newer state transition.
if (_expectedSession != DZE_snapStateSession || {_expectedRevision != DZE_snapStateRevision}) exitWith {};

detach _objectHelper;
detach _object;

if (DZE_SnapSelIdx >= 0 && {DZE_SnapSelIdx < count snapGizmos}) then {
	_objectHelper setPosASL (getPosASL (snapGizmos select DZE_SnapSelIdx));
} else {
	// reset helper to modelBase or modelCenter position (not necessarily the same as pivot/bottom)
	_objectHelper setPosASL (getPosASL modelSelect);
};
_object attachTo [_objectHelper];

if (helperAttached) then {
	// Attached transforms use the player's local basis; preserve the current world transform explicitly.
	local _relativePosition = posRel(player,(getPosAGL(_objectHelper)));
	local _relativeVectorDirAndUp = vectorDirAndUpRelative(_objectHelper,player);
	_objectHelper attachTo [player,_relativePosition];
	_objectHelper setVectorDirAndUp _relativeVectorDirAndUp;
};

#ifdef DEBUG_DZE_FNC_SNAP_MOVE_HELPER
	diag_log format ['[Client Debug]: [DZE_fnc_snapMoveHelper]: Helper pivot moved | Attached: %1 | Position ASL: %2 | VectorDirAndUp: %3',helperAttached,getPosASL(_objectHelper),getVectorDirAndUp(_objectHelper)];
#endif
