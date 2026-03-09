///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_revealObject
//
//	Description:	Reveals an object to all nearby players.
//	Groups:		Objects
//
//	Syntax:		[object, position] spawn DZE_fnc_revealObject
//
//	Parameters:	object: Object
//			position: Array format PositionASL
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
//	Note:		Use this for detecting newly created targets like dropped loot or base-building objects.
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\defines.hpp"

local _object	= p0;
local _strASL	= str (p1);

if (!isNull _object) then {

	local _t = diag_tickTime + 2;	// 2 second timeout

	waitUntil {str visiblePositionASL _object == _strASL || {diag_tickTime > _t}};

	{if (isPlayer _x) then {_x reveal _object}} count (_object nearEntities ['Civilian', 50]);
};
