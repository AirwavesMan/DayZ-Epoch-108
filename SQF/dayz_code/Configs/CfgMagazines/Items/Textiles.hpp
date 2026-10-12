class DZE_Item_Tex_Canvas: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CANVAS";
	descriptionShort = "$STR_EPOCH_CANVAS_DESC";
	model = "\z\addons\dayz_epoch\models\canvas.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_canvas_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_194";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Tex_Burlap",1}};
			input[] = {{"DZE_Item_Tex_Canvas",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_CRAFT_SMALL_STASH";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Kit_StashSmall",1}};
			input[] = {{"DZE_Item_Tex_Canvas",1},{"DZE_Item_Wood_Pile",2}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_193";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Kit_Sun_Shade",1}};
			input[] = {{"DZE_Item_Tex_Canvas",1},{"DZE_Item_Wood_Lumber",4}};
		};
	};
};

class DZE_Item_Tex_Burlap: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BURLAP";
	descriptionShort = "$STR_EPOCH_BURLAP_DESC";
	model = "\z\addons\dayz_epoch\models\burlap.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_burlap_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_195";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Sandbag",1}};
			input[] = {{"DZE_Item_Tex_Burlap",3}};
		};
	};
};

class DZE_Item_Tex_Rag: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_rag";
	descriptionShort = "$STR_ITEM_DESC_equip_rag";
	model = "\z\addons\dayz_communityassets\models\rag_clean.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_rag_clean_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_269";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Medi_Bandage",2}};
			outputweapons[] = {};
			input[] = {{"DZE_Item_Medi_Gauze",2},{"DZE_Item_Tex_Rag",1},{"DZE_Item_Tex_String",1}};
		};
	};
};

class DZE_Item_Tex_String: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_string";
	descriptionShort = "$STR_ITEM_DESC_equip_string";
	model = "\z\addons\dayz_communityassets\models\string.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_string_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_269";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Medi_Bandage",2}};
			outputweapons[] = {};
			input[] = {{"DZE_Item_Medi_Gauze",2},{"DZE_Item_Tex_Rag",1},{"DZE_Item_Tex_String",1}};
		};
		class Crafting1 {
			text = "$STR_ITEM_NAME_TRIPWIRE_CANS";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Trap_TripwireCans",1}};
			input[] = {{"DZE_Item_Tex_String",1},{"DZE_Item_Trash_TinCan",1},{"DZE_Item_Wood_Pile",1},{"DZE_Item_Plastic_Duct_Tape",1}};
		};
		class Crafting2 {
			text = "$STR_ITEM_NAME_TRIPWIRE_FLARE";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Trap_TripwireFlare",1}};
			input[] = {{"DZE_Item_Tex_String",1},{"DZE_Item_Flares_RoadFlare",1},{"DZE_Item_Wood_Pile",1},{"DZE_Item_Plastic_Duct_Tape",1}};
		};
		class Crafting3 {
			text = "$STR_ITEM_NAME_TRIPWIRE_GRENADE";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Trap_TripwireGrenade",1}};
			input[] = {{"DZE_Item_Tex_String",1},{"HandGrenade_West",1},{"DZE_Item_Wood_Pile",1},{"DZE_Item_Plastic_Duct_Tape",1}};
		};
		class Crafting4 {
			text = "$STR_ITEM_NAME_TRIPWIRE_SMOKE";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Trap_TripwireSmoke",1}};
			input[] = {{"DZE_Item_Tex_String",1},{"SmokeShell",1},{"DZE_Item_Wood_Pile",1},{"DZE_Item_Plastic_Duct_Tape",1}};
		};
	};
};

class DZE_Item_Tex_Rope: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_rope";
	descriptionShort = "$STR_ITEM_DESC_equip_rope";
	model = "\z\addons\dayz_communityassets\models\rope.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_rope_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_BLD_craft_equip_rope"; //"String"
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Tex_String",2}};
			input[] = {{"DZE_Item_Tex_Rope",1}};
		};
	};
};