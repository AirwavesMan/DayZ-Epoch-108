class DZE_Item_Medi_Painkiller : CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_PAINKILLER";
	descriptionShort = "$STR_EQUIP_DESC_PAINKILLER";
	model = "\dayz_equip\models\med_painkiller_gear.p3d";
	picture = "\dayz_equip\textures\equip_painkiller_ca.paa";
	count = 1;
	type = 256;

	class medical {
		qtyRemaining = "DZE_Item_Medi_Painkiller6";
		chance = 1.10; //100%
		amount = -1;
	};

	class ItemActions {
		class Use {
			text = "$STR_TAKE_PAINKILLER";
			script = "spawn player_useMeds;";
		};
		class Combine {
			text = "$STR_ANTIBIOTICS_COMBINE";
			script = "spawn player_combinePainkiller;";
		};
	};
};

class DZE_Item_Medi_Painkiller6 : DZE_Item_Medi_Painkiller {
	displayName = "$STR_EQUIP_NAME_PAINKILLER_6";
	descriptionShort = "$STR_EQUIP_DESC_PAINKILLER_6";

	class medical {
		qtyRemaining = "DZE_Item_Medi_Painkiller5";
		amount = 6;
	};
};

class DZE_Item_Medi_Painkiller5 : DZE_Item_Medi_Painkiller {
	displayName = "$STR_EQUIP_NAME_PAINKILLER_5";
	descriptionShort = "$STR_EQUIP_DESC_PAINKILLER_5";

	class medical {
		qtyRemaining = "DZE_Item_Medi_Painkiller4";
		amount = 5;
	};
};

class DZE_Item_Medi_Painkiller4 : DZE_Item_Medi_Painkiller {
	displayName = "$STR_EQUIP_NAME_PAINKILLER_4";
	descriptionShort = "$STR_EQUIP_DESC_PAINKILLER_4";

	class medical {
		qtyRemaining = "DZE_Item_Medi_Painkiller3";
		amount = 4;
	};
};

class DZE_Item_Medi_Painkiller3 : DZE_Item_Medi_Painkiller {
	displayName = "$STR_EQUIP_NAME_PAINKILLER_3";
	descriptionShort = "$STR_EQUIP_DESC_PAINKILLER_3";

	class medical {
		qtyRemaining = "DZE_Item_Medi_Painkiller2";
		amount = 3;
	};
};

class DZE_Item_Medi_Painkiller2 : DZE_Item_Medi_Painkiller {
	displayName = "$STR_EQUIP_NAME_PAINKILLER_2";
	descriptionShort = "$STR_EQUIP_DESC_PAINKILLER_2";

	class medical {
		qtyRemaining = "DZE_Item_Medi_Painkiller1";
		amount = 2;
	};
};

class DZE_Item_Medi_Painkiller1 : DZE_Item_Medi_Painkiller {
	displayName = "$STR_EQUIP_NAME_PAINKILLER_1";
	descriptionShort = "$STR_EQUIP_DESC_PAINKILLER_1";

	class medical {
		qtyRemaining = "DZE_Item_Medi_PainkillerEmpty";
		amount = 1;
	};
};

class DZE_Item_Medi_PainkillerEmpty : CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_PAINKILLER_EMPTY";
	descriptionShort = "$STR_EQUIP_DESC_PAINKILLER_EMPTY";
	model = "\dayz_equip\models\med_painkiller_gear.p3d";
	picture = "\dayz_epoch_c\icons\equipment\ItemPainkillerEmpty.paa";
	count = 1;
	type = 256;
};