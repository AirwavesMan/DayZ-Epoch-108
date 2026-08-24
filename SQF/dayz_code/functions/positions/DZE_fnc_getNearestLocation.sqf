local _nearestCity = nearestLocations [_this select 0, ["NameCityCapital","NameCity","NameVillage","NameLocal"], _this select 1];

["Wilderness",text (_nearestCity select 0)] select (count _nearestCity > 0);