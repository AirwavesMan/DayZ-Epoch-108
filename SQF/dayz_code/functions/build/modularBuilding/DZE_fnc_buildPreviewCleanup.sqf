///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_buildPreviewCleanup
//
//	Description:	Deletes the selected parts of a modular-build preview and clears their context
//			references so cleanup can be called safely more than once.
//	Groups:		Build, Modular Building
//
//	Syntax:		[buildContext, deletePreview, deleteHelpers] call DZE_fnc_buildPreviewCleanup
//
//	Parameters:	buildContext: Array - Shared modular-build preview state
//			deletePreview: Boolean - Delete the local preview object
//			deleteHelpers: Boolean - Delete and clear every helper object
//
//	Return Value:	Array - Updated modular-build context
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_CLEANUP

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CLEANUP
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewCleanup]: Function called with argumentes: %1',_this];
#endif

if (typeName _this != 'ARRAY' || {count _this < 3}) exitWith {[]};

local _context = p0;
local _deletePreview = p1;
local _deleteHelpers = p2;

if (typeName _context != 'ARRAY' || {count _context < BUILD_CONTEXT_SIZE}) exitWith {_context};

local _object = _context select BUILD_CONTEXT_OBJECT;
local _helpers = _context select BUILD_CONTEXT_HELPERS;
local _deletedHelpers = 0;

if (_deleteHelpers) then {
	{
		if (!isNull _x) then {
			deleteVehicle _x;
			_deletedHelpers = _deletedHelpers + 1;
		};
	} forEach _helpers;

	_context set [BUILD_CONTEXT_OBJECT_HELPER,objNull];
	_context set [BUILD_CONTEXT_BASE_HELPER,objNull];
	_context set [BUILD_CONTEXT_CENTER_HELPER,objNull];
	_context set [BUILD_CONTEXT_HEIGHT_HELPER,objNull];
	_context set [BUILD_CONTEXT_HELPERS,[]];
};

if (_deletePreview && {!isNull _object}) then {
	detach _object;
	deleteVehicle _object;
	_context set [BUILD_CONTEXT_OBJECT,objNull];
};

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CLEANUP
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewCleanup]: Cleanup finished | Preview: %1 | Helpers: %2',_deletePreview,_deletedHelpers];
#endif

_context
