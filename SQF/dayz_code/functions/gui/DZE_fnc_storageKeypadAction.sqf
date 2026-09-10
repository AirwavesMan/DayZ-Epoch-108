///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_storageKeypadAction
//
//	Description:	Cancels or submits the active safe or lockbox keypad dialog.
//	Groups:		GUI
//
//	Syntax:		[control, submit] call DZE_fnc_storageKeypadAction
//
//	Parameters:	control: Control - Button control that triggered the action
//			submit: Boolean - true to submit the entered code, false to cancel
//
//	Return Value:	Boolean - false to preserve the button's default behavior
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_STORAGE_KEYPAD_ACTION

#ifdef DEBUG_DZE_FNC_STORAGE_KEYPAD_ACTION
	diag_log format ['[Client Debug]: [DZE_fnc_storageKeypadAction]: Function called with arguments: %1',_this];
#endif

local _control = _this select 0;
local _submit = _this select 1;

[player,'keypad_tick',0,false] call dayz_zombieSpeak;
keypadCancel = !_submit;
(ctrlParent _control) closeDisplay 2;

if (_submit && {!isNull DZE_selectedStorage}) then {
	DZE_selectedStorage spawn DZE_fnc_unlockStorage;
};

false
