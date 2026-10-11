class DZE_Tool_APSI : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_APSI";
	descriptionShort = "$STR_EQUIP_APSI_DESC";
	picture = "\dayz_epoch_c\icons\tools\ItemAPSI.paa";
	
	class ItemActions {
		class Power {
			text = "$STR_APSI_STATE";
			script = "call fnc_apsiState;";
		};
	};
};

class DZE_Tool_APSIBroken : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_APSI_BROKEN";
	descriptionShort = "$STR_EQUIP_APSI_BROKEN_DESC";
	picture = "\dayz_epoch_c\icons\tools\ItemAPSIBroken.paa";
};