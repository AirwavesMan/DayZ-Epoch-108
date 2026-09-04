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
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_BUILD_PREVIEW_CLEANUP

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CLEANUP
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewCleanup]: Function called with arguments: %1',_this];
#endif

local _context = p0;
local _deletePreview = p1;
local _deleteHelpers = p2;

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CLEANUP
	local _deletedHelpers = 0;
#endif

if (_deleteHelpers) then {
	local _helpers = _context select BUILD_CONTEXT_HELPERS;

	{
		if (!isNull _x) then {
			deleteVehicle _x;
			#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CLEANUP
				_deletedHelpers = _deletedHelpers + 1;
			#endif
		};
	} forEach _helpers;

	_context set [BUILD_CONTEXT_OBJECT_HELPER,objNull];
	_context set [BUILD_CONTEXT_BASE_HELPER,objNull];
	_context set [BUILD_CONTEXT_CENTER_HELPER,objNull];
	_context set [BUILD_CONTEXT_HEIGHT_HELPER,objNull];
	_context set [BUILD_CONTEXT_HELPERS,[]];
};

if (_deletePreview) then {
	local _object = _context select BUILD_CONTEXT_OBJECT;

	if (!isNull _object) then {
		detach _object;
		deleteVehicle _object;
		_context set [BUILD_CONTEXT_OBJECT,objNull];
	};
};

#ifdef DEBUG_DZE_FNC_BUILD_PREVIEW_CLEANUP
	diag_log format ['[Client Debug]: [DZE_fnc_buildPreviewCleanup]: Cleanup finished | Preview: %1 | Helpers: %2',_deletePreview,_deletedHelpers];
#endif
