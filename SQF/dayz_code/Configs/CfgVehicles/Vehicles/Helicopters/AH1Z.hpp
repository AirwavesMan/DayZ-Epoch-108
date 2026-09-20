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
		ItemHeliAVE[] = {"DZE_Veh_AH1Z_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	class EventHandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
		engine = "if (_this select 1) then {(_this select 0) animate ['mainrotor_folded',1]; (_this select 0) animate ['mainrotor_unfolded',0]; (_this select 0) animate ['rotorshaft_unfolded',0];} else {_this select 0 setVariable ['engineOffTime',diag_tickTime,false];};"; //Unfold
	};
	class UserActions {
		class Fold {
			displayName = "$STR_AM_PACK";
			displayNameDefault = "$STR_AM_PACK";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'mainrotor_unfolded' == 0} && {diag_tickTime - (this getVariable ['engineOffTime',0]) > 20}";
			statement = "this animate ['mainrotor_folded',0]; this animate ['mainrotor_unfolded',1]; this animate ['rotorshaft_unfolded',1];";
		};
		class Unfold {
			displayName = "$STR_AM_UNPACK";
			displayNameDefault = "$STR_AM_UNPACK";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'mainrotor_unfolded' == 1}";
			statement = "this animate ['mainrotor_folded',1]; this animate ['mainrotor_unfolded',0]; this animate ['rotorshaft_unfolded',0];";
		};
	};
};

class DZE_Veh_AH1Z_1: DZE_Veh_AH1Z {
	displayName = "$STR_VEH_NAME_AH1Z+";
	original = "DZE_Veh_AH1Z";
	armor = 120; // base 60
	damageResistance = 0.01186; // base 0.00593

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_AH1Z_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_AH1Z_2: DZE_Veh_AH1Z_1 {
	displayName = "$STR_VEH_NAME_AH1Z++";
	transportMaxWeapons = 6;
	transportMaxMagazines = 40;
	transportMaxBackpacks = 2;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_AH1Z_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_AH1Z_3: DZE_Veh_AH1Z_2 {
	displayName = "$STR_VEH_NAME_AH1Z+++";
	fuelCapacity = 2666; // base 1333
};
