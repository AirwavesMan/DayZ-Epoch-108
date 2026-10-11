class DZE_Item_Att_NSPU : CA_Magazine {
	scope = 2;
	displayName = "$STR_DZE_ATTACHMENT_NSPU_NAME";
	descriptionShort = "$STR_DZE_ATTACHMENT_NSPU_DESC";
	model = "\z\addons\dayz_epoch_w\optic\dze_scope_nspu.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_nspu.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class AttachToPrimary {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};