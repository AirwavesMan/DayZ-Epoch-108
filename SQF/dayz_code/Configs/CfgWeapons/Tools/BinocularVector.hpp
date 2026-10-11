class Binocular_Vector;

class DZE_Tool_BinocularVector: Binocular_Vector {};

class DZE_Tool_BinocularVectorBroken : Default {
	scope = 2;
	displayName = "$STR_EQUIP_BROKEN_BINOCULARVECTOR";
	descriptionShort = "$STR_EQUIP_BROKEN_BINOCULARVECTOR_DESC";
	model = "\ca\weapons_E\vector\vector21dt";
	picture = "\dayz_epoch_c\icons\tools\ItemBinocularVectorBroken.paa";
	type = 4096;
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_BIONCULARVECTOR";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Solder"};
			output[] = {};
			outputweapons[] = {"DZE_Tool_BinocularVector"};
			input[] = {{"equip_floppywire",1},{"equip_scrapelectronics",1}};
			inputweapons[] = {"DZE_Tool_BinocularVectorBroken"};
		};		
	};		
};