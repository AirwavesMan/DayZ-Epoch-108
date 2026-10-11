class M240;
class DZE_Wep_M240 : M240 {
	displayName = "$STR_DZ_WPN_M240_NAME";
	picture = "\z\addons\dayz_communityweapons\m240\data\w_m240_ca.paa";

	type = 1;

	magazines[] = {100Rnd_762x51_M240};

	class Attachments {
		Attachment_CCO = DZE_Wep_M240_CCO;
		Attachment_Holo = DZE_Wep_M240_Holo;
	};
};

class DZE_Wep_M240_CCO : DZE_Wep_M240 {
	displayName = "$STR_DZ_WPN_M240_CCO_NAME";
	model = "z\addons\dayz_communityweapons\m240\m240_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m240\data\w_m240_cco_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_M240'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M240_Holo : DZE_Wep_M240_CCO {
	displayName = "$STR_DZ_WPN_M240_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\m240\m240_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m240\data\w_m240_holo_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_M240'] call player_removeAttachment";
		};
	};
};

class m240_scoped_EP1;
class DZE_Wep_m240_scoped_EP1_DZE:m240_scoped_EP1 { //has m145 scope
	type = 1;
};