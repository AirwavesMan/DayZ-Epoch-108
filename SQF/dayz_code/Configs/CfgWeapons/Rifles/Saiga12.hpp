class DZE_Wep_Saiga12K: Saiga12K {
	class Single: Mode_SemiAuto {
		recoil = "recoil_single_primary_9outof10";
		recoilProne = "recoil_single_primary_prone_8outof10";
		begin1[] = {"dayz_epoch_c\sounds\weapons\saiga_shot",1.7782794,1,1200};
		soundBegin[] = {"begin1",1};
		dispersion = 0.003;
		soundContinuous = 0;
		reloadTime = 0.1;
		minRange = 0;
		minRangeProbab = 0.5;
		midRange = 60;
		midRangeProbab = 0.2;
		maxRange = 100;
		maxRangeProbab = 0.03;
	};
};