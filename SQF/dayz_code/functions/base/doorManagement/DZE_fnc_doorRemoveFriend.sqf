///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_doorRemoveFriend
//
//	Description:	Removes the selected player from the active door's friend list.
//	Groups:		Base, Door Management
//
//	Syntax:		listIndex call DZE_fnc_doorRemoveFriend
//
//	Parameters:	listIndex: Number - Selected index in the door-friend list
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_DOOR_REMOVE_FRIEND

#ifdef DEBUG_DZE_FNC_DOOR_REMOVE_FRIEND
	diag_log format ['[Client Debug]: [DZE_fnc_doorRemoveFriend]: Function called with argumentes: %1',_this];
#endif

local _indexPos = _this;

if (typeName _indexPos != 'SCALAR' || {_indexPos < 0}) exitWith {};
if (isNil 'DZE_currentDoor' || {isNull DZE_currentDoor}) exitWith {};

local _friends = DZE_currentDoor getVariable ['doorFriends',[]];

if (typeName _friends != 'ARRAY' || {_indexPos >= count _friends}) exitWith {};

local _toRemove = _friends select _indexPos;
if (typeName _toRemove != 'ARRAY' || {count _toRemove == 0}) exitWith {};

local _friendUID = _toRemove select 0;
local _ownerPUID = DZE_currentDoor getVariable ['ownerPUID','0'];

if (_indexPos == 0) exitWith {
	systemChat localize 'STR_EPOCH_DOORMANAGEMENT_CANT_REMOVE';
};

local _index = 1;

{
	//	Found UID to remove
	if (_foreachIndex != 0 && _x select 0 == _friendUID) exitwith {
		_index = _foreachIndex;
	};
} forEach _friends;

PVDZE_changeFriends = [netID player, netID DZE_currentDoor,_index,dayz_authKey];
publicVariableServer 'PVDZE_changeFriends';

#ifdef DEBUG_DZE_FNC_DOOR_REMOVE_FRIEND
	diag_log format ['[Client Debug]: [DZE_fnc_doorRemoveFriend]: Removed player %1 from door %2',_friendUID,DZE_currentDoor];
#endif