class DZE_Wep_M24 : M24 {
	displayName = "$STR_DZ_WPN_M24_NAME";
	model = "ca\weapons\m24_green.p3d";

	magazines[] = {5Rnd_762x51_M24};

	class Attachments {
		Attachment_Ghillie = "DZE_Wep_M24_Gh";
	};
};

class DZE_Wep_M24_Gh : DZE_Wep_M24 {
	displayName = "$STR_DZ_WPN_M24_GH_NAME";
	model = "z\addons\dayz_communityweapons\m24\m24_ghillie.p3d";
	picture = "\ca\weapons\data\equip\w_m24_camo_ca.paa";
	memoryPointCamera = "opticView";

	class Attachments {};

	class ItemActions {
		class RemoveGhillie {
			text = "$STR_DZ_ATT_GHIL_RMVE";
			script = "; ['Attachment_Ghillie',_id,'DZE_Wep_M24'] call player_removeAttachment";
		};
	};
};

class M24_des_EP1;
class DZE_Wep_M24_DES : M24_des_EP1 {
	displayName = "$STR_DZ_WPN_M24_DESERT_NAME";

	magazines[] = {5Rnd_762x51_M24};
};