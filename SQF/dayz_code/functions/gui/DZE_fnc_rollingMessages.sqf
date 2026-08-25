///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_rollingMessages
//
//	Description:	Display a rolling message at the lower center of screen.
//	Groups:		GUI
//
//	Syntax1:	localizedMessage call DZE_fnc_rollingMessages;
//	Syntax2:	[localizedMessage] call DZE_fnc_rollingMessages;	// use an array for special or multi-line message
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

//#define DEBUG_DZE_FNC_ROLLING_MESSAGES

#ifdef DEBUG_DZE_FNC_ROLLING_MESSAGES
	diag_log format ['[Client Debug]: [DZE_fnc_rollingMessages]: Function called with argumentes: %1',_this];
#endif

disableSerialization;

local _message = _this;

if (typeName _message == 'ARRAY') then {
	// Array input is displayed directly without changing the rolling message history.
	_message = _message select 0;
} else {
	// Reuse one timestamp for all history checks in this call.
	local _now = diag_tickTime;

	if (_now - Message_1_time < 5) then {
		Message_3 = '';

		if (_now - Message_2_time < 5) then {
			Message_3 = Message_2;
		};

		Message_2 = Message_1;
		Message_2_time = Message_1_time;
	} else {
		Message_2 = '';
		Message_3 = '';
	};

	Message_1 = _message;
	Message_1_time = _now;
	_message = Message_1 + '<br></br>' + Message_2 + '<br></br>' + Message_3;
};

15 cutRsc ['RSC_DZ_Messages','plain'];
local _textLine = (uiNamespace getVariable 'DZ_Messages') displayCtrl 3;
_textLine ctrlSetStructuredText parseText _message;
