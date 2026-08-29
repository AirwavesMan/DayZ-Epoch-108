
if (isServer) then {
	call compile preprocessFileLineNumbers "\z\addons\dayz_server\init\server_functions.sqf";
};

#define path(s)                 _path = format ['\z\addons\dayz_code\functions\%1\', s]
#define FUNCTION(fn)            fn = compile preprocessFileLineNumbers (_path + 'fn.sqf')
#define call_sqf(file)          call compile preprocessFileLineNumbers (_path + 'file.sqf')

if (!isDedicated) then {
	//"filmic" setToneMappingParams [0.153, 0.357, 0.231, 0.1573, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";
	//"filmic" setToneMappingParams [0.07, 0.31, 0.23, 0.37, 0.011, 3.750, 6, 4]; setToneMapping "filmic";		//DayZ Vanilla
	"filmic" setToneMappingParams [0.4, 0.35, 0.18, 0.1, 0.1, 5, 6, 3.8]; setToneMapping "filmic";

	call compile preprocessFileLineNumbers "\z\addons\dayz_code\util\compile.sqf";
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\loot\init.sqf";
	if (Z_SingleCurrency) then {call compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\zsc\zscFunctions.sqf";};

	call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\math_functions.sqf";
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\system\handleGearFunctions.sqf";
	fn_handleGear = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\handleGear.sqf";
	object_pickup = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\pickupActions\object_pickup.sqf";

	fn_dropItem = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_dropItem.sqf";
	fn_exitSwim = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_exitSwim.sqf";
	fn_loopAction = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_loopAction.sqf";
	fn_nearWaterHole = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_nearWaterHole.sqf";
	player_zombieCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieCheck.sqf";	//Run on a players computer, checks if the player is near a zombie
	player_zombieAttack = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_zombieAttack.sqf";	//Run on a players computer, causes a nearby zombie to attack them
	player_attackdelay = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_attackfsmdelay.sqf";
	fnc_usec_damageActions = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageActions.sqf";		//Checks which actions for nearby casualty
	fnc_inAngleSector = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_inAngleSector.sqf";		//Checks which actions for nearby casualty
	fnc_usec_selfActions = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_selfActions.sqf";		//Checks which actions for self
	fnc_usec_unconscious = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_unconscious.sqf";
	player_temp_calculation = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_temperatur.sqf";		//Temperatur System //TeeChange
	player_weaponFiredNear = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_weaponFiredNear.sqf";
	player_spawnCheck = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_spawnCheck.sqf";
	building_spawnLoot = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\building_spawnLoot.sqf";
	building_spawnZombies = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\building_spawnZombies.sqf";
	player_fired = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_fired.sqf";			//Runs when player fires. Alerts nearby Zeds depending on calibre and audial rating
	player_updateGui = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_updateGui.sqf";
	player_crossbowBolt = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_crossbowBolt.sqf";
	player_music = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_music.sqf";			//Used to generate ambient music
	player_death = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_death.sqf";
	player_switchModel = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_switchModel.sqf";
	player_checkStealth = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_checkStealth.sqf";
	world_sunRise = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_sunRise.sqf";
	world_surfaceNoise = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_surfaceNoise.sqf";
	player_humanityMorph = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_humanityMorph.sqf";
	player_throwObject = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_throwObject.sqf";
	player_alertZombies = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_alertZombies.sqf";
	player_countMagazines = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_countMagazines.sqf";
	player_countMagazinesWBackpack = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_countMagazinesWBackpack.sqf";
	player_regularSave = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_regularSave.sqf";
	player_forceSave = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_forceSave.sqf";
	vehicle_getOut = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_getOut.sqf";
	submarine_surface = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\submarine_surface.sqf";

	//Objects
	object_setpitchbank = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_setpitchbank.sqf";
	object_monitorGear = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_monitorGear.sqf";
	//Zombies
	zombie_findTargetAgent = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_findTargetAgent.sqf";
	zombie_loiter = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_loiter.sqf";			//Server compile, used for loiter behaviour
	zombie_generate = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_generate.sqf";		//Server compile, used for loiter behaviours

	// Medical
	player_medBandage = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medBandaged.sqf";
	player_medEpi = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medEpi.sqf";
	player_medTransfuse = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medTransfuse.sqf";
	player_medMorphine = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medMorphine.sqf";
	player_medPainkiller = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medPainkiller.sqf";
	player_medAntiBiotics = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medAntibiotics.sqf";
	player_medABWipe = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\publicEH\medABwipe.sqf";

	//actions
	userActionConditions = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\userActionConditions.sqf";
	player_reloadMag = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_reloadMags.sqf";
	player_consume = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_consume.sqf";
	player_emptyContainer = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_emptyContainer.sqf";
	player_useMeds = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_useMeds.sqf";
	player_useAttchment = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_useAttchment.sqf";
	player_attachAttachment = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_attachAttachment.sqf";
	player_removeAttachment = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_removeAttachment.sqf";
	player_fillWater = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\water_fill.sqf";
	player_mineStone = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_mineStone.sqf";
	player_wearClothes = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_wearClothes.sqf";
	player_dropWeapon = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_dropWeapon.sqf";
	player_combineMag = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_combineMags.sqf";
	player_combineAntibiotics = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_combineAntibiotics.sqf";
	player_combinePainkiller = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_combinePainkiller.sqf";
	player_createquiver = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_createQuiver.sqf";
	player_fillquiver = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_fillQuiver.sqf";
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_switchWeapon.sqf";
	player_gather = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_gather.sqf";
	player_tearClothes = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_tearClothes.sqf";
	player_butcher = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\gather_meat.sqf";
	player_pushPlane = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_pushPlane.sqf";

	//ui
	player_toggleSoundMute = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_toggleSoundMute.sqf";
	player_toggleStreamerMode = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_toggleStreamerMode.sqf";
	if (!isNil "DZE_CLICK_ACTIONS" && {count DZE_CLICK_ACTIONS > 0}) then {
		player_selectSlot = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\Rightclicks\ui_selectSlot_addon.sqf";
	} else {
		player_selectSlot = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\Rightclicks\ui_selectSlot_vanilla.sqf";
		DZE_CLICK_ACTIONS = nil;
	};	
	player_selectWeapon = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_selectWeapon.sqf";
	player_markMap = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_markMap.sqf";
	player_gearSet = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_gearSet.sqf";
	ui_changeDisplay = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_changeDisplay.sqf";
    ui_gear_sound = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_gear_sound.sqf";
	ui_updateControls = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\ui_updateControls.sqf";

	//playerstats
	horde_epeen_fnc_fill_page = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\fill_page_fnc.sqf";
	horde_epeen_determine_humanity_fnc = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\determine_humanity_fnc.sqf";
	horde_epeen_setText_journal_fnc = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\epeen_setText_journal.sqf";
	horde_epeen_setText_humanity_fnc = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\epeen_setText_humanity.sqf";
	horde_epeen_setText_stats_fnc = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\epeen_setText_stats.sqf";
	horde_epeen_show_humanity_fnc = compile preProcessFile "\z\addons\dayz_code\actions\playerstats\show_humanity_fnc.sqf";

	//System
	player_spawn_2 = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\player_spawn_2.sqf";

	//Crafting
	player_craftItem = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_craftItem.sqf";

	// EPOCH ADDITIONS
	dayz_autoRunOff = {dayz_autoRun = false; terminate dayz_autoRunThread; if (speed player > 0) then {player playActionNow "Stop"};};
	dog_findTargetAgent = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\dog_findTargetAgent.sqf";
	dze_deathMessage = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\dze_deathMessage.sqf";
	dze_filterCheats = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_filterCheats.sqf";
	dze_isnearest_player = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\dze_isNearestPlayer.sqf";
	dze_surrender_off = {player setVariable ["DZE_Surrendered",false,true]; DZE_Surrender = false;};
	epoch_generateKey = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\epoch_generateKey.sqf";
	epoch_tempKeys = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\epoch_tempKeys.sqf";
	epoch_totalCurrency = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\epoch_totalCurrency.sqf";
	epoch_itemCost = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\epoch_itemCost.sqf";
	epoch_returnChange = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\epoch_returnChange.sqf";
	fn_gearMenuChecks = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_gearMenuChecks.sqf";
	fn_pauseMenuChecks = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_pauseMenuChecks.sqf";
	fn_waitForObject = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_waitForObject.sqf";
	player_onPause = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_onPause.sqf";
	player_antiWall = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_antiWall.sqf";
	player_changeCombo = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_changeCombo.sqf";
	player_checkItems =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_checkItems.sqf";
	player_copyKey = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_copyKey.sqf";
	player_deathBoard =	compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\list_playerDeathsAlt.sqf";
	player_harvest = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_harvest.sqf";
	player_harvestPlant = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_harvestPlant.sqf";
	player_loadCrate = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_loadCrate.sqf";
	player_lockVault = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_lockVault.sqf";
	player_packVault = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_packVault.sqf";
	player_surrender = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\player_surrender.sqf";
	player_traderCity = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_traderCity.sqf";
	player_unlockDoor = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_unlockDoor.sqf";
	player_unlockVault = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_unlockVault.sqf";
	player_upgradeVehicle =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_upgradeVehicle.sqf";
	fnc_usec_damageHandler = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandler.sqf";		//Event handler run on damage
	fnc_radioState = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\radioState.sqf"; // Toggle radio on and off
	fnc_localizeMessage = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_localizeMessage.sqf";
	fnc_remoteMessage = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_remoteMessage.sqf";
	fnc_apsiState = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\apsiState.sqf"; // Toggle APSI on and off
	fnc_brakeFix = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fnc_brakeFix.sqf"; // fix for motorcycle & bicycle brakes
	if (DZE_EVR) then {call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\client_evr.sqf";};
	
	if (DZE_Remote_Vehicle) then {
		remoteVehicle = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\remoteVehicle\remoteVehicle.sqf";
		rv_vehicleInfo = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\remoteVehicle\vehicleInfo.sqf";
	};

	if (DZE_LocateVehicle) then {
		locateVehicle = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\locateVehicle.sqf";
	};	
	
	if (DZE_VehicleKey_Changer) then {
		vkc_vehicleInfo = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\vkc\vehicleInfo.sqf";
	};
	
	if (DZE_Virtual_Garage) then {
		player_getVehicle = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\virtualGarage\player_getVehicle.sqf";
		player_storeVehicle = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\virtualGarage\player_storeVehicle.sqf";
		Player_MaintainVG = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\virtualGarage\player_MaintainVG.sqf";
		vehicleInfo = compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\virtualGarage\vehicleInfo.sqf";
		vg_maintainSetText = {
			disableSerialization;
			waituntil {!isNull (findDisplay 2800)};
			_vgDisplCtl = (findDisplay 2800) displayCtrl 2854;
			if (vg_maintainCost > 0) then {
				_itemText = if (Z_SingleCurrency) then {CurrencyName} else {[vg_maintainCost,true] call z_calcCurrency};
				if (Z_SingleCurrency) then {
					_vgDisplCtl ctrlSetText format["%1 (%2 %3)",localize "STR_CL_VG_MAINTAIN_GARAGE",vg_maintainCost,_itemText];
				} else {
					_vgDisplCtl ctrlSetText format["%1 (%2)",localize "STR_CL_VG_MAINTAIN_GARAGE",_itemText];
				};
			} else {
				_vgDisplCtl ctrlSetText format["%1 (%2)",localize "STR_CL_VG_MAINTAIN_GARAGE",localize "strwffree"];
			};
		};
	};
	
	if (DZE_Service_Points) then {
		execVM "\z\addons\dayz_code\actions\servicePoints\init.sqf";
	};
	
	// Bloodsuckers
	if (DZE_Bloodsuckers) then {
		player_mutantAttack = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_mutantAttack.sqf";
		mutant_generate = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\mutant_generate.sqf";
		mutant_findTarget = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\mutant_findTarget.sqf";
		mutant_damageHandler  = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\mutant_damageHandler.sqf";
		mutant_eventKill  = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\mutant_eventKill.sqf";
	};	

	// Weather
	if (DZE_Weather in [3,4]) then {
		fnc_snowfall = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\weather\snowfall.sqf";
		fnc_blizzard = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\weather\blizzard.sqf";
		fnc_breathFog = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\weather\breathFog.sqf";
	};
	fnc_setWeather = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\weather\setWeather.sqf";
	fnc_groundFog = compile preprocessFileLineNumbers "\z\addons\dayz_code\system\weather\groundFog.sqf";
	fnc_issheltered = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_isSheltered.sqf";

	// Compiles of all trading related functions
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\actions\AdvancedTrading\compiles.sqf";

	fnc_alertZombies = {
		private ["_unit","_pos","_dis","_sfx"];

		_unit = _this select 0;
		_pos = _this select 1;
		_dis = _this select 2;
		_sfx = _this select 3;

		[_unit,_sfx,0,false,_dis] spawn dayz_zombieSpeak;
		[_unit,_dis,true,_pos] spawn player_alertZombies;
	};

	dayz_losChance = {
		private["_agent","_maxDis","_dis","_val","_maxExp","_myExp"];
		_agent = _this select 0;
		_dis = _this select 1;
		_maxDis = _this select 2;
		//diag_log ("VAL:  " + str(_this));
		_maxDis = 0.1 max _maxDis;
		_val = (_maxDis - _dis) max 0;
		_maxExp = ((exp 2) * _maxDis);
		_myExp = ((exp 2) * (_val)) / _maxExp;
		_myExp = _myExp * 0.7;
		_myExp
	};

	dayz_angleCheck = {
		private ["_degree","_tPos","_zPos","_inAngle","_agent","_target","_eyeDir"];
		_target = _this select 0;
		_agent = _this select 1;
		_degree = _this select 2;
		_inAngle = false;
		_tPos = getPosASL _target;
		_zPos = getPosASL _agent;
		_eyeDir = direction _agent;
		_inAngle = [_zPos,_eyeDir,_degree,_tPos] call fnc_inAngleSector;
		_inAngle
	};

	dayz_losCheck = {
		local _target	= _this select 0;
		local _agent	= _this select 1;
		local _cantSee	= true;

		if ((!isNull _target) && {!isNull _agent}) then {
			local _los = [eyePos _target, eyePos _agent];	// [player, zombie]
			_cantSee = lineIntersects _los;

			if (!_cantSee) then {
				_cantSee = terrainIntersectASL _los;
			};
		};
		_cantSee
	};

	dayz_NutritionSystem = {
		private ["_type","_baseRegen","_nutrition","_calorieCount","_hungerCount","_thirstCount","_tempCount"];
		//["type",regen,[NutritionTable,thirst(Working Class),hunger(Working Class)]]
		//info to be added
		_type = _this select 0;
		_baseRegen = _this select 1;
		_nutrition = _this select 2;

		//Nutrition array
		_calorieCount = _nutrition select 0;
		//gain
		_hungerCount = _nutrition select 1;
		_thirstCount = _nutrition select 2;
		_tempCount = _nutrition select 3;

		//3610 is based on a 80kg male 180cm tall
		if (_calorieCount > 0) then {
			_hungerCount = _hungerCount + (SleepFood * (((ln ((_calorieCount / 3610) * 100)) * (1 - (dayz_hunger / SleepFood))) / 100));
			_thirstCount = _thirstCount + (SleepWater * (((ln ((_calorieCount / 3610) * 100)) * (1 - (dayz_thirst / SleepWater))) / 100));
		};

		call {
			if (_type == "FoodDrink") exitwith {
				//hunger
				if (_hungerCount > 0) then {
					if (dayz_hunger > _hungerCount) then {
						dayz_hunger = dayz_hunger - (_hungerCount);
					} else {
						dayz_hunger = 0;
					};
				};
				//thirst
				if (_thirstCount > 0) then {
					if (dayz_thirst > _thirstCount) then {
						dayz_thirst = dayz_thirst - _thirstCount;
					} else {
						dayz_thirst = 0;
					};
				};
				//temp
				if (_tempCount > 0) then { dayz_temperatur = dayz_temperatur + _tempCount; };
				//calorie
				if (_calorieCount > 0) then { dayz_nutrition = dayz_nutrition + _calorieCount; };
				//blood
				if (_baseRegen > 0) then { r_player_bloodregen = r_player_bloodregen + _baseRegen; };
			};

			if (_type == "Working") exitwith {
				if (_calorieCount > 0) then { dayz_nutrition = dayz_nutrition - (_calorieCount / ((DZE_NutritionDivisor select 0) max 0.1)); };
				if (_thirstCount > 0) then { dayz_thirst = dayz_thirst + (_thirstCount / ((DZE_NutritionDivisor select 1) max 0.1)); };
				if (_hungerCount > 0) then { dayz_hunger = dayz_hunger + (_hungerCount / ((DZE_NutritionDivisor select 2) max 0.1)); };
				if (_tempCount > 0) then { dayz_temperatur = dayz_temperatur + (_tempCount / ((DZE_NutritionDivisor select 3) max 0.1)); };
			};

		};

		dayz_thirst = (dayz_thirst min SleepWater) max 0;
		dayz_hunger = (dayz_hunger min SleepFood) max 0;
		dayz_temperatur = (dayz_temperatur min dayz_temperaturmax) max dayz_temperaturmin;
		//systemChat str [ "nutrition, r_player_bloodregen+=",_baseRegen,"dayz_nutrition+=", _calorieCount, "dayz_thirst+=", _thirstCount, "dayz_hunger+=", _hungerCount ];
		//systemChat format ["%6, Nutrition add: %1, Nutrition Total: %2, Thirst: %3, Hunger: %4, dayz_temperatur: %5",_this,dayz_nutrition,dayz_thirst,dayz_hunger,dayz_temperatur];
		//diag_log format ["%6, Nutrition add: %1, Nutrition Total: %7/%2, Thurst: %3, Hunger: %4, BloodRegen: %5",_this,r_player_Nutrition,_Thirst,_Hunger,_bloodregen,_type,_golbalNutrition];
	};

	gearDialog_create = {
		disableSerialization;
		if (!isNull (findDisplay 106)) then {
			(findDisplay 106) closeDisplay 0;
		};
		openMap false;
		closeDialog 0;
		if (gear_done) then {uiSleep 0.001;};
		DZE_GearCheckBypass = true; //Bypass gear menu checks since dialog will always open on player's gear
		skipGearSound = true; //Don't play sound when checking backpack mags ammo count
		player action ["Gear", player];
		if (gear_done) then {uiSleep 0.001;};
		local _dialog = findDisplay 106;
		local _i = 0;
		while {isNull _dialog} do {
			_i = _i + 1;
			_dialog = findDisplay 106;
			if (gear_done) then {uiSleep 0.001;};
			if (_i in [100,200,299]) then {
				closeDialog 0;
				DZE_GearCheckBypass = true; //Bypass gear menu checks since dialog will always open on player's gear
				skipGearSound = true; //Don't play sound when checking backpack mags ammo count
				player action ["Gear", player];
			};
			if (_i > 300) exitWith {};
		};
		if (gear_done) then {
			waitUntil {
				uiSleep 0.1;
				_dialog = findDisplay 106;
				!isNull _dialog
			};
		};

		if ((parseNumber(_this select 0)) != 0) then {
			ctrlActivate (_dialog displayCtrl 157);
			if (gear_done) then {
				waitUntil {ctrlShown (_dialog displayCtrl 159)};
				uiSleep 0.001;
			};
		};
		skipGearSound = false;
		_dialog
	};

	gear_ui_offMenu = {
		private["_control","_parent","_menu","_grpPos"];
		disableSerialization;
		_control = _this select 0;
		_parent = findDisplay 106;
		if (!(_this select 3)) then {
			for "_i" from 0 to 9 do {
				_menu = _parent displayCtrl (1600 + _i);
				_menu ctrlShow false;
			};
			_grpPos = ctrlPosition _control;
			_grpPos set [3,0];
			_control ctrlSetPosition _grpPos;
			_control ctrlShow false;
			_control ctrlCommit 0;
		};
	};

	gear_ui_init = {
		private["_control","_parent","_menu","_grpPos"];
		disableSerialization;
		_parent = findDisplay 106;
		_control = _parent displayCtrl 6902;
		for "_i" from 0 to 9 do {
			_menu = _parent displayCtrl (1600 + _i);
			_menu ctrlShow false;
		};
		_grpPos = ctrlPosition _control;
		_grpPos set [3,0];
		_control ctrlSetPosition _grpPos;
		_control ctrlShow false;
		_control ctrlCommit 0;
	};

	gear_ui_hide = {
		private["_display","_BP"];
		disableSerialization;
		_display = findDisplay 106;
		_BP = unitBackpack player;
		if (ctrlShown (_display displayCtrl 159)) then {//prevent background images in backpack view
			for "_i" from 1006 to 1011 do {
				(_display displayCtrl _i) ctrlShow false;
			};
		} else {
			for "_i" from 1006 to 1011 do {
				if (!(ctrlShown (_display displayCtrl _i))) then {
					(_display displayCtrl _i) ctrlShow true;
				};
			};
		};
		//hide buttons if unnecessary
		if (isNull _BP || ((typeOf _BP) == "")) then {
			(_display displayCtrl 132) ctrlShow false;
			(_display displayCtrl 157) ctrlShow false;
			(_display displayCtrl 158) ctrlShow false;
		};

		if ((DZE_TwoPrimaries == 0) && {primaryWeapon player == "" && {dayz_onBack != ""} && {!(dayz_onBack in MeleeWeapons)}}) then {
			//["gear"] call player_switchWeapon;
			0 call dz_fn_switchWeapon;
			closeDialog 0;
		};
		if ((DZE_TwoPrimaries == 1) && {primaryWeapon player != "" && {dayz_onBack != ""} && {!(dayz_onBack in MeleeWeapons)} && {!(primaryWeapon player in MeleeWeapons)}}) then {
			//["gear"] call player_switchWeapon;
			0 call dz_fn_switchWeapon;
			closeDialog 0;
		};
		if ((DZE_TwoPrimaries == 0) && {primaryWeapon player != ""} && {primaryWeapon player in MeleeWeapons || dayz_onBack in MeleeWeapons}) then {
			(_display displayCtrl 1204) ctrlShow true;
		} else {
			if ((DZE_TwoPrimaries > 0) && {primaryWeapon player != ""}) then {
				(_display displayCtrl 1204) ctrlShow true;
			} else {
				(_display displayCtrl 1204) ctrlShow false;
			};
		};

		if (DayZ_onBack != "") then {
			(_display displayCtrl 1208) ctrlShow true;
		} else {
			(_display displayCtrl 1208) ctrlShow false;
		};

		for "_i" from 0 to (lbSize (_display displayCtrl 105)) - 1 do {
			(_display displayCtrl 105) lbSetColor [_i, [0.06, 0.05, 0.03, 1]];
		};
	};
	
	gearDialog_close = {
		while {dayz_actionInProgress} do {
			findDisplay 106 closeDisplay 0;			
			uisleep 0.1;
		};
	};

	dayz_lowHumanity = {
		private "_unit";
		_unit = _this;
		if ((_unit distance player) < 15) then {
			private "_humanity";
			_humanity = _unit getVariable["humanity",0];
			dayz_heartBeat = true;
			if (_humanity < -3000) then {
				private "_delay";
				_delay = ((10000 + _humanity) / 5500) + 0.3;
				playSound "heartbeat_1";
				uiSleep _delay;
			};
			dayz_heartBeat = false;
		};
	};

	dz_fn_meleeMagazines = {
		if (_this) then {
			{ player addMagazine _x } foreach MeleeMagazines;
		} else {
			{ player removeMagazines _x } foreach MeleeMagazines;
		};
	};

	dayz_meleeMagazineCheck = {
        private["_wpnType","_ismelee"];
        _wpnType = primaryWeapon player;
        _ismelee = (getNumber (configFile >> "CfgWeapons" >> _wpnType >> "melee") == 1);
        if (_ismelee) then {
            private ["_meleeNum","_magType"];
            _magType = ([] + getArray (configFile >> "CfgWeapons" >> _wpnType >> "magazines")) select 0;
            _meleeNum = ({_x == _magType} count magazines player);
            if (_meleeNum < 1) then {
                player addMagazine _magType;
            };
        };

        // combine matchboxes
        private ["_matches","_fullBox","_remain"];
        _matches = 0;
        {
            if (configName inheritsFrom (configfile >> "cfgWeapons" >> _x) == "DZE_Tool_Matchbox") then { // iskindOf does not work here?!
                 _matches = _matches + getNumber (configFile >> 'CfgWeapons' >> _x >> 'DZE_matches');
                 player removeWeapon _x;
            };
        } count (items player);
        // limit to 1 fullbox and 1 used matchbox
        _fullBox = floor (_matches / 5);
        _remain = _matches % 5;
        if (_fullBox > 0) then { player addWeapon "DZE_Tool_Matchbox5"; };
  		if (_fullBox > 1) then {
			player addWeapon "DZE_Tool_Matchbox4";
		} else {
	        if (_remain > 0) then {player addWeapon ('DZE_Tool_Matchbox' + str _remain)};
		};
    };

	dayz_killFeed = {
		private ["_distance","_offset","_icon","_playerName","_sourceName"];
		_playerName = _this select 1;
		_sourceName = _this select 2;
		_distance = _this select 4;
		_icon = _this select 5;
		if (_icon == "") exitWith {};

		if (diag_ticktime - death_1_time < 10) then {
			if (time - death_2_time < 10) then {
				if (time - death_3_time < 10) then {
					death_4 = death_3;
					death_4_time = death_3_time;
				} else {
					death_4 = "";
				};
				death_3 = death_2;
				death_3_time = death_2_time;
			} else {
				death_3 = "";
				death_4 = "";
			};
			death_2 = death_1;
			death_2_time = death_1_time;
		} else {
			death_2 = "";
			death_3 = "";
			death_4 = "";
		};
		//Weapon images point left in A2
		death_1 = format["<t size='.6' align='left' color='#ffffff'>%1 </t><img size='.8' align='left' image='%2'/><t size='.6' align='left' color='#ffffff'> %3 (%4m)</t>",_playerName,_icon,_sourceName,_distance];
		death_1_time = diag_ticktime;

		//Prevent covering vehicle health bar HUD
		_offset = if (vehicle player == player) then {0} else {0.1};
		[(format ["%1<br />%2<br />%3<br />%4",death_1,death_2,death_3,death_4]),(safeZoneX + _offset),safeZoneY,10,0,0,8000] spawn BIS_fnc_dynamicText;
	};

	dayz_originalPlayer = player;

	// recent murders menu
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_murderBoard.sqf";

	dayz_reduceItems = {
		private ["_item","_class","_amount","_qtyRemaining"];

		_item = _this select 0; //Item in current inventory.
		_class = _this select 1; //Class type to use.

		//Does player have the original item? (Not Really needed player_useMeds checks)
		if (_item in magazines player) exitWith {
			//Amount in current box (will be -1 for a random chance to start the reducing)
			_amount = getNumber(configfile >> "CfgMagazines" >> _item >> _class >> "amount");

			//Item to move too if there is some left
			_qtyRemaining = getText(configfile >> "CfgMagazines" >> _item >> _class >> "qtyRemaining");

			//Only run for the random amount.
			if (_amount == -1) then {
				//Chance to start the reduction
				if ([getNumber(configfile >> "CfgMagazines" >> _item >> _class >> "chance")] call fn_chance) then {
					player removeMagazine _item;
					player addMagazine _qtyRemaining;
				};
			} else {
				player removeMagazine _item;
				player addMagazine _qtyRemaining;
			};
		};
		true
	};

	DZE_PVE_Group_Check = {
		private ["_player", "_body", "_nameBody", "_ingroup", "_name"];

		_player = _this select 0;
		_body = _this select 1;
		_name = _player call DZE_fnc_getNamePlayer;
		_nameBody = _body getVariable ["bodyName","unknown"];
		_ingroup = false;

		{
			if (_nameBody == (_x call DZE_fnc_getNamePlayer)) exitwith {
				_ingroup = true;
			};
		} count (units group _player);

		if ((_nameBody != "unknown") && !(_name == _nameBody) && !_ingroup) exitwith {
			true
		};
		false
	};

	DZ_KeyDown_EH = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\keyboard.sqf";
	dayz_EjectPlayer = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\dze_ejectPlayer.sqf";
	fnc_isInsideBuilding = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_isInsideBuilding.sqf";	//_isInside = [_unit,_building] call fnc_isInsideBuilding;
	fnc_setCombat = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_setCombat.sqf";
	if (worldName == "namalsk") then {player_objectAII = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_objectA2.sqf";};

	///////////////////////////////////////////////////////////////////////////////////////////

	path('actions');

	FUNCTION(DZE_fnc_actionTakeBackpack);		// Player takes specified backpack from the ground.
	FUNCTION(DZE_fnc_playAction);			// Plays the specified action and returns whether the animation finished.
	FUNCTION(DZE_fnc_playActionPutDown);		// Plays the put-down action and returns whether the animation finished.
	FUNCTION(DZE_fnc_playActionRaiseWeapon);	// Plays the raise weapon action and returns whether the animation finished.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('actions\fire');

	FUNCTION(DZE_fnc_actionInflame);		// Turns the flame effect on or off for an ignitable object.
	FUNCTION(DZE_fnc_inflame);			// Controls the direct or networked proxy flame of a fireplace.
	FUNCTION(DZE_fnc_inflameShowMenu);		// Checks whether a direct or proxy fire action should be displayed.
	FUNCTION(DZE_fnc_isInflamed);			// Checks whether a fireplace or its networked proxy is burning.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('arrays');

	FUNCTION(DZE_fnc_apply);			// [A3] Applies the given code to each element of the given array (without modifying the original array).
	FUNCTION(DZE_fnc_selectDistinct);		// Returns a random selection of distinct entries from an array.
	FUNCTION(DZE_fnc_subSelect);			// Returns a sub-selection from an array or string.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('inventory');

	FUNCTION(DZE_fnc_getFreeBackpackSlots);	// Returns the number of free magazine-sized backpack slots.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('tools');

	FUNCTION(player_addToolbelt);			// Moves a configured weapon between the player's weapon slots and toolbelt.
	FUNCTION(player_addtoBack);			// Moves a supported toolbelt item into its melee weapon form.
	FUNCTION(DZE_fnc_addDuplicateTool);		// Adds a tool without overwriting an existing toolbelt item.
	FUNCTION(DZE_fnc_combineMatches);		// Combines partial matchboxes into boxes with up to five matches.
	FUNCTION(DZE_fnc_sharpenTool);			// Sharpens a configured blunt tool.
	FUNCTION(DZE_fnc_requiredItemsCheck);		// Checks a required inventory item and tool classes.
	FUNCTION(DZE_fnc_updateToolState);		// Processes one use of a configured multi-state tool.
	FUNCTION(DZE_fnc_toolBreak);			// Replaces one tool used by a completed action with its configured broken item.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('base');

	FUNCTION(DZE_fnc_findBases);			// Finds base markers within the configured base or minimum distance.
	FUNCTION(DZE_fnc_checkAccess);			// Checks object ownership, friendship, base access and door access.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('base\baseManagement');
	FUNCTION(DZE_fnc_baseToggleMarkers);		// Displays the active base boundary.
	FUNCTION(DZE_fnc_baseAddFriend);		// Adds the selected nearby player to the active base's friend list.
	FUNCTION(DZE_fnc_baseGetFriends);		// Refreshes the active base's friend list.
	FUNCTION(DZE_fnc_baseManagement);		// Opens the management dialog for the selected base.
	FUNCTION(DZE_fnc_baseNearbyHumans);	// Refreshes players eligible to become base friends.
	FUNCTION(DZE_fnc_baseObjects);		// Displays the active base's object count.
	FUNCTION(DZE_fnc_baseRemoveFriend);	// Removes the selected base friend.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('base\maintain');
	FUNCTION(DZE_fnc_baseMaintainRequirements);	// Calculates the maintenance price for a number of objects.
	FUNCTION(DZE_fnc_baseMaintainPreview);		// Displays the maintenance price for the active base.
	FUNCTION(DZE_fnc_baseMaintainAction);		// Pays for maintenance and requests the server update.
	FUNCTION(DZE_fnc_baseMaintain);			// Previews and requests maintenance for the active base.

	///////////////////////////////////////////////////////////////////////////////////////////

	if (DZE_doorManagement) then {
		path('base\doorManagement');

		FUNCTION(DZE_fnc_doorAddFriend);		// Adds the selected nearby player to the active door's friend list.
		FUNCTION(DZE_fnc_doorEnterCode);		// Opens the manual combination dialog.
		FUNCTION(DZE_fnc_doorGetFriends);		// Refreshes the active door's friend list.
		FUNCTION(DZE_fnc_doorManagement);		// Opens the management dialog for the selected door.
		FUNCTION(DZE_fnc_doorNearbyHumans);	// Refreshes players eligible to become door friends.
		FUNCTION(DZE_fnc_doorRemoveFriend);	// Removes the selected door friend.
	};

	///////////////////////////////////////////////////////////////////////////////////////////

	path('build');

	FUNCTION(DZE_fnc_checkBuildClassLimit);		// Checks a configured exact-class count inside a base.
	FUNCTION(DZE_fnc_checkBuildGroupLimit);		// Checks a configured object-group count inside a base.
	FUNCTION(DZE_fnc_checkBuildOpenGearLimit);	// Checks the configured open-gear object count inside a base.
	FUNCTION(DZE_fnc_displayHelpers);		// Creates or removes local helper spheres for buildable objects.
	FUNCTION(DZE_fnc_generateCode);			// Collects or generates a valid code for a lockable build object.
	FUNCTION(DZE_fnc_getBuildingSteps);		// Returns the number of animation steps required for build or deconstruct.
	FUNCTION(DZE_fnc_modularBuild);			// Construct a modular base-building object and save it to the database.
	FUNCTION(DZE_fnc_overlapsRoad);			// Returns whether an object's bounding box overlaps a nearby road segment.
	FUNCTION(DZE_fnc_queueBuildInput);		// Appends one build input to the active FIFO queue.

	path('build\remove');

	FUNCTION(DZE_fnc_createRemoveObjectOutput);	// Creates configured removal output and safely places backpack objects.
	FUNCTION(DZE_fnc_getConfiguredRemoveRefund);	// Reads and validates one configured RemoveObject refund.
	FUNCTION(DZE_fnc_getRemoveObjectRefund);		// Resolves category-specific removal output and preserved storage cargo.
	FUNCTION(DZE_fnc_removeNearby);			// Finds and removes the nearest object matching the requested classes.
	FUNCTION(DZE_fnc_removeObject);			// Coordinates removal of an eligible object.
	FUNCTION(DZE_fnc_requestObjectDeletion);		// Requests and confirms persistent deletion or removes transient wrecks locally.
	FUNCTION(DZE_fnc_runRemoveObjectProgress);	// Runs object-removal animation stages.

	path('build\modularBuilding');

	FUNCTION(DZE_fnc_buildAxialHelper);		// Creates local vertical helpers at the active plot center.
	FUNCTION(DZE_fnc_buildCollisionCheck);		// Detects and handles player movement caused by preview collisions.
	FUNCTION(DZE_fnc_buildPreviewAttach);		// Attaches the local build-preview helper to the player.
	FUNCTION(DZE_fnc_buildPreviewCleanup);		// Deletes local build-preview objects and helpers.
	FUNCTION(DZE_fnc_buildPreviewConfirm);		// Captures and confirms the final local preview transform.
	FUNCTION(DZE_fnc_buildPreviewCreate);		// Creates the complete local build-preview context.
	FUNCTION(DZE_fnc_buildPreviewDetach);		// Detaches the local build-preview helper from the player.
	FUNCTION(DZE_fnc_buildPreviewMove);		// Moves the local build preview along the selected axis.
	FUNCTION(DZE_fnc_buildPreviewPreventUnderground); // Cancels builds whose support point or model center is underground.
	FUNCTION(DZE_fnc_buildPreviewReset);		// Restores the local build preview and its menus.
	FUNCTION(DZE_fnc_buildPreviewSetup);		// Initializes the local build-preview attachment chain.
	FUNCTION(DZE_fnc_buildResetMenus);		// Resets snap and vector action menus after a transform reset.
	FUNCTION(DZE_fnc_buildTerrainAlign);		// Aligns the local build preview with the terrain surface.

	path('build\validation');

	FUNCTION(DZE_fnc_buildExit);			// Cleans up and reports a cancelled build.
	FUNCTION(DZE_fnc_buildValidate);			// Executes one table of build-validation functions.
	FUNCTION(DZE_fnc_buildValidationBlacklisted);	// Rejects building near blacklisted building classes.
	FUNCTION(DZE_fnc_buildValidationCancelled);	// Rejects a build cancelled by the player.
	FUNCTION(DZE_fnc_buildValidationClassLimit);	// Enforces the configured per-class limit inside a base.
	FUNCTION(DZE_fnc_buildValidationLockedDoorLimit); // Enforces the configured locked-door limit inside a base.
	FUNCTION(DZE_fnc_buildValidationLockedStorageLimit); // Enforces the configured locked-storage limit inside a base.
	FUNCTION(DZE_fnc_buildValidationOpenGearLimit);	// Enforces the configured open-gear object limit inside a base.
	FUNCTION(DZE_fnc_buildValidationExistingPlot);	// Rejects a new plot overlapping an existing plot.
	FUNCTION(DZE_fnc_buildValidationHeight);		// Enforces the configured build-height limit.
	FUNCTION(DZE_fnc_buildValidationMap);		// Enforces the configured map extents.
	FUNCTION(DZE_fnc_buildValidationMovement);	// Rejects sustained fast movement during preview placement.
	FUNCTION(DZE_fnc_buildValidationNearestPlot);	// Resolves the single active base.
	FUNCTION(DZE_fnc_buildValidationNearObject);	// Rejects building near configured exclusion classes.
	FUNCTION(DZE_fnc_buildValidationObjectLimit);	// Enforces the maintained-object limit.
	FUNCTION(DZE_fnc_buildValidationPlotAccess);	// Validates access to the active plot.
	FUNCTION(DZE_fnc_buildValidationPlotDistance);	// Enforces player and preview distance from the active plot.
	FUNCTION(DZE_fnc_buildValidationPlotLimit);	// Enforces the per-player plot limit.
	FUNCTION(DZE_fnc_buildValidationRestrictedZone);	// Rejects building inside restricted zones.
	FUNCTION(DZE_fnc_buildValidationRoad);		// Rejects final preview overlap with roads.
	FUNCTION(DZE_fnc_buildValidationSafeZone);	// Rejects configured classes near safe zones.
	FUNCTION(DZE_fnc_buildValidationState);		// Validates the player's general build state.
	FUNCTION(DZE_fnc_buildValidationTools);		// Validates the required tools and items.
	FUNCTION(DZE_fnc_buildValidationTrader);		// Rejects building near traders.
	FUNCTION(DZE_fnc_buildValidationWater);		// Rejects building over sea water when disabled.

	path('build\snapBuilding');

	FUNCTION(DZE_fnc_snapBuilding);			// Displays the current snap-building helper panel.
	FUNCTION(DZE_fnc_snapActionCleanup);		// Creates, refreshes or removes the snapping action menus.
	FUNCTION(DZE_fnc_snapBuildAction);		// Handles snapping action-menu input.
	FUNCTION(DZE_fnc_snapCleanupOnBuildEnd);		// Removes snapping actions after the build preview ends.
	FUNCTION(DZE_fnc_snapDistanceCheck);		// Searches the closest compatible snap-point pair after events or movement.
	FUNCTION(DZE_fnc_snapDistanceSearchRequest);	// Marks the snap distance search dirty after an external event.
	FUNCTION(DZE_fnc_snapDistanceCheckStart);		// Starts the single snap distance-check worker.
	FUNCTION(DZE_fnc_snapDistanceCheckStop);		// Stops the active snap distance-check worker.
	FUNCTION(DZE_fnc_snapMoveHelper);		// Moves the helper to the selected held-object snap point.
	FUNCTION(DZE_fnc_snapObject);			// Aligns the helper with a compatible nearby snap point.
	FUNCTION(DZE_fnc_snapPointDefinition);		// Builds explicit snap metadata for a generated model-space point.
	FUNCTION(DZE_fnc_snapPointMetadata);		// Validates explicit snap-point type and normal metadata.
	FUNCTION(DZE_fnc_snapPointsCompatible);		// Validates a universal snap-point connection pair.
	FUNCTION(DZE_fnc_snapRelativeOrientation);	// Selects the nearest valid target-relative orthogonal orientation.
	FUNCTION(DZE_fnc_snapPointsCleanup);		// Deletes all local snapping helpers.
	FUNCTION(DZE_fnc_snapPointsForObject);		// Returns configured or generated snap points for a build object.
	FUNCTION(DZE_fnc_snapPointsInit);		// Creates snap-point helpers on the held object.
	FUNCTION(DZE_fnc_snapPointsNearbyInit);		// Creates snap-point helpers on nearby objects.
	FUNCTION(DZE_fnc_snapRefresh);			// Refreshes nearby snap points after object movement.
	FUNCTION(DZE_fnc_snapSelect);			// Selects the next or previous snapping state.
	FUNCTION(DZE_fnc_snapStateTransition);		// Applies one complete snap-state transition.
	FUNCTION(DZE_fnc_snapSurfacePoint);		// Refines a generated point against collision geometry.
	FUNCTION(DZE_fnc_snapText);			// Displays information over the selected snap point.

	path('build\vectorBuilding');

	FUNCTION(DZE_fnc_vectorActionCleanup);		// Creates, refreshes or removes the vector-rotation action menu.
	FUNCTION(DZE_fnc_vectorBuildAction);		// Handles vector-building action-menu input.
	FUNCTION(DZE_fnc_vectorChangeDegree);		// Selects the adjacent vector-building rotation increment.
	FUNCTION(DZE_fnc_vectorDegreeActionCleanup);	// Creates, refreshes or removes the vector-degree action menu.
	FUNCTION(DZE_fnc_vectorReset);			// Resets the build helper orientation.
	FUNCTION(DZE_fnc_vectorRotate2D);		// Rotates the build helper around the parent-relative or world Z axis.
	FUNCTION(DZE_fnc_vectorRotate3D);		// Applies a relative rotation around one local axis.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('geometry');

	FUNCTION(DZE_fnc_inAngleSector);		// Returns true if a position lies within an angle sector.
	FUNCTION(DZE_fnc_overlapsBox2D);		// Returns whether two projected bounding boxes overlap using SAT.
	FUNCTION(DZE_fnc_projectBox2D);		// Projects an object's bounding box into world XY space for SAT.
	FUNCTION(DZE_fnc_terrainIntersectAtASL);	// Returns the terrain or sea-level intersection between two ASL positions.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('gui');

	FUNCTION(DZE_fnc_checkStealth);			// Calculate player's noise and visibility.
	FUNCTION(DZE_fnc_highlightText);		// Displays fixed or relative text over the specified object.
	FUNCTION(DZE_fnc_lootText);			// Displays floating text above a lootpile.
	FUNCTION(DZE_fnc_rollingMessages);		// Display a rolling message at the lower center of screen.
	FUNCTION(DZE_fnc_updateGUI);			// Handle primary GUI updates.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('keyboard');

	FUNCTION(DZE_fnc_onKeyDown);			// Handle key down operations.
	FUNCTION(DZE_fnc_onKeyUp);			// Handle key up operations.
	call_sqf(kb_functions);				// Keyboard functions.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('lights');

///	FUNCTION(DZE_fnc_enableFlashlight);		//
///	FUNCTION(DZE_fnc_getFlashlightData);		// Returns flashlight config values for current weapon.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('locations');

///	FUNCTION(DZE_fnc_nearestLocationName);		// Returns the name of the nearest location within the given radius.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('loot');

	FUNCTION(DZE_fnc_buildingSpawnLoot);		// Spawns loot at the given building.
	FUNCTION(DZE_fnc_buildingSpawnZombies);		// Spawns zombies at the given building.
	FUNCTION(DZE_fnc_playerSpawnCheck);		// Check if nearby buildings need to spawn loot and zombies.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('player');

	FUNCTION(DZE_fnc_nearPlayerMan);			//	Checks if a player is near an object, this checks only the Man as model not a vehicle
///	FUNCTION(DZE_fnc_playerCheckStealth);		// Calculate player's noise and visibility.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('numbers');

	FUNCTION(DZE_fnc_randomRange);			// Returns a random integer between the supplied min/max range.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('objects');

	FUNCTION(DZE_fnc_createBackpack);		// Creates a backpack of the given type and aligns it with either the terrain or a flat surface.
	FUNCTION(DZE_fnc_revealObject);			// Reveals an object to all nearby players.
	FUNCTION(DZE_fnc_revealServerObject);	// Reveals an object sent by server to a specific player.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('positions');

	FUNCTION(DZE_fnc_AGLToASL);			// [A3] Converts position from PositionAGL to PositionASL.
	FUNCTION(DZE_fnc_ASLToAGL);			// [A3] Converts position from PositionASL to PositionAGL.
	FUNCTION(DZE_fnc_safeZonePosCheck);		// Returns true if a contextual action is prohibited within a detected safe zone, or false if allowed.
	FUNCTION(DZE_fnc_vehicleCenterWorld);		// Returns the vehicle's model center in PositionASL.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('strings');

	FUNCTION(DZE_fnc_getAnimation);			// Returns the specified sub-string of the unit's animation state.
	FUNCTION(DZE_fnc_isBentOver);			// Returns true if unit is bent over.
	FUNCTION(DZE_fnc_isStanding);			// Returns true if unit is standing.
	FUNCTION(DZE_fnc_isWeaponLowered);		// Returns true if unit's weapon is lowered.
	FUNCTION(DZE_fnc_isWeaponRaised);		// Returns true if unit's weapon is raised.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('vectors');

	FUNCTION(DZE_fnc_getRotationMatrix);		// Returns the object's world orientation as an [x,y,z] rotation matrix.
	FUNCTION(DZE_fnc_vectorDirAndUpRelative);	// Converts world vectorDirAndUp into a parent-relative orientation.
	FUNCTION(DZE_fnc_rotateObject2D);		// Rotates an object around its world Z axis specified by angles in degrees.
	FUNCTION(DZE_fnc_rotateObject3D);		// Rotates an object around its local axes specified by pitch, roll, and yaw angles in degrees.
	FUNCTION(DZE_fnc_rotateVector2D);		// Rotates the vector around the origin by the given angle.
	FUNCTION(DZE_fnc_matrixFromEuler);		// Convert Euler rotation vector to vectorDirAndUp matrix using the quaternion method.
	FUNCTION(DZE_fnc_matrixMultiply);		// [A3] Returns resulting matrix from the multiplication of two matrices.
	FUNCTION(DZE_fnc_matrixMultiply3D);		// Returns resulting matrix from the multiplication of a 3D vector and a matrix.
	FUNCTION(DZE_fnc_matrixToEuler);		// Convert 3x3 rotation matrix to Euler rotation vector.
	FUNCTION(DZE_fnc_matrixTranspose);		// [A3] Returns transposed version of the given matrix.
	FUNCTION(DZE_fnc_matrixTranspose3x3);		// [A3] Returns transposed version of the given 3x3 matrix.
	FUNCTION(DZE_fnc_vectorCrossProduct);		// [A3] Returns the cross product of two 3D vectors.
	FUNCTION(DZE_fnc_vectorDistance);		// [A3] Returns Euclidean distance between two 3D points.
	FUNCTION(DZE_fnc_vectorDotProduct);		// [A3] Returns the dot product of two 3D vectors.
	FUNCTION(DZE_fnc_vectorMagnitude);		// [A3] Returns the magnitude of a 3D vector.
	FUNCTION(DZE_fnc_vectorNormalized);		// [A3] Returns normalized vector (unit vector, vectorMagnitude == 1) of given 3D vector.

	path('vectors\v2');

	FUNCTION(DZE_fnc_v2DotProduct);			// Returns the dot product of two 2D vectors.

	path('vectors\v3');

	FUNCTION(DZE_fnc_v3Add);			// Returns the sum of two 3D vectors.
	FUNCTION(DZE_fnc_v3Diff);			// Subtracts one 3D vector from another (vector1 - vector2).
	FUNCTION(DZE_fnc_v3Divide);			// Divides a 3D vector by a scalar.
	FUNCTION(DZE_fnc_v3Multiply);			// Multiplies a 3D vector by a scalar.

	///////////////////////////////////////////////////////////////////////////////////////////

	path('zombies');

	FUNCTION(DZE_fnc_zombieGenerate);		// Spawns a zombie at the given location.

};

path('positions');

FUNCTION(DZE_fnc_getNearestLocation);	//	Returns the nearest Town, City etc. and if no found Wilderness
FUNCTION(DZE_fnc_modelCenterWorld);	// Returns the object's model center in PositionASL.
FUNCTION(DZE_fnc_setPosWorld);		// [A3] Sets position of an object based on the model's center position.

path('player');

FUNCTION(DZE_fnc_getNamePlayer);

path('verification');

FUNCTION(DZE_fnc_checkValidClassname);


//Both
BIS_fnc_selectRandom = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_selectRandom.sqf";
BIS_fnc_vectorAdd = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_vectorAdd.sqf";
BIS_fnc_halo = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_halo.sqf";
BIS_fnc_findNestedElement =	compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_findNestedElement.sqf";
BIS_fnc_param = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\BIS_fnc\fn_param.sqf";
BIS_fnc_relativeDirTo = compile("private '_dir';_dir=_this call{" + (preprocessFileLineNumbers "ca\modules\Functions\geometry\fn_relativeDirTo.sqf")+"};if(_dir>180)then{_dir=_dir-360;};if(_dir<-180)then{_dir=_dir+360;};_dir");
fnc_buildWeightedArray = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_buildWeightedArray.sqf";		//Checks which actions for nearby casualty
fnc_getPos = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_getPos.sqf";
fnc_spawnObjects = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_spawnObjects.sqf";
object_getHit = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_getHit.sqf";			//gets the hit value for a HitPoint (i.e. HitLegs) against the selection (i.e. "legs"), returns the value
object_processHit = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_processHit.sqf";		//process the hit in the REVO damage system (records and sets hit)

fn_vehicleAddons = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_vehicleAddons.sqf";
fn_clearTurrets = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_clearTurrets.sqf";
fn_fillTurrets = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_fillTurrets.sqf";

// Vehicle damage fix
fnc_veh_handleDam = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\veh_handleDam.sqf";
fnc_veh_handleKilled = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\veh_handleKilled.sqf";
fnc_veh_handleRepair = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\veh_handleRepair.sqf";	//process the hit as a NORMAL damage (useful for persistent vehicles)
fnc_veh_ResetEH = compile preprocessFileLineNumbers "\z\addons\dayz_code\init\veh_ResetEH.sqf";			//Initialize vehicle
fnc_inString = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_inString.sqf";
dayz_zombieSpeak = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_speak.sqf";			//Used to generate random speech for a unit
vehicle_getHitpoints = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\vehicle_getHitpoints.sqf";
local_gutObject = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_gutObject.sqf";		//Generated on the server (or local to unit) when gutting an object
local_zombieDamage = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_damageHandlerZ.sqf";		//Generated by the client who created a zombie to track damage
local_setFuel = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_setFuel.sqf";			//Generated when someone refuels a vehicle
local_eventKill = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_eventKill.sqf";		//Generated when something is killed
player_humanityChange = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\player_humanityChange.sqf"; //New
unit_setFractures = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\unit_setFractures.sqf";			//set fractures on players
player_bloodCalc = compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\bloodCalc.sqf";
fn_selectRandomLocation = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_selectRandomLocation.sqf";
fn_addCargo = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_addCargo.sqf";
fn_chance = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_selectRandomChance.sqf";
fn_getModelName = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_getModelName.sqf";
fnc_Obj_FenceHandleDam = {}; //Needed for vanilla fences to prevent rpt errors
object_roadFlare = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\object_roadFlare.sqf";
fn_shuffleArray = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_shuffleArray.sqf";
zombie_initialize = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\zombie_initialize.sqf";
if (DZE_Bloodsuckers) then {
	mutant_initialize = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\mutant_initialize.sqf";
};	
call compile preprocessFileLineNumbers "\z\addons\dayz_code\traps\init.sqf";
fnc_fieldOfView = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_fieldOfView.sqf";
fnc_deleteAt = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_deleteAt.sqf";

if (dayz_townGenerator) then {
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\psrnd.sqf"; // pseudo random for plantSpanwer
} else {
	//Spawn waterHoleProxies manually if townGenerator is disabled
	if (!isDedicated && (toLower worldName in ["chernarus","namalsk","napf"])) then {
		execVM ("\z\addons\dayz_code\system\mission\" + (toLower worldName) + "\waterHoleProxy.sqf");
	};
};

// EPOCH ADDITIONS
BIS_fnc_numberDigits = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_numberDigits.sqf";
BIS_fnc_numberText = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\fn_numberText.sqf";
local_lockUnlock = compile preprocessFileLineNumbers "\z\addons\dayz_code\compile\local_lockUnlock.sqf"; //When vehicle is local to unit perform locking vehicle
dayz_groupInvite = compile preprocessFileLineNumbers "\z\addons\dayz_code\groups\handleInvite.sqf";

player_sumMedical = {
	private["_character","_wounds","_legs","_arms","_medical","_status"];
	_character = _this;
	_wounds = [];
	if (_character getVariable["USEC_injured",false]) then {
		{
			_status = _character getVariable["hit_"+_x,false];
			if ((typeName _status == "BOOLEAN") && {(_status)}) then {
				_wounds set [count _wounds,_x];
			};
		} forEach USEC_typeOfWounds;
	};
	_legs = _character getVariable ["hit_legs",0];
	_arms = _character getVariable ["hit_arms",0];
	_medical = [
		_character getVariable["USEC_isDead",false],
		_character getVariable["NORRN_unconscious", false],
		_character getVariable["USEC_infected",false],
		_character getVariable["USEC_injured",false],
		_character getVariable["USEC_inPain",false],
		_character getVariable["USEC_isCardiac",false],
		_character getVariable["USEC_lowBlood",false],
		_character getVariable["USEC_BloodQty",12000],
		_wounds,
		[_legs,_arms],
		_character getVariable["unconsciousTime",0],
		_character getVariable["blood_type",""],
		_character getVariable["rh_factor",""],
		_character getVariable["messing",[0,0,0]],
		_character getVariable["blood_testdone",false]
	];
	_medical
};

dayz_engineSwitch = {
	private["_vehicle","_state"];
	_vehicle = _this select 0;
	_state = _this select 1;

	if (local _vehicle) then {
		_vehicle engineOn _state;
	} else {
		PVDZ_send = [_vehicle,"SetEngineState",[_vehicle,_state]];
		publicVariableServer "PVDZ_send";
	};
};
/**
DZE_SafeZonePosCheck = {
	private ["_customRadius","_position","_skipPos"];
	_position = _this select 0;
	_customRadius = count _this > 1;
	_skipPos = false;

	if (!DZE_SafeZoneZombieLoot or _customRadius) then {
		{
			if ((_position distance (_x select 0)) < (if (_customRadius) then {_this select 1} else {_x select 1})) exitWith {_skipPos = true;};
		} forEach DZE_SafeZonePosArray;
	};
	_skipPos;
};
**/
fnc_lockCode = {
	private ["_color","_code","_cText"];

	if (_this == "") exitWith {0};

	_code = [_this,parseNumber _this] select (typeName _this == "STRING");

	if (_code < 10000 || {_code > 10299}) exitWith {0};

	_color = "";
	_code = _code - 10000;

	if (isDedicated) then { // Always show the code server side non localized.
		_cText = ["Red","Green","Blue"];
	} else {
		_cText = [localize "STR_TEAM_RED",localize "STR_TEAM_GREEN",localize "STR_TEAM_BLUE"];
	};

	if (_code <= 99) then {_color = _cText select 0;};
	if (_code >= 100 && {_code <= 199}) then {_color = _cText select 1; _code = _code - 100;};
	if (_code >= 200) then {_color = _cText select 2; _code = _code - 200;};
	if (_code <= 9) then {_code = format["0%1", _code];};
	_code = format ["%1%2",_color,_code];

	_code
};

fnc_gearCount = {
	local _counter = 0;
	{_counter = _counter + _x;} count _this;
	_counter
};

fnc_sanitizeInput = {
	local _input = _this select 0;
	local _type = _this select 1;	// 0 = Number, 1 = String
	
	_input = toArray (_input);
	local _badChars = [60,62,38,123,125,91,93,59,58,39,96,126,44,46,47,63,124,92,34];

	{
		_input = _input - [_x];
	} forEach _badChars;
	
	_input = toString (_input);
	
	if (_type == 0) then {_input = parseNumber _input;};
	
	_input
};

DZE_fnc_findBuildableObjects = compile preprocessFileLineNumbers '\z\addons\dayz_code\functions\base\DZE_fnc_findBuildableObjects.sqf';


//	Enable this if your server got nuked on Chernarus or Chernarus Winter.
/*
if (toLower worldName in ["chernarus","chernarus_winter"]) then { //need to add building coordinates for other maps
	{
		local _fckingcode = {
			local _building = _this select 0;
			local _part = _this select 1;
			local _dmgLvl = 1 min (_this select 2);
			local _who = _this select 3;
			local _ammo = _this select 4;			
			if (_part != 'glass' && _dmgLvl > 0.01) then {
				if (isServer) then {
					diag_log ['Log building damage', _this];
				} else {
					local _dis = 0;
					if (isNull _who) then {
						if (_ammo != "" && _ammo isKindOf "HelicopterExploSmall") then {
							_who = player;
							_dist = round (_who distance _building);
							PVDZ_sec_atp = format ["UID#%1 d4maged %2 %5 to %3pct with ammo %4 at dist4nce %6m.",
								getPlayerUID _who, typeOf _building, round (100 * _dmgLvl), _ammo, _part, _dist];
							publicVariableServer "PVDZ_sec_atp";
						};
					} else {
						if (_who == player) then {
							_dist = round (_who distance _building);
							PVDZ_sec_atp = format ["UID#%1 d4maged %2 %5 to %3pct with ammo %4 at dist4nce %6m.",
								getPlayerUID _who, typeOf _building, round (100 * _dmgLvl), _ammo, _part, _dist];
							publicVariableServer "PVDZ_sec_atp";
						};
					};
				};
			};
			if ((!isNull _who) && {(_who distance _building < 150)}) then {_dmgLvl} else {0}
		};
		local _building = [_x select 0,_x select 1,0] nearestObject (_x select 2);
		_building removeAllEventHandlers "handleDamage";
		_building addEventHandler ["handleDamage", _fckingcode];
	} forEach [
		[7069,7727,206458], [6009,7815,203486], [10638,8016,272598], [6553,5598,223435], [6914,11431,141876],
		[4660,9596,145234], [4788,10257,143923], [11467,7479,276453], [4628,10489,137736], [4551,6395,212964],
		[3815,8948,132069], [3804,8925,132182], [11957,9120,261904], [12031,9158,261252], [12057,9103,261945],
		[12227,9518,256625], [12237,9493,262727], [12256,9508,262732], [12275,9479,262631], [3064,7975,172476],
		[3055,7855,172835], [12742,9593,259691], [11254,12210,236245], [12780,10128,257815], [12805,10089,258268],
		[12803,10119,258288], [11251,4274,353940], [13100,7177,297715], [7098,2738,966951], [6817,2702,966613],
		[6379,2791,965644], [6414,2760,965688], [6371,2747,965657], [6386,2735,965658], [6410,2716,965659],
		[6383,2691,965643], [6899,2561,969372], [6854,2556,969371], [6770,2525,968272], [6901,2484,969736],
		[6783,2485,968116], [6507,2532,967694], [6835,2388,969223], [6578,2402,968509], [6661,2345,968949],
		[6679,2302,969332], [2587,5069,188570], [6537,2302,968797], [10424,2562,362226], [10420,2368,363222],
		[10443,2345,363318], [10481,2358,363308], [10365,2241,363748], [10518,2288,364628], [10457,2256,363454],
		[10174,1810,366820], [3589,2175,328944]
	];
};*/
