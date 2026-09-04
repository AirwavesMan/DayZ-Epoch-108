///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapActionCleanup
//
//	Author:		Raymix
//	Date:		July 10 2014
//	Updated by:	Victor the Cleaner
//
//	Description:	Creates, refreshes or removes snapping actions for the expected session and revision.
//	Groups:		Build, Snap Building
//
//	Syntax:		[root, mode, points, object, class, helper, snapPoints, session, revision] call DZE_fnc_snapActionCleanup
//
//	Parameters:	root: Number - Positive value creates the root action
//			mode: Number - Positive value creates the mode action
//			points: Number - Positive value creates the point actions
//			object: Object - Object being built
//			class: String - Object class name
//			helper: Object - Build helper
//			snapPoints: Array - Held-object snap-point definitions
//			session: Number - Expected snap-state session
//			revision: Number - Expected snap-state revision
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_ACTION_CLEANUP

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_ACTION_CLEANUP
	diag_log format ['[Client Debug]: [DZE_fnc_snapActionCleanup]: Function called with arguments: %1',_this];
#endif

local _showRoot = p0;
local _showMode = p1;
local _showPoints = p2;
local _object = p3;
local _className = p4;
local _objectHelper = p5;
local _points = p6;
local _expectedSession = p7;
local _expectedRevision = p8;

// Remove and recreate one session's action set without allowing stale work to interleave.
isNil {
	if (_expectedSession != DZE_snapStateSession || {_expectedRevision != DZE_snapStateRevision}) exitWith {};

	local _white = '<t color=''#ffffff''>';	// white
	local _green = '<t color=''#20E020''>';	// green
	local _tab3 = '			';
	local _end = '</t>';

	player removeAction s_player_toggleSnap;
	s_player_toggleSnap = -1;

	player removeAction s_player_toggleSnapSelect;
	s_player_toggleSnapSelect = -1;

	{player removeAction _x} forEach s_player_toggleSnapSelectPoint;
	s_player_toggleSnapSelectPoint = [];
	snapActions = -1;

	if (_showRoot > 0) then {
		s_player_toggleSnap = player addAction [format [_white + 'Snap: %1' + _end, [localize 'STR_SNAPPING_STATE_ON',localize 'STR_SNAPPING_STATE_OFF'] select (DZE_SnapTabIdx == 0)], '\z\addons\dayz_code\functions\build\snapBuilding\DZE_fnc_snapBuildAction.sqf', ['ToggleSnap',_object,_className,_objectHelper,-1,_expectedSession,_expectedRevision], 10, false, true];
	};

	if (_showMode > 0) then {
		s_player_toggleSnapSelect = player addAction [format [_white + localize 'STR_SNAPPING_POINTS_LABEL' + ([_green,_white] select (DZE_SnapSelIdx >= 0)) + ' %1' + _end, snapActionStateSelect], '\z\addons\dayz_code\functions\build\snapBuilding\DZE_fnc_snapBuildAction.sqf', ['ToggleMode',_object,_className,_objectHelper,-1,_expectedSession,_expectedRevision], 9, false, true];	// Auto / manual
	};

	if (_showPoints > 0) then {
		{
			snapActions = player addAction [format [_tab3 + ([_white,_green] select (_forEachIndex == DZE_SnapSelIdx)) + '%1. ' + localize 'STR_SNAPPING_SELECTION_LABEL' + ' %2' + _end, _forEachIndex + 1, _x select 3], '\z\addons\dayz_code\functions\build\snapBuilding\DZE_fnc_snapBuildAction.sqf', ['SelectPoint',_object,_className,_objectHelper,_forEachIndex,_expectedSession,_expectedRevision], 8, false, false];
			s_player_toggleSnapSelectPoint set [count s_player_toggleSnapSelectPoint, snapActions];
		} forEach _points;
	};
};
