class UH1_Base: Helicopter {
	class Turrets: Turrets {
		class MainTurret: MainTurret {
			class ViewOptics;
			class Turrets: Turrets {};
		};
		class RightDoorGun: MainTurret {
			class Turrets: Turrets {};
		};
		class CoPilotObs: MainTurret {
			class Turrets: Turrets {};
		};
	};
};
class DZE_Veh_UH1Y_M134: UH1_Base {
	scope = 2;
	displayName = "$STR_VEH_NAME_UH1Y";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 10;
	transportMaxMagazines = 30;
	transportMaxBackpacks = 4;
	weapons[] = {"CMFlareLauncher"};
	magazines[] = {"120Rnd_CMFlareMagazine"};
	fuelCapacity = 1333;
	radartype = 0;
	supplyRadius = 2.6;

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			//gunnerOpticsModel = "\ca\Weapons\optika_empty";
			magazines[] = {"2000Rnd_762x51_M134"};

			//gunnerOpticsModel = "\ca\Weapons\optika_empty";

			gunnerCompartments = "Compartment3";
		};
		class RightDoorGun: RightDoorGun {
			//gunnerOpticsModel = "\ca\Weapons\optika_empty";
			visionMode[] = {"Normal","NVG"};
			magazines[] = {"2000Rnd_762x51_M134"};

			//gunnerOpticsModel = "\ca\Weapons\optika_empty";

			gunnerCompartments = "Compartment3";
		};
		class CoPilotObs: CoPilotObs {
			class OpticsIn {
				class Wide {
					opticsDisplayName = "W";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {};
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
				};
				class Medium: Wide {
					opticsDisplayName = "M";
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
				};
				class Narrow: Wide {
					opticsDisplayName = "N";
					gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
					initFov = 0.029;
					minFov = 0.029;
					maxFov = 0.029;
				};
			};
		};
	};

	class EventHandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
		engine = "if (_this select 1) then {(_this select 0) animate ['mainrotor_folded',1]; (_this select 0) animate ['mainrotor_unfolded',0];} else {_this select 0 setVariable ['engineOffTime',diag_tickTime,false];};"; //Unfold
	};
	class UserActions {
		class HUDoff {
			displayName = "$STR_AM_HUDON";
			displayNameDefault = "$STR_AM_HUDON";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "(player==driver this)and(this animationphase ""HUDAction"" !=1)";
			statement = "this animate [""HUDAction"",1];this animate [""HUDAction_1"",1]";
		};
		class HUDon {
			displayName = "$STR_AM_HUDOFF";
			displayNameDefault = "$STR_AM_HUDOFF";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "(player==driver this)and(this animationphase ""HUDAction"" !=0)";
			statement = "this animate [""HUDAction"",0];this animate [""HUDAction_1"",0]";
		};
		class Fold {
			displayName = "$STR_AM_PACK";
			displayNameDefault = "$STR_AM_PACK";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'mainrotor_unfolded' == 0} && {diag_tickTime - (this getVariable ['engineOffTime',0]) > 20}";
			statement = "this animate ['mainrotor_folded',0]; this animate ['mainrotor_unfolded',1];";
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
			statement = "this animate ['mainrotor_folded',1]; this animate ['mainrotor_unfolded',0];";
		};
	};

	cargoCompartments[] = {"Compartment1","Compartment2","Compartment3"};
	enableManualFire = 0;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1Y_M134_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1Y_M134_1: DZE_Veh_UH1Y_M134 {
	displayName = "$STR_VEH_NAME_UH1Y+";
	original = "DZE_Veh_UH1Y_M134";
	armor = 70;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1Y_M134_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1Y_M134_2: DZE_Veh_UH1Y_M134_1 {
	displayName = "$STR_VEH_NAME_UH1Y++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 60;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1Y_M134_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1Y_M134_3: DZE_Veh_UH1Y_M134_2 {
	displayName = "$STR_VEH_NAME_UH1Y+++";
	fuelCapacity = 3000;
};

class DZE_Veh_UH1Y_M240: DZE_Veh_UH1Y_M134 {
	displayName = "$STR_VEH_NAME_UH1Y_M240";

	class Turrets: Turrets {
		class MainTurret: MainTurret {
			weapons[] = {"M240BC_veh"};
			magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
		};
		class RightDoorGun: RightDoorGun {
			weapons[] = {"M240BC_veh"};
			magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
		};
	};

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1Y_M240_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1Y_M240_1: DZE_Veh_UH1Y_M240 {
	displayName = "$STR_VEH_NAME_UH1Y_M240+";
	original = "DZE_Veh_UH1Y_M240";
	armor = 70;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1Y_M240_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1Y_M240_2: DZE_Veh_UH1Y_M240_1 {
	displayName = "$STR_VEH_NAME_UH1Y_M240++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 60;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1Y_M240_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1Y_M240_3: DZE_Veh_UH1Y_M240_2 {
	displayName = "$STR_VEH_NAME_UH1Y_M240+++";
	fuelCapacity = 3000;
};

class UH1Y;
class DZE_Veh_UH1Y_FFAR: UH1Y {
	scope = 2;
	displayName = "$STR_VEH_NAME_UH1Y_FFAR";
	vehicleClass = "DZE Vehicles Helicopters";

	DZE_MACRO_VEHICLE_SIDE
	DZE_MACRO_VEHICLE_CLEAR_CARGO
	DZE_MACRO_VEHICLE_CANSEE_AIR

	transportMaxWeapons = 10;
	transportMaxMagazines = 30;
	transportMaxBackpacks = 4;
	fuelCapacity = 1333;
	supplyRadius = 2.6;

	class Upgrades {
		ItemHeliAVE[] = {"DZE_Veh_UH1Y_FFAR_1",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliAVE",1},{"equip_metal_sheet",5},{"ItemScrews",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};

	class EventHandlers: DefaultEventhandlers {
		fired = "_this call BIS_Effects_EH_Fired;";
		engine = "if (_this select 1) then {(_this select 0) animate ['mainrotor_folded',1]; (_this select 0) animate ['mainrotor_unfolded',0];} else {_this select 0 setVariable ['engineOffTime',diag_tickTime,false];};"; //Unfold
	};
	class UserActions {
		class HUDoff {
			displayName = "$STR_AM_HUDON";
			displayNameDefault = "$STR_AM_HUDON";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "(player==driver this)and(this animationphase ""HUDAction"" !=1)";
			statement = "this animate [""HUDAction"",1];this animate [""HUDAction_1"",1]";
		};
		class HUDon {
			displayName = "$STR_AM_HUDOFF";
			displayNameDefault = "$STR_AM_HUDOFF";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "(player==driver this)and(this animationphase ""HUDAction"" !=0)";
			statement = "this animate [""HUDAction"",0];this animate [""HUDAction_1"",0]";
		};
		class Fold {
			displayName = "$STR_AM_PACK";
			displayNameDefault = "$STR_AM_PACK";
			priority = 0;
			position = "zamerny";
			showWindow = 0;
			radius = 1;
			onlyForPlayer = 1;
			condition = "!isEngineOn this && {player == driver this} && {this animationPhase 'mainrotor_unfolded' == 0} && {diag_tickTime - (this getVariable ['engineOffTime',0]) > 20}";
			statement = "this animate ['mainrotor_folded',0]; this animate ['mainrotor_unfolded',1];";
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
			statement = "this animate ['mainrotor_folded',1]; this animate ['mainrotor_unfolded',0];";
		};
	};
};

class DZE_Veh_UH1Y_FFAR_1: DZE_Veh_UH1Y_FFAR {
	displayName = "$STR_VEH_NAME_UH1Y_FFAR+";
	original = "DZE_Veh_UH1Y_FFAR";
	armor = 70;
	damageResistance = 0.02078;

	class Upgrades {
		ItemHeliLRK[] = {"DZE_Veh_UH1Y_FFAR_2",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliLRK",1},{"PartGeneric",2},{"ItemScrews",1},{"ItemWoodCrateKit",1},{"ItemGunRackKit",1},{"ItemTinBar",1},{"equip_scrapelectronics",2},{"equip_floppywire",2}}};
	};
};

class DZE_Veh_UH1Y_FFAR_2: DZE_Veh_UH1Y_FFAR_1 {
	displayName = "$STR_VEH_NAME_UH1Y_FFAR++";
	transportMaxWeapons = 20;
	transportMaxMagazines = 60;
	transportMaxBackpacks = 8;

	class Upgrades {
		ItemHeliTNK[] = {"DZE_Veh_UH1Y_FFAR_3",{"ItemToolbox","ItemSolder_DZE"},{},{{"ItemHeliTNK",1},{"PartFueltank",2},{"PartGeneric",2},{"ItemFuelBarrel",1},{"ItemTinBar",1},{"equip_scrapelectronics",1},{"equip_floppywire",1}}};
	};
};

class DZE_Veh_UH1Y_FFAR_3: DZE_Veh_UH1Y_FFAR_2 {
	displayName = "$STR_VEH_NAME_UH1Y_FFAR+++";
	fuelCapacity = 3000;
};
