local _position = _this;
local _nearestLocation = [_position,1000] call DZE_fnc_getNearestLocation;

format["%1 [%2]",_nearestLocation,mapGridPosition _position];