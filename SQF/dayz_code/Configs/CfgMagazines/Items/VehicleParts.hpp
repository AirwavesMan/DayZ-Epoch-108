class DZE_Item_Parts_Fueltank: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_FUELTANK";
	descriptionShort = "$STR_EQUIP_DESC_FUELTANK";
	model = "\dayz_equip\models\fueltank.p3d";
	picture = "\dayz_equip\textures\equip_fueltank_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_212";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Metal_Parts",1}};
			input[] = {{"DZE_Item_Parts_Fueltank",1}};
		};
	};
};

class DZE_Item_Parts_Wheel: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CAR_WHEEL";
	descriptionShort = "$STR_EQUIP_DESC_CAR_WHEEL";
	model = "\dayz_equip\models\wheel.p3d";
	picture = "\dayz_equip\textures\equip_wheel_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Parts_Engine: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_ENGINE";
	descriptionShort = "$STR_EQUIP_DESC_ENGINE";
	model = "\dayz_equip\models\engine.p3d";
	picture = "\dayz_equip\textures\equip_engine_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_212";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Metal_Parts",2}};
			input[] = {{"DZE_Item_Parts_Engine",1}};
		};
	};
};

class DZE_Item_Parts_VRotor: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_MAIN_ROTOR";
	descriptionShort = "$STR_EQUIP_DESC_MAIN_ROTOR";
	model = "\dayz_equip\models\vrotor.p3d";
	picture = "\dayz_equip\textures\equip_vrotor_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_212";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Metal_Parts",3}};
			input[] = {{"DZE_Item_Parts_VRotor",1}};
		};
	};
};

class DZE_Item_Parts_Glass: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WINDSCREEN_GLASS";
	descriptionShort = "$STR_EQUIP_DESC_WINDSCREEN_GLASS";
	model = "\dayz_equip\models\carglass.p3d";
	picture = "\dayz_equip\textures\equip_carglass_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_ACTION_GLASS_FLOOR_QUARTER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Kit_Glass_Floor_Quarter",1}};
			input[] = {{"DZE_Item_Metal_Pole",8},{"DZE_Item_Parts_Glass",4}};
		};
	};
};

class DZE_Item_Parts_FueltankBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BROKEN_FUELTANK";
	descriptionShort = "$STR_EPOCH_BROKEN_FUELTANK_DESC";
	model = "\dayz_equip\models\fueltank.p3d";
	picture = "\dayz_epoch_c\icons\vehicleparts\equip_fueltank_broken_ca";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_212";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Metal_Parts",1}};
			input[] = {{"DZE_Item_Parts_FueltankBroken",1}};
		};
	};
};

class DZE_Item_Parts_WheelBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BROKEN_CARWHEEL";
	descriptionShort = "$STR_EPOCH_BROKEN_CARWHEEL_DESC";
	model = "\dayz_equip\models\wheel.p3d";
	picture = "\dayz_epoch_c\icons\vehicleparts\equip_wheel_broken_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Parts_EngineBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BROKEN_ENGINEPARTS";
	descriptionShort = "$STR_EPOCH_BROKEN_ENGINEPARTS_DESC";
	model = "\dayz_equip\models\engine.p3d";
	picture = "\dayz_epoch_c\icons\vehicleparts\equip_engine_broken_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_212";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Metal_Parts",2}};
			input[] = {{"DZE_Item_Parts_EngineBroken",1}};
		};
	};
};

class DZE_Item_Parts_VRotorBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BROKEN_ROTOR";
	descriptionShort = "$STR_EPOCH_BROKEN_ROTOR_DESC";
	model = "\dayz_equip\models\vrotor.p3d";
	picture = "\dayz_epoch_c\icons\vehicleparts\equip_vrotor_broken_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_212";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Crowbar"};
			output[] = {{"DZE_Item_Metal_Parts",3}};
			input[] = {{"DZE_Item_Parts_VRotorBroken",1}};
		};
	};
};

class DZE_Item_Parts_GlassBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BROKEN_GLASS";
	descriptionShort = "$STR_EPOCH_BROKEN_GLASS_DESC";
	model = "\dayz_equip\models\carglass.p3d";
	picture = "\dayz_epoch_c\icons\vehicleparts\equip_carglass_broken_CA.paa";
	count = 1;
	type = 256;
};



// DZE_Item_Metal_Parts can be found under Items\Metal.hpp