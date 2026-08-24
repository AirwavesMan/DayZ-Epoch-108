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
	diag_log format ['[Client Debug]: [DZE_fnc_vectorDegreeActionCleanup]: Function called with argumentes: %1',_this];
#endif

local _showRootAction = p0;
local _showDegreeActions = p1;

player removeAction s_player_toggleDegree;
s_player_toggleDegree = -1;

{player removeAction _x} count s_player_toggleDegrees;
degreeActions = -1;

if (_showRootAction > 0) then {
	local _orange = '<t color=''#ff8800''>';	// orange
	local _degrees = localize 'STR_VECTOR_BUILDING_DEGREE_LABEL';
	local _end = '</t>';
	local _text = format [_orange + _degrees + ' %1' + _end, degreeActionState];
	s_player_toggleDegree = player addAction [_text, '\z\addons\dayz_code\functions\build\vectorBuilding\DZE_fnc_vectorBuildAction.sqf', [vectorActionState, degreeActionState, BUILD_VECTOR_ACTION_TYPE_DEGREE], 5, false, false];
};

if (_showDegreeActions > 0) then {
	local _red = '<t color=''#ff0000''>';	// red
	local _white = '<t color=''#ffffff''>';	// white
	local _select = localize 'STR_VECTOR_BUILDING_DEGREE_SELECTION_LABEL';
	local _tab = '	';
	local _end = '</t>';
	local _color = '';
	local _text = '';

	s_player_toggleDegrees = [];
	{
		_color = _white;
		if (BUILD_CUR_DEGREE == _x) then {_color = _red};

		_text = format [_tab + _color + _select + ' %1' + _end, _x];
		degreeActions = player addAction [_text, '\z\addons\dayz_code\functions\build\vectorBuilding\DZE_fnc_vectorBuildAction.sqf', [vectorActionState, 'SELECT', BUILD_VECTOR_ACTION_TYPE_DEGREE, _x], 4, false, false];
		s_player_toggleDegrees set [count s_player_toggleDegrees, degreeActions];
	} count BUILD_DEGREES;
};
