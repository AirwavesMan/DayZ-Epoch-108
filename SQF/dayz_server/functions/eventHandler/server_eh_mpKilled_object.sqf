///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_eh_mpKilled_object
//
//	Description:	Creates the configured ruin, persists modular ruins and saves killed server objects.
//	Groups:		Event Handler
//
//	Syntax:		[object,killer] call server_eh_mpKilled_object
//
//	Parameters:	object: Object - Killed object
//			killer: Object - Object that caused the kill
//
//	Return Value:	None
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_SERVER_EH_MPKILLED_OBJECT

#ifdef DEBUG_SERVER_EH_MPKILLED_OBJECT
	diag_log format ['[Server Debug]: [server_eh_mpKilled_object]: Function called with arguments: %1',_this];
#endif

local _object = _this select 0;
local _objectType = typeOf _object;
local _ruinType = getText (configFile >> 'CfgVehicles' >> _objectType >> 'DZE_destroyedRuin');

//	Replace the destroyed object with its ruin type
if (_ruinType != '') then {
	local _positionASL = [_object] call DZE_fnc_modelCenterWorld;
	local _vector = [vectorDir _object,vectorUp _object];

	local _ruin = [_ruinType,_positionASL,0,_vector,true,true,false,false] call server_createVehicle;

	//	Only ruins created from modular base objects are persisted.
	if (_object isKindOf 'DZE_Modular_Base') then {
		local _metadata = _object getVariable ['worldspaceMetadata',[]];
		local _worldspace = [_positionASL,_vector,_metadata];
		local _formattedWorldspace = _worldspace call server_formatWorldspace;

		if (_formattedWorldspace != '') then {
			local _ruinUID = [getDir _ruin,_positionASL] call dayz_objectUID2;
			_ruin setVariable ['ObjectUID',_ruinUID];
			_ruin setVariable ['worldspaceMetadata',_metadata];

			local _key = str formatText ['CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:',dayZ_instance,_ruinType,0,'0',_formattedWorldspace,[],[],0,_ruinUID];
			_key call server_hiveWrite;

			#ifdef DEBUG_SERVER_EH_MPKILLED_OBJECT
				diag_log format ['[Server Debug]: [server_eh_mpKilled_object]: Persisted ruin: %1 | ObjectUID: %2 | Position ASL: %3',_ruinType,_ruinUID,_positionASL];
			#endif
		};
	};
};

local _objectID = _object getVariable ["ObjectID","0"];
local _objectUID = _object getVariable ["ObjectUID","0"];

//	Destroyed object is a building object that needs to be removed from the database
if (_objectID != '0' || _objectUID != '0') then {
	[_object,'killed',false,false,'SERVER',dayz_serverKey] call server_updateObject;
};

_object removeAllMPEventHandlers 'MPKilled';
_object removeAllEventHandlers 'Killed';
_object removeAllEventHandlers 'HandleDamage';
_object removeAllEventHandlers 'GetIn';
_object removeAllEventHandlers 'GetOut';
