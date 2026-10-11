class ItemRadio;

class DZE_Tool_Radio: ItemRadio {
	model = "\nst\ns_dayz\items\radio\radio_dzn.p3d";
	class ItemActions {
		class Power {
			text = "$STR_EPOCH_RADIO_STATE";
			script = "call fnc_radioState;";
		};
		class Groups {
			text = "$STR_EPOCH_GROUPS_KEY";
			script = ";if (!isNil 'dayz_groupInit') then {[] spawn dayz_openGroupDialog;};";
		};
	};
};

class DZE_Tool_RadioBroken : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_BROKEN_RADIO";
	descriptionShort = "$STR_EQUIP_BROKEN_RADIO_DESC";
	model = "\nst\ns_dayz\items\radio\radio_dzn.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemRadioBroken.paa";
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_RADIO";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Solder"};
			output[] = {};
			outputweapons[] = {"DZE_Tool_Radio"};
			input[] = {{"equip_floppywire",1},{"equip_scrapelectronics",1}};
			inputweapons[] = {"DZE_Tool_RadioBroken"};
		};		
	};	
};
