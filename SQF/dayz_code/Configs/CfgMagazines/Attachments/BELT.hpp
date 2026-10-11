class DZE_Item_Att_BELT : CA_Magazine {
	scope = 2;
	displayName = "$STR_ATTACHMENT_NAME_BELT";
	descriptionShort = "$STR_ATTACHMENT_DESC_BELT";
	model = "\z\addons\dayz_communityweapons\models\attachments\BELT";
	picture = "\z\addons\dayz_communityweapons\models\attachments\BELT.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class AttachToPrimary {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};