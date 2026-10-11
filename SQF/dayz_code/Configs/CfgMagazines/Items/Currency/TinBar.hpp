class ItemTinBar: CA_Magazine {
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
			output[] = {{"ItemTinBar10oz",1}};
			input[] = {{"ItemTinBar",10}};
		};
	};
};

class ItemTinBar10oz: CA_Magazine {
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
			output[] = {{"ItemTinBar",10}};
			input[] = {{"ItemTinBar10oz",1}};
		};
	};
};