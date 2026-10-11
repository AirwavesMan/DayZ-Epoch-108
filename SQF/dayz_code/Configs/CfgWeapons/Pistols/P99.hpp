class DZE_Wep_P99_Black: M9 {
	displayName = "$STR_DZ_WPN_P99_BLACK_NAME";
	descriptionShort = "$STR_DZ_WPN_P99_DESC";
	model = "\C1987_P99\P99_black.p3d";
	picture = "\C1987_P99\equip\p99_black.paa";
	soundBegin[] = {"begin1",1};
	begin1[] = {"\C1987_P99\sound\p99.wss",1.0,1};
	reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss",0.1,1,20};
	magazines[] = {"15Rnd_10x22_p99"};

	class Attachments {
		DZE_Item_Att_Sup10 = "DZE_Wep_P99_Black_SD";
	};
};

class DZE_Wep_P99_Black_SD: M9SD {
	displayName = "$STR_DZ_WPN_P99SD_BLACK_NAME";
	descriptionShort = "$STR_DZ_WPN_P99SD_DESC";
	model = "\C1987_P99\P99_black_sd.p3d";
	picture = "\C1987_P99\equip\p99_black_sd.paa";
	soundBegin[] = {"begin1",1};
	fireLightDuration = 0.0;
	fireLightIntensity = 0.0;
	begin1[] = {"\C1987_P99\sound\p99_sd.wss",1.0,1};
	reloadMagazineSound[] = {"\C1987_P99\sound\p99_reload.wss",0.1,1,20};
	magazines[] = {"15Rnd_10x22_p99_sd"};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup10',_id,'DZE_Wep_P99_Black'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_P99_Green: DZE_Wep_P99_Black {
	displayName = "$STR_DZ_WPN_P99_GREEN_NAME";
	model = "\C1987_P99\P99_green.p3d";
	picture = "\C1987_P99\equip\p99_green.paa";

	class Attachments {
		DZE_Item_Att_Sup10 = "DZE_Wep_P99_Green_SD";
	};
};

class DZE_Wep_P99_Green_SD: DZE_Wep_P99_Black_SD {
	displayName = "$STR_DZ_WPN_P99SD_GREEN_NAME";
	model = "\C1987_P99\P99_green_sd.p3d";
	picture = "\C1987_P99\equip\p99_green_sd.paa";

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup10',_id,'DZE_Wep_P99_Green'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_P99_Silver: DZE_Wep_P99_Black {
	displayName = "$STR_DZ_WPN_P99_SILVER_NAME";
	model = "\C1987_P99\P99_silver.p3d";
	picture = "\C1987_P99\equip\p99_silver.paa";

	class Attachments {
		DZE_Item_Att_Sup10 = "DZE_Wep_P99_Silver_SD";
	};
};

class DZE_Wep_P99_Silver_SD: DZE_Wep_P99_Black_SD {
	displayName = "$STR_DZ_WPN_P99SD_SILVER_NAME";
	model = "\C1987_P99\P99_silver_sd.p3d";
	picture = "\C1987_P99\equip\p99_silver_sd.paa";

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup10',_id,'DZE_Wep_P99_Silver'] call player_removeAttachment";
		};
	};
};
