class DZE_Item_Att_Sup545 : CA_Magazine {
	scope = 2;
	displayName = "$STR_DZ_ATT_SUP545_NAME";
	descriptionShort = "$STR_DZ_ATT_SUP545_DESC";
	model = "\z\addons\dayz_communityweapons\attachments\suppressor545\suppressor545.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\suppressor545\data\m_suppressor545_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class AttachToPrimary {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};