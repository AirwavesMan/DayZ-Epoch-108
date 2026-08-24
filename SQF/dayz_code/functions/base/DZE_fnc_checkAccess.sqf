///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_checkAccess
//
//	Original concept by: RimBlock
//	Extended by: Bruce-LXXVI
//
//	Description:	Checks object ownership, tagged friendship, base access and door access.
//	Groups:		Base
//
//	Syntax:		[player, target] call DZE_fnc_checkAccess
//
//	Parameters:	player: Object - Player requesting access
//			target: Object - Player or object whose access permissions are checked
//
//	Return Value:	Array - [targetOwner, taggedFriend, baseFriend, baseAdmin, doorFriend,
//			doorAdmin, targetType]
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_DZE_FNC_CHECK_ACCESS

#ifdef DEBUG_DZE_FNC_CHECK_ACCESS
	diag_log format ['[Client Debug]: [DZE_fnc_checkAccess]: Function called with argumentes: %1',_this];
#endif

local _player = _this select 0;
local _target = if (count _this > 1) then {_this select 1} else {objNull};

local _emptyResult = [false,false,false,false,false,false,''];

if (typeName _player != 'OBJECT' || {isNull _player} || {typeName _target != 'OBJECT'} || {isNull _target}) exitWith {
	#ifdef DEBUG_DZE_FNC_CHECK_ACCESS
		diag_log format ['[Client Debug]: [DZE_fnc_checkAccess]: Warning: Invalid player or target object: %1',_this];
	#endif
	_emptyResult
};

local _isOwner = false;
local _isFriendly = false;
local _isBaseFriend = false;
local _isBaseAdmin = false;
local _isDoorFriend = false;
local _isDoorAdmin = false;
local _targetType = ['GENERIC','DOOR'] select (typeOf _target in DZE_DoorsLocked);

local _playerUID = getPlayerUID _player;
local _targetOwnerUID = if (isPlayer _target) then {getPlayerUID _target} else {_target getVariable ['ownerPUID','0']};

_isOwner = _playerUID == _targetOwnerUID;

local _friendlyTo = _player getVariable ['friendlyTo',[]];
if (typeName _friendlyTo == 'ARRAY') then {
	_isFriendly = _targetOwnerUID in _friendlyTo;
};

local _nearestBase = objNull;

if (typeOf _target == DZE_Territory_Marker) then {
	_nearestBase = _target;
} else {
	local _baseCheck = [_player,false] call DZE_fnc_findBases;

	if (count _baseCheck > 2 && {(_baseCheck select 1) > 0}) then {
		_nearestBase = _baseCheck select 2;
	};
};

if (!isNull _nearestBase) then {
	local _baseFriends = _nearestBase getVariable ['baseFriends',[]];

	if (typeName _baseFriends == 'ARRAY') then {
		{
			if (typeName _x == 'ARRAY' && {count _x > 0} && {(_x select 0) == _playerUID}) exitWith {
				_isBaseFriend = true;
			};
		} forEach _baseFriends;
	};

	_isBaseAdmin = _playerUID in DZE_baseManagementAdmins;
};

if (_targetType == 'DOOR') then {
	_isDoorFriend = _isOwner;

	if (!_isDoorFriend) then {
		local _doorFriends = _target getVariable ['doorFriends',[]];

		if (typeName _doorFriends == 'ARRAY') then {
			{
				if (typeName _x == 'ARRAY' && {count _x > 0} && {(_x select 0) == _playerUID}) exitWith {
					_isDoorFriend = true;
				};
			} forEach _doorFriends;
		};
	};

	_isDoorAdmin = _playerUID in DZE_DoorManagementAdmins;
};

local _result = [_isOwner,_isFriendly,_isBaseFriend,_isBaseAdmin,_isDoorFriend,_isDoorAdmin,_targetType];

#ifdef DEBUG_DZE_FNC_CHECK_ACCESS
	diag_log format ['[Client Debug]: [DZE_fnc_checkAccess]: Access result: %1',_result];
#endif

_result
