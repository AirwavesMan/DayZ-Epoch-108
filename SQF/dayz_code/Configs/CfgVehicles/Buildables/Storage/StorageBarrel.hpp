// Storage Barrels
class DZE_StorageBarrel_Base: DZE_Storage_Base {
	scope = 0;
	cost = 100;
	DZE_offset[] = {0,1.5,0};
	icon = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	mapSize = 2;
	armor = 400;
	DZE_buildingSteps = 2;
	upgradeBuilding[] = {};
};

class DZE_StorageBarrelRed1: DZE_StorageBarrel_Base {
	scope = 2;
	displayName = $STR_EPOCH_STORAGEBARRELRED;	
    model = "\CA\misc\Barel1.p3d";
	removeoutput[] = {{"ItemStorageBarrel1_kit",1}};
	transportMaxWeapons = 7;
	transportMaxMagazines = 70;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"DZE_StorageBarrelRed2",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class DZE_StorageBarrelRed2: DZE_StorageBarrel_Base {
	scope = 2;
	model = "\CA\misc\Barel1.p3d";
	removeoutput[] = {{"ItemStorageBarrel1_kit",1}};
	displayName = $STR_EPOCH_STORAGEBARRELRED2;
	transportMaxWeapons = 10;
	transportMaxMagazines = 100;
	transportMaxBackpacks = 4;
};

class DZE_StorageBarrelEpoch1: DZE_StorageBarrel_Base {
	scope = 2;
	displayName = $STR_EPOCH_STORAGEBARRELEPOCH;	
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	removeoutput[] = {{"ItemStorageBarrel2_kit",1}};
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"DZE_StorageBarrelEpoch2",{"ItemToolbox","Handsaw_DZE","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class DZE_StorageBarrelEpoch2: DZE_StorageBarrel_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	removeoutput[] = {{"ItemStorageBarrel2_kit",1}};
	displayName = $STR_EPOCH_STORAGEBARRELEPOCH2;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class DZE_StorageBarrelYellow1: DZE_StorageBarrel_Base {
	scope = 2;
	displayName = $STR_EPOCH_STORAGEBARRELYELLOW;	
    model = "\CA\misc\Barel3.p3d";
	removeoutput[] = {{"ItemStorageBarrel3_kit",1}};
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"DZE_StorageBarrelYellow2",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class DZE_StorageBarrelYellow2: DZE_StorageBarrel_Base {
	scope = 2;
	model = "\CA\misc\Barel3.p3d";
	removeoutput[] = {{"ItemStorageBarrel3_kit",1}};
	displayName = $STR_EPOCH_STORAGEBARRELYELLOW2;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class DZE_StorageBarrelBlack1: DZE_StorageBarrel_Base {
	scope = 2;
	displayName = $STR_EPOCH_STORAGEBARRELBLACK;	
    model = "\CA\misc\Barel4.p3d";
	removeoutput[] = {{"ItemStorageBarrel4_kit",1}};
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"DZE_StorageBarrelBlack2",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class DZE_StorageBarrelBlack2: DZE_StorageBarrel_Base {
	scope = 2;
	model = "\CA\misc\Barel4.p3d";
	removeoutput[] = {{"ItemStorageBarrel4_kit",1}};
	displayName = $STR_EPOCH_STORAGEBARRELBLACK2;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class DZE_StorageBarrelGreenDark1: DZE_StorageBarrel_Base {
	scope = 2;
	displayName = $STR_EPOCH_STORAGEBARRELGREENDARK;	
    model = "\CA\misc\Barel5.p3d";
	removeoutput[] = {{"ItemStorageBarrel5_kit",1}};
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"DZE_StorageBarrelGreenDark2",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class DZE_StorageBarrelGreenDark2: DZE_StorageBarrel_Base {
	scope = 2;	
	model = "\CA\misc\Barel5.p3d";
	removeoutput[] = {{"ItemStorageBarrel5_kit",1}};
	displayName = $STR_EPOCH_STORAGEBARRELGREENDARK2;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class DZE_StorageBarrelMilk1: DZE_StorageBarrel_Base {
	scope = 2;
	displayName = $STR_EPOCH_STORAGEBARRELMILK;	
    model = "\CA\misc\Barel6.p3d";
	removeoutput[] = {{"ItemStorageBarrel6_kit",1}};
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"DZE_StorageBarrelMilk2",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class DZE_StorageBarrelMilk2: DZE_StorageBarrel_Base {
	scope = 2;
	model = "\CA\misc\Barel6.p3d";
	removeoutput[] = {{"ItemStorageBarrel6_kit",1}};
	displayName = $STR_EPOCH_STORAGEBARRELMILK2;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class DZE_StorageBarrelGreen1: DZE_StorageBarrel_Base {
	scope = 2;
	displayName = $STR_EPOCH_STORAGEBARRELGREEN;	
    model = "\CA\misc\Barel7.p3d";
	removeoutput[] = {{"ItemStorageBarrel7_kit",1}};
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"DZE_StorageBarrelGreen2",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class DZE_StorageBarrelGreen2: DZE_StorageBarrel_Base {
	scope = 2;
	model = "\CA\misc\Barel7.p3d";
	removeoutput[] = {{"ItemStorageBarrel7_kit",1}};
	displayName = $STR_EPOCH_STORAGEBARRELGREEN2;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};

class DZE_StorageBarrelGreenRusty1: DZE_StorageBarrel_Base {
	scope = 2;
	displayName = $STR_EPOCH_STORAGEBARRELGREENRUSTY;	
    model = "\CA\misc\Barel8.p3d";
	removeoutput[] = {{"ItemStorageBarrel8_kit",1}};
	transportMaxWeapons = 8;
	transportMaxMagazines = 80;
	transportMaxBackpacks = 2;
	upgradeBuilding[] = {"DZE_StorageBarrelGreenRusty2",{"ItemToolbox","Hammer_DZE"},{{"equip_metal_sheet",3},{"ItemScrews",1}}};
};

class DZE_StorageBarrelGreenRusty2: DZE_StorageBarrel_Base {
	scope = 2;
	model = "\CA\misc\Barel8.p3d";
	removeoutput[] = {{"ItemStorageBarrel8_kit",1}};	
	displayName = $STR_EPOCH_STORAGEBARRELGREENRUSTY2;
	transportMaxWeapons = 12;
	transportMaxMagazines = 120;
	transportMaxBackpacks = 4;
};
