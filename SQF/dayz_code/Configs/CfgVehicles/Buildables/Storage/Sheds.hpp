class DZE_StorageShed: DZE_Storage_Base {
	armor = 1600;
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\Shed_M02.p3d";
	displayName = $STR_EPOCH_STORAGESHED;
	transportMaxMagazines = 400;
	transportMaxWeapons = 40;
	transportMaxBackpacks = 20;
	DZE_buildingSteps = 6;
	//GhostPreview = "DZE_StorageShed_Preview";

	class UserActions {
		class CloseDoor {
			position = "";
			displayName = $STR_DN_OUT_C_DOOR;
			radius = 4;
			onlyForPlayer = 1;
			condition = "this animationPhase 'open' == 1";
			statement = "this animate ['open', 0];";
		};

		class OpenDoor {
			position = "";
			displayName = $STR_DN_OUT_O_DOOR;
			radius = 4;
			onlyForPlayer = 1;
			condition = "this animationPhase 'open' == 0";
			statement = "this animate ['open', 1];";
		};
	};
	upgradeBuilding[] = {"DZE_StorageShed2",{"ItemToolbox","ItemCrowbar","ItemSledge"},{{"equip_metal_sheet",4},{"ItemMetalSheet",2},{"ItemScrews",2}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "storage_shed_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_StorageShed2: DZE_StorageShed {
	upgradeBuilding[] = {};
	armor = 3200;
	displayName = $STR_EPOCH_STORAGESHED2;
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
	model = "\ca\buildings\kulna";
	scope = 2;
	destrType = "DestructBuilding";
	DZE_offset[] = {0,3.5,0};
	armor = 800;
	displayName = $STR_EPOCH_WOODSHACK;
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 5;
	DZE_buildingSteps = 4;
	upgradeBuilding[] = {"DZE_WoodShack2",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",4},{"equip_nails",2}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wood_shack_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_WoodShack2: DZE_WoodShack {
	upgradeBuilding[] = {};
	armor = 1600;
	displayName = $STR_EPOCH_WOODSHACK2;
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
	model = "\ca\buildings2\Shed_wooden\Shed_wooden";
	scope = 2;
	destrType = "DestructBuilding";
	DZE_offset[] = {0,4,0};
	armor = 1000;
	displayName = $STR_EPOCH_NICEWOODSHED;
	transportMaxMagazines = 200;
	transportMaxWeapons = 20;
	transportMaxBackpacks = 10;
	DZE_buildingSteps = 5;
	upgradeBuilding[] = {"DZE_Wooden_shed2",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",8},{"equip_nails",2}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wooden_shed_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Wooden_shed2: DZE_Wooden_shed {
	upgradeBuilding[] = {};
	armor = 2000;
	displayName = $STR_EPOCH_NICEWOODSHED2;
	transportMaxMagazines = 300;
	transportMaxWeapons = 30;
	transportMaxBackpacks = 15;
	DZE_buildingSteps = 10;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wooden_shed_kit2";
		DZE_refundArray[] = {};
	};
};
