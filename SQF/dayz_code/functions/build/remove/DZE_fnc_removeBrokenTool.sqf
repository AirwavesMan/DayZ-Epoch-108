///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_removeBrokenTool
//
//	Description:	Selects and removes a tool broken while removing an object.
//	Groups:		Build
//
//	Syntax:		[isWreck,objectDisplayName] call DZE_fnc_removeBrokenTool
//
//	Parameters:	isWreck: Boolean - Whether only a toolbox may break
//			objectDisplayName: String - Localized removed object name
//
//	Return Value:	Boolean - Whether the selected broken tool was removed successfully
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_REMOVE_BROKEN_TOOL

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_REMOVE_BROKEN_TOOL
	diag_log format ['[Client Debug]: [DZE_fnc_removeBrokenTool]: Function called with arguments: %1',_this];
#endif

local _isWreck = param(0,false);
local _objectDisplayName = param(1,'');
local _removeTool = if (_isWreck) then {'ItemToolbox'} else {['ItemCrowbar','ItemToolbox'] call BIS_fnc_selectRandom};
local _removed = false;

if (_removeTool == 'ItemCrowbar' && {!('ItemCrowbar' in items player)}) then {
	if ('MeleeCrowbar' in weapons player) then {
		player removeWeapon 'MeleeCrowbar';
		_removed = true;
	} else {
		if (dayz_onBack == 'MeleeCrowbar') then {
			dayz_onBack = '';	// Remove the carried melee crowbar.
			player setVariable ['dayz_onBack',dayz_onBack,true];
			_removed = true;

			if (!isNull (findDisplay 106)) then {
				((findDisplay 106) displayCtrl 1209) ctrlSetText '';
			};
		};
	};
} else {
	_removed = ([player,_removeTool,1] call BIS_fnc_invRemove) > 0;
};

if (_removed) then {
	format [localize 'STR_BUILD_REMOVE_TOOL_BROKEN',getText (configFile >> 'CfgWeapons' >> _removeTool >> 'displayName'),_objectDisplayName] call DZE_fnc_rollingMessages;	// %1 broke, cannot remove %2.
};

#ifdef DEBUG_DZE_FNC_REMOVE_BROKEN_TOOL
	diag_log format ['[Client Debug]: [DZE_fnc_removeBrokenTool]: Tool: %1 | Removed: %2',_removeTool,_removed];
#endif

_removed
