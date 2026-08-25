///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	sched_burningFire
//
//	Description:	Monitors fuel-using fireplaces and extinguishes them when their configured burn
//			time expires.
//	Groups:		Scheduler, Fire
//
//	Syntax:		call sched_burningFire
//
//	Parameters:	Scheduler context
//
//	Return Value:	Object - Scheduler context
//
//	Called by:	Server Scheduler
//
///////////////////////////////////////////////////////////////////////////////////////////////////

//#define DEBUG_SCHED_BURNING_FIRE

sched_burningFire = {
	#ifdef DEBUG_SCHED_BURNING_FIRE
		diag_log format ['[Server Debug]: [sched_burningFire]: Function called with argumentes: %1',_this];
	#endif

	local _cfgVehicles = configFile >> 'CfgVehicles';
	local _fireConfig = _cfgVehicles;
	local _fireplace = objNull;
	local _flame = objNull;
	local _flames = [];
	local _burnTime = 0;
	local _burnEnd = -1;

	// Remove references to fireplaces that were deleted since the previous scheduler cycle.
	DZE_fireObjects = DZE_fireObjects - [objNull];

	{
		_fireplace = _x;
		_fireConfig = _cfgVehicles >> typeOf _fireplace;

		if (alive _fireplace && {getNumber (_fireConfig >> 'DZE_fireUseFuel') == 1}) then {
			_flame = _fireplace;
			_flames = nearestObjects [_fireplace,['DZE_flamable'],1];

			// Prefer an inflamed proxy and otherwise monitor the fireplace directly.
			{
				if (inflamed _x) exitWith {_flame = _x};
			} forEach _flames;

			_burnTime = (_fireplace getVariable ['DZE_fireBurnTime',0]) min DZE_fireMaximumBurnTime;
			_burnEnd = _fireplace getVariable ['DZE_fireBurnEnd',-1];

			if (inflamed _flame) then {
				// Keep an active proxy out of the generic loot cleanup.
				if (_flame != _fireplace) then {
					_flame setVariable ['created',diag_tickTime];
				};

				// Start consuming the stored burn time when the fire is lit.
				if (_burnEnd < 0 && {_burnTime > 0}) then {
					_burnEnd = diag_tickTime + _burnTime;
					_fireplace setVariable ['DZE_fireBurnTime',0];
					_fireplace setVariable ['DZE_fireBurnEnd',_burnEnd];
				};

				if (_burnEnd < 0 || {diag_tickTime >= _burnEnd}) then {
					_flame inflame false;
					_fireplace setVariable ['DZE_fireBurnTime',0];
					_fireplace setVariable ['DZE_fireBurnEnd',-1];

					#ifdef DEBUG_SCHED_BURNING_FIRE
						diag_log format ['[Server Debug]: [sched_burningFire]: Extinguished fireplace without remaining burn time: %1',_fireplace];
					#endif
				};
			} else {
				// Discard all remaining fuel when a previously burning fireplace is extinguished.
				if (_burnEnd >= 0) then {
					_fireplace setVariable ['DZE_fireBurnTime',0];
					_fireplace setVariable ['DZE_fireBurnEnd',-1];

					#ifdef DEBUG_SCHED_BURNING_FIRE
						diag_log format ['[Server Debug]: [sched_burningFire]: Cleared remaining burn time after fireplace was extinguished: %1',_fireplace];
					#endif
				};
			};
		};
	} forEach DZE_fireObjects;

	objNull
};
