class DZE_Stash_Base: DZE_Storage_Base {
	scope = 0;	
	displayname = "$STR_VEH_NAME_STASH";
	icon = "\Ca\misc3\data\Icons\icon_Atent_ca.paa";
	model = "\z\addons\dayz_communityassets\models\stash_small.p3d";
	vehicleClass = "DayZ Epoch 1071 Stashes";
	
	mapsize = 3;	
	
	transportMaxMagazines = 12;	
	
	DZE_offset[] = {0,2,0};
	DZE_upgradeBuilding[] = {};
    DZE_bypassBase = 1;
	DZE_allowRotation = 0;	

	class RemoveObject: RemoveObject {
		DZE_neededTools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar","DZE_Tool_Shovel"};
	};	
};

class DZE_StashSmall: DZE_Stash_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_STASH";
	armor = 5;
	DZE_upgradeBuilding[] = {"DZE_StashSmall1",{"DZE_Tool_Shovel"},{{"PartWoodPile",1}}};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "StashSmall_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_StashSmall1: DZE_StashSmall {
	displayname = "$STR_VEH_NAME_STASH1";
	armor = 10;
	transportMaxMagazines = 14;
	DZE_upgradeBuilding[] = {"DZE_StashSmall2",{"DZE_Tool_Shovel"},{{"PartWoodPile",1}}};
};

class DZE_StashSmall2: DZE_StashSmall1 {
	displayname = "$STR_VEH_NAME_STASH2";
	armor = 15;
	transportMaxMagazines = 16;
	DZE_upgradeBuilding[] = {"DZE_StashSmall3",{"DZE_Tool_Shovel"},{{"PartWoodPile",1}}};
};

class DZE_StashSmall3: DZE_StashSmall2 {
	displayname = "$STR_VEH_NAME_STASH3";
	armor = 20;
	transportMaxMagazines = 18;
	DZE_upgradeBuilding[] = {"DZE_StashSmall4",{"DZE_Tool_Shovel"},{{"ItemLog",1}}};
};

class DZE_StashSmall4: DZE_StashSmall3 {
	displayname = "$STR_VEH_NAME_STASH4";
	armor = 25;
	transportMaxMagazines = 20;
	DZE_upgradeBuilding[] = {"DZE_StashMedium",{"DZE_Tool_Shovel"},{{"ItemLog",1}}};
};

class DZE_StashMedium_base: DZE_Stash_Base {
	scope = 2;
	displayname = "$STR_VEH_NAME_STASH_MED";
	model = "\z\addons\dayz_communityassets\models\dirt_stash_reinforced.p3d";
	mapsize = 3;
	armor = 50;
	transportMaxMagazines = 25;
	transportMaxWeapons = 1;
};

class DZE_StashMedium: DZE_StashMedium_base {
	DZE_upgradeBuilding[] = {"DZE_StashMedium1",{"DZE_Tool_Shovel"},{{"ItemPlank",1}}};
};

class DZE_StashMedium1: DZE_StashMedium {
	displayname = "$STR_VEH_NAME_STASH_MED1";
	armor = 75;
	transportMaxMagazines = 50;
	transportMaxWeapons = 2;
	DZE_upgradeBuilding[] = {"DZE_StashMedium2",{"DZE_Tool_Shovel"},{{"ItemPlank",1}}};
};

class DZE_StashMedium2: DZE_StashMedium1 {
	displayname = "$STR_VEH_NAME_STASH_MED2";
	armor = 100;
	transportMaxMagazines = 75;
	transportMaxWeapons = 4;
	DZE_upgradeBuilding[] = {"DZE_StashMedium3",{"DZE_Tool_Toolbox","DZE_Tool_Shovel","DZE_Tool_Hammer"},{{"ItemPlank",1},{"equip_nails",2}}};
};

class DZE_StashMedium3: DZE_StashMedium2 {
	displayname = "$STR_VEH_NAME_STASH_MED3";
	armor = 125;
	transportMaxMagazines = 100;
	transportMaxWeapons = 8;
	transportMaxBackpacks = 1;
	DZE_upgradeBuilding[] = {"DZE_StashMedium4",{"DZE_Tool_Toolbox","DZE_Tool_Shovel","DZE_Tool_Hammer"},{{"PartWoodPlywood",1},{"equip_nails",2}}};
};

class DZE_StashMedium4: DZE_StashMedium3 {
	displayname = "$STR_VEH_NAME_STASH_MED4";
	transportMaxWeapons = 16;
	DZE_upgradeBuilding[] = {};
	armor = 150;
	transportMaxMagazines = 125;
};
