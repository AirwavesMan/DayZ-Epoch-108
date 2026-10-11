class DZE_Melee_FishingPole : DZE_Melee_Weapon_Base {
	scope = 2;	
	displayName = "$STR_ITEM_NAME_FISHINGPOLE";
	descriptionShort = "$STR_ITEM_DESC_FISHINGPOLE";
	model = "\z\addons\dayz_communityassets\models\fishing_rod_weaponized.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_fishingpole_CA.paa";
	magazines[] = {"Fishing_Swing"};
	
	class ItemActions {
		class Toolbelt {
			text = "$STR_ACTIONS_2TB";
			script = "spawn DZE_fnc_addToolbelt";
			use[] = {"DZE_Melee_FishingPole"};
			output[] = {"DZE_Tool_FishingPole"};
		};
	};
	
	class Library {
		libTextDesc = "$STR_ITEM_DESC_FISHINGPOLE";
	};
};	
