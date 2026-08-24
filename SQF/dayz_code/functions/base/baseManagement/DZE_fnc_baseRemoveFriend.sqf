///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_baseRemoveFriend
//
//	Description:	Removes the selected player from the active base's friend list.
//	Groups:		Base, Base Management
//
//	Syntax:		listIndex call DZE_fnc_baseRemoveFriend
//
//	Parameters:	listIndex: Number - Selected index in the base-friend list
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_BASE_REMOVE_FRIEND

#ifdef DEBUG_DZE_FNC_BASE_REMOVE_FRIEND
	diag_log format ['[Client Debug]: [DZE_fnc_baseRemoveFriend]: Function called with argumentes: %1',_this];
#endif

local _index = _this;

if (typeName _index != 'SCALAR' || {_index < 0}) exitWith {};
if (isNil 'DZE_currentBase' || {isNull DZE_currentBase}) exitWith {};

local _friends = DZE_currentBase getVariable ['baseFriends',[]];

if (typeName _friends != 'ARRAY' || {_index >= count _friends}) exitWith {};

local _toRemove = _friends select _index;
if (typeName _toRemove != 'ARRAY' || {count _toRemove == 0}) exitWith {};

local _friendUID = _toRemove select 0;

if (_index == 0) exitWith {
	systemChat localize 'STR_BASE_MANAGEMENT_OWNER_REMOVE_DENIED';
};

PVDZE_changeFriends = [netID player,netID DZE_currentBase,_index,dayz_authKey];
publicVariableServer 'PVDZE_changeFriends';

#ifdef DEBUG_DZE_FNC_BASE_REMOVE_FRIEND
	diag_log format ['[Client Debug]: [DZE_fnc_baseRemoveFriend]: Removed player %1 from base %2',_friendUID,DZE_currentBase];
#endif
