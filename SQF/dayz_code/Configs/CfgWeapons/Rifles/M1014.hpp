class M1014: Rifle {
	class Single;
};
class DZE_Wep_M1014 : M1014 {
	displayName = "$STR_DZ_WPN_M1014_NAME";
	model = "z\addons\dayz_communityweapons\m1014\m1014.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_ca.paa";

	magazines[] =
	{
		8Rnd_12Gauge_Slug,
		8Rnd_12Gauge_Buck,
		2Rnd_12Gauge_Slug,
		2Rnd_12Gauge_Buck
	};

	class Single : Single {
		reloadTime = 0.27;
	};

	distanceZoomMin=50;
	distanceZoomMax=50;

	class Attachments {
		Attachment_CCO = "DZE_Wep_M1014_CCO";
		Attachment_Holo = "DZE_Wep_M1014_Holo";
	};
};

class DZE_Wep_M1014_CCO : DZE_Wep_M1014 {
	displayName = "$STR_DZ_WPN_M1014_CCO_NAME";
	model = "z\addons\dayz_communityweapons\m1014\m1014_cco.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_cco_ca.paa";

	distanceZoomMin=75;
	distanceZoomMax=75;

	class Attachments {};

	class ItemActions {
		class RemoveCCO {
			text = "$STR_DZ_ATT_CCO_RMVE";
			script = "; ['Attachment_CCO',_id,'DZE_Wep_M1014'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_M1014_Holo : DZE_Wep_M1014_CCO {
	displayName = "$STR_DZ_WPN_M1014_HOLO_NAME";
	model = "z\addons\dayz_communityweapons\m1014\m1014_holo.p3d";
	picture = "\z\addons\dayz_communityweapons\m1014\data\w_m1014_holo_ca.paa";

	class ItemActions {
		class RemoveHolo {
			text = "$STR_DZ_ATT_HOLO_RMVE";
			script = "; ['Attachment_Holo',_id,'DZE_Wep_M1014'] call player_removeAttachment";
		};
	};
};