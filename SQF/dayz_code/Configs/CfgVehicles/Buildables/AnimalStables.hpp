class DZE_Doghouse: DZE_Building_Base {
	scope = 2;
	destrType = "DestructTree"; 
    model = "\CA\buildings\psi_bouda.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 800;
	displayName = $STR_EQUIP_NAME_DOG_HOUSE;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "doghouse_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Wild_Bee_Hive: DZE_Building_Base {
	scope = 2;
	displayName = $STR_EQUIP_NAME_WILD_BEE_HIVE;
	model = "\ca\buildings\misc\drevo_hromada";
	icon = "\Ca\Structures\Data\Icons\i_timbers_ca.paa"; 
	mapSize = 2;
	armor = 800;
	transportMaxWeapons = 1;
	transportMaxMagazines = 15;
	transportMaxBackpacks = 1;	
	class RemoveObject: RemoveObject {
		DZE_refundKit = "wild_bee_hive_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Rabbit_Hutch: DZE_Building_Base {
	scope = 2;
	destrType = "DestructTree"; 
    model = "\CA\Structures\Misc\Hutch\Misc_Hutch.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 800;
	displayName = $STR_EQUIP_NAME_RABBIT_HUTCH;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "rabbit_hutch_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Chicken_Coop: DZE_Building_Base {
	scope = 2;
	destrType = "DestructTree"; 
    model = "\CA\Structures\Misc\ChickenCoop\Misc_ChickenCoop.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 800;
	displayName = $STR_EQUIP_NAME_CHICKEN_COOP;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "chicken_coop_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Cow_Stable: DZE_Building_Base {
	scope = 2;
	displayName = $STR_EQUIP_NAME_COW_STABLE;
	model = "\ca\Buildings2\Shed_small\Shed_M03";
	icon = "\ca\data\data\Unknown_object.paa";
	DZE_offset[] = {0,4,0};
	mapSize = 2;
	armor = 1000;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 4;		
	class RemoveObject: RemoveObject {
		DZE_refundKit = "cow_stable_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Goat_Stable: DZE_Building_Base {
	scope = 2;
	displayName = $STR_EQUIP_NAME_GOAT_STABLE;
	model = "\ca\Buildings2\Shed_small\Shed_M03";
	icon = "\ca\data\data\Unknown_object.paa";
	DZE_offset[] = {0,4,0};
	mapSize = 2;
	armor = 1000;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 4;		
	class RemoveObject: RemoveObject {
		DZE_refundKit = "goat_stable_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Sheep_Stable: DZE_Building_Base {
	scope = 2;
	displayName = $STR_EQUIP_NAME_SHEEP_STABLE;
	model = "\ca\Buildings2\Shed_small\Shed_M03";
	icon = "\ca\data\data\Unknown_object.paa";
	DZE_offset[] = {0,4,0};
	mapSize = 2;
	armor = 1000;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 4;		
	class RemoveObject: RemoveObject {
		DZE_refundKit = "sheep_stable_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Boar_Stable: DZE_Building_Base {
	scope = 2;
	displayName = $STR_EQUIP_NAME_BOAR_STABLE;
	model = "\ca\Buildings2\Shed_small\Shed_M03";
	icon = "\ca\data\data\Unknown_object.paa";
	DZE_offset[] = {0,4,0};
	mapSize = 2;
	armor = 1000;
	transportMaxWeapons = 5;
	transportMaxMagazines = 25;
	transportMaxBackpacks = 4;		
	class RemoveObject: RemoveObject {
		DZE_refundKit = "boar_stable_kit";
		DZE_refundArray[] = {};
	};
};
