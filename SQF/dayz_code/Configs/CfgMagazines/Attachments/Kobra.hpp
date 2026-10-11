class DZE_Item_Att_Kobra : CA_Magazine {
	scope = 2;
	displayName = "$STR_DZ_ATT_KOBRA_NAME";
	descriptionShort = "$STR_DZ_ATT_KOBRA_DESC";
	model = "\z\addons\dayz_communityweapons\attachments\kobra\kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\kobra\data\m_kobra_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class AttachToPrimary {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};