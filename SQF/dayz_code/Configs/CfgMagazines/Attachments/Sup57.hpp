class DZE_Item_Att_Sup57 : CA_Magazine {
	scope = 2;
	displayName = "$STR_DZ_ATT_SUP57_NAME";
	descriptionShort = "$STR_DZ_ATT_SUP57_DESC";
	model = "\z\addons\dayz_communityweapons\attachments\suppressor556\suppressor556.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\suppressor556\data\m_suppressor556_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class AttachToPrimary {
			text = "$STR_DZ_ATT_ACT_TO_PRIMARY";
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};