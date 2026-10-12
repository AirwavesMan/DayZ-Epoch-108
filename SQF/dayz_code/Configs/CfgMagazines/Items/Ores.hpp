class DZE_Item_Ore_Iron: CA_Magazine {
	scope = 2;
	displayName = "$STR_ORE_NAME_IRON";
	descriptionShort = "$STR_ORE_NAME_IRON_DESC";
	model = "\z\addons\dayz_epoch\models\iron_ore.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_iron_ore_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_265";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Metal_Parts",1},{"DZE_Item_Waterbottle_Unfilled",1}};
			input[] = {{"DZE_Item_Ore_Iron",4},{"DZE_Item_Waterbottle",1}};
		};
	};
};

class DZE_Item_Ore_Silver: CA_Magazine {
	scope = 2;
	displayName = "$STR_ORE_NAME_SILVER";
	descriptionShort = "$STR_ORE_DESC";	//	ToDo: Description
	model = "\z\addons\dayz_epoch\models\silver_ore.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_ore_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_266";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Cur_SilverBar",1},{"DZE_Item_Waterbottle_Unfilled",1}};
			input[] = {{"DZE_Item_Ore_Silver",1},{"DZE_Item_Waterbottle",1}};
		};
	};
};

class DZE_Item_Ore_Gold: CA_Magazine {
	scope = 2;
	displayName = "$STR_ORE_NAME_GOLD";
	descriptionShort = "$STR_ORE_DESC";	//	ToDo: Description
	model = "\z\addons\dayz_epoch\models\gold_ore.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_ore_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_267";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Cur_GoldBar",1},{"DZE_Item_Waterbottle_Unfilled",1}};
			input[] = {{"DZE_Item_Ore_Gold",1},{"DZE_Item_Waterbottle",1}};
		};
	};
};