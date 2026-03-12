///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					custom keys
//
//				For use in mission file only
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\ca\editor\Data\Scripts\dikCodes.h"

kb_custom_keys = {

	// use the same format as DZE_fnc_onKeyDown
	[
		[[DIK_7],		{_this call kb_key_7}],		// add new key function
		[[DIK_8, DIK_9],	{_this call kb_myFunction}],	// define multiple keys
		[actionKeys 'Diary',	{_this call kb_journal}]	// customize a key function
	]
};

///////////////////////////////////////////////////////////////////////////////////////////////////

kb_key_7 = {

	// params: [displayOrControl, key, shift, ctrl, alt]

	systemChat format ['%1: Key 7 | %2', diag_tickTime, _this];
	true
};

kb_myFunction = {

	// params: [displayOrControl, key, shift, ctrl, alt]

	systemChat format ['%1: Key value %2', diag_tickTime, _this select 1];
	true
};

// to customize an existing function, redefine it here
/*
kb_journal = {

	// params: [displayOrControl, key, shift, ctrl, alt]

	// custom journal function
	// code here...
	true
};
*/
