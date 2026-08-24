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
	diag_log format ['[Client Debug]: [DZE_fnc_vectorActionCleanup]: Function called with argumentes: %1',_this];
#endif

local _showRootAction = p0;
local _showRotationActions = p1;

player removeAction s_player_toggleVector;
s_player_toggleVector = -1;

{player removeAction _x} count s_player_toggleVectors;
vectorActions = -1;

if (_showRootAction > 0) then {
	local _orange = '<t color=''#ff8800''>';	// orange
	local _vectors = localize 'STR_VECTOR_BUILDING_MENU_TITLE';
	local _end = '</t>';
	local _text = format [_orange + _vectors + ' %1' + _end, vectorActionState];
	s_player_toggleVector = player addAction [_text, '\z\addons\dayz_code\functions\build\vectorBuilding\DZE_fnc_vectorBuildAction.sqf', [vectorActionState, degreeActionState, BUILD_VECTOR_ACTION_TYPE_ROTATION], 7, false, false];
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
	local _text = '';

	s_player_toggleVectors = [];
	{
		_rotation = localize _x;
		_text = format [_white + _tab + '%1' + _end, _rotation];
		vectorActions = player addAction [_text, '\z\addons\dayz_code\functions\build\vectorBuilding\DZE_fnc_vectorBuildAction.sqf', [_rotation, degreeActionState, BUILD_VECTOR_ACTION_TYPE_ROTATION], 6, false, false];
		s_player_toggleVectors set [count s_player_toggleVectors, vectorActions];
	} count _rotationActions;
};
