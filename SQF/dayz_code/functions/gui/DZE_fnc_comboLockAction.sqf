///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_comboLockAction
//
//	Description:	Cancels or submits the active combination lock dialog.
//	Groups:		GUI
//
//	Syntax:		[control, submit] call DZE_fnc_comboLockAction
//
//	Parameters:	control: Control - Button control that triggered the action
//			submit: Boolean - true to submit the entered code, false to cancel
//
//	Return Value:	Boolean - false to preserve the button's default behavior
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_COMBO_LOCK_ACTION

#ifdef DEBUG_DZE_FNC_COMBO_LOCK_ACTION
	diag_log format ['[Client Debug]: [DZE_fnc_comboLockAction]: Function called with arguments: %1',_this];
#endif

local _control = _this select 0;
local _submit = _this select 1;

keypadCancel = !_submit;

if (_submit && {!isNull dayz_selectedDoor}) exitWith {
	call player_unlockDoor;
	false
};

(ctrlParent _control) closeDisplay 2;

false
