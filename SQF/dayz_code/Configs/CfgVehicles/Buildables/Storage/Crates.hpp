class DZE_WoodCrate: DZE_Storage_Base {
	model = "\ca\misc\drevena_bedna.p3d";
	scope = 2;
	destrType = "DestructBuilding";
	DZE_offset[] = {0,2,0};
	armor = 200;
	displayName = $STR_EPOCH_WOODCRATE;
	transportMaxMagazines = 50;
	transportMaxWeapons = 5;
	transportMaxBackpacks = 1;
	upgradeBuilding[] = {"DZE_WoodCrate2",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"PartWoodPlywood",2},{"ItemPlank",2},{"equip_nails",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodCrateKit";
		DZE_refundArray[] = {};
	};
};

class DZE_WoodCrate2: DZE_WoodCrate {
	upgradeBuilding[] = {};
	armor = 400;
	displayName = $STR_EPOCH_WOODCRATE2;
	transportMaxMagazines = 100;
	transportMaxWeapons = 10;
	transportMaxBackpacks = 2;
	DZE_buildingSteps = 2;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWoodCrateKit2";
		DZE_refundArray[] = {};
	};
};

class DZE_StorageCrate: DZE_Storage_Base {
	scope = 2;
	model = "z\addons\dayz_buildings\models\item_storage.p3d";
	displayName = $STR_EPOCH_STORAGECRATE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	DZE_offset[] = {0,2,-0.05};
	DZE_allowRotation = 0;
	transportMaxWeapons = 3;	
	transportMaxMagazines = 60;
	transportmaxbackpacks = 1;
	class RemoveObject: RemoveObject { // new
		DZE_refundKit = "storage_crate_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_CamoStorageCrate: DZE_Storage_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\dze_camo_ammobednaX.p3d";
	displayName = $STR_EPOCH_CAMO_STORAGE_CRATE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	DZE_buildingSteps = 3;
	DZE_offset[] = {0,2,-0.15};
	transportMaxWeapons = 15;	
	transportMaxMagazines = 55;
	transportmaxbackpacks = 6;
	class RemoveObject: RemoveObject { // new
		DZE_refundKit = "camo_storage_crate_kit";
		DZE_refundArray[] = {};
	};
};
