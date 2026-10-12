class MV22;
class DZE_Veh_MV22: MV22 {
	displayName = "$STR_VEH_NAME_MV22";
	vehicleClass = "DZE Vehicles Planes";

	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_MV22_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
	accuracy = 1000;


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
		class PushPlane {
			ACTION_PUSH;
		};
		class Fold {
			displayName = "$STR_AM_PACK";
			displayNameDefault = "$STR_AM_PACK";
			position = "zamerny";
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'turn_wing' == 0} && {diag_tickTime - (this getVariable ['engineOffTime',0]) > 8}";
			statement = "{this animate [_x,1]} count ['engine_prop_1_1_turn','engine_prop_1_2_turn','engine_prop_1_3_turn','engine_prop_2_1_turn','engine_prop_2_2_turn','engine_prop_2_3_turn','engine_prop_1_1_close','engine_prop_1_3_close','engine_prop_2_1_close','engine_prop_2_2_close','pack_engine_1','pack_engine_2','turn_wing'];";
			priority = 0;
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
		};
		class Unfold {
			displayName = "$STR_AM_UNPACK";
			displayNameDefault = "$STR_AM_UNPACK";
			position = "zamerny";
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'turn_wing' == 1}";
			statement = "{this animate [_x,0]} count ['engine_prop_1_1_turn','engine_prop_1_2_turn','engine_prop_1_3_turn','engine_prop_2_1_turn','engine_prop_2_2_turn','engine_prop_2_3_turn','engine_prop_1_1_close','engine_prop_1_3_close','engine_prop_2_1_close','engine_prop_2_2_close','pack_engine_1','pack_engine_2','turn_wing'];";
			priority = 0;
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
		};
		class OpenRamp {
			displayName = "$STR_EPOCH_OPEN_RAMP";
			displayNameDefault = "$STR_EPOCH_OPEN_RAMP";
			position = "zamerny";
			condition = "player == driver this && (this animationPhase 'ramp_bottom' == 0)";
			statement = "this animate ['ramp_top',1]; this animate ['ramp_bottom',1];";
			priority = 0;
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
		};
		class CloseRamp {
			displayName = "$STR_EPOCH_CLOSE_RAMP";
			displayNameDefault = "$STR_EPOCH_CLOSE_RAMP";
			position = "zamerny";
			condition = "player == driver this && (this animationPhase 'ramp_bottom' == 1)";
			statement = "this animate ['ramp_top',0]; this animate ['ramp_bottom',0];";
			priority = 0;
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
		};
	};
};

class DZE_Veh_MV22_1: DZE_Veh_MV22 {
	displayName = "$STR_VEH_NAME_MV22+";
	original = "DZE_Veh_MV22";
	armor = 50;
	damageResistance = 0.00344;

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_MV22_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_MV22_2: DZE_Veh_MV22_1 {
	displayName = "$STR_VEH_NAME_MV22++";
	transportMaxWeapons = 40;
	transportMaxMagazines = 800;
	transportMaxBackpacks = 20;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_MV22_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_MV22_3: DZE_Veh_MV22_2 {
	displayName = "$STR_VEH_NAME_MV22+++";
	fuelCapacity = 13026;

	class Upgrades {};
};
