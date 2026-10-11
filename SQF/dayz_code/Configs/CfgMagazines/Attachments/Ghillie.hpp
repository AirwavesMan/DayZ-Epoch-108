class DZE_Item_Att_Ghillie : CA_Magazine {
	scope = 2;
	displayName = "$STR_DZ_ATT_GHIL_NAME";
	descriptionShort = "$STR_DZ_ATT_GHIL_DESC";
	model = "\z\addons\dayz_epoch_w\magazine\dze_camoroll_woodland.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\ghillie\data\m_ghillie_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class AttachToPrimary {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};
class DZE_Item_Att_Ghillie_Desert : DZE_Item_Att_Ghillie {
	displayName = "$STR_DZE_ATTACHMENT_GHIL_DES_NAME";
	model = "\z\addons\dayz_epoch_w\magazine\dze_camoroll_desert.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_netting_desert.paa";
};
class DZE_Item_Att_Ghillie_Snow : DZE_Item_Att_Ghillie {
	displayName = "$STR_DZE_ATTACHMENT_GHIL_SNOW_NAME";
	model = "\z\addons\dayz_epoch_w\magazine\dze_camoroll_snow.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_netting_snow.paa";
};
class DZE_Item_Att_Ghillie_Urban : DZE_Item_Att_Ghillie {
	displayName = "$STR_DZE_ATTACHMENT_GHIL_URB_NAME";
	model = "\z\addons\dayz_epoch_w\magazine\dze_camoroll_urban.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_netting_urban.paa";
};