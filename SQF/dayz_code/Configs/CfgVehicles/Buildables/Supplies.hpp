class DZE_SupplyObject_Base: DZE_Building_Base {
	DZE_preventUnderground = 0;
	vehicleClass = "DayZ Epoch 1071 Supply";
};

class DZE_FuelPump: DZE_SupplyObject_Base {
	scope = 2;
	cost = 100;
	DZE_offset[] = {0,2,0};
	model = "\ca\Structures_E\Ind\Ind_FuelStation\Ind_FuelStation_Feed_ep1.p3d";
	mapSize = 2;
	armor = 400;
	displayName = $STR_EPOCH_FUELPUMP;
	DZE_buildingSteps = 2;
	DZE_bypassBase = 0;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "fuel_pump_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_LightPole: DZE_SupplyObject_Base {
	model = "\ASC\ASC_EU_Lights\ASC_lampa_old.p3d";
	accuracy = 1000;
	animated = 0;
	icon = "\ASC\ASC_EU_Lights\ico\icon_old1.paa";
	armor = 200;
	scope = 2;
	DZE_offset[] = {0,2.5,0};
	displayName = $STR_EPOCH_LIGHTPOLE;
	mapSize = 2;
	class HitPoints {
		class hide_bright {
			armor = 1;
			material = -1;
			name = "bright";
			visual = "bright";
			passThrough = 1;
			minimalHit = 0.01;
		};
	};

	class EventHandlers {
		init = "if (isnil ('ASC_EU_Lights')) then {ASC_EU_Lights=_this;} else {ASC_EU_Lights=ASC_EU_Lights+_this;};['1','ASC_EU_BulbO',(_this select 0)] execvm '\ASC\ASC_EU_Lights\ASC_LightHandler.sqf';";
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "light_pole_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Water_Pump: DZE_SupplyObject_Base {
	model = "\ca\buildings\misc\pumpa";
	destrType = "DestructBuilding";
	armor = 50;
	class UserActions {
		class Drink {
			displayName = "Drink";
			displayNameDefault = "Drink";
			priority = 3;
			radius = 3;
			position = "";
			showWindow = 1;
			onlyForPlayer = 1;
			shortcut = "";
			condition = "(['Drink',this] call userActionConditions)";
			statement = "['hands'] spawn player_fillWater;";
		};
	};
	scope = 2;
	mapSize = 2;
	displayName = $STR_EPOCH_WATERPUMP;
	DZE_buildingSteps = 1;
	DZE_offset[] = {0,2,0};
	//GhostPreview = "DZE_Water_Pump_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "water_pump_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Fueltank: DZE_SupplyObject_Base {
	scope = 2;
	destrType = "DestructTree";
	DZE_offset[] = {0,5,0};
	model = "\Ca\buildings2\Ind_Tank\Ind_TankSmall2";
	mapSize = 2;
	armor = 1200;
	displayName = $STR_EQUIP_NAME_FUELTANK_BIG;
	DZE_buildingSteps = 3;
	//GhostPreview = "DZE_Fueltank_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "fueltank_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Watertank: DZE_SupplyObject_Base {
	scope = 2;
	destrType = "DestructTree";
	DZE_offset[] = {0,5,0};
	model = "\Ca\buildings2\Ind_Tank\Ind_TankSmall";
	mapSize = 2;
	armor = 1200;
	displayName = $STR_EQUIP_NAME_WATERTANK;
	DZE_buildingSteps = 3;
	//GhostPreview = "DZE_Watertank_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "watertank_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Watertower: DZE_SupplyObject_Base {
	scope = 2;
	destrType = "DestructTree";
	DZE_offset[] = {0,5,0};
	model = "\CA\misc\water_tank.p3d";
	mapSize = 2;
	armor = 1200;
	ladders[] = {{"start", "end"}};
	displayName = $STR_EQUIP_NAME_WATERTOWER;
	DZE_buildingSteps = 3;
	//GhostPreview = "DZE_Watertower_Preview";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "watertower_kit";
		DZE_refundArray[] = {};
	};
};
