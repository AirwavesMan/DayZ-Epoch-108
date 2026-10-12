class DZE_Item_Food_Fish_Raw_Trout : DZE_Food_Raw_Base {
	scope = 2;
	displayName = "$STR_FOOD_NAME_TROUT_RAW";
	descriptionShort = "$STR_FOOD_EQUIP_TROUT_RAW";
	model = "\z\addons\dayz_communityassets\models\trout.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trout_CA.paa";
	cookOutput = "DZE_Item_Food_Fish_Cooked_Trout";
	bloodRegen = 500;
	Nutrition[] = {117,350,0,0};
};

class DZE_Item_Food_Fish_Cooked_Trout : DZE_Food_Cooked_Base {
	scope = 2;
	displayName = "$STR_FOOD_NAME_TROUT_COOKED";
	descriptionShort = "$STR_FOOD_EQUIP_TROUT_COOKED";
	model = "\z\addons\dayz_communityassets\models\trout_cooked.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trout_cooked_CA.paa";
	bloodRegen = 1000;
	Nutrition[] = {117,700,0,0};
};

class DZE_Item_Food_Fish_Raw_SeaBass : DZE_Food_Raw_Base {
	scope = 2;
	displayName = "$STR_FOOD_NAME_SEABASS_RAW";
	descriptionShort = "$STR_FOOD_EQUIP_SEABASS_RAW";
	model = "\z\addons\dayz_communityassets\models\seabass.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_seabass_CA.paa";
	cookOutput = "DZE_Item_Food_Fish_Cooked_SeaBass";
	bloodRegen = 700;
	Nutrition[] = {110,450,0,0};
};

class DZE_Item_Food_Fish_Cooked_SeaBass : DZE_Food_Cooked_Base {
	scope = 2;
	displayName = "$STR_FOOD_NAME_SEABASS_COOKED";
	descriptionShort = "$STR_FOOD_EQUIP_SEABASS_COOKED";
	model = "\z\addons\dayz_communityassets\models\seabass_cooked.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_seabass_cooked_CA.paa";
	bloodRegen = 1400;
	Nutrition[] = {110,900,0,0};
};

class DZE_Item_Food_Fish_Raw_Tuna : DZE_Food_Raw_Base {
	scope = 2;
	displayName = "$STR_FOOD_NAME_TUNA_RAW";
	descriptionShort = "$STR_FOOD_EQUIP_TUNA_RAW";
	model = "\z\addons\dayz_communityassets\models\tuna.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_tuna_CA.paa";
	cookOutput = "DZE_Item_Food_Fish_Cooked_Tuna";
	bloodRegen = 1000;
	Nutrition[] = {123,550,0,0};
};

class DZE_Item_Food_Fish_Cooked_Tuna : DZE_Food_Cooked_Base {
	scope = 2;
	displayName = "$STR_FOOD_NAME_TUNA_COOKED";
	descriptionShort = "$STR_FOOD_EQUIP_TUNA_COOKED";
	model = "\z\addons\dayz_communityassets\models\tuna_cooked.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_tuna_cooked_CA.paa";
	bloodRegen = 2000;
	Nutrition[] = {123,1100,0,0};
};