class IC_Fireplace1: House {
	scope = 2;
	displayname = $str_misc_campfire;
	model = "\Ca\misc3\Campfire";
	vehicleClass = "DayZ Epoch 1071 Infected Camp Objects";
};

class IC_Tent: House {
	armor = 10;
	destrtype = "DestructTent";
	displayname = $STR_VEH_NAME_TENT;
	icon = "\Ca\misc3\data\Icons\icon_Atent_ca.paa";
	mapsize = 3;
	model = "\CA\Misc3\A_tent";
	scope = 2;
	DZE_buildingSteps = 1;
	
	vehicleClass = "DayZ Epoch 1071 Infected Camp Objects";
	transportMaxMagazines = 50;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;

	class RemoveObject {
		DZE_neededTools[] = {};
		DZE_refundKit = "ItemTent";
		DZE_refundArray[] = {};
	};
};

class IC_DomeTent : IC_Tent {
	displayname = $STR_VEH_NAME_DOME_TENT;
	icon = "\Ca\buildings\Icons\i_Astan_CA.paa";
	model = "\ca\buildings\Tents\astan";
	vehicleClass = "DayZ Epoch 1071 Infected Camp Objects";
	
	transportMaxMagazines = 35;
	transportMaxWeapons = 15;
	transportMaxBackpacks = 0;

	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemDomeTent";
	};
};
