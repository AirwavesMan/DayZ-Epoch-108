class DZE_Item_Att_ANPVS4 : CA_Magazine {
	scope = 2;
	displayName = "$STR_DZE_ATTACHMENT_ANPVS4_NAME";
	descriptionShort = "$STR_DZE_ATTACHMENT_ANPVS4_DESC";
	model = "\z\addons\dayz_epoch_w\optic\dze_scope_anpvs4.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_anpvs4.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class AttachToPrimary {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};