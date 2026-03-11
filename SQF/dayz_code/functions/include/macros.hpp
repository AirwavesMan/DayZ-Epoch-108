// debug

///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef RT_SUCCESS

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					general
//
///////////////////////////////////////////////////////////////////////////////////////////////////



// control
#define RT_SUCCESS                              true
#define RT_FAILURE                              false


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					actions
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					animations
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define climbOver(params)                       params spawn DZR_fnc_climbOver


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					arrays
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define append(a1,a2)                           [a1,a2] call DZE_fnc_append

// extensions
#define addArray(a,v)                           a set [count a, v]
#define addX(a,v)                               a set [0, (a select 0) + v]
#define addY(a,v)                               a set [1, (a select 1) + v]
#define addZ(a,v)                               a set [2, (a select 2) + v]
#define addN(a,n,v)                             a set [n, (a select n) + v] // (array, Nth element, value)

#define subX(a,v)                               a set [0, (a select 0) - v]
#define subY(a,v)                               a set [1, (a select 1) - v]
#define subZ(a,v)                               a set [2, (a select 2) - v]

#define arraySwap(arr,tmp,i1,i2)                tmp = arr select i1; arr set [i1, arr select i2]; arr set [i2, tmp]

#define getX(a)                                 a select 0
#define getY(a)                                 a select 1
#define getZ(a)                                 a select 2
#define getN(a,n)                               a select n

#define setX(a,v)                               a set [0, v]
#define setY(a,v)                               a set [1, v]
#define setZ(a,v)                               a set [2, v]
#define setN(a,n,v)                             a set [n, v] // (array, Nth element, value)

#define selectRandom(arr)                       arr select floor random count arr
#define stateArray(unit)                        toArray (animationState unit)

#define isEmpty(a)                              count a == 0
#define notEmpty(a)                             count a > 0

#define v1(p1)                                  [p1]
#define v2(p1,p2)                               [p1,p2]
#define v3(p1,p2,p3)                            [p1,p2,p3]
#define v4(p1,p2,p3,p4)                         [p1,p2,p3,p4]
#define v5(p1,p2,p3,p4,p5)                      [p1,p2,p3,p4,p5]
#define v6(p1,p2,p3,p4,p5,p6)                   [p1,p2,p3,p4,p5,p6]
#define v7(p1,p2,p3,p4,p5,p6,p7)                [p1,p2,p3,p4,p5,p6,p7]
#define v8(p1,p2,p3,p4,p5,p6,p7,p8)             [p1,p2,p3,p4,p5,p6,p7,p8]
#define v9(p1,p2,p3,p4,p5,p6,p7,p8,p9)          [p1,p2,p3,p4,p5,p6,p7,p8,p9]
#define v10(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10)     [p1,p2,p3,p4,p5,p6,p7,p8,p9,p10]


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					cameras
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define cameraDirection                         unitVector(cam_posASL1,cam_posASL2)

// extensions
#define FIRST_PERSON                            cameraView == 'INTERNAL'
#define THIRD_PERSON                            cameraView == 'EXTERNAL'


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					containers
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					configs
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					debug
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions
#define schedLog(s)                             diag_log text format ['%1: %2', diag_tickTime, s]
#define diag_text                               diag_log text


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					detection
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define detectClimbable(obj,cls)                [obj,cls] call DZR_fnc_detectClimbable
///#define nearActors(params)                      params call DZR_fnc_detectActor

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					environment
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions
#define isDayTime                               sunOrMoon > 0.5
#define isNighttime                             sunOrMoon <= 0.5


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					geometry
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define inAngleSector(src,dir,wid,tar)          [src,dir,wid,tar] call DZE_fnc_inAngleSector

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					gui
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define displayText(t,x,y,l)                    [t,[x,y],l] spawn DZR_fnc_displayText

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					hashmaps
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define createHashMap                           call DZR_fnc_createHashMap
#define createHashMapFromArray(a)               a call DZR_fnc_createHashMapFromArray
#define setHashMap(h,k,v)                       [h,k,v] call DZR_fnc_setHashMap
#define values(h)                               h call DZR_fnc_values

