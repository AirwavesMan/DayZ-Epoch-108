class DZE_Tool_Toolbox : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_TOOLBOX";
	descriptionShort = "$STR_EQUIP_DESC_TOOLBOX";
	model = "\dayz_equip\models\toolbox.p3d";
	picture = "\dayz_equip\textures\equip_toolbox_ca.paa";
	
	class ItemActions {
		class RemoveNet {
			text= "$STR_BUILD_REMOVE_CAMONET_ACTION";
			script=";[DZE_CamoNets,15,'STR_BUILD_REMOVE_CAMONET_NOT_FOUND'] call DZE_fnc_removeNearby;";
		};
		class RemoveHelipads {
			text= "$STR_BUILD_REMOVE_HELIPAD_ACTION";
			script=";[DZE_heliPads,15,'STR_BUILD_REMOVE_HELIPAD_NOT_FOUND'] call DZE_fnc_removeNearby;";
		};
		class RemoveTerritoryMarker {
			text= "$STR_BUILD_REMOVE_TERRITORYMARKER_ACTION";
			script=";[[DZE_Territory_Marker],15,'STR_BUILD_REMOVE_TERRITORYMARKER_NOT_FOUND'] call DZE_fnc_removeNearby;";
		};
	};
};

class DZE_Tool_ToolboxBroken : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_TOOLBOX_BROKEN";
	descriptionShort = "$STR_EQUIP_DESC_TOOLBOX_BROKEN";
	model = "\dayz_equip\models\toolbox.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemToolboxBroken.paa";
};
