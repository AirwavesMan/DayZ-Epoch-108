class DZE_Item_Medi_Antibiotic_Base : CA_Magazine {
	scope = 0;
	displayName = "$STR_EQUIP_NAME_ANTIBIOTICS";
	model = "\dayz_equip\models\med_antibiotic_gear.p3d";
	picture = "\dayz_equip\textures\equip_antibiotics_ca.paa";
	count = 1;
	type = 256;
};

class DZE_Item_Medi_Antibiotic : DZE_Item_Medi_Antibiotic_Base {
	scope = 2;
	descriptionShort = "$STR_EQUIP_DESC_ANTIBIOTICS";

	class medical {
		qtyRemaining = "DZE_Item_Medi_Antibiotic6";
		chance = 1.10; //100%
		amount = -1;
	};

	class ItemActions {
		class Use {
			text = "$STR_TAKE_ANTIBIOTIC";
			script = "spawn player_useMeds;";
		};
		class Combine {
			text = "$STR_ANTIBIOTICS_COMBINE";
			script = "spawn player_combineAntibiotics;";
		};
	};
};

class DZE_Item_Medi_Antibiotic6 : DZE_Item_Medi_Antibiotic {
	displayName = "$STR_EQUIP_NAME_ANTIBIOTICS_6";
	descriptionShort = "$STR_EQUIP_DESC_ANTIBIOTICS_6";

	class medical {
		qtyRemaining = "DZE_Item_Medi_Antibiotic5";
		amount = 6;
	};
};

class DZE_Item_Medi_Antibiotic5 : DZE_Item_Medi_Antibiotic {
	displayName = "$STR_EQUIP_NAME_ANTIBIOTICS_5";
	descriptionShort = "$STR_EQUIP_DESC_ANTIBIOTICS_5";

	class medical {
		qtyRemaining = "DZE_Item_Medi_Antibiotic4";
		amount = 5;
	};
};

class DZE_Item_Medi_Antibiotic4 : DZE_Item_Medi_Antibiotic {
	displayName = "$STR_EQUIP_NAME_ANTIBIOTICS_4";
	descriptionShort = "$STR_EQUIP_DESC_ANTIBIOTICS_4";

	class medical {
		qtyRemaining = "DZE_Item_Medi_Antibiotic3";
		amount = 4;
	};
};

class DZE_Item_Medi_Antibiotic3 : DZE_Item_Medi_Antibiotic {
	displayName = "$STR_EQUIP_NAME_ANTIBIOTICS_3";
	descriptionShort = "$STR_EQUIP_DESC_ANTIBIOTICS_3";

	class medical {
		qtyRemaining = "DZE_Item_Medi_Antibiotic2";
		amount = 3;
	};
};

class DZE_Item_Medi_Antibiotic2 : DZE_Item_Medi_Antibiotic {
	displayName = "$STR_EQUIP_NAME_ANTIBIOTICS_2";
	descriptionShort = "$STR_EQUIP_DESC_ANTIBIOTICS_2";

	class medical {
		qtyRemaining = "DZE_Item_Medi_Antibiotic1";
		amount = 2;
	};
};

class DZE_Item_Medi_Antibiotic1 : DZE_Item_Medi_Antibiotic {
	displayName = "$STR_EQUIP_NAME_ANTIBIOTICS_1";
	descriptionShort = "$STR_EQUIP_DESC_ANTIBIOTICS_1";

	class medical {
		qtyRemaining = "DZE_Item_Medi_AntibioticEmpty";
		amount = 1;
	};
};

class DZE_Item_Medi_AntibioticEmpty : DZE_Item_Medi_Antibiotic_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_ANTIBIOTICS_EMPTY";
	descriptionShort = "$STR_EQUIP_DESC_ANTIBIOTICS_EMPTY";
	picture = "\dayz_epoch_c\icons\equipment\ItemAntibioticsEmpty.paa";
};