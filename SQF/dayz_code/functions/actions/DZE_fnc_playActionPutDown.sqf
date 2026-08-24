///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_playActionPutDown
//
//	Description:	Plays the put-down action and returns whether the animation finished.
//	Groups:		Actions
//
//	Syntax:		call DZE_fnc_playActionPutDown
//
//	Return Value:	Boolean
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
///#define DEBUG_DZE_FNC_PLAY_ACTION_PUT_DOWN

#ifdef DEBUG_DZE_FNC_PLAY_ACTION_PUT_DOWN
	diag_log '[Client Debug]: [DZE_fnc_playActionPutDown]: Function called.';
#endif

['PutDown', {player call DZE_fnc_isBentOver}] call DZE_fnc_playAction
