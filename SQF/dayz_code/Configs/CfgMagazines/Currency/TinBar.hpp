class DZE_Item_Cur_TinBar: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_TIN";
	descriptionShort = "$STR_EPOCH_TIN_DESC";
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_CA.paa";
	count = 1;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_210_9";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar10oz",1}};
			input[] = {{"DZE_Item_Cur_TinBar",10}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_210_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar2oz",1}};
			input[] = {{"DZE_Item_Cur_TinBar",2}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_210_2";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar3oz",1}};
			input[] = {{"DZE_Item_Cur_TinBar",3}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_210_3";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar4oz",1}};
			input[] = {{"DZE_Item_Cur_TinBar",4}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_PLAYER_210_4";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar5oz",1}};
			input[] = {{"DZE_Item_Cur_TinBar",5}};
		};
		class Crafting5 {
			text = "$STR_EPOCH_PLAYER_210_5";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar6oz",1}};
			input[] = {{"DZE_Item_Cur_TinBar",6}};
		};
		class Crafting6 {
			text = "$STR_EPOCH_PLAYER_210_6";
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar7oz",1}};
			input[] = {{"DZE_Item_Cur_TinBar",7}};
		};
		class Crafting7 {
			text = "$STR_EPOCH_PLAYER_210_7";
			script = ";['Crafting7','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar8oz",1}};
			input[] = {{"DZE_Item_Cur_TinBar",8}};
		};
		class Crafting8 {
			text = "$STR_EPOCH_PLAYER_210_8";
			script = ";['Crafting8','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar9oz",1}};
			input[] = {{"DZE_Item_Cur_TinBar",9}};
		};
	};
};

class DZE_Item_Cur_TinBar2oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_2OZTIN";
	descriptionShort = "$STR_EPOCH_2OZTIN_DESC";
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Cur_TinBar",2}};
			input[] = {{"DZE_Item_Cur_TinBar2oz",1}};
		};
	};
};

class DZE_Item_Cur_TinBar3oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_3OZTIN";
	descriptionShort = "$STR_EPOCH_3OZTIN_DESC";
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Cur_TinBar",3}};
			input[] = {{"DZE_Item_Cur_TinBar3oz",1}};
		};
	};
};

class DZE_Item_Cur_TinBar4oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_4OZTIN";
	descriptionShort = "$STR_EPOCH_4OZTIN_DESC";
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Cur_TinBar",4}};
			input[] = {{"DZE_Item_Cur_TinBar4oz",1}};
		};
	};
};

class DZE_Item_Cur_TinBar5oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_5OZTIN";
	descriptionShort = "$STR_EPOCH_5OZTIN_DESC";
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Cur_TinBar",5}};
			input[] = {{"DZE_Item_Cur_TinBar5oz",1}};
		};
	};
};

class DZE_Item_Cur_TinBar6oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_6OZTIN";
	descriptionShort = "$STR_EPOCH_6OZTIN_DESC";
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Cur_TinBar",6}};
			input[] = {{"DZE_Item_Cur_TinBar6oz",1}};
		};
	};
};

class DZE_Item_Cur_TinBar7oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_7OZTIN";
	descriptionShort = "$STR_EPOCH_7OZTIN_DESC";
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Cur_TinBar",7}};
			input[] = {{"DZE_Item_Cur_TinBar7oz",1}};
		};
	};
};

class DZE_Item_Cur_TinBar8oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_8OZTIN";
	descriptionShort = "$STR_EPOCH_8OZTIN_DESC";
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Cur_TinBar",8}};
			input[] = {{"DZE_Item_Cur_TinBar8oz",1}};
		};
	};
};

class DZE_Item_Cur_TinBar9oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_9OZTIN";
	descriptionShort = "$STR_EPOCH_9OZTIN_DESC";
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Cur_TinBar",9}};
			input[] = {{"DZE_Item_Cur_TinBar9oz",1}};
		};
	};
};

class DZE_Item_Cur_TinBar10oz: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_10OZTIN";
	descriptionShort = "$STR_EPOCH_10OZTIN_DESC";
	model = "\z\addons\dayz_epoch\models\tin_bar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_tin_bar_10oz_CA.paa";
	count = 1;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_211";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Cur_TinBar",10}};
			input[] = {{"DZE_Item_Cur_TinBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_BRIEFCASE_1X10OZTIN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_10oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_TinBar10oz",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_BRIEFCASE_2X10OZTIN";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_20oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_TinBar10oz",2}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_BRIEFCASE_3X10OZTIN";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_30oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_TinBar10oz",3}};
		};
		class Crafting4 {
			text = "$STR_EPOCH_BRIEFCASE_4X10OZTIN";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_40oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_TinBar10oz",4}};
		};
		class Crafting5 {
			text = "$STR_EPOCH_BRIEFCASE_5X10OZTIN";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_50oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_TinBar10oz",5}};
		};
		class Crafting6 {
			text = "$STR_EPOCH_BRIEFCASE_6X10OZTIN";
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_60oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_TinBar10oz",6}};
		};
		class Crafting7 {
			text = "$STR_EPOCH_BRIEFCASE_7X10OZTIN";
			script = ";['Crafting7','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_70oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_TinBar10oz",7}};
		};
		class Crafting8 {
			text = "$STR_EPOCH_BRIEFCASE_8X10OZTIN";
			script = ";['Crafting8','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_80oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_TinBar10oz",8}};
		};
		class Crafting9 {
			text = "$STR_EPOCH_BRIEFCASE_9X10OZTIN";
			script = ";['Crafting9','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_90oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_TinBar10oz",9}};
		};
		class Crafting10 {
			text = "$STR_EPOCH_BRIEFCASE_10X10OZTIN";
			script = ";['Crafting10','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseEmpty",1},{"DZE_Item_Cur_TinBar10oz",10}};
		};
	};
};