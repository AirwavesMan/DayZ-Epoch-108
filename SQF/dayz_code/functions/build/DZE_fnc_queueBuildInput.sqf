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
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_QUEUE_BUILD_INPUT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_QUEUE_BUILD_INPUT
	diag_log format ['[Client Debug]: [DZE_fnc_queueBuildInput]: Function called with arguments: %1',_this];
#endif

local _input = _this;

// Input event handlers and scheduled action-menu scripts share this queue.
isNil {
	if (BUILD_STAGE == BUILD_HOTKEYS_ACTIVE) then {
		BUILD_KEY_QUEUE set [count BUILD_KEY_QUEUE,_input];

		#ifdef DEBUG_DZE_FNC_QUEUE_BUILD_INPUT
			diag_log format ['[Client Debug]: [DZE_fnc_queueBuildInput]: Input queued | Input: %1 | Queue size: %2',_input,count BUILD_KEY_QUEUE];
		#endif
	};
};
