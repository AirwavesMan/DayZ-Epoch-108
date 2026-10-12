class NVGoggles;

class DZE_Tool_NVGoggles: NVGoggles {
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
};

class DZE_Tool_NVGBroken : Default {
	scope = 2;
	displayName = "$STR_EQUIP_BROKEN_NV";
	descriptionShort = "$STR_EQUIP_BROKEN_NV_DESC";
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemNightVisionBroken.paa";
	type = 4096;
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_NIGHTVISION";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Solder"};
			output[] = {};
			outputweapons[] = {"DZE_Tool_NVGoggles"};
			input[] = {{"DZE_Item_Elec_Floppywire",1},{"DZE_Item_Elec_Scrapelectronics",1}};
			inputweapons[] = {"DZE_Tool_NVGBroken"};
		};		
	};	
};

class DZE_Tool_NVGogglesFull: DZE_Tool_NVGoggles {
	displayName = "$STR_EQUIP_NV_FULL";
	descriptionShort = "$STR_EQUIP_NV_FULL_DESC";
	modelOptics = "";
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
};

class DZE_Tool_NVGFullBroken : Default {
	scope = 2;
	displayName = "$STR_EQUIP_BROKEN_NV_FULL";
	descriptionShort = "$STR_EQUIP_BROKEN_NV_FULL_DESC";
	model = "\dayz_epoch_c\items\nvg\nvg_dzn.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemNightVisionBroken.paa";
	type = 4096;
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_NIGHTVISION";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Solder"};
			output[] = {};
			outputweapons[] = {"DZE_Tool_NVGogglesFull"};
			input[] = {{"DZE_Item_Elec_Floppywire",1},{"DZE_Item_Elec_Scrapelectronics",1}};
			inputweapons[] = {"DZE_Tool_NVGFullBroken"};
		};		
	};	
};

