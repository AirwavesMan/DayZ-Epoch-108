///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	server_validateObjectWorldspace
//
//	Description:	Validates a model-center worldspace before an object is transformed or persisted.
//	Groups:		Build, Verification
//
//	Syntax:		worldspace call server_validateObjectWorldspace
//
//	Return Value:	Array - [valid, reason]
//
//	Called by:	Server
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_VALIDATE_OBJECT_WORLDSPACE

#ifdef DEBUG_VALIDATE_OBJECT_WORLDSPACE
	diag_log format ['[Server Debug]: [Validate Object Worldspace]: Function called with argumentes: %1',_this];
#endif

local _worldspace = _this;
local _valid = false;
local _reason = '';
local _positionASL = [];
local _vector = [];
local _metadata = [];
local _direction = [];
local _up = [];
local _positionValues = [];
local _orientationValues = [];
local _directionMagnitude = 0;
local _upMagnitude = 0;
local _orthogonality = 0;
local _positionLimit = 1000000;
local _vectorTolerance = 0.01;

call {
	if (typeName _worldspace != 'ARRAY' || {count _worldspace != 3}) exitWith {
		_reason = 'Worldspace must contain position, orientation and metadata';
	};

	_positionASL = _worldspace select 0;
	_vector = _worldspace select 1;
	_metadata = _worldspace select 2;

	if (typeName _positionASL != 'ARRAY' || {count _positionASL != 3}) exitWith {
		_reason = 'Position must be a three-component array';
	};
	if (typeName _vector != 'ARRAY' || {count _vector != 2}) exitWith {
		_reason = 'Orientation must contain direction and up vectors';
	};
	if (typeName _metadata != 'ARRAY') exitWith {
		_reason = 'Metadata must be an array';
	};

	_direction = _vector select 0;
	_up = _vector select 1;

	if (typeName _direction != 'ARRAY' || {count _direction != 3}) exitWith {
		_reason = 'Direction must be a three-component array';
	};
	if (typeName _up != 'ARRAY' || {count _up != 3}) exitWith {
		_reason = 'Up must be a three-component array';
	};

	_positionValues = +_positionASL;
	_orientationValues = _direction + _up;

	if ({typeName _x != 'SCALAR' || {!(finite _x)}} count _positionValues > 0) exitWith {
		_reason = 'Position contains a non-finite number';
	};
	if ({abs _x > _positionLimit} count _positionValues > 0) exitWith {
		_reason = 'Position exceeds the supported worldspace range';
	};
	if ({typeName _x != 'SCALAR' || {!(finite _x)}} count _orientationValues > 0) exitWith {
		_reason = 'Orientation contains a non-finite number';
	};
	if ({abs _x > 1 + _vectorTolerance} count _orientationValues > 0) exitWith {
		_reason = 'Orientation contains an out-of-range component';
	};

	_directionMagnitude = sqrt (((_direction select 0) ^ 2) + ((_direction select 1) ^ 2) + ((_direction select 2) ^ 2));
	_upMagnitude = sqrt (((_up select 0) ^ 2) + ((_up select 1) ^ 2) + ((_up select 2) ^ 2));
	_orthogonality = ((_direction select 0) * (_up select 0)) + ((_direction select 1) * (_up select 1)) + ((_direction select 2) * (_up select 2));

	if (abs (_directionMagnitude - 1) > _vectorTolerance) exitWith {
		_reason = 'Direction vector is not normalized';
	};
	if (abs (_upMagnitude - 1) > _vectorTolerance) exitWith {
		_reason = 'Up vector is not normalized';
	};
	if (abs _orthogonality > _vectorTolerance) exitWith {
		_reason = 'Direction and up vectors are not perpendicular';
	};

	_valid = true;
};

#ifdef DEBUG_VALIDATE_OBJECT_WORLDSPACE
	diag_log format ['[Server Debug]: [Validate Object Worldspace]: Validation result | Valid: %1 | Reason: %2 | Direction magnitude: %3 | Up magnitude: %4 | Dot product: %5',_valid,_reason,_directionMagnitude,_upMagnitude,_orthogonality];
#endif

[_valid,_reason]
