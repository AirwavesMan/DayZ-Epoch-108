class DZE_Item_Tool_Lever: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_LEVER";
	descriptionShort = "$STR_EQUIP_DESC_LEVER";
	picture = "\dayz_equip\textures\equip_lever.paa";
	model = "\z\addons\dayz_epoch_w\magazine\dze_handle.p3d";
	count = 1;
	type = 256;
};

class DZE_Item_Tool_SledgeHead: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SLEDGEHAMMERHEAD";
	descriptionShort = "$STR_EPOCH_SLEDGEHAMMERHEAD_DESC";
	model = "\z\addons\dayz_epoch\models\sledge_head.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_sledge_head_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_275";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Sledge"};
			input[] = {{"DZE_Item_Tool_SledgeHead",1},{"DZE_Item_Tool_SledgeHandle",1}};
		};
	};
};

class DZE_Item_Tool_SledgeHandle: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SLEDGEHAMMERHANDLE";
	descriptionShort = "$STR_EPOCH_SLEDGEHAMMERHANDLE_DESC";
	model = "\z\addons\dayz_epoch\models\sledge_handle.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_sledge_handle_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_275";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Sledge"};
			input[] = {{"DZE_Item_Tool_SledgeHead",1},{"DZE_Item_Tool_SledgeHandle",1}};
		};
	};
};

class DZE_Item_Tool_Crossbow_Kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_CROSSBOW_KIT";
	descriptionShort = "$STR_ITEM_DESC_CROSSBOW_KIT";
	model = "\z\addons\community_crossbow\models\Crossbow_kit.p3d";
	picture = "\z\addons\community_crossbow\textures\Crossbow_kit.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_CRAFTING_CROSSBOW";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {};
			outputweapons[] = {"DZE_Wep_Crossbow"};
			input[] = {{"DZE_Item_Tool_Crossbow_Kit",1},{"DZE_Item_Tool_Crossbow_Stock",1}};
		};
	};
};

class DZE_Item_Tool_Crossbow_Stock: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_CROSSBOW_STOCK";
	descriptionShort = "$STR_ITEM_DESC_CROSSBOW_STOCK";
	model = "z\addons\community_crossbow\models\crossbow_stock.p3d";
	picture = "\z\addons\community_crossbow\icons\crossbow_stock.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_CRAFTING_CROSSBOW";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {};
			outputweapons[] = {"DZE_Wep_Crossbow"};
			input[] = {{"DZE_Item_Tool_Crossbow_Kit",1},{"DZE_Item_Tool_Crossbow_Stock",1}};
		};
	};
};