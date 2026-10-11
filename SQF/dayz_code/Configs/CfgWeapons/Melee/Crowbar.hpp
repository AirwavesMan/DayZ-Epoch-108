class MeleeCrowbar : MeleeWeapon {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_CROWBAR";
	descriptionShort = "$STR_EQUIP_DESC_CROWBAR";
	model = "\dayz_weapons\models\crowbar_weaponized";
	picture = "\dayz_weapons\textures\equip_crowbar_CA.paa";
	droppeditem = "DZE_Tool_Crowbar";
	magazines[] = {"Crowbar_Swing"};	
	
	class ItemActions {
		class Toolbelt {
			text = "$STR_ACTIONS_2TB";
			script = "spawn DZE_fnc_addToolbelt";
			use[] = {"MeleeCrowbar"};
			output[] = {"DZE_Tool_Crowbar"};
		};
		
		class Drop {
			text = "$STR_ACTIONS_DROP";
			script = "spawn player_dropWeapon;";
			use[] = {"Crowbar_Swing"};
		};
	};
	
	class Library {
		libTextDesc = "$STR_EQUIP_DESC_CROWBAR";
	};
};
