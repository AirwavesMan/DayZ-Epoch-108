private "_crew";

_crew = [];
{
	_crew set [count _crew,_x call DZE_fnc_getNamePlayer];
} count crew _this;

format ["%1%2",typeOf _this,_crew]
