class DZE_Tool_Machete : ItemCore {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_MACHETE";
	descriptionShort = "$STR_EQUIP_DESC_MACHETE";
	model = "\z\addons\dayz_communityassets\models\machete.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_machete_CA.paa";
	
	class ItemActions {
		class Toolbelt {
			text = "$STR_ACTIONS_RFROMTB";
			script = "spawn DZE_fnc_addToolbelt;";
			use[] = {"DZE_Tool_Machete"};
			output[] = {"MeleeMachete"};
		};
		
		class ToBack {
			text = "$STR_ACTIONS_2BACK";
			script = "spawn DZE_fnc_addToBack;";
			use[] = {"DZE_Tool_Machete"};
			output[] = {"MeleeMachete"};
		};
	};
};

class DZE_Tool_MacheteBroken : ItemCore {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_MACHETE_BROKEN";
	descriptionShort = "$STR_EQUIP_DESC_MACHETE_BROKEN";
	model = "\z\addons\dayz_communityassets\models\machete.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemMacheteBroken.paa";
};
