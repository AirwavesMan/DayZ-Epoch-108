class DZE_Item_Att_SCOPED : CA_Magazine {
	scope = 2;
	displayName = "$STR_ATTACHMENT_NAME_SCOPE";
	descriptionShort = "$STR_ATTACHMENT_DESC_SCOPE";
	model = "z\addons\dayz_communityweapons\models\attachments\SCOPE";
	picture = "\z\addons\dayz_communityweapons\models\attachments\SCOPE.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Use {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};
