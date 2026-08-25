///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_baseObjects
//
//	Description:	Displays the number of buildable objects in the active base.
//	Groups:		Base, Base Management
//
//	Syntax:		call DZE_fnc_baseObjects
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_BASE_OBJECTS

#ifdef DEBUG_DZE_FNC_BASE_OBJECTS
	diag_log format ['[Client Debug]: [DZE_fnc_baseObjects]: Function called with argumentes: %1',_this];
#endif

disableSerialization;

if (isNil 'DZE_currentBase' || {isNull DZE_currentBase}) exitWith {};

local _display = findDisplay 711194;
if (isNull _display) exitWith {};

local _range = DZE_baseRadius select 0;

// Count every nearby object whose vehicle config allows building against DZE_BuildingLimit.
local _count = count ([DZE_currentBase,_range] call DZE_fnc_findBuildableObjects);
local _color = '#ffffff';
local _usage = _count / DZE_BuildingLimit * 100;

if (_usage < 40) then {
	_color = '#00ff00';
};
if (_usage > 75) then {
	_color = '#ff0000';
};

local _control = _display displayCtrl 7014;
_control ctrlSetStructuredText parseText format ['<t color=''%3''>%1 / %2</t>',_count,DZE_BuildingLimit,_color];
