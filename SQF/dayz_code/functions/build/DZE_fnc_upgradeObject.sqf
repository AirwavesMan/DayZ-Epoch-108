///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_upgradeObject
//
//	Description:	Validates an object upgrade, removes the required items and requests the
//			server-side replacement of the persisted object.
//	Groups:		Build
//
//	Syntax:		Executed by an addAction entry with the building object in _this select 3
//
//	Parameters:	target: Object - Object to which the action is attached
//			caller: Object - Unit executing the action
//			actionId: Number - addAction identifier
//			object: Object - Persisted building object to upgrade
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_UPGRADE_OBJECT

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_UPGRADE_OBJECT
	diag_log format['[Client Debug]: [DZE_fnc_upgradeObject]: Function called with argumentes: %1',_this];
#endif

if (dayz_actionInProgress) exitWith {localize 'STR_BUILD_UPGRADE_ALREADY_IN_PROGRESS' call DZE_fnc_rollingMessages;};	// Upgrade is already in progress.
dayz_actionInProgress = true;

local _object = _this select 3;

player removeAction s_player_upgrade_build;
s_player_upgrade_build = -1;

//	Object is null
if (isNull _object) exitWith {dayz_actionInProgress = false; systemChat localize 'STR_BUILD_UPGRADE_OBJECT_NOT_FOUND';};

local _classname = typeOf _object;

if (_classname in DZE_DisableUpgrade) exitWith {
	dayz_actionInProgress = false;
	localize 'STR_BUILD_UPGRADE_DISABLED' call DZE_fnc_rollingMessages;					// Not setup yet.
};

local _hasAccess = [player,_object] call DZE_fnc_checkAccess;

if (!(_hasAccess select 0) && {_classname in DZE_LockedStorage}) exitWith {
	dayz_actionInProgress = false;
	localize 'STR_BUILD_UPGRADE_NOT_OWNER' call DZE_fnc_rollingMessages;					// You are not the owner.
};

local _text = getText (configFile >> 'CfgVehicles' >> _classname >> 'displayName');
local _upgrade = getArray (configFile >> 'CfgVehicles' >> _classname >> 'upgradeBuilding');

