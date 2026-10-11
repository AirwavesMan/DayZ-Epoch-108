class Evo_ACR;
class DZE_Wep_Scorpion_Evo3: Evo_ACR {
	displayName = "$STR_DZ_WPN_SC_EVO3_NAME";
	descriptionShort = "$STR_DZ_WPN_SC_EVO3_DESC";
	magazines[] = {"30Rnd_9x19_MP5"};
};

class Evo_mrad_ACR;
class DZE_Wep_Scorpion_Evo3_CCO: Evo_mrad_ACR {
	displayName = "$STR_DZ_WPN_SC_EVO3_CCO_NAME";
	descriptionShort = "$STR_DZ_WPN_SC_EVO3_DESC";
	magazines[] = {"30Rnd_9x19_MP5"};

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_Scorpion_Evo3_CCO_SD";
	};
};

class evo_sd_ACR;
class DZE_Wep_Scorpion_Evo3_CCO_SD: evo_sd_ACR {
	displayName = "$STR_DZ_WPN_SC_EVO3_CCO_SD_NAME";
	descriptionShort = "$STR_DZ_WPN_SC_EVO3_SD_DESC";
	magazines[] = {"30Rnd_9x19_MP5SD"};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_Scorpion_Evo3_CCO'] call player_removeAttachment";
		};
	};
};