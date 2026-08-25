///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_baseMaintain
//
//	Description:	Validates and dispatches base-maintenance preview and execution requests.
//	Groups:		Base, Base Management
//
//	Syntax:		mode spawn DZE_fnc_baseMaintain
//
//	Parameters:	mode: String - 'preview' or 'maintain'
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_BASE_MAINTAIN

#ifdef DEBUG_DZE_FNC_BASE_MAINTAIN
	diag_log format ['[Client Debug]: [DZE_fnc_baseMaintain]: Function called with argumentes: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {
	localize 'STR_EPOCH_ACTIONS_2' call DZE_fnc_rollingMessages;
};

dayz_actionInProgress = true;

local _mode = _this;
local _base = if (isNil 'DZE_currentBase') then {objNull} else {DZE_currentBase};
local _radius = DZE_maintainRange;

if !(_mode in ['preview','maintain']) exitWith {
	#ifdef DEBUG_DZE_FNC_BASE_MAINTAIN
		diag_log format ['[Client Debug]: [DZE_fnc_baseMaintain]: Warning: Invalid maintenance mode: %1',_mode];
	#endif
	dayz_actionInProgress = false;
};

if (isNull _base || {typeOf _base != DZE_Territory_Marker}) exitWith {
	localize 'str_cursorTargetNotFound' call DZE_fnc_rollingMessages;
	dayz_actionInProgress = false;
};

// Maintenance always includes every eligible object in the base.
local _objects = [_base,_radius] call DZE_fnc_findBuildableObjects;
local _objectCount = count _objects;

if (_mode == 'preview') exitWith {
	_objectCount call DZE_fnc_baseMaintainPreview;
	dayz_actionInProgress = false;
};

if (_objectCount == 0) exitWith {
	systemChat localize 'STR_BASE_MAINTENANCE_NOT_REQUIRED';
	dayz_actionInProgress = false;
};

if (_mode == 'maintain') then {
	[_objects,_base,_radius] call DZE_fnc_baseMaintainAction;
};

// Wrong option.
dayz_actionInProgress = false;
