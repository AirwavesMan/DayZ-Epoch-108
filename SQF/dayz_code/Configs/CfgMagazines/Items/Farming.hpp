class DZE_Item_Farm_KiloHemp: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_KILOOFHEMP";
	descriptionShort = "$STR_EPOCH_KILOOFHEMP_DESC";
	model = "z\addons\dayz_epoch\models\kilohemp.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_kilohemp_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_269b";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Tex_Canvas",1}};
			input[] = {{"DZE_Item_Farm_KiloHemp",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_269a";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Seeds_Hemp",5}};
			input[] = {{"DZE_Item_Farm_KiloHemp",1}};
		};
	};
};

class DZE_Item_Farm_KiloTobacco: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_KILOTOBACCO";
	descriptionShort = "$STR_EPOCH_KILOTOBACCO_DESC";
	model = "z\addons\dayz_epoch\models\kilotobacco.p3d";
	picture = "\dayz_epoch_c\icons\plants\equip_kilotobacco_CA.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Farm_KiloBlackTea: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_KILOBLACKTEA";
	descriptionShort = "$STR_EPOCH_KILOBLACKTEA_DESC";
	model = "z\addons\dayz_epoch\models\kilotea.p3d";
	picture = "\dayz_epoch_c\icons\plants\equip_kilotea_CA.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Farm_TobaccoLeafs: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_TOBACCO_LEAF";
	descriptionShort = "$STR_EPOCH_TOBACCO_LEAF_DESC";
	model = "\z\addons\dayz_communityassets\models\comfrey.p3d";
	picture = "\dayz_epoch_c\icons\plants\tobaccoleaf.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Farm_Comfreyleafs: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_comfreyleafs";
	descriptionShort = "$STR_ITEM_DESC_equip_comfreyleafs";
	model = "\z\addons\dayz_communityassets\models\comfrey.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_comfrey_CA.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Seeds_Hemp: CA_Magazine {
	scope = 2;
	displayName = "$STR_CRAFT_NAME_HEMP_SEED";
	descriptionShort = "$STR_CRAFT_DESC_HEMP_SEED";
	model = "\z\addons\dayz_epoch_w\items\veges\seedbag_01.p3d";
	picture = "\dayz_epoch_c\icons\plants\hempseeds.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Seeds_Tobacco: CA_Magazine {
	scope = 2;
	displayName = "$STR_CRAFT_NAME_TOBACCO_SEED";
	descriptionShort = "$STR_CRAFT_DESC_TOBACCO_SEED";
	model = "\z\addons\dayz_epoch_w\items\veges\seedbag_01.p3d";
	picture = "\dayz_epoch_c\icons\plants\tobaccoseeds.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Seeds_BlackTea: CA_Magazine {
	scope = 2;
	displayName = "$STR_CRAFT_NAME_BLACK_TEA_SEED";
	descriptionShort = "$STR_CRAFT_DESC_BLACK_TEA_SEED";
	model = "\z\addons\dayz_epoch_w\items\veges\seedbag_01.p3d";
	picture = "\dayz_epoch_c\icons\plants\blackteaseeds.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Seeds_Comfrey: CA_Magazine {
	scope = 2;
	displayName = "$STR_CRAFT_NAME_COMFREY_SEED";
	descriptionShort = "$STR_CRAFT_DESC_COMFREY_SEED";
	model = "\z\addons\dayz_epoch_w\items\veges\seedbag_01.p3d";
	picture = "\dayz_epoch_c\icons\plants\confreyseeds.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Seeds_Pumpkin: DZE_Food_Edible_Base {
	scope = 2;
	displayName = "$STR_CRAFT_NAME_PUMPKIN_SEED";
	descriptionShort = "$STR_CRAFT_DESC_PUMPKIN_SEED";
	model = "\z\addons\dayz_epoch_w\items\veges\seedbag_01.p3d";
	picture = "\dayz_epoch_c\icons\plants\pumpkinseeds.paa";
	count = 1;
	bloodRegen = 100;
	type = 256;
};

class DZE_Item_Seeds_SunFlower: DZE_Food_Edible_Base {
	scope = 2;
	displayName = "$STR_FOOD_NAME_SUNFLOWER";
	descriptionShort = "$STR_FOOD_NAME_SUNFLOWER";
	model = "\z\addons\dayz_epoch_w\items\veges\seedbag_01.p3d";
	picture = "\dayz_epoch_c\icons\plants\sunflowerseeds.paa";
	count = 1;
	bloodRegen = 100;
};

class DZE_Item_Farm_PotatoRaw: CA_Magazine {
	scope = 2;
	displayName = "$STR_FOOD_NAME_POTATO";
	descriptionShort = "$STR_FOOD_NAME_POTATO";
	model = "\z\addons\dayz_epoch_w\items\veges\dze_potato.p3d";
	picture = "\dayz_epoch_c\icons\plants\potato.paa";
	cookOutput = "DZE_Item_Food_PotatoBaked";
	count = 1;
};

class DZE_Item_Farm_Dung: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_DUNG";
	descriptionShort = "$STR_ITEM_DESC_DUNG";
	model = "\z\addons\dayz_epoch\models\zombie_parts_bag_v2.p3d";
	picture = "\dayz_epoch_c\icons\equipment\dung.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Farm_Fertilizer: CA_Magazine {
	scope = 2;
	displayName = "$STR_CRAFT_NAME_FERTILIZER";
	descriptionShort = "$STR_CRAFT_DESC_FERTILIZER";
	picture = "\z\addons\dayz_epoch_w\magazine\ui\m_fertilizer_ca.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_fertilizer.p3d";
	count = 1;
	type = 256;
};

class DZE_Item_Farm_SunFlowerOil: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_SUNFLOWEROIL";
	descriptionShort = "$STR_ITEM_DESC_SUNFLOWEROIL";
	model = "\z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\equipment\sunfloweroil.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Farm_Hobo_Fishing_Kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_HOBO_FISHING_KIT";
	descriptionShort = "$STR_EPOCH_HOBO_FISHING_KIT_DESC";
	model = "\z\addons\dayz_communityassets\models\hobofishingkit.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_hobofishingkit_ca.paa";
	count = 1;
	type = 256;
};

