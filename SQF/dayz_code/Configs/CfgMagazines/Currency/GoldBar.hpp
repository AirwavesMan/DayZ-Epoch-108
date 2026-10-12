class DZE_Item_Cur_GoldBar: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GOLD";
	descriptionShort = "$STR_EPOCH_GOLD_DESC";
	model = "\z\addons\dayz_epoch\models\ItemGoldBar1oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	count = 1;
	worth = 100;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar2oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar",2}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_210_9";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar",10}};
		};
	};
};
class DZE_Item_Cur_GoldBar2oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_2OZGOLD";
	descriptionShort = "$STR_EPOCH_2OZGOLD_DESC";
	model = "\z\addons\dayz_epoch\models\ItemGoldBar2oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	count = 1;
	worth = 200;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar3oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar2oz",1},{"DZE_Item_Cur_GoldBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar",2}};
			input[] = {{"DZE_Item_Cur_GoldBar2oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_8";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar2oz",1},{"DZE_Item_Cur_GoldBar",8}};
		};
	};
};
class DZE_Item_Cur_GoldBar3oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_3OZGOLD";
	descriptionShort = "$STR_EPOCH_3OZGOLD_DESC";
	model = "\z\addons\dayz_epoch\models\ItemGoldBar3oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	count = 1;
	worth = 300;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar4oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar3oz",1},{"DZE_Item_Cur_GoldBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar2oz",1},{"DZE_Item_Cur_GoldBar",1}};
			input[] = {{"DZE_Item_Cur_GoldBar3oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_7";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar3oz",1},{"DZE_Item_Cur_GoldBar",7}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar",3}};
			input[] = {{"DZE_Item_Cur_GoldBar3oz",1}};
		};
	};
};
class DZE_Item_Cur_GoldBar4oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_4OZGOLD";
	descriptionShort = "$STR_EPOCH_4OZGOLD_DESC";
	model = "\z\addons\dayz_epoch\models\ItemGoldBar4oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	count = 1;
	worth = 400;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar5oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar4oz",1},{"DZE_Item_Cur_GoldBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar3oz",1},{"DZE_Item_Cur_GoldBar",1}};
			input[] = {{"DZE_Item_Cur_GoldBar4oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_6";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar4oz",1},{"DZE_Item_Cur_GoldBar",6}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar",4}};
			input[] = {{"DZE_Item_Cur_GoldBar4oz",1}};
		};
	};
};
class DZE_Item_Cur_GoldBar5oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_5OZGOLD";
	descriptionShort = "$STR_EPOCH_5OZGOLD_DESC";
	model = "\z\addons\dayz_epoch\models\ItemGoldBar5oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	count = 1;
	worth = 500;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar6oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar5oz",1},{"DZE_Item_Cur_GoldBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar4oz",1},{"DZE_Item_Cur_GoldBar",1}};
			input[] = {{"DZE_Item_Cur_GoldBar5oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_5";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar5oz",1},{"DZE_Item_Cur_GoldBar",5}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar",5}};
			input[] = {{"DZE_Item_Cur_GoldBar5oz",1}};
		};
	};
};
class DZE_Item_Cur_GoldBar6oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_6OZGOLD";
	descriptionShort = "$STR_EPOCH_6OZGOLD_DESC";
	model = "\z\addons\dayz_epoch\models\ItemGoldBar6oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	count = 1;
	worth = 600;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar7oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar6oz",1},{"DZE_Item_Cur_GoldBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar5oz",1},{"DZE_Item_Cur_GoldBar",1}};
			input[] = {{"DZE_Item_Cur_GoldBar6oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_4";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar6oz",1},{"DZE_Item_Cur_GoldBar",4}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar",6}};
			input[] = {{"DZE_Item_Cur_GoldBar6oz",1}};
		};
	};
};
class DZE_Item_Cur_GoldBar7oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_7OZGOLD";
	descriptionShort = "$STR_EPOCH_7OZGOLD_DESC";
	model = "\z\addons\dayz_epoch\models\ItemGoldBar7oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	count = 1;
	worth = 700;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar8oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar7oz",1},{"DZE_Item_Cur_GoldBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar6oz",1},{"DZE_Item_Cur_GoldBar",1}};
			input[] = {{"DZE_Item_Cur_GoldBar7oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_3";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar7oz",1},{"DZE_Item_Cur_GoldBar",3}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar",7}};
			input[] = {{"DZE_Item_Cur_GoldBar7oz",1}};
		};
	};
};
class DZE_Item_Cur_GoldBar8oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_8OZGOLD";
	descriptionShort = "$STR_EPOCH_8OZGOLD_DESC";
	model = "\z\addons\dayz_epoch\models\ItemGoldBar8oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	count = 1;
	worth = 800;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar9oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar8oz",1},{"DZE_Item_Cur_GoldBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar7oz",1},{"DZE_Item_Cur_GoldBar",1}};
			input[] = {{"DZE_Item_Cur_GoldBar8oz",1}};

		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_2";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar8oz",1},{"DZE_Item_Cur_GoldBar",2}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar",8}};
			input[] = {{"DZE_Item_Cur_GoldBar8oz",1}};
		};
	};
};
class DZE_Item_Cur_GoldBar9oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_9OZGOLD";
	descriptionShort = "$STR_EPOCH_9OZGOLD_DESC";
	model = "\z\addons\dayz_epoch\models\ItemGoldBar9oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_CA.paa";
	count = 1;
	worth = 900;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1}};
			input[] = {{"DZE_Item_Cur_GoldBar9oz",1},{"DZE_Item_Cur_GoldBar",1}};

		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar8oz",1},{"DZE_Item_Cur_GoldBar",1}};
			input[] = {{"DZE_Item_Cur_GoldBar9oz",1}};

		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar",9}};
			input[] = {{"DZE_Item_Cur_GoldBar9oz",1}};
		};
	};
};
class DZE_Item_Cur_GoldBar10oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_10OZGOLD";
	descriptionShort = "$STR_EPOCH_10OZGOLD_DESC";
	model = "\z\addons\dayz_epoch\models\ItemGoldBar10oz.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_gold_bar_10oz_CA.paa";
	count = 1;
	worth = 1000;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_211_1";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar9oz",1},{"DZE_Item_Cur_GoldBar",1}};
			input[] = {{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar",10}};
			input[] = {{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_BRIEFCASE_1X10OZGOLD";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_10oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_BRIEFCASE_2X10OZGOLD";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_20oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_GoldBar10oz",2}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_BRIEFCASE_3X10OZGOLD";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_30oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_GoldBar10oz",3}};
		};
		class Crafting5 {
			text = "$STR_EPOCH_BRIEFCASE_4X10OZGOLD";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_40oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_GoldBar10oz",4}};
		};
		class Crafting6 {
			text = "$STR_EPOCH_BRIEFCASE_5X10OZGOLD";
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_50oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_GoldBar10oz",5}};
		};
		class Crafting7 {
			text = "$STR_EPOCH_BRIEFCASE_6X10OZGOLD";
			script = ";['Crafting7','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_60oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_GoldBar10oz",6}};
		};
		class Crafting8 {
			text = "$STR_EPOCH_BRIEFCASE_7X10OZGOLD";
			script = ";['Crafting8','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_70oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_GoldBar10oz",7}};
		};
		class Crafting9 {
			text = "$STR_EPOCH_BRIEFCASE_8X10OZGOLD";
			script = ";['Crafting9','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_80oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_GoldBar10oz",8}};
		};
		class Crafting10 {
			text = "$STR_EPOCH_BRIEFCASE_9X10OZGOLD";
			script = ";['Crafting10','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_90oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_GoldBar10oz",9}};
		};
		class Crafting11 {
			text = "$STR_EPOCH_BRIEFCASE_10X10OZGOLD";
			script = ";['Crafting11','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_GoldBar10oz",10}};
		};
	};
};