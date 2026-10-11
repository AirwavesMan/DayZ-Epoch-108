class DZE_Wep_G17 : glock17_EP1 {
	displayName = "$STR_DZ_WPN_G17_NAME";
	model = "z\addons\dayz_communityweapons\g17\g17.p3d";
	picture = "\z\addons\dayz_communityweapons\g17\data\w_g17_ca.paa";
	magazines[] = {"17Rnd_9x19_glock17"};

	delete FlashLight;

	class Attachments {
		Attachment_Sup9 = "DZE_Wep_G17_SD";
		Attachment_FL_Pist = "DZE_Wep_G17_FL";
		Attachment_MFL_Pist = "DZE_Wep_G17_MFL";
	};
};

class DZE_Wep_G17_FL : DZE_Wep_G17 {
	displayName = "$STR_DZ_WPN_G17_FL_NAME";
	model = "z\addons\dayz_communityweapons\g17\g17_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\g17\data\w_g17_fl_ca.paa";

	class FlashLight {
		position = "flash dir";
		direction = "flash";
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1.0};
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};

	class Attachments {
		Attachment_Sup9 = "DZE_Wep_G17_SD_FL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_PST_RMVE";
			script = "; ['Attachment_FL_Pist',_id,'DZE_Wep_G17'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G17_MFL : DZE_Wep_G17 {
	displayName = "$STR_DZ_WPN_G17_MFL_NAME";
	model = "z\addons\dayz_communityweapons\g17\g17_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\g17\data\w_g17_fl_ca.paa";

	class FlashLight {
		position = "flash dir";
		direction = "flash";
		color[] = {0.9, 0.0, 0.0, 0.9};
		ambient[] = {0.1, 0.0, 0.0, 1.0};
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.08;
	};

	class Attachments {
		Attachment_Sup9 = "DZE_Wep_G17_SD_MFL";
	};

	class ItemActions {
		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_PST_RMVE";
			script = "; ['Attachment_MFL_Pist',_id,'DZE_Wep_G17'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G17_SD : M9SD {
	displayName = "$STR_DZ_WPN_G17_SD_NAME";
	descriptionShort = "$STR_EP1_DSS_glock17_EP1";
	model = "z\addons\dayz_communityweapons\g17\g17_sd.p3d";
	picture = "\z\addons\dayz_communityweapons\g17\data\w_g17_sd_ca.paa";
	recoil =          "recoil_single_pistol_2outof3";
	recoilProne =     "recoil_single_pistol_prone_2outof3";
	magazines[] = {"17Rnd_9x19_glock17SD"};

	reloadMagazineSound[]={"Ca\Sounds_E\Weapons_E\Glock17\reload1",db0,1, 20};

	class Library {
		libTextDesc = "$STR_EP1_LIB_glock17";
	};

	class Attachments {
		Attachment_FL_Pist = "DZE_Wep_G17_SD_FL";
		Attachment_MFL_Pist = "DZE_Wep_G17_SD_MFL";
	};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup9',_id,'DZE_Wep_G17'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G17_SD_FL : DZE_Wep_G17_SD {
	displayName = "$STR_DZ_WPN_G17_SD_FL_NAME";
	model = "z\addons\dayz_communityweapons\g17\g17_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\g17\data\w_g17_sd_fl_ca.paa";

	class FlashLight {
		position = "flash dir";
		direction = "flash";
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1.0};
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};

	class Attachments {};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup9',_id,'DZE_Wep_G17_FL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_PST_RMVE";
			script = "; ['Attachment_FL_Pist',_id,'DZE_Wep_G17_SD'] call player_removeAttachment";
		};
	};
};

class DZE_Wep_G17_SD_MFL : DZE_Wep_G17_SD {
	displayName = "$STR_DZ_WPN_G17_SD_MFL_NAME";
	model = "z\addons\dayz_communityweapons\g17\g17_sd_fl.p3d";
	picture = "\z\addons\dayz_communityweapons\g17\data\w_g17_sd_fl_ca.paa";

	class FlashLight {
		position = "flash dir";
		direction = "flash";
		color[] = {0.9, 0.0, 0.0, 0.9};
		ambient[] = {0.1, 0.0, 0.0, 1.0};
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.08;
	};

	class Attachments {};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['Attachment_Sup9',_id,'DZE_Wep_G17_MFL'] call player_removeAttachment";
		};

		class RemoveFlashlight {
			text = "$STR_DZ_ATT_FL_PST_RMVE";
			script = "; ['Attachment_MFL_Pist',_id,'DZE_Wep_G17_SD'] call player_removeAttachment";
		};
	};
};
