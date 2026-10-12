class DZE_Item_Food_Garlic_Bulb : DZE_Food_Edible_Base {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_garlic_bulb";
	descriptionShort = "$STR_ITEM_DESC_equip_garlic_bulb";
	model = "\z\addons\dayz_communityassets\models\herb_garlic_bulb.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_garlic_bulb_ca.paa";
	count = 1;
	bloodRegen = 80;
};

class DZE_Item_Food_Pumpkin : DZE_Food_Edible_Base {
	scope = 2;
	displayName = "$STR_FOOD_NAME_PUMPKIN";
	descriptionShort = "$STR_FOOD_NAME_PUMPKIN";
	model = "\z\addons\dayz_epoch_w\items\veges\pumpkin.p3d";
	picture = "\dayz_epoch_c\icons\plants\pumpkin.paa";
	count = 1;
	bloodRegen = 100;
	weight = 1;
	class ItemActions {
		class Consume {
			text = "$STR_EAT_FOOD";
			script = "spawn player_consume";
		};
		class Crafting {
			text = "$STR_FOOD_NAME_PUMPKIN_CRAFT";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {""};
			requiretools[] = {"DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Seeds_Pumpkin",5}};
			input[] = {{"DZE_Item_Food_Pumpkin",1}};
		};
	};
};

class DZE_Item_Food_PotatoBaked : DZE_Food_Cooked_Base {
	scope = 2;
	displayName = "$STR_FOOD_NAME_POTATO_BAKED";
	descriptionShort = "$STR_FOOD_NAME_POTATO_BAKED";
	model = "\z\addons\dayz_epoch_w\items\veges\dze_potato_baked.p3d";
	picture = "\dayz_epoch_c\icons\plants\potatobaked.paa";
	count = 1;
	bloodRegen = 200;
	Nutrition[] = {250,0,0,0};
};

class DZE_Item_Food_Carrot : DZE_Food_Cooked_Base {
	scope = 2;
	displayName = "$STR_FOOD_NAME_CARROT";
	descriptionShort = "$STR_FOOD_NAME_CARROT";
	model = "\z\addons\dayz_epoch_w\items\veges\dze_carrot.p3d";
	picture = "\dayz_epoch_c\icons\plants\carrot.paa";
	count = 1;
	bloodRegen = 150;
	Nutrition[] = {120,0,0,0};
};