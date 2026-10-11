class M40A3;
class DZE_Wep_M40A3_Gh : M40A3 {
	displayName = "$STR_DZ_WPN_M40A3_GH_NAME";
	picture = "\z\addons\dayz_communityweapons\m40a3\data\w_m40a3_ghillie_ca.paa";

	magazines[] = {5Rnd_762x51_M24};

	class ItemActions {
		class RemoveGhillie {
			text = "$STR_DZ_ATT_GHIL_RMVE";
			script = "; ['DZE_Item_Att_Ghillie',_id,'DZE_Wep_M40A3'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M40A3 : DZE_Wep_M40A3_Gh {
	displayName = "$STR_DZ_WPN_M40A3_NAME";
	model = "z\addons\dayz_communityweapons\m40a3\m40a3.p3d";
	picture = "\z\addons\dayz_communityweapons\m40a3\data\w_m40a3_ca.paa";
	memoryPointCamera = "opticView";

	class Attachments {
		DZE_Item_Att_Ghillie = "DZE_Wep_M40A3_Gh";
	};

	class ItemActions {};
};