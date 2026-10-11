class DZE_Wep_Makarov : Makarov {
	displayName = "$STR_DZ_WPN_PM_NAME";
	magazines[] = {"8Rnd_9x18_Makarov"};

	class Attachments {
		Attachment_Sup9 = "DZE_Wep_Makarov_SD";
		Attachment_SupMakarov = "DZE_Wep_Makarov_SD"; //left to maintain old suppressor attachment
	};
};

class DZE_Wep_Makarov_SD : MakarovSD {
	displayName = "$STR_DZ_WPN_PM_SD_NAME";
	magazines[] = {"8Rnd_9x18_MakarovSD"};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup9',_id,'DZE_Wep_Makarov'] call player_removeAttachment";
		};
	};
};