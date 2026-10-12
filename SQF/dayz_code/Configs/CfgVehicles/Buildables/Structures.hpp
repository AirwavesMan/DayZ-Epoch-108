class DZE_CanvasHut: DZE_Building_Base {
	scope = 2;
	displayName = "$STR_EPOCH_CANVASSUNSHADE";
	model = "\ca\Structures_E\Misc\Misc_Market\covering_hut_EP1";
	armor = 200;
	DZE_offset[] = {0,2.5,0};
	mapSize = 2;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Sun_Shade";
		DZE_refundArray[] = {};
	};
};

class DZE_DeerStand: DZE_Building_Base {
	scope = 2;
	displayName = "$STR_EPOCH_DEERSTAND";
	model = "\Ca\Structures\Misc\Misc_DeerStand\misc_deerstand";
	icon = "\Ca\Structures\Misc\Misc_DeerStand\data\icon\icon_deerstand_ca.paa";
	ladders[] = {{"start1", "end1"}};
	armor = 300;
	DZE_offset[] = {0,5,0};
	mapSize = 2;
	DZE_preventUnderground = 0;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Deer_Stand";
		DZE_refundArray[] = {};
	};
};

class DZE_Scaffolding: DZE_Building_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SCAFFOLDING";
	model = "\Ca\Structures\Misc\Misc_Scaffolding\Misc_Scaffolding";
	icon = "\Ca\Structures\Data\Icons\icon_scaffolding_ca.paa";
	destrType = "DestructBuilding";
	mapSize = 16;
	DZE_buildingSteps = 6;
	animated = 0;
	accuracy = 0.3;
	DZE_offset[] = {0,10.5,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Scaffolding";
		DZE_refundArray[] = {};
	};
};

class DZE_Greenhouse: DZE_Building_Base {
	scope = 2;
	displayName = "$STR_EPOCH_GREENHOUSE";
	model = "\CA\Structures\Misc\Misc_Greenhouse\Misc_Greenhouse.p3d";
	icon = "\MAP_EU\icon\Icon.paa";
	mapSize = 2;
	DZE_buildingSteps = 1;
	DZE_offset[] = {0,5,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Greenhouse";
		DZE_refundArray[] = {};
	};
};

class DZE_Boggle: DZE_Building_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_BOGGLE";
	destrType = "DestructTree";
    model = "\CA\Structures\Misc\Misc_Small\Misc_Boogieman.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	DZE_offset[] = {0,3,0};
	mapSize = 2;
	armor = 800;
	DZE_buildingSteps = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Boggle";
		DZE_refundArray[] = {};
	};
};

class DZE_Postbox: DZE_Building_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_POSTBOX";
	destrType = "DestructTree";
    model = "\CA\Structures\Misc\Misc_PostBox\Misc_PostBox.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 800;
	transportMaxWeapons = 1;
	transportMaxMagazines = 5;
	transportMaxBackpacks = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Postbox";
		DZE_refundArray[] = {};
	};
};

class DZE_WorkBench: DZE_Building_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WORKBENCH";
	destrType = "DestructTree";
	model = "\z\addons\dayz_epoch\models\workbench.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	cost = 100;
	DZE_offset[] = {0,1.5,-0.05};
	mapSize = 2;
	armor = 400;
	DZE_buildingSteps = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WorkBench_Epoch";
		DZE_refundArray[] = {{{"DZE_Item_Wood_Plywood",1},{"DZE_Item_Wood_Lumber",2}}};
	};
};

class DZE_Satellite_Dish: DZE_Building_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SATELLITE_DISH";
	destrType = "DestructTree";
	model = "\CA\misc3\parabola_big\parabola_big.p3d";
	mapSize = 2;
	armor = 800;
	DZE_buildingSteps = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Satellite_Dish";
		DZE_refundArray[] = {};
	};
};
