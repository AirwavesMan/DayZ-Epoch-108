class DZE_Item_Att_SA58RIS : CA_Magazine {
	scope = 2;
	displayName = "$STR_DZ_ATT_SA58RIS_NAME";
	descriptionShort = "$STR_DZ_ATT_SA58RIS_DESC";
	model = "ca\weapons\mag_univ.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\SA58RIS\data\m_sa58ris_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class AttachToPrimary {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};