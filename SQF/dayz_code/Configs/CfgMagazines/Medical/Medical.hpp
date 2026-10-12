#include "BloodBags.hpp"
#include "Antibiotic.hpp"
#include "Painkiller.hpp"

class DZE_Item_Medi_AntibacterialWipe: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_WIPES";
	descriptionShort = "$STR_ITEM_DESC_WIPES";
	model = "\z\addons\dayz_communityassets\models\antiseptic.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_antiseptic_ca.paa";
	count = 1;
	type = 16;

	class ItemActions {
		class Use {
			text = "$STR_ACTIONS_MEDICAL_WIPE";
			script = "spawn player_useMeds;";
		};
	};
};

class DZE_Item_Medi_Bandage: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_BANDAGE";
	descriptionShort = "$STR_EQUIP_DESC_BANDAGE";
	model = "\dayz_equip\models\fad.p3d";
	picture = "\dayz_equip\textures\equip_fad_ca.paa";
	count = 1;
	type = 16;

	class ItemActions {
		class Use {
			text = "$STR_BANDAGE_SELF";
			script = "spawn player_useMeds;";
		};
		class Crafting {
			text = "$STR_CRAFTING_SEPSISBANDAGE";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Medi_BandageSepsis",1}};
			outputweapons[] = {};
			input[] = {{"DZE_Item_Medi_Bandage",1},{"DZE_Item_Farm_Comfreyleafs",1}};
		};
	};
};

class DZE_Item_Medi_BandageSepsis: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SEPSISBANDAGE";
	descriptionShort = "$STR_EQUIP_DESC_SEPSISBANDAGE";
	model = "\dayz_equip\models\fad.p3d";
	picture = "\dayz_equip\textures\equip_fad_ca.paa";
	count = 1;
	type = 16;

	class ItemActions {
		class Use {
			text = "$STR_BANDAGE_SELF";
			script = "spawn player_useMeds;";
		};
	};
};

class DZE_Item_Medi_Epinephrine: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_EPI_PEN";
	descriptionShort = "$STR_EQUIP_DESC_EPI_PEN";
	model = "\dayz_equip\models\epi.p3d";
	picture = "\dayz_equip\textures\equip_epi_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Medi_Morphine: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_MORPHINE";
	descriptionShort = "$STR_EQUIP_DESC_MORPHINE";
	model = "\dayz_equip\models\morphine.p3d";
	picture = "\dayz_equip\textures\equip_morphine_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Use {
			text = "$STR_TAKE_MORPHINE";
			script = "spawn player_useMeds;";
		};
	};
};

class DZE_Item_Medi_HeatPack: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_HEAT_PACK";
	descriptionShort = "$STR_EQUIP_DESC_HEAT_PACK";
	model = "\dayz_equip\models\Heat_pack.p3d";
	picture = "\dayz_equip\textures\equip_heat_pack_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Use {
			text = "$STR_ACTIONS_HEATPACK";
			script = "spawn player_useMeds;";
		};
	};
};

class DZE_Item_Medi_Woodensplint: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_WOODENSPLINT";
	descriptionShort = "$STR_ITEM_DESC_WOODENSPLINT";
	model = "\z\addons\dayz_communityassets\models\woodensplint.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_woodensplint_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Use {
			text = "$STR_ACTIONS_BRACE_LEG";
			script = "spawn player_useMeds;";
		};
	};
};

class DZE_Item_Medi_Gauze: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_gauze";
	descriptionShort = "$STR_ITEM_DESC_equip_gauze";
	model = "\z\addons\dayz_communityassets\models\gauze.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_gauze_ca.paa";
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

class DZE_Item_Medi_Gauzepackaged: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_gauzepackaged";
	descriptionShort = "$STR_ITEM_DESC_equip_gauzepackaged";
	model = "\z\addons\dayz_communityassets\models\gauze_package.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_gauze_package_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_CRAFTING_PACKAGEGAUZE";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Medi_Gauze",3}};
			outputweapons[] = {};
			input[] = {{"DZE_Item_Medi_Gauzepackaged",1}};
		};
	};
};

class DZE_Item_Medi_Herb_Box: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_HERBBOX";
	descriptionShort = "$STR_EQUIP_DESC_HERBBOX";
	model = "\z\addons\dayz_communityassets\models\herb_box.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_herb_box_ca.paa";
	count = 1;
	type = 256;
};