if (count _upgrade > 0) then {
	local _neededTools = _upgrade select 1;

	if (['',_neededTools,'none'] call dze_requiredItemsCheck) then {
		local _newclassname = _upgrade select 0;
		local _lockable = getNumber (configFile >> 'CfgVehicles' >> _newclassname >> 'lockable');
		local _requirements = _upgrade select 2;
		local _missingQty = 0;
		local _missing = '';
		local _bpMags = [];
		local _qtyBP = 0;
		local _proceed = true;
		local _itemIn = '';
		local _countIn = 0;
		local _qty = 0;

		{
			_itemIn = _x select 0;
			_countIn = _x select 1;
			_qty = {(_x == _itemIn) || {configName (inheritsFrom (configFile >> 'CfgMagazines' >> _x)) == _itemIn}} count magazines player;
			_qtyBP = 0;

			if (!isNull (unitBackpack player) && {_qty < _countIn}) then {
				_bpMags = getMagazineCargo (unitBackpack player);
				{
					if ((_x == _itemIn) || {configName (inheritsFrom (configFile >> 'CfgMagazines' >> _x)) == _itemIn}) then {
						_qtyBP = _qtyBP + ((_bpMags select 1) select _forEachIndex);
					};
				} forEach (_bpMags select 0);
			};

			if (_qty < _countIn && {_qtyBP < (_countIn - _qty)}) exitWith {
				_missing = _itemIn;
				_missingQty = _countIn - (_qty + _qtyBP);
				_proceed = false;
			};
		} forEach _requirements;

		if (_proceed) then {
			[_object] call DZE_fnc_displayHelpers;					// Create helpers.

			[player,getPosATL player,25,'repair'] spawn fnc_alertZombies;		// Make noise.

			local _finished = ['Medic',1] call fn_loopAction;				// Play animation.

			[] call DZE_fnc_displayHelpers;						// Delete helpers.

			if (!_finished) exitWith {};

			['Working',0,[3,2,4,0]] call dayz_NutritionSystem;

			local _temp_removed_array = [];
			local _temp_BP_removed_array = [];
			local _removed_total = 0;
			local _tobe_removed_total = 0;
			local _removed = 0;
			local _num_removed = 0;
			local _count = 0;
			local _countNew = 0;
			local _removeFromStack = 0;

			{
				_removed = 0;
				_itemIn = _x select 0;
				_countIn = _x select 1;
				_tobe_removed_total = _tobe_removed_total + _countIn;
				{
					if ((_removed < _countIn) && {(_x == _itemIn) || {configName (inheritsFrom (configFile >> 'CfgMagazines' >> _x)) == _itemIn}}) then {
						_num_removed = [player,_x] call BIS_fnc_invRemove;
						_removed = _removed + _num_removed;
						_removed_total = _removed_total + _num_removed;

						if (_num_removed >= 1) then {
							_temp_removed_array set [count _temp_removed_array,_x];
						};
					};
				} forEach magazines player;

				if (!isNull (unitBackpack player) && {_removed < _countIn}) then {
					_bpMags = getMagazineCargo (unitBackpack player);
					clearMagazineCargoGlobal (unitBackpack player);
					{
						_count = (_bpMags select 1) select _forEachIndex;
						_countNew = _count;
						_removeFromStack = 0;

						if (_removed < _countIn && {(_x == _itemIn) || {configName (inheritsFrom (configFile >> 'CfgMagazines' >> _x)) == _itemIn}}) then {
							_removeFromStack = _count min (_countIn - _removed);
							_countNew = _count - _removeFromStack;
							_removed = _removed + _removeFromStack;
							_removed_total = _removed_total + _removeFromStack;

							if (_removeFromStack > 0) then {
								_temp_BP_removed_array set [count _temp_BP_removed_array,[_x,_removeFromStack]];
							};
						};
						if (_countNew > 0) then {
							(unitBackpack player) addMagazineCargoGlobal [_x,_countNew];
						};
					} forEach (_bpMags select 0);
				};
			} forEach _requirements;

			if (_tobe_removed_total == _removed_total) then {
				call player_forceSave;

				local _codeObject = _object getVariable ['CharacterID','0'];
				local _combinationDisplay = '';

				if (_lockable == BUILD_COMBO_LOCK && {!(_newclassname in ['DZE_WoodenGate_2','DZE_WoodenGate_3','DZE_WoodenGate_4'])}) then {
					local _codeResult = _lockable call DZE_fnc_generateCode;
					local _combination = _codeResult select 0;
					_combinationDisplay = _codeResult select 1;
					_codeObject = _combination;
				};

				DZE_Wait_For_Object = nil;
				PVDZE_upgrade_Object = [netID player,netID _object,_codeObject,_newclassname,dayz_authKey];
				publicVariableServer 'PVDZE_upgrade_Object';

				_object = call DZE_fnc_revealServerObject;

				//	Object creation failed, refund items
				if (isNull _object) then {
					{player addMagazine _x;} count _temp_removed_array;

					if (count _temp_BP_removed_array > 0) then {
						{(unitBackpack player) addMagazineCargoGlobal _x} count _temp_BP_removed_array;
					};
				} else {
					if (_combinationDisplay != '') then {
						local _message = format[localize 'STR_BUILD_UPGRADE_COMPLETED_WITH_COMBINATION',_combinationDisplay,_text];
						_message call DZE_fnc_rollingMessages;
						systemChat _message;								// You have upgraded %2. The combination is: %1
					} else {
						format[localize 'STR_BUILD_UPGRADE_COMPLETED',_text] call DZE_fnc_rollingMessages;	// You have upgraded %1.
					};
				};
			} else {
				{player addMagazine _x;} count _temp_removed_array;

				if (count _temp_BP_removed_array > 0) then {
					{(unitBackpack player) addMagazineCargoGlobal _x} count _temp_BP_removed_array;
				};
				format[localize 'STR_BUILD_UPGRADE_ITEM_REMOVAL_FAILED',_removed_total,_tobe_removed_total] call DZE_fnc_rollingMessages;	// Missing Parts after first check Item: %1 / %2
			};
		} else {
			local _textMissing = getText (configFile >> 'CfgMagazines' >> _missing >> 'displayName');
			format[localize 'STR_BUILD_UPGRADE_MISSING_ITEMS',_missingQty,_textMissing] call DZE_fnc_rollingMessages;			// Missing %1 more of %2

			systemChat localize 'STR_BUILD_UPGRADE_NEEDED_ITEMS_LABEL';							// Needed items:

			if (count _requirements > 0) then {
				local _textRequirement = '';
				{
					_textRequirement = getText (configFile >> 'CfgMagazines' >> (_x select 0) >> 'displayName');
					systemChat format['%2x %1',_textRequirement,_x select 1];
				} count _requirements;
			};
		};
	};
} else {
	localize 'STR_BUILD_UPGRADE_NOT_AVAILABLE' call DZE_fnc_rollingMessages;	// No upgrades are available
};

dayz_actionInProgress = false;
s_player_upgrade_build = -1;
