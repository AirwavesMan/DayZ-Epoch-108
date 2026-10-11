class DZE_Tool_Sledge: ItemCore { // Epoch class
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_SledgeHammer";
	descriptionShort = "$STR_EQUIP_SLEDGE_DESC";
	model = "\z\addons\dayz_epoch\models\sledge_mag.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_sledge_CA.paa";
	DZE_brokenItem = "DZE_Tool_SledgeBroken";
	DZE_swappedItem = "MeleeSledge";
	
	class ItemActions {
		class ToBack {
			text = "$STR_ACTIONS_2BACK";
			script = "spawn DZE_fnc_addToBack;";
			use[] = {"DZE_Tool_Sledge"};
			output[] = {"MeleeSledge"};
		};
		
		class Toolbelt {
			text = "$STR_ACTIONS_RFROMTB";
			script = "spawn DZE_fnc_addToolbelt;";
			use[] = {"DZE_Tool_Sledge"};
			output[] = {"MeleeSledge"};
		};
	};
};

class DZE_Tool_SledgeBroken: ItemCore {
	scope = 2;	
	displayName = "$STR_name_ItemSledgeHammerBroken";
	descriptionShort = "$STR_desc_ItemSledgeHammerBroken";
	model = "\z\addons\dayz_epoch\models\sledge_mag.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemSledge1Broken.paa";
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_SLEDGE_HAMMER";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Sledge"};
			input[] = {{"equip_duct_tape",1},{"ItemSledgeHandle",1}};
			inputweapons[] = {"DZE_Tool_SledgeBroken"};
		};		
	};	
};

//Vanilla sledge is using a different model.
//All scripts have been changed to use Epoch DZE_Tool_Sledge, but leave this defined in case admins want to use it for something.
class DZE_Tool_SledgeHammer : ItemCore {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_SledgeHammer";
	descriptionShort = "$STR_EQUIP_DESC_SledgeHammer";
	model = "z\addons\dayz_communityweapons\models\sledge_hammer\sledgehammer.p3d";
	picture = "\z\addons\dayz_communityweapons\models\sledge_hammer\sledgehammer.paa";
	DZE_brokenItem = "DZE_Tool_SledgeHammerBroken";
};

class DZE_Tool_SledgeHammerBroken : ItemCore {
	scope = 2;	
	displayName = "$STR_name_ItemSledgeHammerBroken";
	descriptionShort = "$STR_desc_ItemSledgeHammerBroken";
	model = "z\addons\dayz_communityweapons\models\sledge_hammer\sledgehammer.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemSledge2Broken.paa";
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_SLEDGE_HAMMER";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"DZE_Tool_SledgeHammer"};
			input[] = {{"equip_duct_tape",1},{"equip_lever",1}};
			inputweapons[] = {"DZE_Tool_SledgeHammerBroken"};
		};		
	};	
};
