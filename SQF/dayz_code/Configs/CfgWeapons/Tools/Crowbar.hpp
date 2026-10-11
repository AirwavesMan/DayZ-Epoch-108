class DZE_Tool_Crowbar : ItemCore {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_CROWBAR";
	descriptionShort = "$STR_EQUIP_DESC_CROWBAR";
	model = "\dayz_equip\models\crowbar.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_crowbar_CA.paa";
	DZE_brokenItem = "DZE_Tool_CrowbarBent";
	DZE_swappedItem = "MeleeCrowbar";
	
	class ItemActions {
		class Toolbelt {
			text = "$STR_ACTIONS_RFROMTB";
			script = "spawn DZE_fnc_addToolbelt;";
			use[] = {
				"DZE_Tool_Crowbar"
			};
			output[] = {
				"MeleeCrowbar"
			};
		};
		
		class ToBack {
			text = "$STR_ACTIONS_2BACK";
			script = "spawn DZE_fnc_addToBack;";
			use[] = {
				"DZE_Tool_Crowbar"
			};
			output[] = {
				"MeleeCrowbar"
			};
		};
	};
};

class DZE_Tool_CrowbarBent : ItemCore {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_CROWBARBENT";
	descriptionShort = "$STR_EQUIP_DESC_CROWBARBENT";
	model = "\dayz_equip\models\crowbar.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemCrowbarBroken.paa";
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_CROWBAR";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {"fire"};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Crowbar"};
			input[] = {{"PartGeneric",1}};
			inputweapons[] = {"DZE_Tool_CrowbarBent"};
		};		
	};	
};
