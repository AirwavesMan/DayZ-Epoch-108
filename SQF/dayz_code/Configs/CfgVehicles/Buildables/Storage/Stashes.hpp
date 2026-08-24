class DZE_Stash_Base: DZE_Storage_Base {
	scope = 0;	
	icon = "\Ca\misc3\data\Icons\icon_Atent_ca.paa";
	model = "\z\addons\dayz_communityassets\models\stash_small.p3d";
	
	displayname = $STR_VEH_NAME_STASH;
	mapsize = 3;	
	
	transportMaxMagazines = 12;	
	vehicleClass = "DayZ Epoch 1071 Stashes";
	
	DZE_offset[] = {0,2,0};
	upgradeBuilding[] = {};	
    DZE_bypassBase = 1;
	DZE_allowRotation = 0;	
};

class DZE_StashSmall: DZE_Stash_Base {
	scope = 2;
	armor = 5;
	displayname = $STR_VEH_NAME_STASH;
	upgradeBuilding[] = {"DZE_StashSmall1",{"ItemShovel"},{{"PartWoodPile",1}}};
};

class DZE_StashSmall1: DZE_StashSmall {
	armor = 10;
	displayname = $STR_VEH_NAME_STASH1;
	transportMaxMagazines = 14;
	upgradeBuilding[] = {"DZE_StashSmall2",{"ItemShovel"},{{"PartWoodPile",1}}};
};

class DZE_StashSmall2: DZE_StashSmall1 {
	armor = 15;
	displayname = $STR_VEH_NAME_STASH2;
	transportMaxMagazines = 16;
	upgradeBuilding[] = {"DZE_StashSmall3",{"ItemShovel"},{{"PartWoodPile",1}}};
};

class DZE_StashSmall3: DZE_StashSmall2 {
	armor = 20;
	displayname = $STR_VEH_NAME_STASH3;
	transportMaxMagazines = 18;
	upgradeBuilding[] = {"DZE_StashSmall4",{"ItemShovel"},{{"ItemLog",1}}};
};

class DZE_StashSmall4: DZE_StashSmall3 {
	armor = 25;
	displayname = $STR_VEH_NAME_STASH4;
	transportMaxMagazines = 20;
	upgradeBuilding[] = {"DZE_StashMedium",{"ItemShovel"},{{"ItemLog",1}}};
};

class DZE_StashMedium_base: DZE_Stash_Base {
	mapsize = 3;
	armor = 50;
	displayname = $STR_VEH_NAME_STASH_MED;
	model = "\z\addons\dayz_communityassets\models\dirt_stash_reinforced.p3d";
	scope = 2;
	transportMaxMagazines = 25;
	transportMaxWeapons = 1;
};

class DZE_StashMedium: DZE_StashMedium_base {
	upgradeBuilding[] = {"DZE_StashMedium1",{"ItemShovel"},{{"ItemPlank",1}}};
};

class DZE_StashMedium1: DZE_StashMedium {
	armor = 75;
	displayname = $STR_VEH_NAME_STASH_MED1;
	transportMaxMagazines = 50;
	transportMaxWeapons = 2;
	upgradeBuilding[] = {"DZE_StashMedium2",{"ItemShovel"},{{"ItemPlank",1}}};
};

class DZE_StashMedium2: DZE_StashMedium1 {
	armor = 100;
	displayname = $STR_VEH_NAME_STASH_MED2;
	transportMaxMagazines = 75;
	transportMaxWeapons = 4;
	upgradeBuilding[] = {"DZE_StashMedium3",{"ItemToolbox","ItemShovel","Hammer_DZE"},{{"ItemPlank",1},{"equip_nails",2}}};
};

class DZE_StashMedium3: DZE_StashMedium2 {
	armor = 125;
	displayname = $STR_VEH_NAME_STASH_MED3;
	transportMaxMagazines = 100;
	transportMaxWeapons = 8;
	transportMaxBackpacks = 1;
	upgradeBuilding[] = {"DZE_StashMedium4",{"ItemToolbox","ItemShovel","Hammer_DZE"},{{"PartWoodPlywood",1},{"equip_nails",2}}};
};

class DZE_StashMedium4: DZE_StashMedium3 {
	transportMaxWeapons = 16;
	upgradeBuilding[] = {};
	armor = 150;
	displayname = $STR_VEH_NAME_STASH_MED4;
	transportMaxMagazines = 125;
};
