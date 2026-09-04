///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapBuildAction
//
//	Description:	Maps action-menu input to one central snap-state transition.
//	Groups:		Build, Snap Building
//
//	Syntax:		[target, caller, actionId, parameters] call DZE_fnc_snapBuildAction
//
//	Parameters:	target: Object - Action target (unused)
//			caller: Object - Action caller (unused)
//			actionId: Number - Action identifier (unused)
//			parameters: Array - Event, build objects, point, session and revision
//
//	Author:	Raymix
//	Date:	July 10 2014
//
//	Updated by Victor the Cleaner
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_BUILD_ACTION

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_BUILD_ACTION
	diag_log format ['[Client Debug]: [DZE_fnc_snapBuildAction]: Function called with arguments: %1',_this];
#endif

local _parameters = p3;
local _event = _parameters select 0;
local _object = _parameters select 1;
local _className = _parameters select 2;
local _objectHelper = _parameters select 3;
local _selectedPoint = _parameters select 4;
local _session = _parameters select 5;
local _revision = _parameters select 6;
local _command = '';

call {
	if (_event == 'ToggleSnap') exitWith {
		_command = 'SetOff';
		if (DZE_SnapTabIdx == 0) then {_command = 'SetAuto'};
	};
	if (_event == 'ToggleMode') exitWith {
		_command = 'SetManual';
		_selectedPoint = -1;
		if (snapActionStateSelect == localize 'STR_SNAPPING_MODE_MANUAL') then {_command = 'SetAuto'};
	};
	if (_event == 'SelectPoint') exitWith {_command = 'SetManual'};
};

if (_command == '') exitWith {};

[_command,_object,_className,_objectHelper,_selectedPoint,_session,_revision] call DZE_fnc_snapStateTransition;
