class DZE_Item_Att_Laser : CA_Magazine {
	scope = 2;
	displayName = "$STR_DZE_ATTACHMENT_LASER_NAME";
	descriptionShort = "$STR_DZE_ATTACHMENT_LASER_DESC";
	model = "\z\addons\dayz_communityweapons\attachments\flashlight_rifle\flashlight_rifle.p3d";
	picture = "\dayz_epoch_c\icons\attachments\attachment_laser.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class AttachToPrimary {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};