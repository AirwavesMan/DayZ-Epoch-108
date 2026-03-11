#ifndef p0

#define p0                      _this select 0
#define p1                      _this select 1
#define p2                      _this select 2
#define p3                      _this select 3
#define p4                      _this select 4
#define p5                      _this select 5
#define p6                      _this select 6
#define p7                      _this select 7
#define p8                      _this select 8
#define p9                      _this select 9
#define p10                     _this select 10

///////////////////////////////////////////////////////////////////////////////////////////////////

// be aware this next group can and will interfere with "\ca\editor\Data\Scripts\dikCodes.h"

#define x0                      _x select 0
#define x1                      _x select 1
#define x2                      _x select 2
#define x3                      _x select 3
#define x4                      _x select 4
#define x5                      _x select 5
#define x6                      _x select 6
#define x7                      _x select 7
#define x8                      _x select 8
#define x9                      _x select 9
#define x10                     _x select 10

///////////////////////////////////////////////////////////////////////////////////////////////////

#define ifnType(i,t,v)          [v, _this select i] select (typeName (_this select i) == typeName t)
#define param(i,b)              if (count _this > i) then {_this select i} else {b}

// for use with object/position params
#define ifType(v,t,c)           if (typeName v == t) then {v = c v}

// createBackpack params
#define RANDOM_DIR              floor random 360
#define ALIGN_UP                true
#define ALIGN_TERRAIN           false
#define FORMAT_ASL              true
#define FORMAT_AGL              false
#define DO_REVEAL               true
#define NO_REVEAL               false

/**
#define ifNil(a,b)              if (isNil #a) then {b} else {a}
#define ifNull(a,b)             [a,b] select (isNull (a))
#define ifnArr(a,b)             [a,b] select (typeName (a) != typeName [])
#define ifnNum(a,b)             [a,b] select (typeName (a) != typeName 0)
#define ifnStr(a,b)             [a,b] select (typeName (a) != typeName '')
#define notIn(val,arr)          !(val in arr)


// for use with Object or PositionAGL commands (avoids delay)
#define objectToAGL(p)          if (typeName p == typeName objNull) then {p = getPosAGL(p)}
#define ifObjectAGL(i,p)        _this select i; if (typeName p == typeName objNull) then {p = getPosAGL(p)}

// for use inside call {};
///#define ifType(v,t,c)           if (typeName v == typeName t) exitWith {v = c v}
#define ifObj(var,com)          ifType(var,objNull,com)
#define ifStr(var,com)          ifType(var,'',com)

///#define RETURN_NOTHING          objNull
**/
#endif
