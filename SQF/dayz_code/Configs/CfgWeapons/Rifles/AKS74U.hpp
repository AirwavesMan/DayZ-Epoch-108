class AKS_74_U;
class DZE_Wep_AKS74U_Kobra : AKS_74_U {
	displayName = "$STR_DZ_WPN_AKS74U_KOBRA_NAME";
	model = "z\addons\dayz_communityweapons\aks74u\aks74u_kobra.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_kobra_ca.paa";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AK,
		60Rnd_545x39_AK_Taped,
		75Rnd_545x39_RPK
	};

	class Attachments {
		Attachment_Sup545 = "DZE_Wep_AKS74U_Kobra_SD";
	};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['Attachment_Kobra',_id,'DZE_Wep_AKS74U'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_AKS74U_Kobra_SD : AKS_74_UN_kobra {
	displayName = "$STR_DZ_WPN_AKS74U_KOBRA_SD_NAME";
	model = "z\addons\dayz_communityweapons\aks74u\aks74u_kobra_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_kobra_sd_ca.paa";
	modes[] = {"Single","Burst","FullAuto"};

	magazines[] =
	{
		30Rnd_545x39_AKSD,
		60Rnd_545x39_AKSD_Taped
	};

	class ItemActions {
		class RemoveKobra {
			text = "$STR_DZ_ATT_KOBRA_RMVE";
			script = "; ['Attachment_Kobra',_id,'DZE_Wep_AKS74U_SD'] call player_removeAttachment";
		};

		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup545',_id,'DZE_Wep_AKS74U_Kobra'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_AKS74U : DZE_Wep_AKS74U_Kobra {
	displayName = "$STR_DZ_WPN_AKS74U_NAME";
	model = "z\addons\dayz_communityweapons\aks74u\aks74u.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	discreteDistance[] = {350,500};
	discreteDistanceInitIndex = 0;

	class Attachments {
		Attachment_Kobra = "DZE_Wep_AKS74U_Kobra";
		Attachment_Sup545 = "DZE_Wep_AKS74U_SD";
	};

	class ItemActions {};
};

class DZE_Wep_AKS74U_SD : DZE_Wep_AKS74U_Kobra_SD {
	displayName = "$STR_DZ_WPN_AKS74U_SD_NAME";
	model = "z\addons\dayz_communityweapons\aks74u\aks74u_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\aks74u\data\w_aks74u_sd_ca.paa";
	weaponInfoType = "RscWeaponZeroing";

	discreteDistance[] = {100,350,500};
	discreteDistanceInitIndex = 0;

	class Attachments {
		Attachment_Kobra = "DZE_Wep_AKS74U_Kobra_SD";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup545',_id,'DZE_Wep_AKS74U'] call player_removeAttachment";
		};
	};
};