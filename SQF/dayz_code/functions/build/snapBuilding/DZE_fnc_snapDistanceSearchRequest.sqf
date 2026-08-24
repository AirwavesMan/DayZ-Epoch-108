///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapDistanceSearchRequest
//
//	Description:	Marks the active snap distance search dirty after a state or helper-list change.
//	Groups:		Build, Snap Building
//
//	Syntax:		call DZE_fnc_snapDistanceSearchRequest
//
//	Parameters:	None
//
//	Return Value:	Number - Current search revision
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_DISTANCE_SEARCH_REQUEST


DZE_snapDistanceSearchRevision = DZE_snapDistanceSearchRevision + 1;

#ifdef DEBUG_DZE_FNC_SNAP_DISTANCE_SEARCH_REQUEST
	diag_log format ['[Client Debug]: [DZE_fnc_snapDistanceSearchRequest]: Search requested | Revision: %1',DZE_snapDistanceSearchRevision];
#endif

DZE_snapDistanceSearchRevision
