///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapSelect
//
//	Description:	Selects the next or previous snap mode or held-object snap point.
//	Groups:		Build, Snap Building
//
//	Syntax:		[direction, enabled, object, class, helper, tabMax, pointMax] call DZE_fnc_snapSelect
//
//	Parameters:	direction: Number - Selection offset
//			enabled: Boolean - Whether snapping is available
//			object: Object - Object being built
//			class: String - Object class name
//			helper: Object - Build helper
//			tabMax: Number - Maximum snap-state index
//			pointMax: Number - Maximum held snap-point index
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_SELECT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_SELECT
	diag_log format ['[Client Debug]: [DZE_fnc_snapSelect]: Function called with argumentes: %1',_this];
#endif

local _direction = p0;
local _enabled = p1;
local _object = p2;
local _className = p3;
local _objectHelper = p4;
local _snapTabMax = p5;
local _snapPointMax = p6;

if (!_enabled) exitWith {};

local _targetTab = DZE_SnapTabIdx + _direction;

call {
	if (_targetTab < 0) exitWith {		// selection was Shift-Tabbed left and looped around
		_targetTab = _snapTabMax;
	};
	if (_targetTab > _snapTabMax) exitWith {	// selection was Tabbed right and looped around
		_targetTab = 0;
	};
};

local _targetPoint = -2;
local _command = 'SetOff';

call {
	if (_targetTab == 0) exitWith {
		_command = 'SetOff';	// ON to OFF
		_targetPoint = -2;
	};
	if (_targetTab == 1) exitWith {
		_command = 'SetAuto';	// From OFF or Manual to ON/Auto
		_targetPoint = -1;
	};

	_command = 'SetManual';	// Tab/Shift-Tab through snapping points
	_targetPoint = clamp(_targetTab - 2, 0, _snapPointMax);
};

local _session = DZE_snapStateSession;
local _revision = DZE_snapStateRevision;

[_command,_object,_className,_objectHelper,_targetPoint,_session,_revision] call DZE_fnc_snapStateTransition;
