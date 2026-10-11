class DZE_Item_Kit_Net_Desert_Large: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEDESERTCAMONET";
	descriptionShort = "$STR_EPOCH_LARGECAMONET_DESC";
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_DesertLargeCamoNet";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};
class DZE_Item_Kit_Net_Forest_Large: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEFORESTCAMONET";
	descriptionShort = "$STR_EPOCH_LARGECAMONET_DESC";
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ForestLargeCamoNet";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};
class DZE_Item_Kit_Net_Desert: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_DESERTCAMONET";
	descriptionShort = "$STR_EPOCH_CAMONET_DESC";
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_DesertCamoNet";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_229";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Kit_Net_Desert_Large",1}};
			input[] = {{"DZE_Item_Kit_Net_Desert",3}};
		};
	};
};
class DZE_Item_Kit_Net_Forest: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FORESTCAMONET";
	descriptionShort = "$STR_EPOCH_CAMONET_DESC";
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ForestCamoNet";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_229";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Kit_Net_Forest_Large",1}};
			input[] = {{"DZE_Item_Kit_Net_Forest",3}};
		};
	};
};

class DZE_Item_Kit_Net_Winter: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WINTERCAMONET";
	descriptionShort = "$STR_EPOCH_CAMONET_DESC";
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WinterCamoNet";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_229";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"DZE_Item_Kit_Net_Winter_Large",1}};
			input[] = {{"DZE_Item_Kit_Net_Winter",3}};
		};		
	};
};
class DZE_Item_Kit_Net_Winter_Large: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LARGEWINTERCAMONET";
	descriptionShort = "$STR_EPOCH_LARGECAMONET_DESC";
	model = "\z\addons\dayz_communityassets\models\packed_net_green.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_packed_net_green_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WinterLargeCamoNet";
			require[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
		};
	};
};
