class Plant_Base: WeaponHolder {
	scope = 0;
	icon = "";
	mapSize = 0;
	transportMaxWeapons = 0;
	accuracy = 1000;
	class DestructionEffects{};
	favouritezones = "(meadow) * (forest) * (1 - houses) * (1 - sea)";
	displayName = "$STR_ITEM_NAME_comfrey";
	class eventHandlers {
		init="(_this select 0)setVariable['permaLoot',true];";
	};
	supplyRadius = 1;
	vehicleClass = "DayZ Epoch 1071 Plants";
};
	

class Dayz_Plant3: Plant_Base {
	scope = 2;
	model = "z\addons\dayz_communityassets\models\comfrey_up_small.p3d";
	transportMaxMagazines = 1;
	class TransportMagazines {
		class _xx_leaf {
			magazine = "equip_comfreyleafs";
			count = 1;
		};
	};
};

class Dayz_Plant2: Plant_Base {
	scope = 2;
	model = "z\addons\dayz_communityassets\models\comfrey_up_mid.p3d";
	transportMaxMagazines = 2;
	class TransportMagazines {
		class _xx_leaf {
			magazine = "equip_comfreyleafs";
			count = 2;
		};
	};
};

class Dayz_Plant1: Plant_Base {
	scope = 2;
	model = "z\addons\dayz_communityassets\models\comfrey_up.p3d";
	transportMaxMagazines = 3;
	class TransportMagazines {
		class _xx_leaf {
			magazine = "equip_comfreyleafs";
			count = 3;
		};
	};
};

class DZE_Compost_Barrel_Base : DZE_Plant_Base {
	scope = 0;
	icon = "\ca\data\data\Unknown_object.paa";
	model = "\CA\Structures\Misc\Armory\Barels\barrel_empty.p3d";
	armor = 100;
	mapsize = 2;
	vehicleClass = "DayZ Epoch 1071 Plants";	
	DZE_offset[] = {0,3,0};
};

class DZE_Compost_Barrel_Empty : DZE_Compost_Barrel_Base {
	scope = 2;
	displayName = $STR_EPOCH_COMPOST_BARREL_EMTPY;
};

class DZE_Compost_Barrel_Full : DZE_Compost_Barrel_Base {
	scope = 2;
	displayName = $STR_EPOCH_COMPOST_BARREL_FULL;
	model = "\CA\Structures\Misc\Armory\Barels\barrel_sand.p3d";
};

class DZE_Plant_Patch_Base : DZE_Plant_Base {
	scope = 0;
	model = "\z\addons\dayz_communityassets\models\stash_small.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	armor = 100;
	mapsize = 2;
	vehicleClass = "DayZ Epoch 1071 Plants";	
	DZE_offset[] = {0,3,0};
};	

class DZE_Plant_Patch_Pumpkin : DZE_Plant_Patch_Base {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_PUMPKIN;
};

class DZE_Plant_Patch_Sunflower : DZE_Plant_Patch_Base {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_SUNFLOWER;
};

class DZE_Plant_Patch_Carrot : DZE_Plant_Patch_Base {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_CARROT;
};

class DZE_Plant_Patch_Potato : DZE_Plant_Patch_Base {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_POTATO;
};

class DZE_Plant_Patch_Hemp : DZE_Plant_Patch_Base {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_HEMP;
};

class DZE_Plant_Patch_Tobacco : DZE_Plant_Patch_Base {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_TOBACCO;
};

class DZE_Plant_Patch_Tea : DZE_Plant_Patch_Base {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_TEA;
};

class DZE_Plant_Patch_Garlic : DZE_Plant_Patch_Base {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_GARLIC;
};

class DZE_Plant_Patch_Comfrey : DZE_Plant_Patch_Base {
	scope = 2;
	displayname = $STR_EPOCH_PLANT_PATCH_COMFREY;
};

class DZE_Plant_Pumpkin : DZE_Plant_Patch_Base {
	scope = 2;
	displayName = $STR_EPOCH_PLANT_PUMPKIN;	
	model = "\ca\plants2\plant\pumpkin.p3d";
};

class DZE_Plant_Sunflower : DZE_Plant_Patch_Base {
	scope = 2;
	displayName = $STR_EPOCH_PLANT_SUNFLOWER;
	model = "\ca\plants2\plant\p_helianthus.p3d";
};

class DZE_Plant_Potato : DZE_Plant_Patch_Base {
	scope = 2;
	displayName = $STR_EPOCH_PLANT_POTATO;
	model = "\ca\plants2\plant\p_urtica.p3d";
};

class DZE_Plant_Carrot : DZE_Plant_Patch_Base {
	scope = 2;
	displayName = $STR_EPOCH_PLANT_CARROT;
	model = "\ca\plants2\plant\p_carduus.p3d";
};

class DZE_Plant_Hemp : DZE_Plant_Patch_Base {
	scope = 2;
	displayName = $STR_EPOCH_PLANT_HEMP;
	model = "\ca\plants_e\plant\p_fiberplant_ep1.p3d";
};

class DZE_Plant_Tea : DZE_Plant_Patch_Base {
	scope = 2;
	displayName = $STR_EPOCH_PLANT_TEA;
	model = "\ca\plants2\clutter\c_wideLeafPlant.p3d";
};

class DZE_Plant_Tobacco : DZE_Plant_Patch_Base {
	scope = 2;
	displayName = $STR_EPOCH_PLANT_TOBACCO;
	model = "\ca\plants2\bush\b_betulaHumilis.p3d";
};

class DZE_Plant_Garlic : DZE_Plant_Patch_Base {
	scope = 2;
	displayName = $STR_EPOCH_PLANT_GARLIC;
	model = "z\addons\dayz_communityassets\models\comfrey_up_small.p3d";
};

class DZE_Plant_Comfrey : DZE_Plant_Patch_Base {
	scope = 2;
	displayName = $STR_EPOCH_PLANT_COMFREY;
	model = "z\addons\dayz_communityassets\models\comfrey_up.p3d";
};
