class MeleeMachete: MeleeWeapon {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_MACHETE";
	descriptionShort = "$STR_EQUIP_DESC_MACHETE";
	model = "\z\addons\dayz_communityassets\models\machete_weaponized.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_machete_CA.paa";
	droppeditem = "MeleeMachete";
	magazines[] = {"Machete_Swing"};
	
	class ItemActions {
		class Toolbelt {
			text = "$STR_ACTIONS_2TB";
			script = "spawn DZE_fnc_addToolbelt;";
			use[] = {"MeleeMachete"};
			output[] = {"DZE_Tool_Machete"};
		};
		
		class Drop {
			text = "$STR_ACTIONS_DROP";
			script = "spawn player_dropWeapon;";
			use[] = {"Machete_Swing"};
		};
	};
	
	class Library {
		libTextDesc = "$STR_EQUIP_DESC_MACHETE";
	};
};	
