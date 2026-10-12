class DZE_Item_Cur_SilverBar: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SILVER";
	descriptionShort = "$STR_EPOCH_SILVER_DESC";
	model = "\z\addons\dayz_epoch\models\ItemSilverBar1oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	count = 1;
	worth = 1;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar2oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar",2}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_210_9";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar",10}};
		};
	};
};
class DZE_Item_Cur_SilverBar2oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_2OZSILVER";
	descriptionShort = "$STR_EPOCH_2OZSILVER_DESC";
	model = "\z\addons\dayz_epoch\models\ItemSilverBar2oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	count = 1;
	worth = 2;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar3oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar2oz",1},{"DZE_Item_Cur_SilverBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar",2}};
			input[] = {{"DZE_Item_Cur_SilverBar2oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_8";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar2oz",1},{"DZE_Item_Cur_SilverBar",8}};
		};
	};
};
class DZE_Item_Cur_SilverBar3oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_3OZSILVER";
	descriptionShort = "$STR_EPOCH_3OZSILVER_DESC";
	model = "\z\addons\dayz_epoch\models\ItemSilverBar3oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	count = 1;
	worth = 3;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar4oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar3oz",1},{"DZE_Item_Cur_SilverBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar2oz",1},{"DZE_Item_Cur_SilverBar",1}};
			input[] = {{"DZE_Item_Cur_SilverBar3oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_7";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar3oz",1},{"DZE_Item_Cur_SilverBar",7}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar",3}};
			input[] = {{"DZE_Item_Cur_SilverBar3oz",1}};
		};
	};
};
class DZE_Item_Cur_SilverBar4oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_4OZSILVER";
	descriptionShort = "$STR_EPOCH_4OZSILVER_DESC";
	model = "\z\addons\dayz_epoch\models\ItemSilverBar4oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	count = 1;
	worth = 4;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar5oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar4oz",1},{"DZE_Item_Cur_SilverBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar3oz",1},{"DZE_Item_Cur_SilverBar",1}};
			input[] = {{"DZE_Item_Cur_SilverBar4oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_6";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar4oz",1},{"DZE_Item_Cur_SilverBar",6}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar",4}};
			input[] = {{"DZE_Item_Cur_SilverBar4oz",1}};
		};
	};
};
class DZE_Item_Cur_SilverBar5oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_5OZSILVER";
	descriptionShort = "$STR_EPOCH_5OZSILVER_DESC";
	model = "\z\addons\dayz_epoch\models\ItemSilverBar5oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	count = 1;
	worth = 5;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar6oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar5oz",1},{"DZE_Item_Cur_SilverBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar4oz",1},{"DZE_Item_Cur_SilverBar",1}};
			input[] = {{"DZE_Item_Cur_SilverBar5oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_5";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar5oz",1},{"DZE_Item_Cur_SilverBar",5}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar",5}};
			input[] = {{"DZE_Item_Cur_SilverBar5oz",1}};
		};
	};
};
class DZE_Item_Cur_SilverBar6oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_6OZSILVER";
	descriptionShort = "$STR_EPOCH_6OZSILVER_DESC";
	model = "\z\addons\dayz_epoch\models\ItemSilverBar6oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	count = 1;
	worth = 6;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar7oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar6oz",1},{"DZE_Item_Cur_SilverBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar5oz",1},{"DZE_Item_Cur_SilverBar",1}};
			input[] = {{"DZE_Item_Cur_SilverBar6oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_4";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar6oz",1},{"DZE_Item_Cur_SilverBar",4}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar",6}};
			input[] = {{"DZE_Item_Cur_SilverBar6oz",1}};
		};
	};
};
class DZE_Item_Cur_SilverBar7oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_7OZSILVER";
	descriptionShort = "$STR_EPOCH_7OZSILVER_DESC";
	model = "\z\addons\dayz_epoch\models\ItemSilverBar7oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	count = 1;
	worth = 7;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar8oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar7oz",1},{"DZE_Item_Cur_SilverBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar6oz",1},{"DZE_Item_Cur_SilverBar",1}};
			input[] = {{"DZE_Item_Cur_SilverBar7oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_3";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar7oz",1},{"DZE_Item_Cur_SilverBar",3}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar",7}};
			input[] = {{"DZE_Item_Cur_SilverBar7oz",1}};
		};
	};
};
class DZE_Item_Cur_SilverBar8oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_8OZSILVER";
	descriptionShort = "$STR_EPOCH_8OZSILVER_DESC";
	model = "\z\addons\dayz_epoch\models\ItemSilverBar8oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	count = 1;
	worth = 8;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar9oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar8oz",1},{"DZE_Item_Cur_SilverBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar7oz",1},{"DZE_Item_Cur_SilverBar",1}};
			input[] = {{"DZE_Item_Cur_SilverBar8oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_2";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar8oz",1},{"DZE_Item_Cur_SilverBar",2}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar",8}};
			input[] = {{"DZE_Item_Cur_SilverBar8oz",1}};
		};
	};
};
class DZE_Item_Cur_SilverBar9oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_9OZSILVER";
	descriptionShort = "$STR_EPOCH_9OZSILVER_DESC";
	model = "\z\addons\dayz_epoch\models\ItemSilverBar9oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_silver_bar_CA.paa";
	count = 1;
	worth = 9;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1}};
			input[] = {{"DZE_Item_Cur_SilverBar9oz",1},{"DZE_Item_Cur_SilverBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar8oz",1},{"DZE_Item_Cur_SilverBar",1}};
			input[] = {{"DZE_Item_Cur_SilverBar9oz",1}};

		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar",9}};
			input[] = {{"DZE_Item_Cur_SilverBar9oz",1}};
		};
	};
};
class DZE_Item_Cur_SilverBar10oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_10OZSILVER";
	descriptionShort = "$STR_EPOCH_10OZSILVER_DESC";
	model = "\z\addons\dayz_epoch\models\ItemSilverBar10oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_Silver_bar_10oz_CA.paa";
	count = 1;
	worth = 10;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar9oz",1},{"DZE_Item_Cur_SilverBar",1}};
			input[] = {{"DZE_Item_Cur_SilverBar10oz",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar",10}};
			input[] = {{"DZE_Item_Cur_SilverBar10oz",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_BRIEFCASE_1X10OZSILVER";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_10oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_SilverBar10oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_BRIEFCASE_2X10OZSILVER";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_20oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_SilverBar10oz",2}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_BRIEFCASE_3X10OZSILVER";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_30oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_SilverBar10oz",3}};
		};
		class Crafting5 {
			text = "$STR_EPOCH_BRIEFCASE_4X10OZSILVER";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_40oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_SilverBar10oz",4}};
		};
		class Crafting6 {
			text = "$STR_EPOCH_BRIEFCASE_5X10OZSILVER";
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_50oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_SilverBar10oz",5}};
		};
		class Crafting7 {
			text = "$STR_EPOCH_BRIEFCASE_6X10OZSILVER";
			script = ";['Crafting7','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_60oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_SilverBar10oz",6}};
		};
		class Crafting8 {
			text = "$STR_EPOCH_BRIEFCASE_7X10OZSILVER";
			script = ";['Crafting8','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_70oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_SilverBar10oz",7}};
		};
		class Crafting9 {
			text = "$STR_EPOCH_BRIEFCASE_8X10OZSILVER";
			script = ";['Crafting9','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_80oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_SilverBar10oz",8}};
		};
		class Crafting10 {
			text = "$STR_EPOCH_BRIEFCASE_9X10OZSILVER";
			script = ";['Crafting10','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_90oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_SilverBar10oz",9}};
		};
		class Crafting11 {
			text = "$STR_EPOCH_BRIEFCASE_10X10OZSILVER";
			script = ";['Crafting11','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_SilverBar10oz",10}};
		};
	};
};