///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_removeMeleeMagazines
//
//	Description:	Removes all hidden melee magazines from the player before an inventory operation.
//	Groups:		Inventory
//
//	Syntax:		call DZE_fnc_removeMeleeMagazines
//
//	Parameters:	None
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_REMOVE_MELEE_MAGAZINES

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_REMOVE_MELEE_MAGAZINES
	diag_log '[Client Debug]: [DZE_fnc_removeMeleeMagazines]: Function called.';
#endif

{
	player removeMagazines _x;
} forEach DZE_MeleeMagazines;

#ifdef DEBUG_DZE_FNC_REMOVE_MELEE_MAGAZINES
	diag_log format ['[Client Debug]: [DZE_fnc_removeMeleeMagazines]: Removed melee magazine classes: %1.',DZE_MeleeMagazines];
#endif
