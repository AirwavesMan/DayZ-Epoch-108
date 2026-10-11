class DZE_Tool_Smartphone: ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_SMARTPHONE";
	descriptionShort = "$STR_EQUIP_SMARTPHONE_DESC";
	model = "\z\addons\dayz_epoch_w\items\pda.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemSmartphone.paa";
};

class DZE_Tool_SmartphoneBroken : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_SMARTPHONE_BROKEN";
	descriptionShort = "$STR_EQUIP_SMARTPHONE_BROKEN_DESC";
	model = "\z\addons\dayz_epoch_w\items\pda.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemSmartphoneBroken.paa";
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_SMARTPHONE";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Solder"};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Smartphone"};
			input[] = {{"equip_floppywire",1},{"equip_scrapelectronics",1}};
			inputweapons[] = {"DZE_Tool_SmartphoneBroken"};
		};		
	};	
};