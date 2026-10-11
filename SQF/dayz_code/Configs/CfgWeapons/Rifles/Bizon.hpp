class bizon;
class DZE_Wep_Bizon : bizon {
	displayName = "$STR_DZ_WPN_BIZON_NAME";
	model = "\rh_aks\RH_bizon.p3d";
	picture = "\rh_aks\inv\bizon.paa";
	weaponInfoType = "RscWeaponZeroing";

	magazines[] =
	{
		64Rnd_9x19_Bizon
	};

	discreteDistance[] = {50,100,150};
	discreteDistanceInitIndex = 1;

	class Attachments {
		Attachment_Kobra = "DZE_Wep_Bizon_Kobra";
		Attachment_Sup9 = "DZE_Wep_Bizon_SD";
	};
};

class DZE_Wep_Bizon_Kobra : DZE_Wep_Bizon {
	displayName = "$STR_DZ_WPN_BIZON_KOBRA_NAME";
	model = "\RH_aks\RH_bizonk.p3d";
	picture = "\RH_aks\inv\bizonk.paa";

	class Attachments {
		Attachment_Sup9 = "DZE_Wep_Bizon_Kobra_SD";
	};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['Attachment_Kobra',_id,'DZE_Wep_Bizon'] call player_removeAttachment";
		};
	};
};

class bizon_silenced;
class DZE_Wep_Bizon_SD : bizon_silenced {
	displayName = "$STR_DZ_WPN_BIZON_SD_NAME";
	model = "\rh_aks\RH_bizonsd.p3d";
	picture = "\rh_aks\inv\bizonsd.paa";
	weaponInfoType = "RscWeaponZeroing";

	magazines[] =
	{
		64Rnd_9x19_SD_Bizon
	};

	discreteDistance[] = {50,100,150};
	discreteDistanceInitIndex = 1;

	class Attachments {
		Attachment_Kobra = "DZE_Wep_Bizon_Kobra_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup9',_id,'DZE_Wep_Bizon'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_Bizon_Kobra_SD : DZE_Wep_Bizon_SD {
	displayName = "$STR_DZ_WPN_BIZON_KOBRA_SD_NAME";
	model = "\RH_aks\RH_bizonsdk.p3d";
	picture = "\RH_aks\inv\bizonsdk.paa";

	class Attachments {};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup9',_id,'DZE_Wep_Bizon_Kobra'] call player_removeAttachment";
		};
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['Attachment_Kobra',_id,'DZE_Wep_Bizon_SD'] call player_removeAttachment";
		};
	};
};