class DZE_GunRack: DZE_Storage_Base {
	model = "\ca\misc2\Gunrack1";
	armor = 200;
	scope = 2;
	displayName = $STR_EPOCH_GUNRACK;
	transportMaxWeapons = 20;
	transportMaxMagazines = 10;
	transportMaxBackpacks = 0;
	DZE_offset[] = {0,2,0};
	upgradeBuilding[] = {"DZE_GunRack2",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"ItemPlank",4},{"equip_nails",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemGunRackKit";
		DZE_refundArray[] = {};
	};
};

class DZE_GunRack2: DZE_GunRack {
	upgradeBuilding[] = {};
	armor = 400;
	displayName = $STR_EPOCH_GUNRACK2;
	transportMaxWeapons = 40;
	transportMaxMagazines = 20;
	transportMaxBackpacks = 0;
	DZE_buildingSteps = 2;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemGunRackKit2";
		DZE_refundArray[] = {};
	};
};

class DZE_OutHouse: DZE_Storage_Base {
	model = "\ca\buildings\Misc\KBud";
	armor = 200;
	scope = 2;
	DZE_offset[] = {0,2,0};
	displayName = $STR_EPOCH_OUTHOUSE;
	transportMaxMagazines = 4;
	transportMaxWeapons = 4;
	transportMaxBackpacks = 4;
	DZE_buildingSteps = 2;
	class transportmagazines {};
	class RemoveObject: RemoveObject { // new
		DZE_refundKit = "outhouse_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_WorkBench2: DZE_Building_Base {
	DZE_buildingSteps = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
    scope = 2;
    destrType = "DestructTree";
    cost = 100;
    DZE_offset[] = {0,2,-0.05};
    model = "z\addons\dayz_buildings\models\workbench.p3d";
    icon = "\ca\data\data\Unknown_object.paa";
    mapSize = 2;
    armor = 400;
    displayName = $STR_EPOCH_WORKBENCH;
    transportMaxWeapons = 10;
    transportMaxMagazines = 25;
    transportMaxBackpacks = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWorkBench_DZE";
		DZE_refundArray[] = {};
	};	
};

class DZE_Advanced_WorkBench: DZE_Building_Base {
	DZE_preventUnderground = 0;
	scope = 2;
	destrType = "DestructBuilding";
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\props\workbench\workbench_2.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 45;	
	transportMaxMagazines = 30;
	transportmaxbackpacks = 1;	
	armor = 400;
	displayName = $STR_EPOCH_WORKBENCH_ADVANCED;
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "advanced_workBench_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_CookTripod: DZE_Storage_Base {
	scope = 2;
	displayName = $STR_ITEM_NAME_COOKINGTRIPOD;
	DZE_offset[] = {0,2,0};
	DZE_allowRotation = 0;
	destrType = "DestructBuilding";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 0;	
	transportMaxMagazines = 15;
	transportmaxbackpacks = 0;
	armor = 500;
	model = "\z\addons\dayz_epoch_w\items\cook_tripod.p3d";
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cook_tripod_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Stoneoven: DZE_Storage_Base {
	scope = 2;
	displayName = $STR_EPOCH_STONEOVEN;
	destrType = "DestructTree";
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\props\oven\oven.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 400;
	transportMaxWeapons = 1;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 0;
	DZE_buildingSteps = 2;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "stoneoven_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Commode: DZE_Storage_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\case_bedroom_b";
	displayName = $STR_EPOCH_COMMODE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 3;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "commode_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Wardrobe: DZE_Storage_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\Dhangar_whiteskrin";
	displayName = $STR_EPOCH_WARDROBE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 3;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wardrobe_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Fridge: DZE_Storage_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\fridge";
	displayName = $STR_EPOCH_FRIDGE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 7;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 3;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "fridge_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Washing_Machine: DZE_Storage_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\washing_machine";
	displayName = $STR_EPOCH_WASHINGMACHINE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 2;	
	transportMaxMagazines = 15;
	transportmaxbackpacks = 3;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "washing_machine_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Server_Rack: DZE_Storage_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\server\dze_server";
	displayName = $STR_EPOCH_SERVERRACK;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 1;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "server_rack_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_ATM: DZE_Storage_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\atm\dze_atm";
	displayName = $STR_EPOCH_ATM;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 4;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "atm_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Armchair: DZE_Storage_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\base_building\storage\armchair";
	displayName = $STR_EPOCH_ARMCHAIR;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 1;	
	transportMaxMagazines = 5;
	transportmaxbackpacks = 1;	
	DZE_offset[] = {0,2.5,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "armchair_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Sofa: DZE_Storage_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\sofa\sofa";
	displayName = $STR_EPOCH_SOFA;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 3;
	DZE_offset[] = {0,2.5,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "sofa_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Arcade: DZE_Storage_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\arcade\neagea";
	displayName = $STR_EPOCH_ARCADE;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 5;	
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "arcade_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Vendmachine1: DZE_Storage_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\vending\vendmachine_2";
	displayName = $STR_EPOCH_VENDINGMACHINE1;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 45;
	transportmaxbackpacks = 5;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "vendmachine1_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Vendmachine2: DZE_Storage_Base {
	scope = 2;
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	DZE_buildingSteps = 1;
	DZE_offset[] = {0,2,0};
	model = "\z\addons\dayz_epoch_v\base_building\storage\vending_machine";
	displayName = $STR_EPOCH_VENDINGMACHINE2;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 45;
	transportmaxbackpacks = 5;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "vendmachine2_kit";
		DZE_refundArray[] = {};
	};
};
