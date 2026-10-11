class ItemStone: CA_Magazine {
	scope = 2;
	displayName = "$STR_BLD_name_ItemStone"; //"Rough Stone"
	descriptionShort = "$STR_BLD_desc_ItemStone"; //"Rough Stone"
	picture = "\z\addons\dayz_buildings\equip\rocks.paa";
	model = "z\addons\dayz_buildings\models\rocks.p3d";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_ACTION_CONCRETE_BLOCK";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Etool"};
			output[] = {{"ItemConcreteBlock",1}};
			input[] = {{"ItemStone",6},{"CementBag",1}};
		};
		class Crafting1 {
			text = "$STR_BLD_name_WoodenFence_1_foundation";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Woodfence_Foundation",1}};
			input[] = {{"ItemStone",8},{"MortarBucket",1},{"ItemPlank",1}};
		};
		class Crafting2 {
			text = "$STR_BLD_name_MetalFence_1_foundation";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Metalfence_Foundation",1}};
			input[] = {{"ItemStone",8},{"MortarBucket",1},{"ItemRSJ",1}};
		};				
		class Crafting3 {
			text = "$STR_EPOCH_ACTION_CRAFT_CNC_BARRIER";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Etool"};
			output[] = {{"DZE_Item_Kit_Concrete_Barrier",1}};
			input[] = {{"CementBag",3},{"ItemStone",2},{"DZE_Item_Kit_Wire",1}};
		};				
		class Crafting4 {
			text = "$STR_EPOCH_ACTION_CRAFT_DRAGONTEETH";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Dragonteeth",1}};
			input[] = {{"DZE_Item_Kit_Concrete_Wall",1},{"ItemStone",6},{"CementBag",4}};
		};	
		class Crafting5 {
			text = "$STR_EPOCH_ACTION_CRAFT_DRAGONTEETH_BIG";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Dragonteeth_Big",1}};
			input[] = {{"DZE_Item_Kit_Dragonteeth",1},{"ItemStone",6},{"CementBag",4}};
		};
	};		
};

class ItemConcreteBlock: CA_Magazine {
	scope = 2;
	displayName = "$STR_BLD_name_ItemConcreteBlock"; //"Concrete Block"
	descriptionShort = "$STR_BLD_desc_ItemConcreteBlock"; //"Concrete Block"
	picture = "\z\addons\dayz_buildings\equip\concreteblock.paa";
	model = "z\addons\dayz_buildings\models\concreteblock.p3d";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_ACTION_CONCRETE_BUNKER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Cinder_Bunker",1}};
			input[] = {{"DZE_Item_Kit_Full_Cinder_Wall",3},{"ItemConcreteBlock",5},{"equip_metal_sheet",3},{"ItemScrews",1}};
		};
	};	
};

class CinderBlocks: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CINDERBLOCKS";
	descriptionShort = "$STR_EPOCH_CINDERBLOCKS_DESC";
	model = "\z\addons\dayz_epoch\models\cinder_stack.p3d";
	picture = "\z\addons\dayz_epoch\pictures\epuip_cinder_blocks_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_252";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Half_Cinder_Wall",1}};
			input[] = {{"CinderBlocks",3},{"MortarBucket",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_252_1";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Full_Cinder_Wall",1}};
			input[] = {{"CinderBlocks",7},{"MortarBucket",2}};
		};	
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_239_1_3";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Cinderwall_Window",1}};
			input[] = {{"CinderBlocks",5},{"MortarBucket",1},{"DZE_Item_Kit_TankTrap",1},{"ItemPole",1}};
		};			
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_234";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Cinder_Door_Frame",1}};
			input[] = {{"CinderBlocks",4},{"MortarBucket",1},{"DZE_Item_Kit_TankTrap",1}};
		};		
		class Crafting4 {
			text = "$STR_EPOCH_PLAYER_253";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Cinder_Garage_Frame",1}};
			input[] = {{"CinderBlocks",3},{"MortarBucket",1},{"DZE_Item_Kit_TankTrap",1}};
		};
		class Crafting5 {
			text = "$STR_EPOCH_PLAYER_253_1_1";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Cinder_Garage_Top_Open_Frame",1}};
			input[] = {{"CinderBlocks",4},{"MortarBucket",1}};
		};		
		class Crafting6 {
			text = "$STR_EPOCH_PLAYER_253_1";
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Cinder_Gate_Frame",1}};
			input[] = {{"CinderBlocks",8},{"MortarBucket",4}};
		};
	};
};
class MortarBucket: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BUCKETOFMORTAR";
	descriptionShort = "$STR_EPOCH_BUCKETOFMORTAR_DESC";
	model = "\z\addons\dayz_epoch\models\mortar.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_mortar_CA.paa";
	count = 1;
	type = 256;
};

class equip_brick : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_brick";
	descriptionShort = "$STR_ITEM_DESC_equip_brick";
	model = "\z\addons\dayz_communityassets\models\brick.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_brick.paa";
	count = 1;
};

class CementBag: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_CEMENT_BAG";
	descriptionShort = "$STR_ITEM_DESC_CEMENT_BAG";
	picture = "\dayz_epoch_c\icons\equipment\ItemCementBag.paa";
	model = "\z\addons\dayz_epoch_w\items\cement_bag.p3d";
	count = 1;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_ACTION_CONCRETE_BLOCK";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Etool"};
			output[] = {{"ItemConcreteBlock",1}};
			input[] = {{"ItemStone",6},{"CementBag",1}};
		};	
		class Crafting1 {
			text = "$STR_EPOCH_ACTION_CRAFT_CNC_BARRIER";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Etool"};
			output[] = {{"DZE_Item_Kit_Concrete_Barrier",1}};
			input[] = {{"CementBag",3},{"ItemStone",2},{"DZE_Item_Kit_Wire",1}};
		};	
		class Crafting2 {
			text = "$STR_EPOCH_ACTION_CRAFT_CONCRETE_WALL";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Concrete_Wall",1}};
			input[] = {{"DZE_Item_Kit_Concrete_Barrier",5},{"CementBag",2}};
		};	
		class Crafting3 {
			text = "$STR_EPOCH_ACTION_CRAFT_CONCRETE_PIPE";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Concrete_Pipe",1}};
			input[] = {{"DZE_Item_Kit_Concrete_Barrier",6},{"CementBag",2}};
		};	
		class Crafting4 {
			text = "$STR_EPOCH_ACTION_CRAFT_DRAGONTEETH";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Dragonteeth",1}};
			input[] = {{"DZE_Item_Kit_Concrete_Wall",1},{"ItemStone",6},{"CementBag",4}};
		};	
		class Crafting5 {
			text = "$STR_EPOCH_ACTION_CRAFT_DRAGONTEETH_BIG";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Sledge"};
			output[] = {{"DZE_Item_Kit_Dragonteeth_Big",1}};
			input[] = {{"DZE_Item_Kit_Dragonteeth",1},{"ItemStone",6},{"CementBag",4}};
		};
	};	
};