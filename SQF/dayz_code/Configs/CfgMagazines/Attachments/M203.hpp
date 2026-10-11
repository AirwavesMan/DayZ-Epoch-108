class DZE_Item_Att_M203 : CA_Magazine {
	scope = 2;
	displayName = "$STR_DZ_ATT_M203_NAME";
	descriptionShort = "$STR_DZ_ATT_M203_DESC";
	model = "\z\addons\dayz_communityweapons\attachments\m203\m203.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\m203\data\m_m203_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class AttachToPrimary {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};