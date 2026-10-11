class DZE_Wep_MP5 : MP5A5 {
	displayName = "$STR_DZ_WPN_MP5_NAME";
	picture = "\z\addons\dayz_communityweapons\mp5\data\w_mp5_ca.paa";

	magazines[] =
	{
		30Rnd_9x19_MP5
	};

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_MP5_SD";
	};
};

class DZE_Wep_MP5_SD : MP5SD {
	displayName = "$STR_DZ_WPN_MP5_SD_NAME";
	model = "z\addons\dayz_communityweapons\mp5\mp5_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\mp5\data\w_mp5_sd_ca.paa";

	magazines[] =
	{
		30Rnd_9x19_MP5SD
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_MP5'] call player_removeAttachment";
		};
	};
};