// extensions
#define getMissionVar                           missionNamespace getVariable
#define setMissionVar                           missionNamespace setVariable
#define get(h,k)                                h getVariable k
#define getOrDefault(h,k,d)                     h getVariable [k,d]
#define keys(h)                                 h getVariable ''


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					inventory
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					locations
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					loot
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					math
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					numbers
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions
#define isBetween(num,mn,mx)                    num >= mn && {num <= mx}
#define ceil1(v)                                ceil (v * 10) / 10
#define ceil2(v)                                ceil (v * 100) / 100
#define ceil3(v)                                ceil (v * 1000) / 1000
#define clamp(num,mn,mx)                        (num) max (mn) min (mx)
#define randomChance(n)                         n > random 1
#define randomDeviation(n,d)                    n + (d - random (2 * d))
#define round1(v)                               [v,1] call BIS_fnc_cutDecimals
#define round2(v)                               [v,2] call BIS_fnc_cutDecimals
#define round3(v)                               [v,3] call BIS_fnc_cutDecimals
#define roundN(v,n)                             [v,n] call BIS_fnc_cutDecimals


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					objects
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define revealObject(obj,pos)                   [obj,pos] spawn DZE_fnc_revealObject

// extensions
#define createVehicleOrigin(cls)                cls createVehicle ORIGIN


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					player
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions
#define setGodmode(bool)                        player allowDamage !bool
#define setGodmodeON                            player allowDamage false
#define setGodmodeOFF                           player allowDamage true

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					positions
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define AGLToASL(pos)                           pos call DZE_fnc_AGLToASL

// extensions
#define getPosAGL(obj)                          obj modelToWorld ORIGIN
///#define getPosWorld(obj)                        [obj] call DZR_fnc_modelCenterWorld
#define getTerrainDiff(v1,v2)                   getTerrainHeightASL v1 - getTerrainHeightASL v2
#define isTerrain(pos)                          !surfaceIsWater pos
#define isWater(pos)                            surfaceIsWater pos
#define modelToScreen(obj,pos)                  worldToScreen (obj modelToWorld pos)
#define posAGL(obj,pos)                         obj modelToWorld pos
#define posRel(obj,pos)                         obj worldToModel pos
#define setPosAGL(obj,pos)                      [obj,pos] call DZE_fnc_setPosAGL


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					strings
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					time
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions
#define hour                                    floor dayTime


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					UI
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions
#define COLOR_AGRN                              "color='#67aa49'" // Arma green
#define COLOR_GRN                               "color='#00ff00'"
#define COLOR_ORA                               "color='#ff8800'"
#define COLOR_RED                               "color='#ff0000'"
#define COLOR_YEL                               "color='#ffff00'"
#define COLOR_ARRAY                             [COLOR_GRN,COLOR_YEL,COLOR_ORA,COLOR_RED]
#define isMicActive                             ctrlShown (findDisplay DISPLAY_VOICE_CHAT displayCtrl 101)
#define UI_TEXT(col,txt)                        format ["<t align='center' font='Zeppelin32' size='0.6' shadow='2' %1>%2</t>", col, txt]

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					variables
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					vectors
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define vectorCrossProduct(v1,v2)               [v1,v2] call DZE_fnc_vectorCrossProduct
#define vectorDistance(v1,v2)                   [v1,v2] call DZE_fnc_vectorDistance
#define vectorMagnitude(v)                      v call DZE_fnc_vectorMagnitude

// extensions
#define getDirToVectorDir(dir)                  [sin dir, cos dir, 0]


// v2

// extensions


// v3
#define v3Add(v1,v2)                            [v1,v2] call DZE_fnc_v3Add
#define v3Diff(v1,v2)                           [v1,v2] call DZE_fnc_v3Diff
#define v3Divide(v,s)                           [v,s] call DZE_fnc_v3Divide
#define v3Multiply(v,s)                         [v,s] call DZE_fnc_v3Multiply

// extensions
#define v3Inverse(v)                            [-(v select 0),-(v select 1),-(v select 2)]

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					vehicles
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					weapons
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					zombies
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					composite macros
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif

