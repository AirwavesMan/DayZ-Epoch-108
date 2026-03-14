///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_highlightText
//
//	Description:	Displays fixed or relative text over the specified object.
//	Groups:		GUI
//
//	Syntax:		[text, layer, object, position] spawn DZE_fnc_highlightText
//
//	Parameters:	text: Structured Text
//			layer: Number - Rsc Layer
//			object: Object - E.g. Loot pile or dead unit
//			position: Array format PositionRelative - (Optional, default []) object offset in world space
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"
#define VERTICAL                ([0.12, 0.06] select (cameraView == 'EXTERNAL')) * safeZoneH
#define displayText(x,y)        _control ctrlSetPosition [x,y]; _control ctrlCommit 0
#define cursorFocusedOn(obj)    !dayz_actionInProgress && {DZE_cursorTarget == obj && {DZE_LOOT_TEXT}}

DZE_key_highlightText = true;

local _object	= p2;
local _relPos	= param(3, []);

disableSerialization;

p1 cutRsc ['rscDynamicText', 'PLAIN'];

local _control	= uiNamespace getVariable 'BIS_dynamicText' displayCtrl 9999;

_control ctrlSetStructuredText parseText (p0);
_control ctrlShow true;

local _xy = [];
local _px = 0;
local _py = 0;

if (count _relPos == 0) then {					// fixed text

	while {cursorFocusedOn(_object)} do {

		_py = 0.5 - VERTICAL;				// adjust optics vertically

		displayText(_px, _py);
	};

} else {							// relative text

	while {cursorFocusedOn(_object)} do {

		_xy = modelToScreen(_object, _relPos);		// get screen coordinates

		if (count _xy == 2) then {			// ensure text is within screen limits

			_px = (getX(_xy)) - 0.5;		// adjust optics horizontally
			_py = (getY(_xy)) - VERTICAL;		// adjust optics vertically

			displayText(_px, _py);
		};
	};
};

_control ctrlShow false; 
_control ctrlCommit 0;

DZE_key_highlightText = false;
