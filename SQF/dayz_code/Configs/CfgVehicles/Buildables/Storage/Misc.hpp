class DZE_GunRack: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_GUNRACK";
	model = "\ca\misc2\Gunrack1";
	armor = 200;
	transportMaxWeapons = 20;
	transportMaxMagazines = 10;
	transportMaxBackpacks = 0;
	DZE_offset[] = {0,2,0};
	DZE_upgradeBuilding[] = {"DZE_GunRack2",{"DZE_Tool_Toolbox","DZE_Tool_Handsaw","DZE_Tool_Hammer"},{{"ItemPlank",4},{"equip_nails",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_GunRack";
		DZE_refundArray[] = {};
	};
};

class DZE_GunRack2: DZE_GunRack {
	displayName = "$STR_EPOCH_GUNRACK2";
	DZE_upgradeBuilding[] = {};
	armor = 400;
	transportMaxWeapons = 40;
	transportMaxMagazines = 20;
	transportMaxBackpacks = 0;
	DZE_buildingSteps = 2;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_GunRack2";
		DZE_refundArray[] = {};
	};
};

class DZE_OutHouse: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_OUTHOUSE";
	model = "\ca\buildings\Misc\KBud";
	armor = 200;
	DZE_offset[] = {0,2,0};
	transportMaxMagazines = 4;
	transportMaxWeapons = 4;
	transportMaxBackpacks = 4;
	DZE_buildingSteps = 2;
	class transportmagazines {};
	class RemoveObject: RemoveObject { // new
		DZE_refundKit = "DZE_Item_Kit_Outhouse";
		DZE_refundArray[] = {};
	};
};

class DZE_WorkBench2: DZE_Building_Base {
    scope = 2;
	displayName = "$STR_EPOCH_WORKBENCH";
	destrType = "DestructTree";
	model = "z\addons\dayz_buildings\models\workbench.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	DZE_buildingSteps = 1;
	DZE_bypassBase = 0;
	DZE_preventUnderground = 0;
    cost = 100;
    DZE_offset[] = {0,2,-0.05};
    mapSize = 2;
    armor = 400;
    transportMaxWeapons = 10;
    transportMaxMagazines = 25;
    transportMaxBackpacks = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_WorkBench";
		DZE_refundArray[] = {};
	};	
};

class DZE_Advanced_WorkBench: DZE_Building_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WORKBENCH_ADVANCED";
	destrType = "DestructBuilding";
	model = "\z\addons\dayz_epoch_v\props\workbench\workbench_2.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	DZE_preventUnderground = 0;
	DZE_offset[] = {0,2,0};
	mapSize = 2;
	transportMaxWeapons = 45;	
	transportMaxMagazines = 30;
	transportmaxbackpacks = 1;	
	armor = 400;
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Advanced_WorkBench";
		DZE_refundArray[] = {};
	};
};

class DZE_CookTripod: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_ITEM_NAME_COOKINGTRIPOD";
	destrType = "DestructBuilding";
	icon = "\ca\data\data\Unknown_object.paa";
	model = "\z\addons\dayz_epoch_w\items\cook_tripod.p3d";
	DZE_offset[] = {0,2,0};
	DZE_allowRotation = 0;
	mapSize = 2;
	transportMaxWeapons = 0;	
	transportMaxMagazines = 15;
	transportmaxbackpacks = 0;
	armor = 500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Cook_Tripod";
		DZE_refundArray[] = {};
	};
};

class DZE_Stoneoven: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_STONEOVEN";
	destrType = "DestructTree";
	model = "\z\addons\dayz_epoch_v\props\oven\oven.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	DZE_offset[] = {0,2,0};
	mapSize = 2;
	armor = 400;
	transportMaxWeapons = 1;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 0;
	DZE_buildingSteps = 2;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Stoneoven";
		DZE_refundArray[] = {};
	};
};

class DZE_Commode: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_COMMODE";
	model = "\z\addons\dayz_epoch_v\base_building\storage\case_bedroom_b";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 3;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Commode";
		DZE_refundArray[] = {};
	};
};

class DZE_Wardrobe: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WARDROBE";
	model = "\z\addons\dayz_epoch_v\base_building\storage\Dhangar_whiteskrin";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 3;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Wardrobe";
		DZE_refundArray[] = {};
	};
};

class DZE_Fridge: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_FRIDGE";
	model = "\z\addons\dayz_epoch_v\base_building\storage\fridge";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 7;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 3;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Fridge";
		DZE_refundArray[] = {};
	};
};

class DZE_Washing_Machine: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WASHINGMACHINE";
	model = "\z\addons\dayz_epoch_v\base_building\storage\washing_machine";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 2;	
	transportMaxMagazines = 15;
	transportmaxbackpacks = 3;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Washing_Machine";
		DZE_refundArray[] = {};
	};
};

class DZE_Server_Rack: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SERVERRACK";
	model = "\z\addons\dayz_epoch_v\props\server\dze_server";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 25;
	transportmaxbackpacks = 1;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Server_Rack";
		DZE_refundArray[] = {};
	};
};

class DZE_ATM: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_ATM";
	model = "\z\addons\dayz_epoch_v\props\atm\dze_atm";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 4;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Atm";
		DZE_refundArray[] = {};
	};
};

class DZE_Armchair: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_ARMCHAIR";
	model = "\z\addons\dayz_epoch_v\base_building\storage\armchair";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 1;	
	transportMaxMagazines = 5;
	transportmaxbackpacks = 1;	
	DZE_offset[] = {0,2.5,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Armchair";
		DZE_refundArray[] = {};
	};
};

class DZE_Sofa: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_SOFA";
	model = "\z\addons\dayz_epoch_v\props\sofa\sofa";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 5;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 3;
	DZE_offset[] = {0,2.5,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Sofa";
		DZE_refundArray[] = {};
	};
};

class DZE_Arcade: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_ARCADE";
	model = "\z\addons\dayz_epoch_v\props\arcade\neagea";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 35;
	transportmaxbackpacks = 5;	
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Arcade";
		DZE_refundArray[] = {};
	};
};

class DZE_Vendmachine1: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_VENDINGMACHINE1";
	model = "\z\addons\dayz_epoch_v\props\vending\vendmachine_2";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	transportMaxWeapons = 15;	
	transportMaxMagazines = 45;
	transportmaxbackpacks = 5;
	DZE_offset[] = {0,2,0};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Vendmachine1";
		DZE_refundArray[] = {};
	};
};

class DZE_Vendmachine2: DZE_Storage_Base {
	scope = 2;
	displayName = "$STR_EPOCH_VENDINGMACHINE2";
	icon = "\ca\data\data\Unknown_object.paa";
	model = "\z\addons\dayz_epoch_v\base_building\storage\vending_machine";
	mapSize = 2;
	DZE_buildingSteps = 1;
	DZE_offset[] = {0,2,0};
	transportMaxWeapons = 15;	
	transportMaxMagazines = 45;
	transportmaxbackpacks = 5;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Vendmachine2";
		DZE_refundArray[] = {};
	};
};
