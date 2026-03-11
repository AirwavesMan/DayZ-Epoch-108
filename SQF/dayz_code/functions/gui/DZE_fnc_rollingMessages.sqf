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

disableSerialization;

local _showText = {

	15 cutRsc ['RSC_DZ_Messages','plain'];
	local _textLine = (uiNamespace getVariable 'DZ_Messages') displayCtrl 3;
	_textLine ctrlSetStructuredText (parseText _this);
	_textLine ctrlCommit 0;
};

if (typeName _this == 'ARRAY') exitWith {p0 call _showText};	// Special or multi-line message

if (diag_ticktime - Message_1_time < 5) then {

	if (time - Message_2_time < 5) then {

		Message_3	= Message_2;
		Message_3_time	= Message_2_time;
	} else {
		Message_3	= '';
	};

	Message_2	= Message_1;
	Message_2_time	= Message_1_time;
} else {
	Message_2 = '';
	Message_3 = '';
};

Message_1	= _this;
Message_1_time	= diag_ticktime;

format ['%1<br></br>%2<br></br>%3', Message_1, Message_2, Message_3] call _showText;
