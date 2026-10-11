class DZE_Item_Medi_BloodBagBase : CA_Magazine {
	scope = 0;
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Medi_BloodBagANEG : DZE_Item_Medi_BloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_bloodBagANEG";
	descriptionShort = "$STR_BLD_desc_bloodBagANEG";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_A.p3d";
};

class DZE_Item_Medi_BloodBagAPOS : DZE_Item_Medi_BloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_bloodBagAPOS";
	descriptionShort = "$STR_BLD_desc_bloodBagAPOS";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_A.p3d";
};

class DZE_Item_Medi_BloodBagBNEG : DZE_Item_Medi_BloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_bloodBagBNEG";
	descriptionShort = "$STR_BLD_desc_bloodBagBNEG";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_B.p3d";
};

class DZE_Item_Medi_BloodBagBPOS : DZE_Item_Medi_BloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_bloodBagBPOS";
	descriptionShort = "$STR_BLD_desc_bloodBagBPOS";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_B.p3d";
};

class DZE_Item_Medi_BloodBagABNEG : DZE_Item_Medi_BloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_bloodBagABNEG";
	descriptionShort = "$STR_BLD_desc_bloodBagABNEG";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_AB.p3d";
};

class DZE_Item_Medi_BloodBagABPOS : DZE_Item_Medi_BloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_bloodBagABPOS";
	descriptionShort = "$STR_BLD_desc_bloodBagABPOS";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_AB.p3d";
};

class DZE_Item_Medi_BloodBagONEG : DZE_Item_Medi_BloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_bloodBagONEG";
	descriptionShort = "$STR_BLD_desc_bloodBagONEG";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_O.p3d";
};

class DZE_Item_Medi_BloodBagOPOS : DZE_Item_Medi_BloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_bloodBagOPOS";
	descriptionShort = "$STR_BLD_desc_bloodBagOPOS";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_O.p3d";
};

//Whole blood bags -- Can only be obtained by taking blood from another player.
class DZE_Item_Medi_WholeBloodBagBase : DZE_Item_Medi_BloodBagBase {
	class ItemActions {
		class Use {
			text = "$STR_BLD_use";
			script = "spawn player_useMeds;";
		};
	};
};

class DZE_Item_Medi_WholeBloodBagANEG : DZE_Item_Medi_WholeBloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_wholeBloodBagANEG";
	descriptionShort = "$STR_BLD_desc_wholeBloodBagANEG";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_A.p3d";
};
class DZE_Item_Medi_WholeBloodBagAPOS : DZE_Item_Medi_WholeBloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_wholeBloodBagAPOS";
	descriptionShort = "$STR_BLD_desc_wholeBloodBagAPOS";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_A.p3d";
};
class DZE_Item_Medi_WholeBloodBagBNEG : DZE_Item_Medi_WholeBloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_wholeBloodBagBNEG";
	descriptionShort = "$STR_BLD_desc_wholeBloodBagBNEG";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_B.p3d";
};
class DZE_Item_Medi_WholeBloodBagBPOS : DZE_Item_Medi_WholeBloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_wholeBloodBagBPOS";
	descriptionShort = "$STR_BLD_desc_wholeBloodBagBPOS";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_B.p3d";
};
class DZE_Item_Medi_WholeBloodBagABNEG : DZE_Item_Medi_WholeBloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_wholeBloodBagABNEG";
	descriptionShort = "$STR_BLD_desc_wholeBloodBagABNEG";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_AB.p3d";
};
class DZE_Item_Medi_WholeBloodBagABPOS : DZE_Item_Medi_WholeBloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_wholeBloodBagABPOS";
	descriptionShort = "$STR_BLD_desc_wholeBloodBagABPOS";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_AB.p3d";
};
class DZE_Item_Medi_WholeBloodBagONEG : DZE_Item_Medi_WholeBloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_wholeBloodBagONEG";
	descriptionShort = "$STR_BLD_desc_wholeBloodBagONEG";
	model = "z\addons\dayz_communityassets\models\bbag_full_m_O.p3d";
};
class DZE_Item_Medi_WholeBloodBagOPOS : DZE_Item_Medi_WholeBloodBagBase {
	scope = 2;
	displayName = "$STR_BLD_name_wholeBloodBagOPOS";
	descriptionShort = "$STR_BLD_desc_wholeBloodBagOPOS";
	model = "z\addons\dayz_communityassets\models\bbag_full_p_O.p3d";
};

