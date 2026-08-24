class DZE_CanvasHut: DZE_Building_Base {
	model = "\ca\Structures_E\Misc\Misc_Market\covering_hut_EP1";
	armor = 200;
	scope = 2;
	DZE_offset[] = {0,2.5,0};
	displayName = $STR_EPOCH_CANVASSUNSHADE;
	removeoutput[] = {{"sun_shade_kit",1}};
	mapSize = 2;
};

class DZE_DeerStand: DZE_Building_Base {
	model = "\Ca\Structures\Misc\Misc_DeerStand\misc_deerstand";
	ladders[] = {{"start1", "end1"}};
	armor = 300;
	scope = 2;
	DZE_offset[] = {0,5,0};
	displayName = $STR_EPOCH_DEERSTAND;
	removeoutput[] = {{"deer_stand_kit",1}};
	icon = "\Ca\Structures\Misc\Misc_DeerStand\data\icon\icon_deerstand_ca.paa";
	mapSize = 2;
	DZE_preventUnderground = 0;
};

class DZE_Scaffolding: DZE_Building_Base {
	model = "\Ca\Structures\Misc\Misc_Scaffolding\Misc_Scaffolding";
	icon = "\Ca\Structures\Data\Icons\icon_scaffolding_ca.paa";
	mapSize = 16;
	destrType = "DestructBuilding";
	scope = 2;
	displayName = $STR_EPOCH_SCAFFOLDING;
	DZE_buildingSteps = 6;
	animated = 0;
	accuracy = 0.3;
	DZE_offset[] = {0,10.5,0};
	removeoutput[] = {{"ItemScaffoldingKit",1}};
};

class DZE_Greenhouse: DZE_Building_Base {
	model = "\CA\Structures\Misc\Misc_Greenhouse\Misc_Greenhouse.p3d";
	scope = 2;
	icon = "\MAP_EU\icon\Icon.paa";
	mapSize = 2;
	displayName = $STR_EPOCH_GREENHOUSE;
	DZE_buildingSteps = 1;
	DZE_offset[] = {0,5,0};
	removeoutput[] = {{"greenhouse_kit",1}};
};

class DZE_Boggle: DZE_Building_Base {
	scope = 2;
	destrType = "DestructTree";
	DZE_offset[] = {0,3,0};
    model = "\CA\Structures\Misc\Misc_Small\Misc_Boogieman.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 800;
	displayName = $STR_EQUIP_NAME_BOGGLE;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	DZE_buildingSteps = 1;
	removeoutput[] = {{"boggle_kit",1}};
};

class DZE_Postbox: DZE_Building_Base {
	scope = 2;
	destrType = "DestructTree"; 
    model = "\CA\Structures\Misc\Misc_PostBox\Misc_PostBox.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 800;
	displayName = $STR_EQUIP_NAME_POSTBOX;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	removeoutput[] = {{"postbox_kit",1}};
	transportMaxWeapons = 1;
	transportMaxMagazines = 5;
	transportMaxBackpacks = 1;
};

class DZE_WorkBench: DZE_Building_Base {
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	DZE_offset[] = {0,1.5,-0.05};
	model = "\z\addons\dayz_epoch\models\workbench.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	displayName = $STR_EPOCH_WORKBENCH;
	maintainBuilding[] = {{"PartWoodLumber",1}};
	DZE_buildingSteps = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
};

class DZE_Satellite_Dish: DZE_Building_Base {
	scope = 2;
	destrType = "DestructTree";
	model = "\CA\misc3\parabola_big\parabola_big.p3d";
	mapSize = 2;
	armor = 800;
	displayName = $STR_EQUIP_NAME_SATELLITE_DISH;
	maintainBuilding[] = {{"PartGeneric",1}};
	DZE_buildingSteps = 1;
	removeoutput[] = {{"satellite_dish_kit",1}};
};
