class AH1Z;
class DZE_Veh_AH1Z: AH1Z {
	scope = 2;
	displayName = "$STR_VEH_NAME_AH1Z";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR
	fuelCapacity = 1333;
	supplyRadius = 1.3;


	class Upgrades {
		DZE_Item_Upgrade_HeliAVE[] = {"DZE_Veh_AH1Z_1",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliAVE",1},{"DZE_Item_Metal_Sheet",5},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};

	class EventHandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
		engine = "if (_this select 1) then {(_this select 0) animate ['mainrotor_folded',1]; (_this select 0) animate ['mainrotor_unfolded',0]; (_this select 0) animate ['rotorshaft_unfolded',0];} else {_this select 0 setVariable ['engineOffTime',diag_tickTime,false];};"; //Unfold
	};
	class UserActions {
		class Fold {
			displayName = "$STR_AM_PACK";
			displayNameDefault = "$STR_AM_PACK";
			position = "zamerny";
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'mainrotor_unfolded' == 0} && {diag_tickTime - (this getVariable ['engineOffTime',0]) > 20}";
			statement = "this animate ['mainrotor_folded',0]; this animate ['mainrotor_unfolded',1]; this animate ['rotorshaft_unfolded',1];";
			priority = 0;
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
		};
		class Unfold {
			displayName = "$STR_AM_UNPACK";
			displayNameDefault = "$STR_AM_UNPACK";
			position = "zamerny";
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'mainrotor_unfolded' == 1}";
			statement = "this animate ['mainrotor_folded',1]; this animate ['mainrotor_unfolded',0]; this animate ['rotorshaft_unfolded',0];";
			priority = 0;
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
		};
	};
};

class DZE_Veh_AH1Z_1: DZE_Veh_AH1Z {
	displayName = "$STR_VEH_NAME_AH1Z+";
	original = "DZE_Veh_AH1Z";
	armor = 120; // base 60
	damageResistance = 0.01186; // base 0.00593

	class Upgrades {
		DZE_Item_Upgrade_HeliLRK[] = {"DZE_Veh_AH1Z_2",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliLRK",1},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Metal_Screws",1},{"DZE_Item_Kit_WoodCrate",1},{"DZE_Item_Kit_GunRack",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",2},{"DZE_Item_Elec_Floppywire",2}}};
	};
};

class DZE_Veh_AH1Z_2: DZE_Veh_AH1Z_1 {
	displayName = "$STR_VEH_NAME_AH1Z++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		DZE_Item_Upgrade_HeliTNK[] = {"DZE_Veh_AH1Z_3",{"DZE_Tool_Toolbox","DZE_Tool_Solder"},{},{{"DZE_Item_Upgrade_HeliTNK",1},{"DZE_Item_Parts_Fueltank",2},{"DZE_Item_Metal_Parts",2},{"DZE_Item_Barrel_Fuel",1},{"DZE_Item_Cur_TinBar",1},{"DZE_Item_Elec_Scrapelectronics",1},{"DZE_Item_Elec_Floppywire",1}}};
	};
};

class DZE_Veh_AH1Z_3: DZE_Veh_AH1Z_2 {
	displayName = "$STR_VEH_NAME_AH1Z+++";
	fuelCapacity = 2666; // base 1333
};
