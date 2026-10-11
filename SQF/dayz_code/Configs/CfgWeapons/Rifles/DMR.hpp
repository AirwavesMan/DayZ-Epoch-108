class DZE_Wep_DMR : DMR { // Works with NVG
	displayName = "$STR_DZ_WPN_DMR_NAME";

	//A2OA DMR does not allow NVG after 2018-04-05 CorePatch
	visionMode[] = {};

	class Attachments {
		DZE_Item_Att_Ghillie = "DZE_Wep_DMR_Gh";
	};
};

class DZE_Wep_DMR_SKN : DZE_Wep_DMR {};

class DZE_Wep_DMR_Gh : DZE_Wep_DMR {
	displayName = "$STR_DZ_WPN_DMR_GH_NAME";
	model = "z\addons\dayz_communityweapons\dmr\dmr_ghillie.p3d";
	picture = "\z\addons\dayz_communityweapons\dmr\data\w_dmr_ghillie_ca.paa";
	memoryPointCamera = "opticView";

	class Attachments {};

	class ItemActions {
		class RemoveGhillie {
			text = "$STR_DZ_ATT_GHIL_RMVE";
			script = "; ['DZE_Item_Att_Ghillie',_id,'DZE_Wep_DMR'] call player_removeAttachment";
		};
	};
};

//DMR without NVG support

class DZE_Wep_DMR_NoNVG : DZE_Wep_DMR {
	visionMode[] = {"Normal"};

	class Attachments {
		DZE_Item_Att_Ghillie = "DZE_Wep_DMR_Gh_NoNVG";
	};
};

class DZE_Wep_DMR_Gh_NoNVG : DZE_Wep_DMR_Gh {
	visionMode[] = {"Normal"};

	class ItemActions {
		class RemoveGhillie {
			text = "$STR_DZ_ATT_GHIL_RMVE";
			script = "; ['DZE_Item_Att_Ghillie',_id,'DZE_Wep_DMR_NoNVG'] call player_removeAttachment";
		};
	};
};