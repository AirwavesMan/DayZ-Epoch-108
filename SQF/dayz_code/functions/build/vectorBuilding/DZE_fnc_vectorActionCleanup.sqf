///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorActionCleanup
//
//	Author:		strikerforce
//	Updated by:	Victor the Cleaner
//
//	Description:	Creates, refreshes or removes the vector-rotation action menu.
//	Groups:		Build, Vector Building
//
//	Syntax:		[showRootAction, showRotationActions] call DZE_fnc_vectorActionCleanup
//
//	Parameters:	showRootAction: Number - Positive value creates the root action
//			showRotationActions: Number - Positive value creates the rotation actions
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_VECTOR_ACTION_CLEANUP

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_VECTOR_ACTION_CLEANUP
	diag_log format ['[Client Debug]: [DZE_fnc_vectorActionCleanup]: Function called with arguments: %1',_this];
#endif

local _showRootAction = p0;
local _showRotationActions = p1;

player removeAction s_player_toggleVector;
s_player_toggleVector = -1;

{player removeAction _x} forEach s_player_toggleVectors;
s_player_toggleVectors = [];

if (_showRootAction > 0) then {
	// orange
	s_player_toggleVector = player addAction [format ['<t color=''#ff8800''>' + localize 'STR_VECTOR_BUILDING_MENU_TITLE' + ' %1</t>',vectorActionState], '\z\addons\dayz_code\functions\build\vectorBuilding\DZE_fnc_vectorBuildAction.sqf', [vectorActionState, degreeActionState, BUILD_VECTOR_ACTION_TYPE_ROTATION], 7, false, false];
};

if (_showRotationActions > 0) then {
	local _rotationActions =
	[
		'STR_VECTOR_BUILDING_ROTATION_PITCH_FORWARD',
		'STR_VECTOR_BUILDING_ROTATION_PITCH_BACK',
		'STR_VECTOR_BUILDING_ROTATION_BANK_LEFT',
		'STR_VECTOR_BUILDING_ROTATION_BANK_RIGHT',
		'STR_VECTOR_BUILDING_ROTATION_YAW_LEFT',
		'STR_VECTOR_BUILDING_ROTATION_YAW_RIGHT',
		'STR_VECTOR_BUILDING_ROTATION_RESET'
	];
	local _white = '<t color=''#ffffff''>';	// white
	local _tab = '	';
	local _end = '</t>';
	local _rotation = '';

	{
		_rotation = localize _x;
		s_player_toggleVectors set [count s_player_toggleVectors, player addAction [format [_white + _tab + '%1' + _end,_rotation], '\z\addons\dayz_code\functions\build\vectorBuilding\DZE_fnc_vectorBuildAction.sqf', [_rotation, degreeActionState, BUILD_VECTOR_ACTION_TYPE_ROTATION], 6, false, false]];
	} forEach _rotationActions;
};
