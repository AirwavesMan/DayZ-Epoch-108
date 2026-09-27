class DZE_Item_Bag_Patrol_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_PATROL_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_PATROL_DZE1;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Patrol_1",1}};
			input[] = {{"DZE_Item_Bag_Patrol_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Patrol_1";
		};
	};
};
class DZE_Item_Bag_Patrol_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_PATROL_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_PATROL_DZE2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Patrol_2",1}};
			input[] = {{"DZE_Item_Bag_Patrol_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Patrol_2";
		};
	};
};
class DZE_Item_Bag_Gym_Camo_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GYM_CAMO_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_GYMBAG_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_camo.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gym_Camo_1",1}};
			input[] = {{"DZE_Item_Bag_Gym_Camo_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gym_Camo_1";
		};
	};
};
class DZE_Item_Bag_Gym_Camo_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GYM_CAMO_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_GYMBAG_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_camo.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gym_Camo_2",1}};
			input[] = {{"DZE_Item_Bag_Gym_Camo_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gym_Camo_2";
		};
	};
};
class DZE_Item_Bag_Gym_Green_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GYM_GREEN_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_GYMBAG_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_yellow";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_green.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gym_Green_1",1}};
			input[] = {{"DZE_Item_Bag_Gym_Green_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gym_Green_1";
		};
	};
};
class DZE_Item_Bag_Gym_Green_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GYM_GREEN_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_GYMBAG_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_gymbag_yellow";
	picture = "\dayz_epoch_c\icons\backpacks\gymbag_green.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gym_Green_2",1}};
			input[] = {{"DZE_Item_Bag_Gym_Green_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gym_Green_2";
		};
	};
};
class DZE_Item_Bag_CzechPouch_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECHPOUCH_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_VEST_DZE1;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_CzechPouch_1",1}};
			input[] = {{"DZE_Item_Bag_CzechPouch_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_CzechPouch_1";
		};
	};
};
class DZE_Item_Bag_CzechPouch_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECHPOUCH_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_VEST_DZE2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr_small.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_small_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_CzechPouch_2",1}};
			input[] = {{"DZE_Item_Bag_CzechPouch_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_CzechPouch_2";
		};
	};
};
class DZE_Item_Bag_Assault_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ASSAULT_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_ACU_DZE1;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Assault_1",1}};
			input[] = {{"DZE_Item_Bag_Assault_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Assault_1";
		};
	};
};
class DZE_Item_Bag_Assault_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ASSAULT_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_ACU_DZE2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Assault_2",1}};
			input[] = {{"DZE_Item_Bag_Assault_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Assault_2";
		};
	};
};
class DZE_Item_Bag_Terminal_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TERMINAL_1_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_TERMINAL_DZE1;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_AUV";
	picture = "\dayz_epoch_c\icons\backpacks\terminalpack.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Terminal_1",1}};
			input[] = {{"DZE_Item_Bag_Terminal_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Terminal_1";
		};
	};
};
class DZE_Item_Bag_Terminal_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TERMINAL_2_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_TERMINAL_DZE2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us_AUV";
	picture = "\dayz_epoch_c\icons\backpacks\terminalpack.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Terminal_2",1}};
			input[] = {{"DZE_Item_Bag_Terminal_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Terminal_2";
		};
	};
};
class DZE_Item_Bag_Tiny_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TINY_1_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_TINY_DZE1;
	model = "\Ca\Characters_ACR\backpack_acr_rpg";
	picture = "\Ca\Weapons_ACR\Data\UI\picture_backpack_acr_rpg";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Tiny_1",1}};
			input[] = {{"DZE_Item_Bag_Tiny_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Tiny_1";
		};
	};
};
class DZE_Item_Bag_Tiny_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TINY_2_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_TINY_DZE2;
	model = "\Ca\Characters_ACR\backpack_acr_rpg";
	picture = "\Ca\Weapons_ACR\Data\UI\picture_backpack_acr_rpg";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Tiny_2",1}};
			input[] = {{"DZE_Item_Bag_Tiny_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Tiny_2";
		};
	};
};
class DZE_Item_Bag_ALICE_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_ALICE_DZE1;
	model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_1";
		};
	};
};
class DZE_Item_Bag_ALICE_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_ALICE_DZE2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_2";
		};
	};
};
class DZE_Item_Bag_TK_Assault_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TK_ASSAULT_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU_DZE1;
	model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TK_Assault_1",1}};
			input[] = {{"DZE_Item_Bag_TK_Assault_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TK_Assault_1";
		};
	};
};
class DZE_Item_Bag_TK_Assault_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TK_ASSAULT_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_SURVACU_DZE2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_civil_assault.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_CIVIL_ASSAULT_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TK_Assault_2",1}};
			input[] = {{"DZE_Item_Bag_TK_Assault_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TK_Assault_2";
		};
	};
};
class DZE_Item_Bag_School_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_SCHOOL_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_SCHOOLBAG_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\schoolbag.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_School_1",1}};
			input[] = {{"DZE_Item_Bag_School_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_School_1";
		};
	};
};
class DZE_Item_Bag_School_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_SCHOOL_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_SCHOOLBAG_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_01";
	picture = "\dayz_epoch_c\icons\backpacks\schoolbag.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_School_2",1}};
			input[] = {{"DZE_Item_Bag_School_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_School_2";
		};
	};
};
class DZE_Item_Bag_Compact_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COMPACT_1_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_COMPACT_DZE1;
	model = "\ca\weapons_e\AmmoBoxes\backpack_rpg.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_RPG_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Compact_1",1}};
			input[] = {{"DZE_Item_Bag_Compact_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Compact_1";
		};
	};
};
class DZE_Item_Bag_Compact_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COMPACT_2_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_COMPACT_DZE2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_rpg.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_RPG_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Compact_2",1}};
			input[] = {{"DZE_Item_Bag_Compact_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Compact_2";
		};
	};
};
class DZE_Item_Bag_British_ACU_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_BRITISH_ACU_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH_DZE1;
	model = "\ca\weapons_baf\Backpack_Small_BAF";
	picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_British_ACU_1",1}};
			input[] = {{"DZE_Item_Bag_British_ACU_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_British_ACU_1";
		};
	};
};
class DZE_Item_Bag_British_ACU_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_BRITISH_ACU_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_BRITISH_DZE2;
	model = "\ca\weapons_baf\Backpack_Small_BAF";
	picture = "\ca\weapons_baf\data\UI\backpack_BAF_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_British_ACU_2",1}};
			input[] = {{"DZE_Item_Bag_British_ACU_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_British_ACU_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_1_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_GB_DZE1;
	model = "\ca\weapons_e\AmmoBoxes\StaticY.p3d";
	picture = "\ca\weapons_e\data\icons\staticY_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_2_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_GB_DZE2;
	model = "\ca\weapons_e\AmmoBoxes\StaticY.p3d";
	picture = "\ca\weapons_e\data\icons\staticY_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_2";
		};
	};
};
class DZE_Item_Bag_Party_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_PARTY_1_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_PARTYPACK_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_02";
	picture = "\dayz_epoch_c\icons\backpacks\partypack.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Party_1",1}};
			input[] = {{"DZE_Item_Bag_Party_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Party_1";
		};
	};
};
class DZE_Item_Bag_Party_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_PARTY_2_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_PARTYPACK_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_canvasbag_02";
	picture = "\dayz_epoch_c\icons\backpacks\partypack.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Party_2",1}};
			input[] = {{"DZE_Item_Bag_Party_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Party_2";
		};
	};
};
class DZE_Item_Bag_Night_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_NIGHT_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_APO1_DZE1;
	model = "\ice_apo_resistance\Backpack1.p3d";
	picture = "\ice_apo_resistance\icons\backpack1_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Night_1",1}};
			input[] = {{"DZE_Item_Bag_Night_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Night_1";
		};
	};
};
class DZE_Item_Bag_Night_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_NIGHT_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_APO1_DZE2;
	model = "\ice_apo_resistance\Backpack1.p3d";
	picture = "\ice_apo_resistance\icons\backpack1_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Night_2",1}};
			input[] = {{"DZE_Item_Bag_Night_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Night_2";
		};
	};
};
class DZE_Item_Bag_Survivor_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_SURVIVOR_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_APO2_DZE1;
	model = "\ice_apo_resistance\Backpack4.p3d";
	picture = "\ice_apo_resistance\icons\backpack4_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Survivor_1",1}};
			input[] = {{"DZE_Item_Bag_Survivor_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Survivor_1";
		};
	};
};
class DZE_Item_Bag_Survivor_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_SURVIVOR_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_APO2_DZE2;
	model = "\ice_apo_resistance\Backpack4.p3d";
	picture = "\ice_apo_resistance\icons\backpack4_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Survivor_2",1}};
			input[] = {{"DZE_Item_Bag_Survivor_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Survivor_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_AIRWAVES_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_wavesbag_01.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\airwavespack.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_AIRWAVES_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_wavesbag_01.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\airwavespack.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_2";
		};
	};
};
class DZE_Item_Bag_Czech_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DZE1;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_1";
		};
	};
};
class DZE_Item_Bag_Czech_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DZE2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_2";
		};
	};
};
class DZE_Item_Bag_Czech_Camping_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_CAMPING_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_CAMPING_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_01";
	picture = "\dayz_epoch_c\icons\backpacks\20_backpack_camping.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_Camping_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_Camping_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_Camping_1";
		};
	};
};
class DZE_Item_Bag_Czech_Camping_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_CAMPING_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_CAMPING_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_01";
	picture = "\dayz_epoch_c\icons\backpacks\20_backpack_camping.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_Camping_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_Camping_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_Camping_2";
		};
	};
};
class DZE_Item_Bag_Czech_OD_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_OD_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_OD_DZE1;
	model = "\len_backpacks\backpack_odr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\01_backpack_odr.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_OD_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_OD_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_OD_1";
		};
	};
};
class DZE_Item_Bag_Czech_OD_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_OD_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_OD_DZE2;
	model = "\len_backpacks\backpack_odr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\01_backpack_odr.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_OD_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_OD_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_OD_2";
		};
	};
};
class DZE_Item_Bag_Czech_DES_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_DES_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DES_DZE1;
	model = "\len_backpacks\backpack_des.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\02_backpack_des.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_DES_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_DES_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_DES_1";
		};
	};
};
class DZE_Item_Bag_Czech_DES_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_DES_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DES_DZE2;
	model = "\len_backpacks\backpack_des.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\02_backpack_des.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_DES_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_DES_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_DES_2";
		};
	};
};
class DZE_Item_Bag_Czech_3DES_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_3DES_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_3DES_DZE1;
	model = "\len_backpacks\backpack_3ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\03_backpack_3ds.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_3DES_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_3DES_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_3DES_1";
		};
	};
};
class DZE_Item_Bag_Czech_3DES_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_3DES_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_3DES_DZE2;
	model = "\len_backpacks\backpack_3ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\03_backpack_3ds.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_3DES_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_3DES_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_3DES_2";
		};
	};
};
class DZE_Item_Bag_Czech_WDL_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_WDL_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_WDL_DZE1;
	model = "\len_backpacks\backpack_wdl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\04_backpack_wdl.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_WDL_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_WDL_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_WDL_1";
		};
	};
};
class DZE_Item_Bag_Czech_WDL_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_WDL_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_WDL_DZE2;
	model = "\len_backpacks\backpack_wdl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\04_backpack_wdl.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_WDL_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_WDL_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_WDL_2";
		};
	};
};
class DZE_Item_Bag_Czech_MAR_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_MAR_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MAR_DZE1;
	model = "\len_backpacks\backpack_mar.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\05_backpack_mar.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_MAR_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_MAR_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_MAR_1";
		};
	};
};
class DZE_Item_Bag_Czech_MAR_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_MAR_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MAR_DZE2;
	model = "\len_backpacks\backpack_mar.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\05_backpack_mar.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_MAR_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_MAR_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_MAR_2";
		};
	};
};
class DZE_Item_Bag_Czech_DMAR_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_DMAR_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DMAR_DZE1;
	model = "\len_backpacks\backpack_dmr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\06_backpack_dmr.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_DMAR_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_DMAR_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_DMAR_1";
		};
	};
};
class DZE_Item_Bag_Czech_DMAR_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_DMAR_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DMAR_DZE2;
	model = "\len_backpacks\backpack_dmr.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\06_backpack_dmr.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_DMAR_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_DMAR_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_DMAR_2";
		};
	};
};
class DZE_Item_Bag_Czech_UCP_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_UCP_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_UCP_DZE1;
	model = "\len_backpacks\backpack_ucp.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\07_backpack_ucp.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_UCP_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_UCP_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_UCP_1";
		};
	};
};
class DZE_Item_Bag_Czech_UCP_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_UCP_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_UCP_DZE2;
	model = "\len_backpacks\backpack_ucp.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\07_backpack_ucp.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_UCP_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_UCP_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_UCP_2";
		};
	};
};
class DZE_Item_Bag_Czech_6DES_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_6DES_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_6DES_DZE1;
	model = "\len_backpacks\backpack_6ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\08_backpack_6ds.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_6DES_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_6DES_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_6DES_1";
		};
	};
};
class DZE_Item_Bag_Czech_6DES_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_6DES_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_6DES_DZE2;
	model = "\len_backpacks\backpack_6ds.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\08_backpack_6ds.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_6DES_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_6DES_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_6DES_2";
		};
	};
};
class DZE_Item_Bag_Czech_TAK_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_TAK_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_TAK_DZE1;
	model = "\len_backpacks\backpack_tak.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\09_backpack_tak.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_TAK_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_TAK_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_TAK_1";
		};
	};
};
class DZE_Item_Bag_Czech_TAK_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_TAK_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_TAK_DZE2;
	model = "\len_backpacks\backpack_tak.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\09_backpack_tak.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_TAK_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_TAK_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_TAK_2";
		};
	};
};
class DZE_Item_Bag_Czech_NVG_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_NVG_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_NVG_DZE1;
	model = "\len_backpacks\backpack_nvg.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\10_backpack_nvg.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_NVG_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_NVG_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_NVG_1";
		};
	};
};
class DZE_Item_Bag_Czech_NVG_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_NVG_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_NVG_DZE2;
	model = "\len_backpacks\backpack_nvg.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\10_backpack_nvg.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_NVG_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_NVG_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_NVG_2";
		};
	};
};
class DZE_Item_Bag_Czech_BLK_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_BLK_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_BLK_DZE1;
	model = "\len_backpacks\backpack_blk.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\11_backpack_blk.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_BLK_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_BLK_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_BLK_1";
		};
	};
};
class DZE_Item_Bag_Czech_BLK_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_BLK_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_BLK_DZE2;
	model = "\len_backpacks\backpack_blk.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\11_backpack_blk.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_BLK_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_BLK_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_BLK_2";
		};
	};
};
class DZE_Item_Bag_Czech_DPM_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_DPM_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DPM_DZE1;
	model = "\len_backpacks\backpack_dpm.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\12_backpack_dpm.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_DPM_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_DPM_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_DPM_1";
		};
	};
};
class DZE_Item_Bag_Czech_DPM_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_DPM_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_DPM_DZE2;
	model = "\len_backpacks\backpack_dpm.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\12_backpack_dpm.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_DPM_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_DPM_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_DPM_2";
		};
	};
};
class DZE_Item_Bag_Czech_FIN_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_FIN_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_FIN_DZE1;
	model = "\len_backpacks\backpack_fin.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\13_backpack_fin.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_FIN_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_FIN_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_FIN_1";
		};
	};
};
class DZE_Item_Bag_Czech_FIN_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_FIN_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_FIN_DZE2;
	model = "\len_backpacks\backpack_fin.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\13_backpack_fin.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_FIN_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_FIN_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_FIN_2";
		};
	};
};
class DZE_Item_Bag_Czech_MTC_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_MTC_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MTC_DZE1;
	model = "\len_backpacks\backpack_mtc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\14_backpack_mtc.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_MTC_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_MTC_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_MTC_1";
		};
	};
};
class DZE_Item_Bag_Czech_MTC_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_MTC_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MTC_DZE2;
	model = "\len_backpacks\backpack_mtc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\14_backpack_mtc.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_MTC_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_MTC_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_MTC_2";
		};
	};
};
class DZE_Item_Bag_Czech_NOR_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_NOR_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_NOR_DZE1;
	model = "\len_backpacks\backpack_nor.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\15_backpack_nor.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_NOR_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_NOR_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_NOR_1";
		};
	};
};
class DZE_Item_Bag_Czech_NOR_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_NOR_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_NOR_DZE2;
	model = "\len_backpacks\backpack_nor.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\15_backpack_nor.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_NOR_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_NOR_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_NOR_2";
		};
	};
};
class DZE_Item_Bag_Czech_WIN_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_WIN_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_WIN_DZE1;
	model = "\len_backpacks\backpack_win.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\16_backpack_win.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_WIN_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_WIN_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_WIN_1";
		};
	};
};
class DZE_Item_Bag_Czech_WIN_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_WIN_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_WIN_DZE2;
	model = "\len_backpacks\backpack_win.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\16_backpack_win.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_WIN_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_WIN_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_WIN_2";
		};
	};
};
class DZE_Item_Bag_Czech_ATC_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_ATC_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_ATC_DZE1;
	model = "\len_backpacks\backpack_atc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\17_backpack_atc.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_ATC_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_ATC_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_ATC_1";
		};
	};
};
class DZE_Item_Bag_Czech_ATC_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_ATC_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_ATC_DZE2;
	model = "\len_backpacks\backpack_atc.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\17_backpack_atc.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_ATC_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_ATC_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_ATC_2";
		};
	};
};
class DZE_Item_Bag_Czech_MTL_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_MTL_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MTL_DZE1;
	model = "\len_backpacks\backpack_mtl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\18_backpack_mtl.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_MTL_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_MTL_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_MTL_1";
		};
	};
};
class DZE_Item_Bag_Czech_MTL_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_MTL_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_MTL_DZE2;
	model = "\len_backpacks\backpack_mtl.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\18_backpack_mtl.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_MTL_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_MTL_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_MTL_2";
		};
	};
};
class DZE_Item_Bag_Czech_FTN_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_FTN_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_FTN_DZE1;
	model = "\len_backpacks\backpack_ftn.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\19_backpack_ftn.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_FTN_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_FTN_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_FTN_1";
		};
	};
};
class DZE_Item_Bag_Czech_FTN_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_FTN_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_CZECH_FTN_DZE2;
	model = "\len_backpacks\backpack_ftn.p3d";
	picture = "\dayz_epoch_c\icons\backpacks\19_backpack_ftn.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_FTN_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_FTN_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_FTN_2";
		};
	};
};
class DZE_Item_Bag_Wanderer_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_WANDERER_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_APO3_DZE1;
	model = "\ice_apo_resistance\Backpack3.p3d";
	picture = "\ice_apo_resistance\icons\backpack3_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Wanderer_1",1}};
			input[] = {{"DZE_Item_Bag_Wanderer_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Wanderer_1";
		};
	};
};
class DZE_Item_Bag_Wanderer_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_WANDERER_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_APO3_DZE2;
	model = "\ice_apo_resistance\Backpack3.p3d";
	picture = "\ice_apo_resistance\icons\backpack3_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Wanderer_2",1}};
			input[] = {{"DZE_Item_Bag_Wanderer_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Wanderer_2";
		};
	};
};
class DZE_Item_Bag_Legend_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_LEGEND_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_APO4_DZE1;
	model = "\ice_apo_resistance\Backpack2.p3d";
	picture = "\ice_apo_resistance\icons\backpack2_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Legend_1",1}};
			input[] = {{"DZE_Item_Bag_Legend_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Legend_1";
		};
	};
};
class DZE_Item_Bag_Legend_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_LEGEND_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_APO4_DZE2;
	model = "\ice_apo_resistance\Backpack2.p3d";
	picture = "\ice_apo_resistance\icons\backpack2_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Legend_2",1}};
			input[] = {{"DZE_Item_Bag_Legend_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Legend_2";
		};
	};
};
class DZE_Item_Bag_Coyote_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DZE1;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_1";
		};
	};
};
class DZE_Item_Bag_Coyote_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DZE2;
	model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
	picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_2";
		};
	};
};
class DZE_Item_Bag_Coyote_Des_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_DES_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DES_DZE1;
	model = "\ksk_mod\backpack_ger_des.p3d";
	picture = "\ksk_mod\backpack_des_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_Des_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_Des_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_Des_1";
		};
	};
};
class DZE_Item_Bag_Coyote_Des_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_DES_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_DES_DZE2;
	model = "\ksk_mod\backpack_ger_des.p3d";
	picture = "\ksk_mod\backpack_des_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_Des_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_Des_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_Des_2";
		};
	};
};
class DZE_Item_Bag_Coyote_Wdl_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_WDL_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_WDL_DZE1;
	model = "\ksk_mod\backpack_ger_wdl.p3d";
	picture = "\ksk_mod\backpack_wdl_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_Wdl_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_Wdl_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_Wdl_1";
		};
	};
};
class DZE_Item_Bag_Coyote_Wdl_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_WDL_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_WDL_DZE2;
	model = "\ksk_mod\backpack_ger_wdl.p3d";
	picture = "\ksk_mod\backpack_wdl_ca.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_Wdl_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_Wdl_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_Wdl_2";
		};
	};
};
class DZE_Item_Bag_Coyote_Camping_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_CAMPING_1_NAME;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_CAMPING_DZE1;
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_02";
	picture = "\dayz_epoch_c\icons\backpacks\coyote_camping.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_Camping_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_Camping_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_Camping_1";
		};
	};
};
class DZE_Item_Bag_Coyote_Camping_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_CAMPING_2_NAME;
	descriptionShort = $STR_BACKPACK_DESC_COYOTE_CAMPING_DZE2;
	model = "\z\addons\dayz_epoch_u\clothes\dze_survivorpack_02";
	picture = "\dayz_epoch_c\icons\backpacks\coyote_camping.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_Camping_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_Camping_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_Camping_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_1_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_LGB_DZE1;
	model = "\ca\weapons_e\AmmoBoxes\StaticX.p3d";
	picture = "\ca\weapons_e\data\icons\staticX_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_2_NAME;
	descriptionShort = $STR_EPOCH_PACK_DESC_LGB_DZE2;
	model = "\ca\weapons_e\AmmoBoxes\StaticX.p3d";
	picture = "\ca\weapons_e\data\icons\staticX_CA.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_2";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo1_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo1_1";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo1_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo1_2";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO2_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo2_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo2_1";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO2_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo2_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo2_2";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo3_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO3_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo3_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo3_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo3_1";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo3_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO3_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo3_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo3_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo3_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo3_2";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo4_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO4_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo4_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo4_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo4_1";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo4_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO4_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo4_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo4_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo4_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo4_2";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo5_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO5_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo5_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo5_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo5_1";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo5_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO5_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo5_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo5_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo5_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo5_2";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo6_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO6_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo6_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo6_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo6_1";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Camo6_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_CAMO6_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Camo6_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Camo6_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Camo6_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Camo6_2";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Olive_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_OLIVE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Olive_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Olive_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Olive_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Olive_1";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Olive_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_OLIVE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Olive_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Olive_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Olive_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Olive_2";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Brown_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_BROWN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Brown_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Brown_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Brown_1";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Brown_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_BROWN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Brown_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Brown_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Brown_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Brown_2";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Tan_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_TAN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Tan_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Tan_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Tan_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Tan_1";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Tan_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_TAN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Tan_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Tan_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Tan_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Tan_2";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Black_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_BLACK_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Black_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Black_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Black_1";
		};
	};
};
class DZE_Item_Bag_Army_XL1_Black_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_BLACK_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_Black_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_Black_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_Black_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_Black_2";
		};
	};
};
class DZE_Item_Bag_Army_XL1_White_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_WHITE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_White_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_White_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_White_1";
		};
	};
};
class DZE_Item_Bag_Army_XL1_White_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL1_WHITE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge1_White_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge1_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL1_White_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL1_White_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL1_White_2";
		};
	};
};
class DZE_Item_Bag_Army_L_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_1";
		};
	};
};
class DZE_Item_Bag_Army_L_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_2";
		};
	};
};
class DZE_Item_Bag_Army_L_White_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_WHITE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_White_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_White_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_White_1";
		};
	};
};
class DZE_Item_Bag_Army_L_White_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_WHITE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_White_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_White_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_White_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_White_2";
		};
	};
};
class DZE_Item_Bag_Army_L_Olive_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_OLIVE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Olive_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Olive_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Olive_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Olive_1";
		};
	};
};
class DZE_Item_Bag_Army_L_Olive_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_OLIVE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Olive_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Olive_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Olive_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Olive_2";
		};
	};
};
class DZE_Item_Bag_Army_L_Brown_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_BROWN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Brown_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Brown_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Brown_1";
		};
	};
};
class DZE_Item_Bag_Army_L_Brown_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_BROWN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Brown_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Brown_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Brown_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Brown_2";
		};
	};
};
class DZE_Item_Bag_Army_L_Tan_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_TAN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Tan_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Tan_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Tan_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Tan_1";
		};
	};
};
class DZE_Item_Bag_Army_L_Tan_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_TAN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Tan_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Tan_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Tan_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Tan_2";
		};
	};
};
class DZE_Item_Bag_Army_L_Black_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_BLACK_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Black_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Black_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Black_1";
		};
	};
};
class DZE_Item_Bag_Army_L_Black_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_BLACK_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Black_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Black_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Black_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Black_2";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo1_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo1_1";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo1_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo1_2";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO2_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo2_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo2_1";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO2_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo2_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo2_2";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo3_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO3_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo3_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo3_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo3_1";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo3_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO3_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo3_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo3_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo3_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo3_2";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo4_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO4_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo4_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo4_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo4_1";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo4_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO4_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo4_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo4_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo4_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo4_2";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo5_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO5_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo5_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo5_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo5_1";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo5_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO5_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo5_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo5_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo5_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo5_2";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo6_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO6_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo6_1",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo6_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo6_1";
		};
	};
};
class DZE_Item_Bag_Army_L_Camo6_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_L_CAMO6_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Large_Camo6_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Large_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_L_Camo6_2",1}};
			input[] = {{"DZE_Item_Bag_Army_L_Camo6_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_L_Camo6_2";
		};
	};
};
class DZE_Item_Bag_Army_M1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_M1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_M1_1",1}};
			input[] = {{"DZE_Item_Bag_Army_M1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_M1_1";
		};
	};
};
class DZE_Item_Bag_Army_M1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_M1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_M1_2",1}};
			input[] = {{"DZE_Item_Bag_Army_M1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_M1_2";
		};
	};
};
class DZE_Item_Bag_Army_M2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_M2_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_M2_1",1}};
			input[] = {{"DZE_Item_Bag_Army_M2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_M2_1";
		};
	};
};
class DZE_Item_Bag_Army_M2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_M2_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_M2_2",1}};
			input[] = {{"DZE_Item_Bag_Army_M2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_M2_2";
		};
	};
};
class DZE_Item_Bag_Army_M3_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_M3_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_M3_1",1}};
			input[] = {{"DZE_Item_Bag_Army_M3_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_M3_1";
		};
	};
};
class DZE_Item_Bag_Army_M3_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_M3_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium3_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_M3_2",1}};
			input[] = {{"DZE_Item_Bag_Army_M3_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_M3_2";
		};
	};
};
class DZE_Item_Bag_Army_M4_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_M4_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_M4_1",1}};
			input[] = {{"DZE_Item_Bag_Army_M4_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_M4_1";
		};
	};
};
class DZE_Item_Bag_Army_M4_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_M4_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium4_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_M4_2",1}};
			input[] = {{"DZE_Item_Bag_Army_M4_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_M4_2";
		};
	};
};
class DZE_Item_Bag_Army_M5_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_M5_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_M5_1",1}};
			input[] = {{"DZE_Item_Bag_Army_M5_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_M5_1";
		};
	};
};
class DZE_Item_Bag_Army_M5_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_M5_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Medium5_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Medium5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_medium5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_M5_2",1}};
			input[] = {{"DZE_Item_Bag_Army_M5_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_M5_2";
		};
	};
};
class DZE_Item_Bag_Army_S1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_S1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Small_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Small.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_small_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_S1_1",1}};
			input[] = {{"DZE_Item_Bag_Army_S1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_S1_1";
		};
	};
};
class DZE_Item_Bag_Army_S1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_S1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Small_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Small.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_small_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_S1_2",1}};
			input[] = {{"DZE_Item_Bag_Army_S1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_S1_2";
		};
	};
};
class DZE_Item_Bag_Army_S2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_S2_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Small2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Small2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_small2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_S2_1",1}};
			input[] = {{"DZE_Item_Bag_Army_S2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_S2_1";
		};
	};
};
class DZE_Item_Bag_Army_S2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_S2_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_Small2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_Small2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_small2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_S2_2",1}};
			input[] = {{"DZE_Item_Bag_Army_S2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_S2_2";
		};
	};
};
class DZE_Item_Bag_Canvas_L_Green_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CANVAS_L_GREEN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Canvas_Bag_Large_Green1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Canvas_Bag_Large_Green1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\canvas_backpack_large_green_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Canvas_L_Green_1",1}};
			input[] = {{"DZE_Item_Bag_Canvas_L_Green_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Canvas_L_Green_1";
		};
	};
};
class DZE_Item_Bag_Canvas_L_Green_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CANVAS_L_GREEN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Canvas_Bag_Large_Green1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Canvas_Bag_Large_Green1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\canvas_backpack_large_green_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Canvas_L_Green_2",1}};
			input[] = {{"DZE_Item_Bag_Canvas_L_Green_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Canvas_L_Green_2";
		};
	};
};
class DZE_Item_Bag_Canvas_M_Green_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CANVAS_M_GREEN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Canvas_Bag_Medium_Green1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Canvas_Bag_Medium_Green1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\canvas_backpack_medium_green_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Canvas_M_Green_1",1}};
			input[] = {{"DZE_Item_Bag_Canvas_M_Green_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Canvas_M_Green_1";
		};
	};
};
class DZE_Item_Bag_Canvas_M_Green_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CANVAS_M_GREEN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Canvas_Bag_Medium_Green1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Canvas_Bag_Medium_Green1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\canvas_backpack_medium_green_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Canvas_M_Green_2",1}};
			input[] = {{"DZE_Item_Bag_Canvas_M_Green_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Canvas_M_Green_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_Olive_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_OLIVE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Olive_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_olive_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Olive_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Olive_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Olive_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_Olive_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_OLIVE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Olive_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_olive_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Olive_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Olive_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Olive_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_White_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_WHITE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_White_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_White_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_White_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_White_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_WHITE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_White_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_White_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_White_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_White_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_Tan_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_TAN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Tan_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Tan_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Tan_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Tan_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_Tan_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_TAN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Tan_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Tan_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Tan_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Tan_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_Brown_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_BROWN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Brown_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Brown_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Brown_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_Brown_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_BROWN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Brown_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Brown_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Brown_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Brown_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_Black_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_BLACK_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Black_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Black_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Black_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_Black_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_BLACK_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Black_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Black_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Black_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Black_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo1_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo1_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo1_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo1_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO2_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo2_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo2_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO2_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo2_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo2_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo3_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO3_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo3_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo3_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo3_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo3_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO3_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo3_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo3_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo3_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo3_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo4_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO4_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo4_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo4_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo4_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo4_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO4_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo4_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo4_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo4_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo4_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo5_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO5_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo5_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo5_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo5_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo5_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO5_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo5_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo5_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo5_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo5_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo6_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO6_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo6_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo6_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo6_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_Camo6_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_CAMO6_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_Camo6_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_camo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_Camo6_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_Camo6_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_Camo6_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Olive_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_OLIVE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Olive_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_olive_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Olive_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Olive_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Olive_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Olive_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_OLIVE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Olive_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_olive_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Olive_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Olive_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Olive_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_White_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_WHITE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_White_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_White_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_White_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_White_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_WHITE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_White_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_White_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_White_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_White_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Tan_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_TAN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Tan_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Tan_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Tan_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Tan_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Tan_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_TAN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Tan_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Tan_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Tan_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Tan_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Brown_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_BROWN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Brown_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Brown_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Brown_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Brown_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_BROWN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Brown_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Brown_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Brown_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Brown_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Black_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_BLACK_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Black_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Black_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Black_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Black_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_BLACK_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Black_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Black_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Black_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Black_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo1_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo1_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo1_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo1_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO2_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo2_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo2_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO2_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo2_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo2_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo3_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO3_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo3_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo3_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo3_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo3_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO3_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo3_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo3_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo3_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo3_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo4_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO4_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo4_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo4_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo4_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo4_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO4_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo4_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo4_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo4_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo4_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo5_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO5_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo5_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo5_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo5_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo5_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO5_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo5_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo5_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo5_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo5_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo6_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO6_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo6_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo6_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo6_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_Camo6_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_CAMO6_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_Camo6_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_camo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_Camo6_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_Camo6_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_Camo6_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo1_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo1_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo1_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo1_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo1_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo1_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo1_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo1_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO2_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo2_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo2_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO2_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo2_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo2_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO2_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo2_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo2_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO2_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo2_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo2_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo3_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO3_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo3_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo3_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo3_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo3_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO3_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo3_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo3_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo3_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo3_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo3_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO3_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo3_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo3_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo3_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo3_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO3_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo3_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo3_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo3_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo3_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo4_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO4_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo4_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo4_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo4_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo4_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO4_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo4_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo4_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo4_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo4_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo4_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO4_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo4_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo4_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo4_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo4_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO4_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo4_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo4_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo4_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo4_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo5_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO5_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo5_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo5_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo5_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo5_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO5_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo5_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo5_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo5_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo5_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo5_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO5_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo5_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo5_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo5_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo5_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO5_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo5_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo5_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo5_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo5_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo6_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO6_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo6_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo6_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo6_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo6_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO6_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo6_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo6_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo6_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo6_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo6_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO6_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo6_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo6_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo6_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo6_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO6_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo6_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo6_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo6_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo6_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo7_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO7_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo7_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo7.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo7_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo7_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo7_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo7_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo7_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO7_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo7_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo7.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo7_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo7_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo7_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo7_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo7_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO7_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo7_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo7.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo7_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo7_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo7_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo7_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo7_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO7_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo7_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo7.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo7_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo7_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo7_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo7_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo8_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO8_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo8_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo8.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo8_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo8_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo8_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo8_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo8_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO8_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo8_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo8.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo8_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo8_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo8_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo8_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo8_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO8_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo8_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo8.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo8_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo8_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo8_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo8_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo8_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO8_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo8_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo8.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo8_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo8_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo8_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo8_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo9_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO9_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo9_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo9.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo9_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo9_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo9_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo9_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo9_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO9_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo9_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo9.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo9_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo9_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo9_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo9_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo9_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO9_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo9_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo9.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo9_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo9_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo9_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo9_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo9_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO9_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo9_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo9.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo9_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo9_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo9_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo9_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo10_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO10_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo10_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo10.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo10_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo10_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo10_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo10_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo10_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO10_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo10_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo10.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo10_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo10_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo10_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo10_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo10_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO10_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo10_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo10.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo10_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo10_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo10_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo10_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo10_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO10_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo10_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo10.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo10_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo10_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo10_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo10_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo11_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO11_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo11_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo11.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo11_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo11_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo11_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo11_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo11_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO11_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo11_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo11.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo11_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo11_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo11_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo11_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo11_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO11_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo11_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo11.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo11_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo11_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo11_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo11_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo11_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO11_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo11_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo11.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo11_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo11_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo11_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo11_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo12_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO12_1_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo12_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo12.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo12_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo12_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo12_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo12_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_HexCamo12_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_HEXCAMO12_2_NAME;
	descriptionShort = $STR_DZ_DESC_Gunbag_HexCamo12_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Gunback_HexCamo12.p3d";
	picture = "\dayz_epoch_108_backpacks\data\gunback_hexcamo12_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_HexCamo12_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_HexCamo12_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_HexCamo12_2";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo12_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO12_1_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo12_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo12.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo12_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo12_1",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo12_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo12_1";
		};
	};
};
class DZE_Item_Bag_Gunbag_L_HexCamo12_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_GUNBAG_L_HEXCAMO12_2_NAME;
	descriptionShort = $STR_DZ_DESC_Large_Gunbag_HexCamo12_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Large_Gunback_HexCamo12.p3d";
	picture = "\dayz_epoch_108_backpacks\data\large_gunback_hexcamo12_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Gunbag_L_HexCamo12_2",1}};
			input[] = {{"DZE_Item_Bag_Gunbag_L_HexCamo12_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Gunbag_L_HexCamo12_2";
		};
	};
};
class DZE_Item_Bag_Patrol_CamoGreen1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_PATROL_CAMOGREEN1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_CamoGreen1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_CamoGreen1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrol_pack_camogreen_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Patrol_CamoGreen1_1",1}};
			input[] = {{"DZE_Item_Bag_Patrol_CamoGreen1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Patrol_CamoGreen1_1";
		};
	};
};
class DZE_Item_Bag_Patrol_CamoGreen1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_PATROL_CAMOGREEN1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_CamoGreen1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_CamoGreen1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrol_pack_camogreen_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Patrol_CamoGreen1_2",1}};
			input[] = {{"DZE_Item_Bag_Patrol_CamoGreen1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Patrol_CamoGreen1_2";
		};
	};
};
class DZE_Item_Bag_Patrol_CamoGreen1_Enh_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_PATROL_CAMOGREEN1_ENH_1_NAME;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_CamoGreen1_Enhanced_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_CamoGreen1_Enhanced.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrolpack_enhanced_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Patrol_CamoGreen1_Enh_1",1}};
			input[] = {{"DZE_Item_Bag_Patrol_CamoGreen1_Enh_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Patrol_CamoGreen1_Enh_1";
		};
	};
};
class DZE_Item_Bag_Patrol_CamoGreen1_Enh_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_PATROL_CAMOGREEN1_ENH_2_NAME;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_CamoGreen1_Enhanced_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_CamoGreen1_Enhanced.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrolpack_enhanced_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Patrol_CamoGreen1_Enh_2",1}};
			input[] = {{"DZE_Item_Bag_Patrol_CamoGreen1_Enh_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Patrol_CamoGreen1_Enh_2";
		};
	};
};
class DZE_Item_Bag_Patrol_Green1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_PATROL_GREEN1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_Green1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_Green1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrol_pack_green_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Patrol_Green1_1",1}};
			input[] = {{"DZE_Item_Bag_Patrol_Green1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Patrol_Green1_1";
		};
	};
};
class DZE_Item_Bag_Patrol_Green1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_PATROL_GREEN1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Patrol_Pack_Green1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Patrol_Pack_Green1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\patrol_pack_green_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Patrol_Green1_2",1}};
			input[] = {{"DZE_Item_Bag_Patrol_Green1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Patrol_Green1_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_Tan_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_TAN_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Tan_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Tan_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Tan_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Tan_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_Tan_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_TAN_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Tan_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Tan_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Tan_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Tan_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO1_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo1_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo1_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO1_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo1_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo1_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_White_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_WHITE_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_White_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_White_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_White_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_White_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_WHITE_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_White_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_White_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_White_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_White_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_Green_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_GREEN_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Green_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Green.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Green_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Green_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Green_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_Green_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_GREEN_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Green_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Green.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Green_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Green_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Green_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_Black_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_BLACK_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Black_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Black_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Black_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_Black_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_BLACK_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Black_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Black_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Black_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Black_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_Brown_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_BROWN_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Brown_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Brown_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Brown_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_Brown_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_BROWN_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Brown_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Brown_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Brown_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Brown_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO2_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo2_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo2_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO2_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo2_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo2_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo3_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO3_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo3_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo3_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo3_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo3_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO3_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo3_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo3_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo3_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo3_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo4_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO4_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo4_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo4_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo4_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo4_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO4_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo4_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo4_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo4_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo4_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo5_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO5_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo5_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo5_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo5_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo5_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO5_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo5_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo5_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo5_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo5_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo6_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO6_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo6_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo6_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo6_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo6_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO6_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo6_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo6_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo6_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo6_2";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo7_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO7_1_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo7_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo7.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo7_1",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo7_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo7_1";
		};
	};
};
class DZE_Item_Bag_TLR_L_Camo7_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_TLR_L_CAMO7_2_NAME;
	descriptionShort = $STR_DZ_DESC_TLR_Backpack_Large_Camo7_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_TLR_Backpack_Large_Camo7.p3d";
	picture = "\dayz_epoch_108_backpacks\data\tlr_backpack_large_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_TLR_L_Camo7_2",1}};
			input[] = {{"DZE_Item_Bag_TLR_L_Camo7_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_TLR_L_Camo7_2";
		};
	};
};
class DZE_Item_Bag_LV_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_LV_1_NAME;
	descriptionShort = $STR_DZ_DESC_LV_Backpack_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_LV_Backpack.p3d";
	picture = "\dayz_epoch_108_backpacks\data\lv_backpack_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_LV_1",1}};
			input[] = {{"DZE_Item_Bag_LV_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_LV_1";
		};
	};
};
class DZE_Item_Bag_LV_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_LV_2_NAME;
	descriptionShort = $STR_DZ_DESC_LV_Backpack_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_LV_Backpack.p3d";
	picture = "\dayz_epoch_108_backpacks\data\lv_backpack_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_LV_2",1}};
			input[] = {{"DZE_Item_Bag_LV_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_LV_2";
		};
	};
};
class DZE_Item_Bag_Hunting_Olive_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_HUNTING_OLIVE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Olive_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_olive_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Hunting_Olive_1",1}};
			input[] = {{"DZE_Item_Bag_Hunting_Olive_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Hunting_Olive_1";
		};
	};
};
class DZE_Item_Bag_Hunting_Olive_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_HUNTING_OLIVE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Olive_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_olive_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Hunting_Olive_2",1}};
			input[] = {{"DZE_Item_Bag_Hunting_Olive_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Hunting_Olive_2";
		};
	};
};
class DZE_Item_Bag_Hunting_Brown_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_HUNTING_BROWN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Hunting_Brown_1",1}};
			input[] = {{"DZE_Item_Bag_Hunting_Brown_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Hunting_Brown_1";
		};
	};
};
class DZE_Item_Bag_Hunting_Brown_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_HUNTING_BROWN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Brown_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Hunting_Brown_2",1}};
			input[] = {{"DZE_Item_Bag_Hunting_Brown_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Hunting_Brown_2";
		};
	};
};
class DZE_Item_Bag_Hunting_Black_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_HUNTING_BLACK_1_NAME;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Hunting_Black_1",1}};
			input[] = {{"DZE_Item_Bag_Hunting_Black_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Hunting_Black_1";
		};
	};
};
class DZE_Item_Bag_Hunting_Black_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_HUNTING_BLACK_2_NAME;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Black_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Hunting_Black_2",1}};
			input[] = {{"DZE_Item_Bag_Hunting_Black_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Hunting_Black_2";
		};
	};
};
class DZE_Item_Bag_Hunting_Tan_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_HUNTING_TAN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Tan_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Hunting_Tan_1",1}};
			input[] = {{"DZE_Item_Bag_Hunting_Tan_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Hunting_Tan_1";
		};
	};
};
class DZE_Item_Bag_Hunting_Tan_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_HUNTING_TAN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_Tan_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Hunting_Tan_2",1}};
			input[] = {{"DZE_Item_Bag_Hunting_Tan_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Hunting_Tan_2";
		};
	};
};
class DZE_Item_Bag_Hunting_White_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_HUNTING_WHITE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Hunting_White_1",1}};
			input[] = {{"DZE_Item_Bag_Hunting_White_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Hunting_White_1";
		};
	};
};
class DZE_Item_Bag_Hunting_White_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_HUNTING_WHITE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Hunting_Backpack_White_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Hunting_Backpack_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\hunting_backpack_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Hunting_White_2",1}};
			input[] = {{"DZE_Item_Bag_Hunting_White_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Hunting_White_2";
		};
	};
};
class DZE_Item_Bag_Czech_Atacs_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_ATACS_1_NAME;
	descriptionShort = $STR_DZ_DESC_CzechBackpack_Atacs_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CzechBackpack_Atacs1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_czechbackpack_atacs1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_Atacs_1",1}};
			input[] = {{"DZE_Item_Bag_Czech_Atacs_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_Atacs_1";
		};
	};
};
class DZE_Item_Bag_Czech_Atacs_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_CZECH_ATACS_2_NAME;
	descriptionShort = $STR_DZ_DESC_CzechBackpack_Atacs_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CzechBackpack_Atacs1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_czechbackpack_atacs1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Czech_Atacs_2",1}};
			input[] = {{"DZE_Item_Bag_Czech_Atacs_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Czech_Atacs_2";
		};
	};
};
class DZE_Item_Bag_Coyote_Atacs_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_ATACS_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_Atacs_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_Atacs1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_atacs1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_Atacs_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_Atacs_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_Atacs_1";
		};
	};
};
class DZE_Item_Bag_Coyote_Atacs_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_ATACS_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_Atacs_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_Atacs1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_atacs1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_Atacs_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_Atacs_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_Atacs_2";
		};
	};
};
class DZE_Item_Bag_Coyote_BlueGrey_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_BLUEGREY_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_BlueGrey_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_BlueGrey1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_bluegrey1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_BlueGrey_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_BlueGrey_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_BlueGrey_1";
		};
	};
};
class DZE_Item_Bag_Coyote_BlueGrey_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_BLUEGREY_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_BlueGrey_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_BlueGrey1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_bluegrey1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_BlueGrey_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_BlueGrey_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_BlueGrey_2";
		};
	};
};
class DZE_Item_Bag_Coyote_BlueGreyLogo_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_BLUEGREYLOGO_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_BlueGreyLogo_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_BlueGreyLogo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_bluegreylogo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_BlueGreyLogo_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_BlueGreyLogo_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_BlueGreyLogo_1";
		};
	};
};
class DZE_Item_Bag_Coyote_BlueGreyLogo_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_BLUEGREYLOGO_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_BlueGreyLogo_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_BlueGreyLogo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_bluegreylogo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_BlueGreyLogo_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_BlueGreyLogo_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_BlueGreyLogo_2";
		};
	};
};
class DZE_Item_Bag_Coyote_PurpleBlack_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_PURPLEBLACK_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlack_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlack1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purpleblack1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_PurpleBlack_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_PurpleBlack_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_PurpleBlack_1";
		};
	};
};
class DZE_Item_Bag_Coyote_PurpleBlack_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_PURPLEBLACK_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlack_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlack1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purpleblack1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_PurpleBlack_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_PurpleBlack_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_PurpleBlack_2";
		};
	};
};
class DZE_Item_Bag_Coyote_PurpleBlackLogo_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_PURPLEBLACKLOGO_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlackLogo_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlackLogo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purpleblacklogo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_PurpleBlackLogo_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_PurpleBlackLogo_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_PurpleBlackLogo_1";
		};
	};
};
class DZE_Item_Bag_Coyote_PurpleBlackLogo_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_PURPLEBLACKLOGO_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlackLogo_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlackLogo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purpleblacklogo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_PurpleBlackLogo_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_PurpleBlackLogo_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_PurpleBlackLogo_2";
		};
	};
};
class DZE_Item_Bag_Coyote_PurpleBlueGrey_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_PURPLEBLUEGREY_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlueGrey_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlueGrey1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purplebluegrey1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_PurpleBlueGrey_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_PurpleBlueGrey_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_PurpleBlueGrey_1";
		};
	};
};
class DZE_Item_Bag_Coyote_PurpleBlueGrey_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_PURPLEBLUEGREY_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_PurpleBlueGrey_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_PurpleBlueGrey1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_purplebluegrey1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_PurpleBlueGrey_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_PurpleBlueGrey_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_PurpleBlueGrey_2";
		};
	};
};
class DZE_Item_Bag_Coyote_RedGrey_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_REDGREY_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGrey_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGrey1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgrey1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_RedGrey_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_RedGrey_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_RedGrey_1";
		};
	};
};
class DZE_Item_Bag_Coyote_RedGrey_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_REDGREY_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGrey_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGrey1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgrey1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_RedGrey_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_RedGrey_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_RedGrey_2";
		};
	};
};
class DZE_Item_Bag_Coyote_RedGreyLogo_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_REDGREYLOGO_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGreyLogo_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGreyLogo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgreylogo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_RedGreyLogo_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_RedGreyLogo_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_RedGreyLogo_1";
		};
	};
};
class DZE_Item_Bag_Coyote_RedGreyLogo_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_REDGREYLOGO_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGreyLogo_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGreyLogo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgreylogo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_RedGreyLogo_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_RedGreyLogo_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_RedGreyLogo_2";
		};
	};
};
class DZE_Item_Bag_Coyote_RedGrey2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_REDGREY2_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGrey2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGrey21.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgrey21_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_RedGrey2_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_RedGrey2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_RedGrey2_1";
		};
	};
};
class DZE_Item_Bag_Coyote_RedGrey2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_REDGREY2_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGrey2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGrey21.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgrey21_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_RedGrey2_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_RedGrey2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_RedGrey2_2";
		};
	};
};
class DZE_Item_Bag_Coyote_RedGreyLogo2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_REDGREYLOGO2_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGreyLogo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGreyLogo21.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgreylogo21_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_RedGreyLogo2_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_RedGreyLogo2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_RedGreyLogo2_1";
		};
	};
};
class DZE_Item_Bag_Coyote_RedGreyLogo2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_REDGREYLOGO2_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_RedGreyLogo2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_RedGreyLogo21.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_redgreylogo21_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_RedGreyLogo2_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_RedGreyLogo2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_RedGreyLogo2_2";
		};
	};
};
class DZE_Item_Bag_Coyote_TealGrey_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_TEALGREY_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_TealGrey_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_TealGrey1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_tealgrey1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_TealGrey_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_TealGrey_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_TealGrey_1";
		};
	};
};
class DZE_Item_Bag_Coyote_TealGrey_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_TEALGREY_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_TealGrey_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_TealGrey1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_tealgrey1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_TealGrey_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_TealGrey_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_TealGrey_2";
		};
	};
};
class DZE_Item_Bag_Coyote_TealGreyLogo_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_TEALGREYLOGO_1_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_TealGreyLogo_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_TealGreyLogo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_tealgreylogo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_TealGreyLogo_1",1}};
			input[] = {{"DZE_Item_Bag_Coyote_TealGreyLogo_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_TealGreyLogo_1";
		};
	};
};
class DZE_Item_Bag_Coyote_TealGreyLogo_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_COYOTE_TEALGREYLOGO_2_NAME;
	descriptionShort = $STR_DZ_DESC_CoyoteBackpack_TealGreyLogo_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_CoyoteBackpack_TealGreyLogo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_coyotebackpack_tealgreylogo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Coyote_TealGreyLogo_2",1}};
			input[] = {{"DZE_Item_Bag_Coyote_TealGreyLogo_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Coyote_TealGreyLogo_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO1_1_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo1_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo1_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO1_2_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo1_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo1_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO2_1_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo2_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo2_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO2_2_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo2_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo2_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo3_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO3_1_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo3_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo3_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo3_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo3_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO3_2_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo3_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo3_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo3_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo3_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo4_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO4_1_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo4_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo4_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo4_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo4_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO4_2_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo4_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo4_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo4_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo4_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo5_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO5_1_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo5_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo5_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo5_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo5_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO5_2_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo5_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo5_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo5_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo5_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo6_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO6_1_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo6_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo6_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo6_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_Camo6_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_CAMO6_2_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Camo6_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_camo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Camo6_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Camo6_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Camo6_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_Olive_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_OLIVE_1_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Olive_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_olive_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Olive_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Olive_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Olive_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_Olive_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_OLIVE_2_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Olive_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_olive_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Olive_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Olive_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Olive_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_Brown_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_BROWN_1_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Brown_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Brown_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Brown_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_Brown_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_BROWN_2_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Brown_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Brown_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Brown_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Brown_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_Tan_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_TAN_1_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Tan_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Tan_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Tan_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Tan_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_Tan_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_TAN_2_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Tan_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Tan_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Tan_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Tan_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_Black_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_BLACK_1_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Black_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Black_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Black_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_Black_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_BLACK_2_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_Black_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_Black_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_Black_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_Black_2";
		};
	};
};
class DZE_Item_Bag_Airwaves_White_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_WHITE_1_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_White_1",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_White_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_White_1";
		};
	};
};
class DZE_Item_Bag_Airwaves_White_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_AIRWAVES_WHITE_2_NAME;
	descriptionShort = $STR_DZ_DESC_AirwavesPack_White_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_AirwavesPack_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\dze_airwavespack_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Airwaves_White_2",1}};
			input[] = {{"DZE_Item_Bag_Airwaves_White_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Airwaves_White_2";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Olive_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_OLIVE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Olive_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Olive_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Olive_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Olive_1";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Olive_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_OLIVE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Olive_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Olive_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Olive_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Olive_2";
		};
	};
};
class DZE_Item_Bag_Army_XL2_White_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_WHITE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_White_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_White_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_White_1";
		};
	};
};
class DZE_Item_Bag_Army_XL2_White_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_WHITE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_White_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_White_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_White_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_White_2";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Tan_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_TAN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Tan_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Tan_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Tan_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Tan_1";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Tan_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_TAN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Tan_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Tan_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Tan_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Tan_2";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Brown_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_BROWN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Brown_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Brown_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Brown_1";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Brown_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_BROWN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Brown_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Brown_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Brown_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Brown_2";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Black_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_BLACK_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Black_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Black_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Black_1";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Black_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_BLACK_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Black_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Black_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Black_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Black_2";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo1_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo1_1";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo1_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo1_2";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO2_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo2_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo2_1";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO2_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo2_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo2_2";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo3_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO3_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo3_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo3_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo3_1";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo3_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO3_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo3_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo3_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo3_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo3_2";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo4_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO4_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo4_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo4_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo4_1";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo4_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO4_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo4_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo4_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo4_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo4_2";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo5_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO5_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo5_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo5_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo5_1";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo5_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO5_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo5_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo5_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo5_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo5_2";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo6_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO6_1_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo6_1",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo6_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo6_1";
		};
	};
};
class DZE_Item_Bag_Army_XL2_Camo6_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ARMY_XL2_CAMO6_2_NAME;
	descriptionShort = $STR_DZ_DESC_Army_Backpack_XLarge2_Camo6_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Army_Backpack_XLarge2_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\army_backpack_xlarge2_camo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_Army_XL2_Camo6_2",1}};
			input[] = {{"DZE_Item_Bag_Army_XL2_Camo6_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_Army_XL2_Camo6_2";
		};
	};
};
class DZE_Item_Bag_ALICE_Black_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_BLACK_1_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Black_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Black_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Black_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Black_1";
		};
	};
};
class DZE_Item_Bag_ALICE_Black_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_BLACK_2_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Black_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Black.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_black_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Black_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Black_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Black_2";
		};
	};
};
class DZE_Item_Bag_ALICE_Brown_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_BROWN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Brown_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Brown_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Brown_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Brown_1";
		};
	};
};
class DZE_Item_Bag_ALICE_Brown_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_BROWN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Brown_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Brown.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_brown_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Brown_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Brown_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Brown_2";
		};
	};
};
class DZE_Item_Bag_ALICE_Olive_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_OLIVE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Olive_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_olive_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Olive_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Olive_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Olive_1";
		};
	};
};
class DZE_Item_Bag_ALICE_Olive_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_OLIVE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Olive_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Olive.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_olive_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Olive_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Olive_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Olive_2";
		};
	};
};
class DZE_Item_Bag_ALICE_Tan_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_TAN_1_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Tan_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Tan_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Tan_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Tan_1";
		};
	};
};
class DZE_Item_Bag_ALICE_Tan_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_TAN_2_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Tan_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Tan.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_tan_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Tan_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Tan_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Tan_2";
		};
	};
};
class DZE_Item_Bag_ALICE_White_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_WHITE_1_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_White_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_White_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_White_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_White_1";
		};
	};
};
class DZE_Item_Bag_ALICE_White_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_WHITE_2_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_White_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_White.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_white_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_White_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_White_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_White_2";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo1_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO1_1_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo1_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo1_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo1_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo1_1";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo1_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO1_2_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo1_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo1.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo1_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo1_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo1_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo1_2";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo2_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO2_1_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo2_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo2_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo2_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo2_1";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo2_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO2_2_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo2_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo2.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo2_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo2_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo2_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo2_2";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo3_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO3_1_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo3_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo3_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo3_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo3_1";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo3_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO3_2_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo3_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo3.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo3_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo3_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo3_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo3_2";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo4_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO4_1_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo4_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo4_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo4_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo4_1";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo4_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO4_2_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo4_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo4.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo4_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo4_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo4_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo4_2";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo5_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO5_1_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo5_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo5_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo5_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo5_1";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo5_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO5_2_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo5_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo5.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo5_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo5_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo5_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo5_2";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo6_1 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO6_1_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo6_DZE1;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo6_1",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo6_1",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo6_1";
		};
	};
};
class DZE_Item_Bag_ALICE_Camo6_2 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_DZE_ITEM_BAG_ALICE_CAMO6_2_NAME;
	descriptionShort = $STR_DZ_DESC_Alice_Backpack_Camo6_DZE2;
	model = "\dayz_epoch_108_backpacks\DZE_Alice_Backpack_Camo6.p3d";
	picture = "\dayz_epoch_108_backpacks\data\alice_backpack_camo6_ui.paa";
	class ItemActions
	{
		class Unpack
		{
			text = "Unpack";
			script = ";['Unpack','CfgMagazines', _id] spawn player_craftItem;";
			output[] = {{"DZE_Bag_ALICE_Camo6_2",1}};
			input[] = {{"DZE_Item_Bag_ALICE_Camo6_2",1}};
			inputstrict = 1;
		};
		class Build
		{
			text = "Build Stash";
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {};
			create = "DZE_BagStash_ALICE_Camo6_2";
		};
	};
};
