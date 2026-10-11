class UZI_EP1;
class DZE_Wep_PDW : UZI_EP1 {
	class Single: Mode_SemiAuto {
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		begin1[] = {"\RH_de\Sound\muzi.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.075;
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_single_pistol_3outof3";
		recoilProne = "recoil_single_pistol_prone_3outof3";
		begin1[] = {"\RH_de\Sound\muzi.wss",1.778279,1,900};
		soundBegin[] = {"begin1",1};
		soundBurst = 0;
		reloadTime = 0.075;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.02;
	};

	magazines[] = {"30Rnd_9x19_UZI"};

	class Attachments {
		DZE_Item_Att_Sup9 = "DZE_Wep_PDW_SD";
	};
};

class UZI_SD_EP1;
class DZE_Wep_PDW_SD : UZI_SD_EP1 {
	class Single: Mode_SemiAuto {
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		begin1[] = {"\RH_smg\sound\mp5sd.wss",1.778279,1,50};
		soundBegin[] = {"begin1",1};
		reloadTime = 0.075;
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
	};
	class FullAuto: Mode_FullAuto {
		recoil = "recoil_single_pistol_3outof3";
		recoilProne = "recoil_single_pistol_prone_3outof3";
		begin1[] = {"\RH_smg\sound\mp5sd.wss",1.778279,1,50};
		soundBegin[] = {"begin1",1};
		soundBurst = 0;
		reloadTime = 0.075;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.02;
	};

	magazines[] = {"30Rnd_9x19_UZI_SD"};

	class ItemActions {
		class RemoveSuppressor {
			text = "$STR_ATTACHMENT_RMVE_Silencer";
			script = "; ['DZE_Item_Att_Sup9',_id,'DZE_Wep_PDW'] call player_removeAttachment";
		};
	};
};
