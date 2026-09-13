///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_keypadReset
//
//	Description:	Re-enables keypad actions after a cancelled dialog has finished closing.
//	Groups:		GUI
//
//	Syntax:		[] spawn DZE_fnc_keypadReset
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_KEYPAD_RESET

#ifdef DEBUG_DZE_FNC_KEYPAD_RESET
	diag_log format ['[Client Debug]: [DZE_fnc_keypadReset]: Function called with arguments: %1',_this];
#endif

uiSleep 2;
keypadCancel = false;

#ifdef DEBUG_DZE_FNC_KEYPAD_RESET
	diag_log '[Client Debug]: [DZE_fnc_keypadReset]: Keypad actions re-enabled';
#endif
