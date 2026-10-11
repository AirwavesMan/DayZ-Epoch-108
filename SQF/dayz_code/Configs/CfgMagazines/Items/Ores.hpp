class PartOre: CA_Magazine {
	scope = 2;
	displayName = "$STR_ORE_NAME_IRON";
	descriptionShort = "$STR_ORE_NAME_IRON_DESC";
	model = "\z\addons\dayz_epoch\models\iron_ore.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_iron_ore_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_265";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Sledge"};
			output[] = {{"PartGeneric",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"PartOre",4},{"ItemWaterbottle",1}};
		};
	};
};
class PartOreSilver: CA_Magazine {
	scope = 2;
	displayName = "$STR_ORE_NAME_SILVER";
	descriptionShort = "$STR_ORE_DESC";
	model = "\z\addons\dayz_epoch\models\silver_ore.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_silver_ore_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_266";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Sledge"};
			output[] = {{"ItemSilverBar",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"PartOreSilver",1},{"ItemWaterbottle",1}};
		};
	};
};
class PartOreGold: CA_Magazine {
	scope = 2;
	displayName = "$STR_ORE_NAME_GOLD";
	descriptionShort = "$STR_ORE_DESC";
	model = "\z\addons\dayz_epoch\models\gold_ore.p3d";
	picture="\z\addons\dayz_epoch\pictures\equip_gold_ore_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_267";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Sledge"};
			output[] = {{"ItemGoldBar",1},{"ItemWaterbottleUnfilled",1}};
			input[] = {{"PartOreGold",1},{"ItemWaterbottle",1}};
		};
	};
};