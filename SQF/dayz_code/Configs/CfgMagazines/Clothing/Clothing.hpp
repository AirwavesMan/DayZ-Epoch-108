class DZE_Item_Skin_Base : CA_Magazine {
	scope = 0;
	displayName = "$STR_EQUIP_NAME_CLOTHES"; // Used in Epoch player_craftItem for canvas
	descriptionShort = "$STR_EQUIP_DESC_CLOTHES";
	DZE_gender = "male";
	DZE_playerModel = "DZE_Man_Survivor2";
	model = "\dayz_equip\models\cloth_parcel.p3d";
	picture = "\dayz_equip\textures\equip_cloth_parcel_ca.paa";
	Craftoutput = "equip_rag";
	count = 1;
	type = 256;

	class ItemActions {
		class Use {
			text = "$STR_EQUIP_TEXT_CLOTHES";
			script = "spawn player_wearClothes;";
		};

		class tearClothes {
			text = "$STR_TEAR_CLOTHES";
			script = "spawn player_tearClothes;";
		};
		class Crafting {
			text = "$STR_EPOCH_PLAYER_269b";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"ItemCanvas",1}};
			input[] = {{"DZE_Item_Skin_Base",2}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_269";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_Knife"};
			output[] = {{"ItemBandage",2}};
			input[] = {{"DZE_Item_Skin_Base",1},{"DZE_Item_Trash_Toiletpaper",1}};
		};
	};
	weight = 1;
};

#include "EpochSkins.hpp"