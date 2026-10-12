class DZE_Item_Gems_Topaz: CA_Magazine {
	scope = 2;
	displayName = "$STR_GEM_NAME_TOPAZ";
	descriptionShort = "$STR_GEM_NAME_TOPAZ";
	model = "\z\addons\dayz_epoch\models\topaz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_topaz_CA.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Gems_Obsidian: CA_Magazine {
	scope = 2;
	displayName = "$STR_GEM_NAME_OBSIDIAN";
	descriptionShort = "$STR_GEM_NAME_OBSIDIAN";
	model = "\z\addons\dayz_epoch\models\obsidian.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_obsidian_CA.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Gems_Sapphire: CA_Magazine {
	scope = 2;
	displayName = "$STR_GEM_NAME_SAPPHIRE";
	descriptionShort = "$STR_GEM_NAME_SAPPHIRE";
	model = "\z\addons\dayz_epoch\models\sapphire.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_sapphire_CA.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Gems_Amethyst: CA_Magazine {
	scope = 2;
	displayName = "$STR_GEM_NAME_AMETHYST";
	descriptionShort = "$STR_GEM_NAME_AMETHYST";
	model = "\z\addons\dayz_epoch\models\amethyst.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_amethyst_CA.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Gems_Emerald: CA_Magazine {
	scope = 2;
	displayName = "$STR_GEM_NAME_EMERALD";
	descriptionShort = "$STR_GEM_NAME_EMERALD";
	model = "\z\addons\dayz_epoch\models\emerald.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_emerald_CA.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Gems_Citrine: CA_Magazine {
	scope = 2;
	displayName = "$STR_GEM_NAME_CITRINE";
	descriptionShort = "$STR_GEM_NAME_CITRINE";
	model = "\z\addons\dayz_epoch\models\citrine.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_citrine_CA.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Gems_Ruby: CA_Magazine {
	scope = 2;
	displayName = "$STR_GEM_NAME_RUBY";
	descriptionShort = "$STR_GEM_NAME_RUBY";
	model = "\z\addons\dayz_epoch\models\ruby.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_ruby_CA.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Gems_Suitcase_Empty: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GEMSUITCASE_EMPTY";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_EMPTY";
	model = "\CA\misc3\briefcase";
	picture = "\dayz_epoch_c\icons\equipment\Suitcase.paa";
	count = 1;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_PACK_TOPAZ";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Topaz",1}};
			input[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Topaz",10}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_PACK_OBSIDIAN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Obsidian",1}};
			input[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Obsidian",10}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_PACK_SAPPHIRE";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Sapphire",1}};
			input[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Sapphire",10}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_PACK_AMETHYST";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Amethyst",1}};
			input[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Amethyst",10}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_PLAYER_PACK_EMERALD";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Emerald",1}};
			input[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Emerald",10}};
		};
		class Crafting5 {
			text = "$STR_EPOCH_PLAYER_PACK_CITRINE";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Citrine",1}};
			input[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Citrine",10}};
		};
		class Crafting6 {
			text = "$STR_EPOCH_PLAYER_PACK_RUBY";
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Ruby",1}};
			input[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Ruby",10}};
		};
		class Crafting7 {
			text = "$STR_EPOCH_PLAYER_PACK_ALL";
			script = ";['Crafting7','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_All",1}};
			input[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Topaz",1},{"DZE_Item_Gems_Obsidian",1},{"DZE_Item_Gems_Sapphire",1},{"DZE_Item_Gems_Amethyst",1},{"DZE_Item_Gems_Emerald",1},{"DZE_Item_Gems_Citrine",1},{"DZE_Item_Gems_Ruby",1}};
		};
	};
};

class DZE_Item_Gems_Suitcase_Topaz: DZE_Item_Gems_Suitcase_Empty {
	displayName = "$STR_EPOCH_GEMSUITCASE_TOPAZ";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_TOPAZ";
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_251";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Topaz",10}};
			input[] = {{"DZE_Item_Gems_Suitcase_Topaz",1}};
		};
	};
};

class DZE_Item_Gems_Suitcase_Obsidian: DZE_Item_Gems_Suitcase_Empty {
	displayName = "$STR_EPOCH_GEMSUITCASE_OBSIDIAN";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_OBSIDIAN";
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_251";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Obsidian",10}};
			input[] = {{"DZE_Item_Gems_Suitcase_Obsidian",1}};
		};
	};
};

class DZE_Item_Gems_Suitcase_Sapphire: DZE_Item_Gems_Suitcase_Empty {
	displayName = "$STR_EPOCH_GEMSUITCASE_SAPPHIRE";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_SAPPHIRE";
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_251";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Sapphire",10}};
			input[] = {{"DZE_Item_Gems_Suitcase_Sapphire",1}};
		};
	};
};

class DZE_Item_Gems_Suitcase_Amethyst: DZE_Item_Gems_Suitcase_Empty {
	displayName = "$STR_EPOCH_GEMSUITCASE_AMETHYST";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_AMETHYST";
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_251";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Amethyst",10}};
			input[] = {{"DZE_Item_Gems_Suitcase_Amethyst",1}};
		};
	};
};

class DZE_Item_Gems_Suitcase_Emerald: DZE_Item_Gems_Suitcase_Empty {
	displayName = "$STR_EPOCH_GEMSUITCASE_EMERALD";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_EMERALD";
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_251";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Emerald",10}};
			input[] = {{"DZE_Item_Gems_Suitcase_Emerald",1}};
		};
	};
};

class DZE_Item_Gems_Suitcase_Citrine: DZE_Item_Gems_Suitcase_Empty {
	displayName = "$STR_EPOCH_GEMSUITCASE_CITRINE";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_CITRINE";
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_251";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Citrine",10}};
			input[] = {{"DZE_Item_Gems_Suitcase_Citrine",1}};
		};
	};
};

class DZE_Item_Gems_Suitcase_Ruby: DZE_Item_Gems_Suitcase_Empty {
	displayName = "$STR_EPOCH_GEMSUITCASE_RUBY";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_RUBY";
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_251";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Ruby",10}};
			input[] = {{"DZE_Item_Gems_Suitcase_Ruby",1}};
		};
	};
};

class DZE_Item_Gems_Suitcase_All: DZE_Item_Gems_Suitcase_Empty {
	displayName = "$STR_EPOCH_GEMSUITCASE_ALL";
	descriptionShort = "$STR_EPOCH_DESC_GEMSUITCASE_ALL";
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_251";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Gems_Suitcase_Empty",1},{"DZE_Item_Gems_Topaz",1},{"DZE_Item_Gems_Obsidian",1},{"DZE_Item_Gems_Sapphire",1},{"DZE_Item_Gems_Amethyst",1},{"DZE_Item_Gems_Emerald",1},{"DZE_Item_Gems_Citrine",1},{"DZE_Item_Gems_Ruby",1}};
			input[] = {{"DZE_Item_Gems_Suitcase_All",1}};
		};
	};
};

class DZE_Item_Gems_Suitcase_Diamonds: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SUITCASE_DIAMONDS";
	descriptionShort = "$STR_EPOCH_SUITCASE_DIAMONDS_DESC";
	model = "\CA\misc3\briefcase";
	picture = "\dayz_epoch_c\icons\equipment\Suitcase.paa";
	count = 1;
	type = 256;
};