///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_formatWorldspace
//
//	Description:	Formats a validated model-center worldspace for Hive persistence without
//			losing position or orientation precision.
//	Groups:		Build, Position
//
//	Syntax:		worldspace call server_formatWorldspace
//
//	Parameters:	worldspace: Array - [positionASL, [vectorDir, vectorUp], metadata]
//
//	Return Value:	String - Hive-ready worldspace, or an empty string for an invalid schema
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SERVER_FORMAT_WORLDSPACE

#ifdef DEBUG_SERVER_FORMAT_WORLDSPACE
	diag_log format ['[Server Debug]: [server_formatWorldspace]: Function called with argumentes: %1',_this];
#endif

local _worldspace = _this;
local _validation = _worldspace call server_validateObjectWorldspace;

if !(_validation select 0) exitWith {
	diag_log format ['[Server Warning]: [server_formatWorldspace]: Rejected invalid model-center worldspace: %1 | %2',_validation select 1,_worldspace];
	''
};

local _positionASL = _worldspace select 0;
local _vector = _worldspace select 1;
local _metadata = _worldspace select 2;
local _formattedWorldspace = format ['[%1,[%2,%3],%4]',_positionASL call KK_fnc_positionToString,(_vector select 0) call KK_fnc_positionToString,(_vector select 1) call KK_fnc_positionToString,str _metadata];

#ifdef DEBUG_SERVER_FORMAT_WORLDSPACE
	diag_log format ['[Server Debug]: [server_formatWorldspace]: Formatted model-center worldspace: %1',_formattedWorldspace];
#endif

_formattedWorldspace
