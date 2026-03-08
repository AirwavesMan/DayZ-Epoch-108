// As of Epoch 1.0.8, this function should not be used
local _pos = getPosATL (_this select 0);
if (surfaceIsWater _pos) then {_pos = ATLToASL _pos;};
_pos
