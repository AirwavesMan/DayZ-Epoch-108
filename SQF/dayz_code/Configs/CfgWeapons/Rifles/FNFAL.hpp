class FN_FAL;
class DZE_Wep_FNFAL : FN_FAL {
	displayName = "$STR_DZ_WPN_FNFAL_NAME";
	model = "z\addons\dayz_communityweapons\fnfal\fnfal.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_ca.paa";

	magazines[] = {20Rnd_762x51_FNFAL};

	modes[] = {Single, FullAuto};

	distanceZoomMin = 300;
	distanceZoomMax = 300;

	class Attachments {
		DZE_Item_Att_CCO = "DZE_Wep_FNFAL_CCO";
		DZE_Item_Att_Holo = "DZE_Wep_FNFAL_Holo";
		DZE_Item_Att_ANPVS4 = "DZE_Wep_FN_FAL_ANPVS4_DZE";
	};
};

class DZE_Wep_FNFAL_CCO : DZE_Wep_FNFAL {
	displayName = "$STR_DZ_WPN_FNFAL_CCO_NAME";
	model = "z\addons\dayz_communityweapons\fnfal\fnfal_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_cco_ca.paa";

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['DZE_Item_Att_CCO',_id,'DZE_Wep_FNFAL'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_FNFAL_Holo : DZE_Wep_FNFAL_CCO {
	displayName = "$STR_DZ_WPN_FNFAL_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\fnfal\fnfal_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\fnfal\data\w_fnfal_holo_ca.paa";

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['DZE_Item_Att_Holo',_id,'DZE_Wep_FNFAL'] call player_removeAttachment";
		};
	};
};

class FN_FAL_ANPVS4;
class DZE_Wep_FNFAL_ANPVS4 : FN_FAL_ANPVS4 {
	modes[] = {Single, FullAuto};
};

class DZE_Wep_FN_FAL_ANPVS4_DZE: FN_FAL_ANPVS4 {
	visionMode[] = {"Normal", "NVG"};
	modes[] = {Single, FullAuto};

	class ItemActions {
		class RemoveANPVS {
			text = "$STR_DZ_ATT_ANPVS4_RMVE";
			script = "; ['DZE_Item_Att_ANPVS4',_id,'DZE_Wep_FNFAL'] call player_removeAttachment";
		};
	};
};
