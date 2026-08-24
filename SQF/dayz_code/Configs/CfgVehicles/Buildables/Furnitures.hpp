class DZE_Furniture_Base: DZE_Building_Base {
	vehicleClass = "DayZ Epoch 1071 Furniture";
};

class DZE_ParkBench: DZE_Furniture_Base {
	model = "\ca\buildings\misc\Lavicka_3";
	scope = 2;
	DZE_offset[] = {0,1.5,0};
	displayName = $STR_EPOCH_WOODBENCH;
	removeoutput[] = {{"park_bench_kit",1}};
};

class DZE_Bed: DZE_Furniture_Base {
	model = "\CA\buildings\furniture\postel_panelak2.p3d";
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_BED;
	DZE_buildingSteps = 1;
	DZE_offset[] = {0,2,0};
	removeoutput[] = {{"bed_kit",1}};
};

class DZE_Table: DZE_Furniture_Base {
	model = "\CA\buildings\furniture\stul_hospoda.p3d";
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_TABLE;
	DZE_buildingSteps = 1;
	DZE_offset[] = {0,2,0};
	removeoutput[] = {{"table_kit",1}};
};

class DZE_Office_Chair: DZE_Furniture_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\office_chair";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_CHAIR;
	DZE_buildingSteps = 1;
	DZE_offset[] = {0,2,0};
	removeoutput[] = {{"office_chair_kit",1}};
};

class DZE_CCTV: DZE_Furniture_Base {
	model = "\Ca\misc\Misc_loudspeakers";
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_CCTV;
	DZE_buildingSteps = 2;
	DZE_offset[] = {0,4,0};
	removeoutput[] = {{"cctv_kit",1}};
};

class DZE_Notebook: DZE_Furniture_Base {
	model = "\CA\misc2\Notebook\notebook";
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;	
	displayName = $STR_EPOCH_NOTEBOOK;
	DZE_buildingSteps = 1;
	DZE_offset[] = {0,2,0};
	DZE_preventUnderground = 0;
	removeoutput[] = {{"notebook_kit",1}};
};
