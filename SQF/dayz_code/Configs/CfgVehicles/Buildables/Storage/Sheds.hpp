class DZE_StorageShed: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_STORAGESHED";
	model = "\z\addons\dayz_epoch_v\base_building\storage\Shed_M02.p3d";
	armor = 1600;
	transportMaxMagazines = 400;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	DZE_buildingSteps = 6;
	//GhostPreview = "DZE_StorageShed_Preview";

	class UserActions {
		class CloseDoor {
			displayName = "$STR_DN_OUT_C_DOOR";
			position = "";
			condition = "this animationPhase 'open' == 1";
			statement = "this animate ['open', 0];";
			radius = 4;
			onlyForPlayer = 1;
		};

		class OpenDoor {
			displayName = "$STR_DN_OUT_O_DOOR";
			position = "";
			condition = "this animationPhase 'open' == 0";
			statement = "this animate ['open', 1];";
			radius = 4;
			onlyForPlayer = 1;
		};
	};
	DZE_upgradeBuilding[] = {"DZE_StorageShed2",{"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Sledge"},{{"equip_metal_sheet",4},{"ItemMetalSheet",2},{"ItemScrews",2}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "storage_shed_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_StorageShed2: DZE_StorageShed {
	displayName = "$STR_EPOCH_STORAGESHED2";
	DZE_upgradeBuilding[] = {};
	armor = 3200;
	transportMaxMagazines = 600;
	transportMaxWeapons = 60;
	transportMaxBackpacks = 30;
	DZE_buildingSteps = 12;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "storage_shed_kit2";
		DZE_refundArray[] = {};
	};
};

class DZE_WoodShack: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WOODSHACK";
	model = "\ca\buildings\kulna";
	destrType = "DestructBuilding";
	DZE_offset[] = {0,3.5,0};
	armor = 800;
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
	DZE_buildingSteps = 4;
	DZE_upgradeBuilding[] = {"DZE_WoodShack2",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"PartWoodPlywood",4},{"equip_nails",2}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wood_shack_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_WoodShack2: DZE_WoodShack {
	displayName = "$STR_EPOCH_WOODSHACK2";
	DZE_upgradeBuilding[] = {};
	armor = 1600;
	transportMaxMagazines = 175;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	DZE_buildingSteps = 8;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wood_shack_kit2";
		DZE_refundArray[] = {};
	};
};

class DZE_Wooden_shed: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_NICEWOODSHED";
	model = "\ca\buildings2\Shed_wooden\Shed_wooden";
	destrType = "DestructBuilding";
	DZE_offset[] = {0,4,0};
	armor = 1000;
	transportMaxMagazines = 200;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	DZE_buildingSteps = 5;
	DZE_upgradeBuilding[] = {"DZE_Wooden_shed2",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"PartWoodPlywood",8},{"equip_nails",2}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wooden_shed_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Wooden_shed2: DZE_Wooden_shed {
	displayName = "$STR_EPOCH_NICEWOODSHED2";
	DZE_upgradeBuilding[] = {};
	armor = 2000;
	transportMaxMagazines = 300;
	transportMaxWeapons = 30;
	transportMaxBackpacks = 15;
	DZE_buildingSteps = 10;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wooden_shed_kit2";
		DZE_refundArray[] = {};
	};
};
