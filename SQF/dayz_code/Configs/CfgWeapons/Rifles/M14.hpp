/* Iron sight */

class DZE_Wep_M14 : M14_EP1 {
	displayName = "$STR_DZ_WPN_M14_NAME";
	model = "z\addons\dayz_communityweapons\m14\m14.p3d";
	picture = "\z\addons\dayz_communityweapons\m14\data\w_m14_ca.paa";

	magazines[] = {20Rnd_762x51_DMR};

	//distanceZoomMin = 300;
	//distanceZoomMax = 300;

	//modes[] = {Single};

	class Attachments {
		Attachment_CCO = "DZE_Wep_M14_CCO";
		Attachment_Holo = "DZE_Wep_M14_Holo";
		Attachment_Ghillie = "DZE_Wep_M14_Gh";
	};
};

class DZE_Wep_M14_Gh : DZE_Wep_M14 {
	displayName = "$STR_DZ_WPN_M14_GH_NAME";
	model = "z\addons\dayz_communityweapons\m14\m14_ghillie.p3d";
	picture = "\z\addons\dayz_communityweapons\m14\data\w_m14_ghillie_ca.paa";

	class Attachments {
		Attachment_CCO = "DZE_Wep_M14_CCO_Gh";
		Attachment_Holo = "DZE_Wep_M14_Holo_Gh";
	};

	class ItemActions {
		class RemoveGhillie {
			text = "$STR_DZ_ATT_GHIL_RMVE";
			script = "; ['Attachment_Ghillie',_id,'DZE_Wep_M14'] call player_removeAttachment";
		};
	};
};

/* CCO */

class DZE_Wep_M14_CCO : DZE_Wep_M14 {
	displayName = "$STR_DZ_WPN_M14_CCO_NAME";
	model = "ca\weapons_e\m14\m14.p3d";
	picture = "\z\addons\dayz_communityweapons\m14\data\w_m14_cco_ca.paa";

	class Attachments {
		Attachment_Ghillie = "DZE_Wep_M14_CCO_Gh";
	};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_M14'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M14_CCO_Gh : DZE_Wep_M14_CCO {
	displayName = "$STR_DZ_WPN_M14_CCO_GH_NAME";
	model = "z\addons\dayz_communityweapons\m14\m14_ghillie_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m14\data\w_m14_ghillie_cco_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_M14_Gh'] call player_removeAttachment";
		};
		class RemoveGhillie {
			text = "$STR_DZ_ATT_GHIL_RMVE";
			script = "; ['Attachment_Ghillie',_id,'DZE_Wep_M14_CCO'] call player_removeAttachment";
		};
	};
};

/* Holo */

class DZE_Wep_M14_Holo : DZE_Wep_M14 {
	displayName = "$STR_DZ_WPN_M14_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\m14\m14_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m14\data\w_m14_holo_ca.paa";

	class Attachments {
		Attachment_Ghillie = "DZE_Wep_M14_Holo_Gh";
	};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_M14'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M14_Holo_Gh : DZE_Wep_M14_Holo {
	displayName = "$STR_DZ_WPN_M14_HOLO_GH_NAME";
	model = "z\addons\dayz_communityweapons\m14\m14_ghillie_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m14\data\w_m14_ghillie_holo_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_M14_Gh'] call player_removeAttachment";
		};
		class RemoveGhillie {
			text = "$STR_DZ_ATT_GHIL_RMVE";
			script = "; ['Attachment_Ghillie',_id,'DZE_Wep_M14_Holo'] call player_removeAttachment";
		};
	};
};