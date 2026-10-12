class DZE_Item_Trash_Soda : HandGrenade {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_EMPTY_SODA_CAN";
	descriptionShort = "$STR_EQUIP_DESC_EMPTY_SODA_CAN";
	model = "\dayz_equip\models\soda_coke_e.p3d";
	picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
	ammo = "SodaCan";

	class ItemActions {
		class Drink {
			text = "$STR_ACTIONS_DRINK2";
			script = ";[_id] spawn player_fillWater;";
		};
		class Crafting {
			text = "$STR_EPOCH_MELT_BARS";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Cur_AluminumBar",1}};
			input[] = {{"DZE_Item_Trash_Soda",6}};
		};
	};
};

class DZE_Item_Trash_TinCan : HandGrenade {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_EMPTY_TIN_CAN";
	descriptionShort = "$STR_EQUIP_DESC_EMPTY_TIN_CAN";
	model = "\dayz_equip\models\trash_tincan.p3d";
	picture = "\dayz_equip\textures\equip_tincan_ca.paa";
	ammo = "TinCan";

	class ItemActions {
		class Drink {
			text = "$STR_ACTIONS_DRINK2";
			script = ";[_id] spawn player_fillWater;";
		};
		class Crafting {
			text = "$STR_EPOCH_MELT_BARS";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Cur_TinBar",1}};
			input[] = {{"DZE_Item_Trash_TinCan",6}};
		};
	};
};

#include "SodaCan.hpp"
#include "TinCan.hpp"
#include "Misc.hpp"