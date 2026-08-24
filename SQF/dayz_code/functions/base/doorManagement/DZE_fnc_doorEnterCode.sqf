///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_doorEnterCode
//
//	Description:	Opens the manual combination dialog when manual door codes are enabled.
//	Groups:		Base, Door Management
//
//	Syntax:		call DZE_fnc_doorEnterCode
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_DOOR_ENTER_CODE

#ifdef DEBUG_DZE_FNC_DOOR_ENTER_CODE
	diag_log format ['[Client Debug]: [DZE_fnc_doorEnterCode]: Function called with argumentes: %1',_this];
#endif

local _display = findDisplay 61144;
if (!isNull _display) then {_display closeDisplay 2};

if (dayz_lastCodeFail > diag_tickTime) exitWith {
	format [localize 'STR_EPOCH_PLAYER_19_WAIT',round (dayz_lastCodeFail - diag_tickTime)] call DZE_fnc_rollingMessages;
};

if (DZE_doorManagementAllowManualCode) then {
	DZE_topCombo = 0;
	DZE_midCombo = 0;
	DZE_botCombo = 0;
	createDialog 'ComboLockUI';
} else {
	localize 'STR_EPOCH_DOORACCESS_NOMANUAL' call DZE_fnc_rollingMessages;
};
