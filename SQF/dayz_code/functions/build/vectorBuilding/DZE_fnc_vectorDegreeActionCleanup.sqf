///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorDegreeActionCleanup
//
//	Author:		strikerforce
//	Updated by:	Victor the Cleaner
//
//	Description:	Creates, refreshes or removes the vector-degree action menu.
//	Groups:		Build, Vector Building
//
//	Syntax:		[showRootAction, showDegreeActions] call DZE_fnc_vectorDegreeActionCleanup
//
//	Parameters:	showRootAction: Number - Positive value creates the root action
//			showDegreeActions: Number - Positive value creates the degree actions
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_VECTOR_DEGREE_ACTION_CLEANUP

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_VECTOR_DEGREE_ACTION_CLEANUP
	diag_log format ['[Client Debug]: [DZE_fnc_vectorDegreeActionCleanup]: Function called with arguments: %1',_this];
#endif

local _showRootAction = p0;
local _showDegreeActions = p1;

player removeAction s_player_toggleDegree;
s_player_toggleDegree = -1;

{player removeAction _x} forEach s_player_toggleDegrees;
s_player_toggleDegrees = [];

if (_showRootAction > 0) then {
	// orange
	s_player_toggleDegree = player addAction [format ['<t color=''#ff8800''>' + localize 'STR_VECTOR_BUILDING_DEGREE_LABEL' + ' %1</t>',degreeActionState], '\z\addons\dayz_code\functions\build\vectorBuilding\DZE_fnc_vectorBuildAction.sqf', [vectorActionState, degreeActionState, BUILD_VECTOR_ACTION_TYPE_DEGREE], 5, false, false];
};

if (_showDegreeActions > 0) then {
	local _red = '<t color=''#ff0000''>';	// red
	local _white = '<t color=''#ffffff''>';	// white
	local _select = localize 'STR_VECTOR_BUILDING_DEGREE_SELECTION_LABEL';
	local _tab = '	';
	local _end = '</t>';

	{
		s_player_toggleDegrees set [count s_player_toggleDegrees, player addAction [format [_tab + ([_white,_red] select (BUILD_CUR_DEGREE == _x)) + _select + ' %1' + _end,_x], '\z\addons\dayz_code\functions\build\vectorBuilding\DZE_fnc_vectorBuildAction.sqf', [vectorActionState, 'SELECT', BUILD_VECTOR_ACTION_TYPE_DEGREE, _x], 4, false, false]];
	} forEach BUILD_DEGREES;
};