//MISC tools needed
class DZE_Item_Medi_BloodTester : CA_Magazine {
	scope = 2;
	displayName = "$STR_BLD_name_bloodTester";
	descriptionShort = "$STR_BLD_desc_bloodTester";
	model = "z\addons\dayz_communityassets\models\blood_test.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_blood_test_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Use {
			text = "$STR_BLD_use_bloodTester";
			script = "spawn player_useMeds;";
		};
	};
};

class DZE_Item_Medi_TransfusionKit : CA_Magazine {
	scope = 2;
	displayName = "$STR_BLD_name_transfusionKit";
	descriptionShort = "$STR_BLD_desc_transfusionKit";
	model = "z\addons\dayz_communityassets\models\blood_transfuse.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bloodbag_transfuse_CA.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Use {
			text = "$STR_BLD_use_transfusionKit";
			script = "spawn player_useMeds;";
		};
	};
};

class DZE_Item_Medi_EmptyBloodBag : CA_Magazine {
	scope = 2;
	displayName = "$STR_BLD_name_emptyBloodBag";
	descriptionShort = "$STR_BLD_desc_emptyBloodBag";
	model = "z\addons\dayz_communityassets\models\bbag_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_empty_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Use {
			text = "$STR_BLD_take";
			script = "spawn player_useMeds;";
		};
	};
};

//Classic blood bag
class DZE_Item_Medi_Bloodbag: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_BLOOD_BAG";
	descriptionShort = "$STR_EQUIP_DESC_BLOOD_BAG";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Use {
			text = "$STR_BLD_use";
			script = "spawn player_useMeds;";
		};
	};
};

class DZE_Item_Medi_BloodbagInfected: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOODBAG_INFECTED";
	descriptionShort = "$STR_EPOCH_BLOODBAG_INFECTED_DESC";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	count = 1;
};

class DZE_Item_Medi_BloodbagZombie: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOODBAG_ZOMBIE";
	descriptionShort = "$STR_EPOCH_BLOODBAG_ZOMBIE_DESC";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	count = 1;
};

class DZE_Item_Medi_BloodbagMutant: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOODBAG_MUTANT";
	descriptionShort = "$STR_EPOCH_BLOODBAG_MUTANT_DESC";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	count = 1;
};

class DZE_Item_Medi_BloodbagRabbit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOODBAG_RABBIT";
	descriptionShort = "$STR_EPOCH_BLOODBAG_RABBIT_DESC";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	count = 1;
};

class DZE_Item_Medi_BloodbagChicken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOODBAG_CHICKEN";
	descriptionShort = "$STR_EPOCH_BLOODBAG_CHICKEN_DESC";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	count = 1;
};

class DZE_Item_Medi_BloodbagDog: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOODBAG_DOG";
	descriptionShort = "$STR_EPOCH_BLOODBAG_DOG_DESC";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	count = 1;
};

class DZE_Item_Medi_BloodbagCow: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOODBAG_COW";
	descriptionShort = "$STR_EPOCH_BLOODBAG_COW_DESC";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	count = 1;
};

class DZE_Item_Medi_BloodbagBoar: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOODBAG_BOAR";
	descriptionShort = "$STR_EPOCH_BLOODBAG_BOAR_DESC";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	count = 1;
};

class DZE_Item_Medi_BloodbagGoat: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOODBAG_GOAT";
	descriptionShort = "$STR_EPOCH_BLOODBAG_GOAT_DESC";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	count = 1;
};

class DZE_Item_Medi_BloodbagSheep: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BLOODBAG_SHEEP";
	descriptionShort = "$STR_EPOCH_BLOODBAG_SHEEP_DESC";
	model = "\dayz_equip\models\bloodbag.p3d";
	picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
	count = 1;
};