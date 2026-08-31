///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_downgradeObject
//
//	Description:	Downgrades a locked building object and returns the configured refund items.
//	Groups:		Build
//
//	Syntax:		Executed by an addAction entry with the building object in _this select 3
//
//	Parameters:	target: Object - Object to which the action is attached
//			caller: Object - Unit executing the action
//			actionId: Number - addAction identifier
//			object: Object - Locked building object to downgrade
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_DOWNGRADE_OBJECT

#ifdef DEBUG_DZE_FNC_DOWNGRADE_OBJECT
	diag_log format['[Client Debug]: [DZE_fnc_downgradeObject]: Function called with arguments: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'STR_BUILD_DOWNGRADE_ALREADY_IN_PROGRESS' call DZE_fnc_rollingMessages;};	// Downgrade is already in progress.
dayz_actionInProgress = true;

local _object = _this select 3;

player removeAction s_player_downgrade_build;
s_player_downgrade_build = -1;

//	Object is null
if (isNull _object) exitWith {dayz_actionInProgress = false; systemChat localize 'STR_BUILD_DOWNGRADE_OBJECT_NOT_FOUND';};

if ([_object,12] call DZE_fnc_nearPlayerMan) exitWith {					// Another player is nearby. Only one player can be near to perform this action.
	dayz_actionInProgress = false;
	localize 'STR_BUILD_DOWNGRADE_PLAYER_NEARBY' call DZE_fnc_rollingMessages;
};

local _codeObject = _object getVariable ['CharacterID','0'];

if (DZE_Lock_Door != _codeObject) exitWith {		// Unable to downgrade, you do not know the combination.
	dayz_actionInProgress = false;
	localize 'STR_BUILD_DOWNGRADE_COMBINATION_UNKNOWN' call DZE_fnc_rollingMessages;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

local _typeObject = typeOf _object;
local _text = getText (configFile >> 'CfgVehicles' >> _typeObject >> 'displayName');
local _downgrade = getArray (configFile >> 'CfgVehicles' >> _typeObject >> 'downgradeBuilding');

if (count _downgrade > 0) then {
	local _newTypeObject = _downgrade select 0;
	local _classLimitResult = [_newTypeObject,_object,_object] call DZE_fnc_checkBuildClassLimit;

	if (count _classLimitResult < 4) exitWith {
		dayz_actionInProgress = false;
		localize 'STR_BUILD_CANCELLED' call DZE_fnc_rollingMessages;
	};

	if !(_classLimitResult select 0) exitWith {
		local _newText = getText (configFile >> 'CfgVehicles' >> _newTypeObject >> 'displayName');
		local _message = if ((_classLimitResult select 1) < 0) then {
			format [localize 'STR_BUILD_VALIDATION_CLASS_DISABLED',_newText]
		} else {
			format [localize 'STR_BUILD_VALIDATION_CLASS_LIMIT',_newText,_classLimitResult select 1]
		};
		_message call DZE_fnc_rollingMessages;
		dayz_actionInProgress = false;
	};

	local _refund = _downgrade select 1;

	[_object] call DZE_fnc_displayHelpers; // Create helpers.

	[player,getPosATL player,40,'repair'] call fnc_alertZombies;

	local _finished = ['Medic',1] call fn_loopAction;

	[] call DZE_fnc_displayHelpers; // Delete helpers.

	if (!_finished) exitWith {};

	['Working',0,[3,2,4,0]] call dayz_NutritionSystem;

	local _invResult = false;
	local _i = 0;
	local _addedItems = [];
	local _itemOut = '';
	local _countOut = 0;
	local _refundTotal = 0;

	{
		_refundTotal = _refundTotal + (_x select 1);
	} count _refund;

	{
		_itemOut = _x select 0;
		_countOut = _x select 1;
		_invResult = true;

		for '_x' from 1 to _countOut do {

			_invResult = [player,_itemOut] call BIS_fnc_invAdd;

			if (!_invResult) exitWith {};

			_i = _i + 1;
			_addedItems set [count _addedItems,[_itemOut,1]];
		};
		if (!_invResult) exitWith {};
	} count _refund;

	if (_refundTotal > 0 && {_i == _refundTotal}) then {
		//	If we downgrade a locked door, the door will loose its code
		if (_codeObject != '0' && {_typeObject in DZE_DoorsLocked}) then {_codeObject = '0';};	//	ToDo: Handle this via configs

		DZE_Wait_For_Object = nil;
		PVDZE_upgradeObject = [netID player,netID _object,_codeObject,_newTypeObject,dayz_authKey];
		publicVariableServer 'PVDZE_upgradeObject';

		_object = call DZE_fnc_revealServerObject;

		//	Remove the provisional refund items if the server could not create the downgraded object.
		if (isNull _object) then {
			{
				[player,_x select 0,_x select 1] call BIS_fnc_invRemove;

			} count _addedItems;

			localize 'STR_BUILD_DOWNGRADE_FAILED' call DZE_fnc_rollingMessages;
		} else {
			format[localize 'STR_BUILD_DOWNGRADE_COMPLETED',_text] call DZE_fnc_rollingMessages;	// You have downgraded %1.
		};
	} else {
		_text = getText(configFile >> 'CfgMagazines' >> _itemOut >> 'displayName');

		format[localize 'STR_BUILD_DOWNGRADE_REFUND_FAILED',_i,_text] call DZE_fnc_rollingMessages;	// %1 of %2 could not be added to your inventory. (not enough room?) // poorly worded
		{
			[player,_x select 0,_x select 1] call BIS_fnc_invRemove;

		} count _addedItems;
	};	
} else {
	localize 'STR_BUILD_DOWNGRADE_NOT_AVAILABLE' call DZE_fnc_rollingMessages;				// No downgrades are available
};

dayz_actionInProgress = false;
s_player_downgrade_build = -1;
