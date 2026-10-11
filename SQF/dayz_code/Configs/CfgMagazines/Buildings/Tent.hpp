class ItemTent : CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CAMPING_TENT";
	descriptionShort = "$STR_EQUIP_DESC_CAMPING_TENT";
	model = "\dayz_equip\models\tentbag_gear.p3d";
	picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_PITCH_TENT";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_TentStorage";
			require[] = {};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_271";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"forest_net_kit",1}};
			input[] = {{"ItemTent",2},{"equip_tent_poles",2}};
		};
	};
};

class ItemTentWinter : CA_Magazine {
	scope = 2;
	displayName = "$STR_VEH_NAME_TENTWINTER";
	descriptionShort = "$STR_EQUIP_DESC_CAMPING_TENT";
	model = "\dayz_equip\models\tentbag_gear.p3d";
	picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_PITCH_TENT";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_TentStorageWinter";
			require[] = {};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_272";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"winter_net_kit",1}};
			input[] = {{"ItemTentWinter",2},{"equip_tent_poles",2}};
		};
	};
};

class ItemDomeTent : CA_Magazine {
	scope = 2;
	displayName = "$STR_VEH_NAME_DOME_TENT";
	descriptionShort = "$STR_EQUIP_DESC_CAMPING_TENT";
	model = "\dayz_equip\models\tentbag_gear.p3d";
	picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_PITCH_DOME_TENT";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_DomeTentStorage";
			require[] = {};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_271";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"forest_net_kit",1}};
			input[] = {{"ItemDomeTent",2},{"equip_tent_poles",2}};
		};
	};
};

class ItemWinterDomeTent : CA_Magazine {
	scope = 2;
	displayName = "$STR_VEH_NAME_WINTER_DOME_TENT";
	descriptionShort = "$STR_EQUIP_DESC_CAMPING_TENT";
	model = "\dayz_equip\models\tentbag_gear.p3d";
	picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_PITCH_TENT";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WinterDomeTentStorage";
			require[] = {};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_272";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"winter_net_kit",1}};
			input[] = {{"ItemWinterDomeTent",2},{"equip_tent_poles",2}};
		};
	};
};

class ItemDesertTent : CA_Magazine {
	scope = 2;
	displayName = "$STR_VEH_NAME_DESERT_TENT";
	descriptionShort = "$STR_EQUIP_DESC_CAMPING_TENT";
	model = "\dayz_equip\models\tentbag_gear.p3d";
	picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_PITCH_DESERT_TENT";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_DesertTentStorage";
			require[] = {};
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_270";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"desert_net_kit",1}};
			input[] = {{"ItemDesertTent",2},{"equip_tent_poles",2}};
		};
	};
};