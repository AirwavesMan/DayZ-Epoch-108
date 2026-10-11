class DZE_Tool_Shovel : ItemCore {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_SHOVEL";
	descriptionShort = "$STR_EQUIP_DESC_SHOVEL";
	model = "\z\addons\dayz_communityassets\models\shovel.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemShovel.paa";
};

class DZE_Tool_ShovelBroken : ItemCore {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_SHOVEL_BROKEN";
	descriptionShort = "$STR_EQUIP_DESC_SHOVEL_BROKEN";
	model = "\z\addons\dayz_communityassets\models\shovel.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemShovelBroken.paa";
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_SHOVEL";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Shovel"};
			input[] = {{"equip_duct_tape",1},{"equip_lever",1}};
			inputweapons[] = {"DZE_Tool_ShovelBroken"};
		};		
	};	
};