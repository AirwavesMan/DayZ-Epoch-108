class DZE_CamoNet_Base: DZE_DefenseObject_Base {
	armor = 300;
	DZE_offset[] = {0,9,0};
};

class DZE_DesertCamoNet: DZE_CamoNet_Base {
	scope = 2;
	model = "\ca\Misc_E\CamoNet_EAST_ep1";
	displayName = $STR_EPOCH_DESERTCAMONET;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "desert_net_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_WinterCamoNet: DZE_CamoNet_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\nets\CamoNet_EAST.p3d";
	displayName = $STR_EPOCH_WINTERCAMONET;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "winter_net_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_ForestCamoNet: DZE_CamoNet_Base {
	icon = "\Ca\misc3\data\Icons\icon_camoNet_ca.paa";
	mapSize = 13.5;
	scope = 2;
	model = "\Ca\misc3\CamoNet_EAST";
	displayName = $STR_EPOCH_FORESTCAMONET;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "forest_net_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_WinterLargeCamoNet: DZE_CamoNet_Base {
	icon = "\Ca\misc3\data\Icons\icon_camoNet_ca.paa";
	mapSize = 13.5;
	scope = 2;
	model = "\z\addons\dayz_epoch_v\props\nets\CamoNetB_EAST.p3d";
	displayName = $STR_EPOCH_LARGEWINTERCAMONET;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "winter_large_net_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_DesertLargeCamoNet: DZE_CamoNet_Base {
	scope = 2;
	model = "\ca\Misc_E\CamoNetB_EAST_ep1";
	displayName = $STR_EPOCH_LARGEDESERTCAMONET;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "desert_large_net_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_ForestLargeCamoNet: DZE_CamoNet_Base {
	icon = "\Ca\misc3\data\Icons\icon_camoNetBig_ca.paa";
	mapSize = 18;
	scope = 2;
	model = "\Ca\misc3\CamoNetB_EAST";
	displayName = $STR_EPOCH_LARGEFORESTCAMONET;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "forest_large_net_kit";
		DZE_refundArray[] = {};
	};
};
