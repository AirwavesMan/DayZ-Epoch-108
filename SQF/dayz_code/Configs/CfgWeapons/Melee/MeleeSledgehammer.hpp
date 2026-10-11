class MeleeSledge: MeleeWeapon {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SledgeHammer";
	descriptionShort = "$STR_EQUIP_SLEDGE_DESC";
	model = "\z\addons\dayz_epoch\models\sledge_weaponized";
	picture = "\z\addons\dayz_epoch\pictures\equip_sledge_CA.paa"; // todo icon
	droppeditem = "DZE_Tool_Sledge";
	magazines[] = {"Sledge_Swing"};	
	
	class ItemActions {
		class Toolbelt {
			text = "$STR_ACTIONS_2TB";
			script = "spawn DZE_fnc_addToolbelt;";
			use[] = {"MeleeSledge"};
			output[] = {"DZE_Tool_Sledge"};
		};
		
		class Drop {
			text = "$STR_ACTIONS_DROP";
			script = "spawn player_dropWeapon;";
			use[] = {"Sledge_Swing"};
		};
	};
	class Library {
		libTextDesc="$STR_EQUIP_SLEDGE_DESC";
	};
};
