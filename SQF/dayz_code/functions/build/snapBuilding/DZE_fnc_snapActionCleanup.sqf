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
	diag_log format ['[Client Debug]: [DZE_fnc_snapActionCleanup]: Function called with argumentes: %1',_this];
#endif

local _showRoot = p0;
local _showMode = p1;
local _showPoints = p2;
local _object = p3;
local _className = p4;
local _objectHelper = p5;
local _points = p6;
local _expectedSession = if (count _this > 7) then {p7} else {DZE_snapStateSession};
local _expectedRevision = if (count _this > 8) then {p8} else {DZE_snapStateRevision};

// Remove and recreate one session's action set without allowing stale work to interleave.
isNil {
	if (_expectedSession != DZE_snapStateSession || {_expectedRevision != DZE_snapStateRevision}) exitWith {};

	local _white = '<t color=''#ffffff''>';	// white
	local _green = '<t color=''#20E020''>';	// green
	local _red = '<t color=''#ff0000''>';	// red, retained for legacy menu color compatibility
	local _tab3 = '			';
	local _end = '</t>';
	local _text = '';
	local _menuState = '';
	local _color = '';
	local _session = _expectedSession;
	local _revision = _expectedRevision;
	local _manualPointSelected = DZE_SnapSelIdx >= 0;

	player removeAction s_player_toggleSnap;
	s_player_toggleSnap = -1;

	player removeAction s_player_toggleSnapSelect;
	s_player_toggleSnapSelect = -1;

	{player removeAction _x} forEach s_player_toggleSnapSelectPoint;
	s_player_toggleSnapSelectPoint = [];
	snapActions = -1;

	if (_showRoot > 0) then {
		_menuState = localize 'STR_SNAPPING_STATE_ON';
		if (DZE_SnapTabIdx == 0) then {_menuState = localize 'STR_SNAPPING_STATE_OFF'};

		_text = format [_white + 'Snap: %1' + _end, _menuState];
		s_player_toggleSnap = player addAction [_text, '\z\addons\dayz_code\functions\build\snapBuilding\DZE_fnc_snapBuildAction.sqf', ['ToggleSnap',_object,_className,_objectHelper,-1,_session,_revision], 10, false, true];
	};

	if (_showMode > 0) then {
		_color = _green;	// Auto
		if (_manualPointSelected) then {_color = _white};	// manual

		_text = format [_white + localize 'STR_SNAPPING_POINTS_LABEL' + _color + ' %1' + _end, snapActionStateSelect];
		s_player_toggleSnapSelect = player addAction [_text, '\z\addons\dayz_code\functions\build\snapBuilding\DZE_fnc_snapBuildAction.sqf', ['ToggleMode',_object,_className,_objectHelper,-1,_session,_revision], 9, false, true];
	};

	if (_showPoints > 0) then {
		{
			_color = _white;
			if (_forEachIndex == DZE_SnapSelIdx) then {_color = _green};

			_text = format [_tab3 + _color + '%1. ' + localize 'STR_SNAPPING_SELECTION_LABEL' + ' %2' + _end, _forEachIndex + 1, _x select 3];
			snapActions = player addAction [_text, '\z\addons\dayz_code\functions\build\snapBuilding\DZE_fnc_snapBuildAction.sqf', ['SelectPoint',_object,_className,_objectHelper,_forEachIndex,_session,_revision], 8, false, false];
			s_player_toggleSnapSelectPoint set [count s_player_toggleSnapSelectPoint, snapActions];
		} forEach _points;
	};
};
