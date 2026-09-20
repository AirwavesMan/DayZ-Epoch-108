class MV22;
class DZE_Veh_MV22: MV22 {

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_MV22_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	accuracy = 1000;
	displayName = "$STR_VEH_NAME_MV22";
	vehicleClass = "DZE Vehicles Planes";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 20;
	transportMaxMagazines = 400;
	transportMaxBackpacks = 10;
	fuelCapacity = 6513;
	class EventHandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
		engine = "if (_this select 1) then {{_this select 0 animate [_x,0]} count ['engine_prop_1_1_turn','engine_prop_1_2_turn','engine_prop_1_3_turn','engine_prop_2_1_turn','engine_prop_2_2_turn','engine_prop_2_3_turn','engine_prop_1_1_close','engine_prop_1_3_close','engine_prop_2_1_close','engine_prop_2_2_close','pack_engine_1','pack_engine_2','turn_wing'];} else {_this select 0 setVariable ['engineOffTime',diag_tickTime,false];};"; //Unfold
	};
	class UserActions {
		//class Repair {ACTION_REPAIR; radius = 8;};
		//class Salvage {ACTION_SALVAGE; radius = 8;};
		class PushPlane {ACTION_PUSH;};
		class Fold {
			displayName = "$STR_AM_PACK";
			displayNameDefault = "$STR_AM_PACK";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'turn_wing' == 0} && {diag_tickTime - (this getVariable ['engineOffTime',0]) > 8}";
			statement = "{this animate [_x,1]} count ['engine_prop_1_1_turn','engine_prop_1_2_turn','engine_prop_1_3_turn','engine_prop_2_1_turn','engine_prop_2_2_turn','engine_prop_2_3_turn','engine_prop_1_1_close','engine_prop_1_3_close','engine_prop_2_1_close','engine_prop_2_2_close','pack_engine_1','pack_engine_2','turn_wing'];";
		};
		class Unfold {
			displayName = "$STR_AM_UNPACK";
			displayNameDefault = "$STR_AM_UNPACK";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'turn_wing' == 1}";
			statement = "{this animate [_x,0]} count ['engine_prop_1_1_turn','engine_prop_1_2_turn','engine_prop_1_3_turn','engine_prop_2_1_turn','engine_prop_2_2_turn','engine_prop_2_3_turn','engine_prop_1_1_close','engine_prop_1_3_close','engine_prop_2_1_close','engine_prop_2_2_close','pack_engine_1','pack_engine_2','turn_wing'];";
		};
		class OpenRamp {
			displayName = "$STR_EPOCH_OPEN_RAMP";
			displayNameDefault = "$STR_EPOCH_OPEN_RAMP";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "player == driver this && (this animationPhase 'ramp_bottom' == 0)";
			statement = "this animate ['ramp_top',1]; this animate ['ramp_bottom',1];";
		};
		class CloseRamp {
			displayName = "$STR_EPOCH_CLOSE_RAMP";
			displayNameDefault = "$STR_EPOCH_CLOSE_RAMP";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "player == driver this && (this animationPhase 'ramp_bottom' == 1)";
			statement = "this animate ['ramp_top',0]; this animate ['ramp_bottom',0];";
		};
	};
};

class DZE_Veh_MV22_1: DZE_Veh_MV22 {
	displayName = "$STR_VEH_NAME_MV22+";
	original = "DZE_Veh_MV22";
	armor = 50;
	damageResistance = 0.00344;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_MV22_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_MV22_2: DZE_Veh_MV22_1 {
	displayName = "$STR_VEH_NAME_MV22++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 800;
	transportMaxBackpacks = 20;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_MV22_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_MV22_3: DZE_Veh_MV22_2 {
	displayName = "$STR_VEH_NAME_MV22+++";
	fuelCapacity = 13026;

	class Upgrades {};
};
