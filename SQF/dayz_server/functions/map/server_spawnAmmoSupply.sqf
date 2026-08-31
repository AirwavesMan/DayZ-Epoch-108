/*
	Spawns several random "DZE_Supply_Crate" across map.
	Lootable by destroying and then opening with crowbar.
	Currently outputs vehicle ammo defined in DZE_Supply_Crate_Ruin CfgVehicles class
*/

private ["_position","_veh","_istoomany"];
// do not make _roadList or _buildingList private in this function

_position = _roadList call BIS_fnc_selectRandom;
_position = _position modelToWorld [0,0,0];
_position = [_position,5,20,5,0,2000,0] call BIS_fnc_findSafePos;

if ((count _position) == 2) then {
	_istoomany = _position nearObjects ["All",5];
	if ((count _istoomany) > 0) exitWith {};
	
	//_veh = createVehicle ['DZE_Supply_Crate',_position, [], 0, 'CAN_COLLIDE'];
	_veh = 'DZE_Supply_Crate' createVehicle [0,0,0];
	_veh enableSimulation false;
	_veh setDir round(random 360);
	_veh setPos _position;
};
