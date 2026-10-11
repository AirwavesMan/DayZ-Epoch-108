class DZE_Item_Att_SupBizon : CA_Magazine {
	scope = 2;
	displayName = "$STR_DZ_ATT_SUP9BIZON_NAME";
	descriptionShort = "$STR_DZ_ATT_SUP9BIZON_DESC";
	model = "z\addons\dayz_communityassets\models\surpressor.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\attachment_silencer.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class AttachToPrimary {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};