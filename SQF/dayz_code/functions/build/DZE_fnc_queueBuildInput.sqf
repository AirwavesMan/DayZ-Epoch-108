///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_queueBuildInput
//
//	Description:	Appends one build input to the active FIFO queue.
//	Groups:		Build
//
//	Syntax:		[inputIndex, arguments] call DZE_fnc_queueBuildInput
//
//	Parameters:	inputIndex: Number - Build action index
//			arguments: Any - Payload passed to the selected build action
//
//	Return Value:	Boolean - Input was queued
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_QUEUE_BUILD_INPUT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_QUEUE_BUILD_INPUT
	diag_log format ['[Client Debug]: [DZE_fnc_queueBuildInput]: Function called with argumentes: %1',_this];
#endif

if (BUILD_STAGE != BUILD_HOTKEYS_ACTIVE ||
	{count _this != 2} ||
	{typeName (p0) != 'SCALAR'} ||
	{p0 <= BUILD_NOKEY || {p0 > BUILD_VECTOR_RESET}}) exitWith {false};

local _inputIndex = p0;
local _arguments = p1;
local _queued = false;
local _input = [_inputIndex,_arguments];

// Input event handlers and scheduled action-menu scripts share this queue.
isNil {
	if (BUILD_STAGE == BUILD_HOTKEYS_ACTIVE) then {
		BUILD_KEY_QUEUE set [count BUILD_KEY_QUEUE,_input];
		_queued = true;
	};
};

#ifdef DEBUG_DZE_FNC_QUEUE_BUILD_INPUT
	diag_log format ['[Client Debug]: [DZE_fnc_queueBuildInput]: Input queued | Input: %1 | Queue size: %2',_input,count BUILD_KEY_QUEUE];
#endif

_queued
