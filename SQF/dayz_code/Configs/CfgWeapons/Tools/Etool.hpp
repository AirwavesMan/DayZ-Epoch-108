class DZE_Tool_Etool : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_ETOOL";
	descriptionShort = "$STR_EQUIP_DESC_ETOOL";
	model = "\dayz_equip\models\etool.p3d";
	picture = "\dayz_equip\textures\equip_etool_ca.paa";
};

class DZE_Tool_EtoolBroken : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_ETOOL_BROKEN";
	descriptionShort = "$STR_EQUIP_DESC_ETOOL_BROKEN";
	model = "\dayz_equip\models\etool.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemEtoolBroken.paa";
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_ETOOL";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Etool"};
			input[] = {{"equip_duct_tape",1},{"equip_lever",1}};
			inputweapons[] = {"DZE_Tool_EtoolBroken"};
		};		
	};		
};