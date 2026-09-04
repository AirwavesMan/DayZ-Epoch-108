///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_vectorBuildAction
//
//	Author:		strikerforce
//
//	Description:	Handles vector-building action-menu input and forwards rotation requests
//			to the modular-build input queue.
//	Groups:		Build, Vector Building
//
//	Syntax:		[target, caller, actionId, parameters] call DZE_fnc_vectorBuildAction
//
//	Parameters:	target: Object/String - Action target or direct-call placeholder (unused)
//			caller: Object/String - Action caller or direct-call placeholder (unused)
//			actionId: Number/String - Action identifier or direct-call placeholder (unused)
//			parameters: Array - Vector state, degree state, action type and optional degree
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_VECTOR_BUILD_ACTION

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_VECTOR_BUILD_ACTION
	diag_log format ['[Client Debug]: [DZE_fnc_vectorBuildAction]: Function called with arguments: %1',_this];
#endif

local _parameters = p3;

waitUntil {uiSleep 0.1; BUILD_STAGE != BUILD_INACTIVE};
if (BUILD_STAGE != BUILD_HOTKEYS_ACTIVE) exitWith {};

local _actionType = _parameters select 2;

if (_actionType in [BUILD_VECTOR_ACTION_TYPE_BOTH,BUILD_VECTOR_ACTION_TYPE_ROTATION]) then {
	vectorActionState = _parameters select 0;
};
if (_actionType in [BUILD_VECTOR_ACTION_TYPE_BOTH,BUILD_VECTOR_ACTION_TYPE_DEGREE]) then {
	degreeActionState = _parameters select 1;
};

///if ((_actionType == BUILD_VECTOR_ACTION_TYPE_ROTATION) || (_actionType == BUILD_VECTOR_ACTION_TYPE_BOTH)) then {
if (_actionType in [BUILD_VECTOR_ACTION_TYPE_BOTH,BUILD_VECTOR_ACTION_TYPE_ROTATION]) then {
///if (_actionType < BUILD_VECTOR_ACTION_TYPE_DEGREE) then {
	call {
		if (vectorActionState == 'Init') exitWith {

			vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_OPEN';
			[1,0] call DZE_fnc_vectorActionCleanup;

			[] spawn {

				while {BUILD_STAGE == BUILD_HOTKEYS_ACTIVE} do {uiSleep 0.5};

				[0,0] call DZE_fnc_vectorActionCleanup;
				vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			};
		};

		if (vectorActionState == localize 'STR_VECTOR_BUILDING_MENU_OPEN') exitWith {
			vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			[1,1] call DZE_fnc_vectorActionCleanup;
		};

		if (vectorActionState == localize 'STR_VECTOR_BUILDING_MENU_CLOSE') exitWith {
			vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_OPEN';
			[1,0] call DZE_fnc_vectorActionCleanup;
		};
		if (vectorActionState == localize 'STR_VECTOR_BUILDING_ROTATION_PITCH_FORWARD') exitWith {
			vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			[1,1] call DZE_fnc_vectorActionCleanup;
			[BUILD_ROTATE3D, [X_AXIS, BUILD_CUR_DEGREE]] call DZE_fnc_queueBuildInput;
		};
		if (vectorActionState == localize 'STR_VECTOR_BUILDING_ROTATION_PITCH_BACK') exitWith {
			vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			[1,1] call DZE_fnc_vectorActionCleanup;
			[BUILD_ROTATE3D, [X_AXIS, -BUILD_CUR_DEGREE]] call DZE_fnc_queueBuildInput;
		};
		if (vectorActionState == localize 'STR_VECTOR_BUILDING_ROTATION_BANK_LEFT') exitWith {
			vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			[1,1] call DZE_fnc_vectorActionCleanup;
			[BUILD_ROTATE3D, [Y_AXIS, BUILD_CUR_DEGREE]] call DZE_fnc_queueBuildInput;
		};
		if (vectorActionState == localize 'STR_VECTOR_BUILDING_ROTATION_BANK_RIGHT') exitWith {
			vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			[1,1] call DZE_fnc_vectorActionCleanup;
			[BUILD_ROTATE3D, [Y_AXIS, -BUILD_CUR_DEGREE]] call DZE_fnc_queueBuildInput;
		};

		///////////////////////////////////////////////////////////////////////////////////

		if (vectorActionState == localize 'STR_VECTOR_BUILDING_ROTATION_YAW_LEFT') exitWith {
			vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			[1,1] call DZE_fnc_vectorActionCleanup;
			[BUILD_ROTATE3D, [Z_AXIS, -BUILD_CUR_DEGREE]] call DZE_fnc_queueBuildInput;
		};
		if (vectorActionState == localize 'STR_VECTOR_BUILDING_ROTATION_YAW_RIGHT') exitWith {
			vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			[1,1] call DZE_fnc_vectorActionCleanup;
			[BUILD_ROTATE3D, [Z_AXIS, BUILD_CUR_DEGREE]] call DZE_fnc_queueBuildInput;
		};

		///////////////////////////////////////////////////////////////////////////////////

		if (vectorActionState == localize 'STR_VECTOR_BUILDING_ROTATION_RESET') exitWith {
			vectorActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			[1,1] call DZE_fnc_vectorActionCleanup;
			[BUILD_VECTOR_RESET, 0] call DZE_fnc_queueBuildInput;
		};
	};
};

///if ((_actionType == BUILD_VECTOR_ACTION_TYPE_DEGREE) || (_actionType == BUILD_VECTOR_ACTION_TYPE_BOTH)) then {
if (_actionType in [BUILD_VECTOR_ACTION_TYPE_BOTH,BUILD_VECTOR_ACTION_TYPE_DEGREE]) then {
	call {
		if (degreeActionState == 'Init') exitWith {

			degreeActionState = localize 'STR_VECTOR_BUILDING_MENU_OPEN';
			[1,0] call DZE_fnc_vectorDegreeActionCleanup;

			[] spawn {

				while {BUILD_STAGE == BUILD_HOTKEYS_ACTIVE} do {uiSleep 0.5};

				[0,0] call DZE_fnc_vectorDegreeActionCleanup;
				degreeActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			};
		};
		if (degreeActionState == localize 'STR_VECTOR_BUILDING_MENU_OPEN') exitWith {
			degreeActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			[1,1] call DZE_fnc_vectorDegreeActionCleanup;
		};

		if (degreeActionState == localize 'STR_VECTOR_BUILDING_MENU_CLOSE') exitWith {
			degreeActionState = localize 'STR_VECTOR_BUILDING_MENU_OPEN';
			[1,0] call DZE_fnc_vectorDegreeActionCleanup;
		};
		if (degreeActionState == 'SELECT') exitWith {
			degreeActionState = localize 'STR_VECTOR_BUILDING_MENU_CLOSE';
			BUILD_CUR_DEGREE = _parameters select 3;
			[1,1] call DZE_fnc_vectorDegreeActionCleanup;
		};
	};
};
