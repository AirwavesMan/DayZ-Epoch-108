class DZE_Tool_FishingPole : ItemCore {
	scope = 2;	
	displayName = "$STR_ITEM_NAME_FISHINGPOLE";
	descriptionShort = "$STR_ITEM_DESC_FISHINGPOLE";
	model = "\z\addons\dayz_communityassets\models\fishing_rod_loot_item.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_fishingpole_CA.paa";
	
	class ItemActions {
		class Toolbelt {
			text = "$STR_ACTIONS_RFROMTB";
			script = "spawn DZE_fnc_addToolbelt;";
			use[] =
			{
				"DZE_Tool_FishingPole"
			};
			output[] =
			{
				"DZE_Melee_FishingPole"
			};
		};
		
		class ToBack {
			text = "$STR_ACTIONS_2BACK";
			script = "spawn DZE_fnc_addToBack;";
			use[] =
			{
				"DZE_Tool_FishingPole"
			};
			output[] =
			{
				"DZE_Melee_FishingPole"
			};
		};
	};
};

class DZE_Tool_FishingPoleBroken : ItemCore {
	scope = 2;	
	displayName = "$STR_ITEM_NAME_FISHINGPOLEBROKEN";
	descriptionShort = "$STR_ITEM_DESC_FISHINGPOLE_BROKEN";
	model = "\z\addons\dayz_communityassets\models\fishing_rod_loot_item.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemFishingpoleBroken.paa";
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_FISHINGPOLE";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"DZE_Tool_FishingPole"};
			input[] = {{"equip_duct_tape",1},{"equip_lever",1}};
			inputweapons[] = {"DZE_Tool_FishingPoleBroken"};
		};		
	};	
};