/**
// debug
#define ASSERT_FUNCTION_DATATYPES               1 // comment out this line to disable function datatype assertion

#ifdef ASSERT_FUNCTION_DATATYPES
	#define ASSERT_DATATYPES(n)             if !([__FILE__,_this,n] call DZR_fnc_assertDatatype) exitWith {}
	#define ASSERT_DATATYPE(n)              if !([__FILE__,[_this],n] call DZR_fnc_assertDatatype) exitWith {}
#else
	#define ASSERT_DATATYPES(n)
	#define ASSERT_DATATYPE(n)
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef RT_SUCCESS

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					general
//
///////////////////////////////////////////////////////////////////////////////////////////////////



// control
#define RT_SUCCESS                              true
#define RT_FAILURE                              false


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					actions
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define playActionCrouch                        call DZR_fnc_playActionCrouch
#define playActionGear                          call DZR_fnc_playActionGear
#define playActionPutDown                       call DZR_fnc_playActionPutDown
#define raiseWeapon                             call DZR_fnc_playActionRaiseWeapon
#define removeAllActions                        {p_vehicle removeAction (DZR_actions select _x); DZR_actions set [_x, ACTION_REMOVED]} count DZR_actionsIdx
#define removeAllActionsNT                      {p_vehicle removeAction (DZR_actions select _x); DZR_actions set [_x, ACTION_REMOVED]} count DZR_actionsNTIdx



///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					animations
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define climbOver(params)                       params spawn DZR_fnc_climbOver


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					arrays
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define apply(a,c)                              [a,c] call DZR_fnc_apply
#define arrayShuffle(a)                         a call DZR_fnc_arrayShuffle
///#define deleteAt(a,i)                           [a,i] call DZR_fnc_deleteAt
#define deleteAt(params)                        params call DZR_fnc_deleteAt
#define deleteRange(a,s,c)                      [a,s,c] call DZR_fnc_deleteRange
#define endSelect(a,l)                          [a,l] call DZR_fnc_endSelect
#define pushback(a,e)                           [a,e] call DZR_fnc_pushback
#define sortNum(a)                              a call DZR_fnc_sortNum
#define subSelect(a,s,e)                        [a,s,e] call DZR_fnc_subSelect

// extensions
#define addArray(a,v)                           a set [count a, v]
#define addX(a,v)                               a set [0, (a select 0) + v]
#define addY(a,v)                               a set [1, (a select 1) + v]
#define addZ(a,v)                               a set [2, (a select 2) + v]
#define addN(a,n,v)                             a set [n, (a select n) + v] // (array, Nth element, value)

#define subX(a,v)                               a set [0, (a select 0) - v]
#define subY(a,v)                               a set [1, (a select 1) - v]
#define subZ(a,v)                               a set [2, (a select 2) - v]

#define arraySwap(arr,tmp,i1,i2)                tmp = arr select i1; arr set [i1, arr select i2]; arr set [i2, tmp]

#define getX(a)                                 a select 0
#define getY(a)                                 a select 1
#define getZ(a)                                 a select 2
#define getN(a,n)                               a select n

#define setX(a,v)                               a set [0, v]
#define setY(a,v)                               a set [1, v]
#define setZ(a,v)                               a set [2, v]
#define setN(a,n,v)                             a set [n, v] // (array, Nth element, value)

#define selectRandom(arr)                       arr select floor random count arr
#define stateArray(unit)                        toArray (animationState unit)

#define isEmpty(a)                              count a == 0
#define notEmpty(a)                             count a > 0

#define v1(p1)                                  [p1]
#define v2(p1,p2)                               [p1,p2]
#define v3(p1,p2,p3)                            [p1,p2,p3]
#define v4(p1,p2,p3,p4)                         [p1,p2,p3,p4]
#define v5(p1,p2,p3,p4,p5)                      [p1,p2,p3,p4,p5]
#define v6(p1,p2,p3,p4,p5,p6)                   [p1,p2,p3,p4,p5,p6]
#define v7(p1,p2,p3,p4,p5,p6,p7)                [p1,p2,p3,p4,p5,p6,p7]
#define v8(p1,p2,p3,p4,p5,p6,p7,p8)             [p1,p2,p3,p4,p5,p6,p7,p8]
#define v9(p1,p2,p3,p4,p5,p6,p7,p8,p9)          [p1,p2,p3,p4,p5,p6,p7,p8,p9]
#define v10(p1,p2,p3,p4,p5,p6,p7,p8,p9,p10)     [p1,p2,p3,p4,p5,p6,p7,p8,p9,p10]


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					cameras
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define cameraDirection                         unitVector(cam_posASL1,cam_posASL2)

// extensions
#define FIRST_PERSON                            cameraView == 'INTERNAL'
#define THIRD_PERSON                            cameraView == 'EXTERNAL'


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					containers
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					configs
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
///#define ammoName(cls)                           cls call DZR_fnc_ammoName
#define cfgArray(cfg,cls,mem)                   [cfg,cls,mem] call DZR_fnc_cfgArray
#define cfgClass(root,pnt,cls)                  [root,pnt,cls] call DZR_fnc_cfgClass
#define cfgNumber(cfg,cls,mem)                  [cfg,cls,mem] call DZR_fnc_cfgNumber
#define cfgText(cfg,cls,mem)                    [cfg,cls,mem] call DZR_fnc_cfgText
///#define isBoolean(cfg)                          cfg call DZR_fnc_isBoolean
///#define magazineName(cls)                       cls call DZR_fnc_magazineName
#define returnParents(cfg,name)                 [cfg,name] call DZR_fnc_returnParents
///#define vehicleName(cls)                        cls call DZR_fnc_vehicleName
///#define weaponName(cls)                         cls call DZR_fnc_weaponName

// extensions
#define configOf(obj)                           configFile >> 'CfgVehicles' >> typeOf obj
#define getGlobal(var)                          call compile getText (var)
#define isBackpack(cls)                         cls isKindOf 'Bag_Base_EP1'
#define isBoolean(cfg)                          isNumber (cfg) && {getNumber (cfg) in [0,1]}
#define isCommutable(cls)                       getNumber (configFile >> 'CfgVehicles' >> cls >> 'commutable') == 1
#define isTool(cls)                             [['CfgWeapons',cls],['Tool']] call DZR_fnc_isKindOf
#define ammoName(cls)                           getText (configFile >> 'CfgAmmo' >> cls >> 'displayName')
#define magazineName(cls)                       getText (configFile >> 'CfgMagazines' >> cls >> 'displayName')
#define vehicleName(cls)                        getText (configFile >> 'CfgVehicles' >> cls >> 'displayName')
#define vehicleNameBase(cls)                    getText (configFile >> 'CfgVehicles' >> cls >> 'displayNameBase')
#define weaponName(cls)                         getText (configFile >> 'CfgWeapons' >> cls >> 'displayName')

#define magName(cls)                            magazineName(cls)
#define vehName(cls)                            vehicleName(cls)
#define wpnName(cls)                            weaponName(cls)

///#define magBase(cls)                            getText (configFile >> 'CfgMagazines' >> cls >> 'magazine')
///#define wpnBase(cls)                            getText (configFile >> 'CfgWeapons' >> cls >> 'weapon')

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					debug
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define isPond(obj)                             obj call DZR_fnc_isPond

// extensions
#define schedLog(s)                             diag_log text format ['%1: %2', diag_tickTime, s]
#define diag_text                               diag_log text


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					detection
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define detectClimbable(obj,cls)                [obj,cls] call DZR_fnc_detectClimbable
#define nearActors(params)                      params call DZR_fnc_detectActor

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					environment
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions
#define isDayTime                               sunOrMoon > 0.5
#define isNighttime                             sunOrMoon <= 0.5


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					geometry
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define boundingBoxSize(obj)                    obj call DZR_fnc_boundingBoxSize
#define isInFrontOf(params)                     params call DZR_fnc_isInFrontOf
#define relPos(pos,dis,dir)                     [pos,dis,dir] call DZR_fnc_relPos

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					gui
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define displayText(t,x,y,l)                    [t,[x,y],l] spawn DZR_fnc_displayText

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					hashmaps
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define createHashMap                           call DZR_fnc_createHashMap
#define createHashMapFromArray(a)               a call DZR_fnc_createHashMapFromArray
#define setHashMap(h,k,v)                       [h,k,v] call DZR_fnc_setHashMap
#define values(h)                               h call DZR_fnc_values

// extensions
#define getMissionVar                           missionNamespace getVariable
#define setMissionVar                           missionNamespace setVariable
#define get(h,k)                                h getVariable k
#define getOrDefault(h,k,d)                     h getVariable [k,d]
#define keys(h)                                 h getVariable ''


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					inventory
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define freeBackpackSlots                       call DZR_fnc_freeBackpackSlots
#define getMaxBackpacks(cls)                    cls call DZR_fnc_getMaxBackpacks
#define getMaxMagazines(cls)                    cls call DZR_fnc_getMaxMagazines
#define getMaxWeapons(cls)                      cls call DZR_fnc_getMaxWeapons
#define hasTools(a)                             a call DZR_fnc_hasTools
#define ihave_EMPTY_WATERBOTTLE                 call DZR_fnc_hasEmptyWaterBottle
#define ihave_KNIFE                             call DZR_fnc_hasKnife
#define ihave_MATCHES                           call DZR_fnc_hasMatches
#define ihave_SHOVEL                            call DZR_fnc_hasShovel
#define ihave_TOOLBOX                           call DZR_fnc_hasToolbox
/////////////////////////////////////////////////
/// **** TODO **** RESOLVE THIS
#define invSlotsEmpty(unit,idx)                 [unit,idx] call DZR_fnc_invSlotsEmpty
#define invSpace(slot)                          [player,slot] call DZR_fnc_invSlotsEmpty
/////////////////////////////////////////////////
#define magSize(mag)                            mag call DZR_fnc_magSize
#define magType(mag)                            mag call DZR_fnc_magType
#define setAmmo(n)                              n call DZR_fnc_setAmmo
#define tools                                   call DZR_fnc_tools
#define weaponType(wpn)                         wpn call DZR_fnc_weaponType

// extensions
#define getRootConfig(cls)                      DZR_SYSTEM_VARS getVariable [cls, 'CfgWeapons'] /// **** TODO **** default should test multiple root configs
#define ihave_CROWBAR                           'ItemCrowbar' in p_items || {'MeleeCrowbar' in [p_primaryWeapon, dayz_onBack]}
#define ihave_FISHING_POLE                      p_currentWeapon == 'MeleeFishingPole'
#define ihave_PICKAXE                           'ItemPickaxe' in p_items
#define ihave_WOODPILE                          'PartWoodPile' in p_magazines
#define itemToMelee(cls)                        getText (configFile >> 'CfgWeapons' >> cls >> 'swappedItem')
#define meleeToItem(cls)                        itemToMelee(cls)


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					locations
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define nearestLocationName(pos,rad)            [pos,rad] call DZR_fnc_nearestLocationName

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					loot
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define dropItem(t,i,c)                         [t,i,c] call DZR_fnc_dropItem
#define populateLootPile(obj,mag,weap)          [obj,mag,weap] call DZR_fnc_populateLootPile

// extensions
#define isAllowed(cls)                          !isClass (missionConfigFile >> 'CfgBlockedItems' >> cls)
#define isBlocked(cls)                           isClass (missionConfigFile >> 'CfgBlockedItems' >> cls)


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					math
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define log2(n)                                 n call DZR_fnc_log2
#define XOR(bool1,bool2)                        [bool1,bool2] call DZR_fnc_XOR

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					numbers
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define average(array)                          array call DZR_fnc_average
///#define clamp(num,min,max)                      [num,min,max] call DZR_fnc_clamp
///#define randomChance(n)                         n call DZR_fnc_randomChance
#define randomRange(min,max)                    [min,max] call DZR_fnc_randomRange

// extensions
#define isBetween(num,mn,mx)                    num >= mn && {num <= mx}
#define ceil1(v)                                ceil (v * 10) / 10
#define ceil2(v)                                ceil (v * 100) / 100
#define ceil3(v)                                ceil (v * 1000) / 1000
#define clamp(num,mn,mx)                        (num) max (mn) min (mx)
#define randomChance(n)                         n > random 1
#define randomDeviation(n,d)                    n + (d - random (2 * d))
#define round1(v)                               [v,1] call BIS_fnc_cutDecimals
#define round2(v)                               [v,2] call BIS_fnc_cutDecimals
#define round3(v)                               [v,3] call BIS_fnc_cutDecimals
#define roundN(v,n)                             [v,n] call BIS_fnc_cutDecimals


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					objects
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define alignTo(obj1,obj2)                      [obj1,obj2] call DZR_fnc_alignTo
#define attachFlare(obj)                        obj call DZR_fnc_attachFlare
#define attachToRelative(obj1,obj2)             [obj1,obj2] call DZR_fnc_attachToRelative
#define createBackpack(cls,pos,dir,up,asl,rev)  [cls,pos,dir,up,asl,rev] call DZR_fnc_createBackpack
#define createObject(cls,pos,dir,up,asl,rev)    [cls,pos,dir,up,asl,rev] call DZR_fnc_createObject
#define detectFence(obj)                        !isNull (obj call DZR_fnc_detectFence)  // returns boolean
#define getFence(obj)                           obj call DZR_fnc_detectFence            // returns object
#define getModelName(obj)                       obj call DZR_fnc_getModelName
#define getModelNameTerrain(obj)                obj call DZR_fnc_getModelNameTerrain
///#define hasNOID(obj)                            obj call DZR_fnc_hasNOID
///#define hideObjects(a,h)                        [a,h] call DZR_fnc_hideObjects
///#define isBuried(obj)                           obj call DZR_fnc_isBuried
///#define isMapObject(obj)                        obj call DZR_fnc_isMapObject
#define monitorFlare(obj)                       obj spawn DZR_fnc_monitorFlare
#define nearestBuildings(pos,rad,max)           [pos,rad,max] call DZR_fnc_nearestBuildings

// extensions
#define box0(obj)                               boundingBox obj select 0
#define box1(obj)                               boundingBox obj select 1
#define getClass(s)                             GET_SYSTEM_VAR(s,'')
#define hasNOID(obj)                            toArray str obj select 0 == CHAR_UPPERCASE_N
///#define hasNOID(obj)                            netId obj == '1:0' // takes 10x longer!
#define hideObjects(a,h)                        {_x hideObject h} count a
#define hide(a)                                 hideObjects(a,true)
#define isAnimDone(obj)                         obj getVariable ['AnimDone', false]
#define isBuilding(cls)                         cls isKindOf 'Building'
#define isBuried(obj)                           obj getVariable ['buried', false]
#define notBuried(obj)                          !(obj getVariable ['buried', false])
#define isClimbable(cls)                        getNumber (configFile >> 'CfgVehicles' >> cls >> 'isClimbable') == 1
#define isDEAD(unit)                            !alive unit
#define isHouse(cls)                            cls isKindOf 'House'
///#define isLootpile(obj)                         obj isKindOf 'WeaponHolder'
#define isLootpile(obj)                         obj isKindOf 'WeaponHolder' || {obj isKindOf 'WeaponHolderBase'}
#define isMapObject(obj)                        toArray netId obj select 0 == CHAR_ONE
#define isStorage(cls)                          getMaxMagazines(cls) > 0
#define isUpright(obj)                          vectorUp obj select 2 > cos 5 // max 5° slant for climbable
#define orientToWorld(obj)                      obj setVectorDirAndUp [VECTOR_DIR, VECTOR_UP]
#define unhide(a)                               hideObjects(a,false)


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					player
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define modifyHumanity(n)                       n call DZR_fnc_modifyHumanity

// extensions
#define setGodmode(bool)                        player allowDamage !bool
#define setGodmodeON                            player allowDamage false
#define setGodmodeOFF                           player allowDamage true

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					positions
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define ASLToAGL(pos)                           pos call DZR_fnc_ASLToAGL
///#define getPosAGL(obj)                          obj call DZR_fnc_getPosAGL
///#define getPosWorld(obj)                        obj call DZR_fnc_getPosWorld
#define getQuadrant(p)                          p call DZR_fnc_getQuadrant
#define modelCenterWorld(params)                params call DZR_fnc_modelCenterWorld
///#define modelToScreen(obj,pos)                  [obj,pos] call DZR_fnc_modelToScreen
#define modelToWorld2D(obj,pos)                 [obj,pos] call DZR_fnc_modelToWorld2D
#define modelToWorldWorld(obj,pos)              [obj,pos] call DZR_fnc_modelToWorldWorld
#define nearestRoad(params)                     params call DZR_fnc_nearestRoad
#define setPosWorld(obj,pos)                    [obj,pos] call DZR_fnc_setPosWorld

// extensions
#define ASLToATLZ(pos)                          (ASLToATL pos) select 2
///#define getNOIDAGL(pnt,obj)                     posAGL(pnt, aimPos obj)
///#define getNOIDASL(pnt,obj)                     AGLToASL(getNOIDAGL(pnt,obj))
#define getPosAGL(obj)                          obj modelToWorld ORIGIN
#define getPosWorld(obj)                        [obj] call DZR_fnc_modelCenterWorld
#define getTerrainDiff(v1,v2)                   getTerrainHeightASL v1 - getTerrainHeightASL v2
#define isTerrain(pos)                          !surfaceIsWater pos
#define isWater(pos)                            surfaceIsWater pos
#define modelToScreen(obj,pos)                  worldToScreen (obj modelToWorld pos)
#define posAGL(obj,pos)                         obj modelToWorld pos
#define posRel(obj,pos)                         obj worldToModel pos


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					strings
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define getAnimation(idx,unit)                  [idx,unit] call DZR_fnc_getAnimation
#define isAimingHandgun(unit)                   unit call DZR_fnc_isAimingHandgun
#define isAimingPrimary(unit)                   unit call DZR_fnc_isAimingPrimary
#define isCrouching(unit)                       unit call DZR_fnc_isCrouching
#define isProne(unit)                           unit call DZR_fnc_isProne
#define isStanding(unit)                        unit call DZR_fnc_isStanding
#define isUnarmed(unit)                         unit call DZR_fnc_isUnarmed
#define trim(str)                               str call DZR_fnc_trim

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					time
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions
#define hour                                    floor dayTime


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					UI
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions

// extensions
#define COLOR_AGRN                              "color='#67aa49'" // Arma green
#define COLOR_GRN                               "color='#00ff00'"
#define COLOR_ORA                               "color='#ff8800'"
#define COLOR_RED                               "color='#ff0000'"
#define COLOR_YEL                               "color='#ffff00'"
#define COLOR_ARRAY                             [COLOR_GRN,COLOR_YEL,COLOR_ORA,COLOR_RED]
#define isMicActive                             ctrlShown (findDisplay DISPLAY_VOICE_CHAT displayCtrl 101)
#define UI_TEXT(col,txt)                        format ["<t align='center' font='Zeppelin32' size='0.6' shadow='2' %1>%2</t>", col, txt]

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					variables
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define getVar(obj,idx)                         [obj,idx] call DZR_fnc_getVar

// extensions
///
///	**** TODO **** redo these using hashhMap method
///
#define getInv(obj)                             obj getVariable ['inventory',[]]
#define setInv(obj,arr)                         obj setVariable ['inventory',arr]
#define GET_SYSTEM_VAR(n,d)                     DZR_SYSTEM_VARS getVariable [n,d]
#define SET_SYSTEM_VAR(n,v)                     DZR_SYSTEM_VARS setVariable [n,v]
#define remapVar(s)                             GET_SYSTEM_VAR(s,s)

#define GET_SERVER_VAR(n,d)                     DZR_SERVER_VARS getVariable [n,d]
#define SET_SERVER_VAR(n,v)                     DZR_SERVER_VARS setVariable [n,v]

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					vectors
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define getDirBackpack(obj)                     obj call DZR_fnc_getDirBackpack
#define getRotationMatrix(obj)                  obj call DZR_fnc_getRotationMatrix
#define getVectorDirAndUp(obj)                  obj call DZR_fnc_getVectorDirAndUp
#define isEqualVector(v1,v2,t)                  [v1,v2,t] call DZR_fnc_isEqualVector
#define isPerpendicular(v1,v2)                  [v1,v2] call DZR_fnc_isPerpendicular
#define lerpVector(v1,v2,a)                     [v1,v2,a] call DZR_fnc_lerpVector
#define matrixFromEuler(p,r,y)                  [p,r,y] call DZR_fnc_matrixFromEuler
#define matrixFromEuler2(p,r,y)                 [p,r,y] call DZR_fnc_matrixFromEuler2
#define matrixInitialize(c,r)                   [c,r] call DZR_fnc_matrixInitialize
#define matrixMultiply(m1,m2)                   [m1,m2] call DZR_fnc_matrixMultiply
#define matrixMultiply2(v,m)                    [v,m] call DZR_fnc_matrixMultiply2
#define matrixToEuler(m)                        m call DZR_fnc_matrixToEuler
#define matrixTranspose(m)                      m call DZR_fnc_matrixTranspose
#define matrixTranspose3x3(m)                   m call DZR_fnc_matrixTranspose3x3
#define rotateObject2D(obj,a)                   [obj,a] call DZR_fnc_rotateObject2D
#define rotateObject3D(params)                  params call DZR_fnc_rotateObject3D
#define rotateVector2D(v,a)                     [v,a] call DZR_fnc_rotateVector2D
#define rotateVector3D(v,a,x)                   [v,a,x] call DZR_fnc_rotateVector3D
///#define setVDU(obj,pos,dir,up,asl)              [obj,pos,dir,up,asl] call DZR_fnc_setVectorDirAndUp
#define setVDU(params)                          params call DZR_fnc_setVectorDirAndUp
#define unitVector(v1,v2)                       [v1,v2] call DZR_fnc_unitVector
#define vectorAdd(v1,v2)                        [v1,v2] call DZR_fnc_vectorAdd
#define vectorCentroid(m)                       m call DZR_fnc_vectorCentroid
#define vectorCos(v1,v2)                        [v1,v2] call DZR_fnc_vectorCos
#define vectorDiff(v1,v2)                       [v1,v2] call DZR_fnc_vectorDiff
#define vectorDirAndUpRelative(obj1,obj2)       [obj1,obj2] call DZR_fnc_vectorDirAndUpRelative
#define vectorDistance2D(v1,v2)                 [v1,v2] call DZR_fnc_vectorDistance2D
#define vectorDotProduct(v1,v2)                 [v1,v2] call DZR_fnc_vectorDotProduct
#define vectorInverse(v)                        v call DZR_fnc_vectorInverse
#define vectorMidpoint(v1,v2)                   [v1,v2] call DZR_fnc_vectorMidpoint
#define vectorModelToWorld(obj,d)               [obj,d] call DZR_fnc_vectorModelToWorld
#define vectorMultiply(v,s)                     [v,s] call DZR_fnc_vectorMultiply
#define vectorNormalized(v)                     v call DZR_fnc_vectorNormalized
#define vectorSum(m)                            m call DZR_fnc_vectorSum
#define vectorWorldToModel(obj,d)               [obj,d] call DZR_fnc_vectorWorldToModel

// extensions


// v2
#define v2Add(v1,v2)                            [v1,v2] call DZR_fnc_v2Add
#define v2Diff(v1,v2)                           [v1,v2] call DZR_fnc_v2Diff
#define v2Divide(v,s)                           [v,s] call DZR_fnc_v2Divide
#define v2DotProduct(v1,v2)                     [v1,v2] call DZR_fnc_v2DotProduct
#define v2Magnitude(v)                          v call DZR_fnc_v2Magnitude
#define v2Midpoint(v1,v2)                       [v1,v2] call DZR_fnc_v2Midpoint
#define v2Multiply(v,s)                         [v,s] call DZR_fnc_v2Multiply
#define v2Normalized(v)                         v call DZR_fnc_v2Normalized

// extensions


// v3
#define v3Add(v1,v2)                            [v1,v2] call DZR_fnc_v3Add
#define v3Diff(v1,v2)                           [v1,v2] call DZR_fnc_v3Diff
#define v3Divide(v,s)                           [v,s] call DZR_fnc_v3Divide
#define v3Multiply(v,s)                         [v,s] call DZR_fnc_v3Multiply


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					vehicles
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define getHitPointDamage(veh,hp)               [veh,hp] call DZR_fnc_getHitPointDamage
#define getSupplyPosition(veh,cls)              [veh,cls] call DZR_fnc_getSupplyPosition

// extensions
///#define isVehicle(cls)                        isClass (configFile >> 'CfgVehicles' >> cls)


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					weapons
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define addEmptyMag(mag)                        mag call DZR_fnc_addEmptyMag
#define compatibleItems(name)                   name call DZR_fnc_compatibleItems
#define compatibleMagazines(wpn,muz)            [wpn,muz] call DZR_fnc_compatibleMagazines
#define handgunWeapon(unit)                     unit call DZR_fnc_handgunWeapon
///#define isAmmo(mag)                             mag call DZR_fnc_isAmmo
#define isHandgunAmmo(mag)                      mag call DZR_fnc_isHandgunAmmo
#define isPrimaryAmmo(mag)                      mag call DZR_fnc_isPrimaryAmmo
#define meleeMagazineCheck                      call DZR_fnc_meleeMagazineCheck

// extensions
#define ammoCount                               weaponState player select WS_AMMOCOUNT
///#define compatibleMagazines(cls)                getArray (configFile >> 'CfgWeapons' >> cls >> 'magazines')
#define defaultMagazine(wpn)                    compatibleMagazines(wpn,wpn) select 0
#define isAmmo(cls)                             [['CfgMagazines',cls],['DZR_Ammo']] call DZR_fnc_isKindOf
#define isEmptyMag                              ammoCount == 0
#define isLoaded(unit,muzz)                     unit ammo muzz > 0
#define isMelee(cls)                            getNumber (configFile >> 'CfgWeapons' >> cls >> 'melee') == 1
#define isPrimary(cls)                          getNumber (configFile >> 'CfgWeapons' >> cls >> 'type') == 1 // #define WeaponSlotPrimary	1	// primary weapons
#define isWeapon(cls)                           [['CfgWeapons',cls],['Rifle','Pistol']] call DZR_fnc_isKindOf // launcher removed for DZR, but needed for Epoch
#define notMelee(cls)                           getNumber (configFile >> 'CfgWeapons' >> cls >> 'melee') == 0


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					zombies
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// functions
#define alertZombies(unit,dist,run,pos)         [unit,dist,run,pos] spawn DZR_fnc_alertZombies
#define getZombies(pos,rad)                     [pos,rad] call DZR_fnc_getZombies

// extensions


///////////////////////////////////////////////////////////////////////////////////////////////////
//
//					composite macros
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// medical / health
///#define updateHealth(var,num)                   var = clamp(var + num,p_min_health,p_max_health)

// weapons
#define clampMag(m,c)                           clamp(c,1,magsize(m))

#endif
**/
