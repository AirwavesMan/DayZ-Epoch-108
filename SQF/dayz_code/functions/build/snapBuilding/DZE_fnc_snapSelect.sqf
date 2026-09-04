///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapSelect
//
//	Description:	Selects the next or previous snap mode or held-object snap point.
//	Groups:		Build, Snap Building
//
//	Syntax:		[direction, object, class, helper, tabMax] call DZE_fnc_snapSelect
//
//	Parameters:	direction: Number - Selection offset
//			object: Object - Object being built
//			class: String - Object class name
//			helper: Object - Build helper
//			tabMax: Number - Maximum snap-state index
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_SELECT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_SELECT
	diag_log format ['[Client Debug]: [DZE_fnc_snapSelect]: Function called with arguments: %1',_this];
#endif

local _direction = p0;
local _object = p1;
local _className = p2;
local _objectHelper = p3;
local _snapTabMax = p4;

local _targetTab = DZE_SnapTabIdx + _direction;

if (_targetTab < 0) then {		// selection was Shift-Tabbed left and looped around
	_targetTab = _snapTabMax;
};
if (_targetTab > _snapTabMax) then {	// selection was Tabbed right and looped around
	_targetTab = 0;
};

local _targetPoint = _targetTab - 2;
local _command = 'SetOff';	// ON to OFF

if (_targetTab == 1) then {
	_command = 'SetAuto';	// From OFF or Manual to ON/Auto
};
if (_targetTab > 1) then {
	_command = 'SetManual';	// Tab/Shift-Tab through snapping points
};

[_command,_object,_className,_objectHelper,_targetPoint,DZE_snapStateSession,DZE_snapStateRevision] call DZE_fnc_snapStateTransition;
