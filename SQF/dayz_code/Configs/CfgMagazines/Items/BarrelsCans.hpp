class DZE_Item_JerryCan_Empty: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_JERRYCAN_EMPTY";
	descriptionShort = "$STR_ITEM_DESC_JERRYCAN_EMPTY";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_e_ca.paa";
	fullcan = "DZE_Item_JerryCan_Fuel";
	count = 1;
	type = 256;
	DZE_fuelQuantity = 0;
};

class DZE_Item_JerryCan_Fuel: DZE_Item_JerryCan_Empty {
	displayName = "$STR_ITEM_NAME_JERRYCAN";
	descriptionShort = "$STR_ITEM_DESC_JERRYCAN";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	containerEmpty = "DZE_Item_JerryCan_Empty";
	DZE_fuelQuantity = 20;

	//used for tent burning
	fireIntensity = 6;
	DZE_burnTimer = 400;

	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_JerryCan_Water: DZE_Item_JerryCan_Empty {
	displayName = "$STR_ITEM_NAME_JERRYCAN_WATER";
	descriptionShort = "$STR_ITEM_DESC_JERRYCAN_WATER";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	containerEmpty = "DZE_Item_JerryCan_Empty";

	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_JerryCan_Milk: DZE_Item_JerryCan_Empty {
	displayName = "$STR_ITEM_NAME_JERRYCAN_MILK";
	descriptionShort = "$STR_ITEM_DESC_JERRYCAN_MILK";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	containerEmpty = "DZE_Item_JerryCan_Empty";

	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_Can_Empty: DZE_Item_JerryCan_Empty {
	displayName = "$STR_ITEM_NAME_FUELCAN_EMPTY";
	descriptionShort = "$STR_ITEM_DESC_FUELCAN_EMPTY";
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	picture = "\dayz_epoch_c\icons\equipment\ItemFuelcanEmpty.paa";
	fullcan = "DZE_Item_Can_Fuel";
	type = 256;
	DZE_fuelQuantity = 0;
};

class DZE_Item_Can_Fuel: DZE_Item_Can_Empty {
	displayName = "$STR_ITEM_NAME_FUELCAN";
	descriptionShort = "$STR_ITEM_DESC_FUELCAN";
	picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_CA.paa";
	containerEmpty = "DZE_Item_Can_Empty";
	DZE_fuelQuantity = 5;

	//used for tent burning
	fireIntensity = 4;
	DZE_burnTimer = 100;

	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_Can_Water: DZE_Item_Can_Empty {
	displayName = "$STR_ITEM_NAME_FUELCAN_WATER";
	descriptionShort = "$STR_ITEM_DESC_FUELCAN_WATER";
	picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_CA.paa";
	containerEmpty = "DZE_Item_Can_Empty";
	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_Can_Milk: DZE_Item_Can_Empty {
	displayName = "$STR_ITEM_NAME_FUELCAN_MILK";
	descriptionShort = "$STR_ITEM_DESC_FUELCAN_MILK";
	picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_CA.paa";
	containerEmpty = "DZE_Item_Can_Empty";
	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_Barrel_Fuel: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FUELBARREL";
	descriptionShort = "$STR_EPOCH_FUELBARREL_DESC";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	containerEmpty = "DZE_Item_Barrel_Empty";
	count = 1;
	DZE_fuelQuantity = 210;
	type = 256;
	fireIntensity = 6; //used for tent burning
	DZE_burnTimer = 1800;


	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_Barrel_Water: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FUELBARREL_WATER";
	descriptionShort = "$STR_EPOCH_FUELBARREL_DESC_WATER";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	containerEmpty = "DZE_Item_Barrel_Empty";
	count = 1;
	type = 256;

	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_Barrel_Milk: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FUELBARREL_MILK";
	descriptionShort = "$STR_EPOCH_FUELBARREL_DESC_MILK";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	containerEmpty = "DZE_Item_Barrel_Empty";
	count = 1;
	type = 256;

	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_Barrel_Empty: DZE_Item_Barrel_Fuel {
	scope = 2;
	displayName = "$STR_EPOCH_EMPTYFUELBARREL";
	descriptionShort = "$STR_EPOCH_EMPTYFUELBARREL_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_oildrum_e_CA.paa";
	fullcan = "DZE_Item_Barrel_Fuel";
	count = 1;
	DZE_fuelQuantity = 0;
	type = 256;
	DZE_burnTimer = 0;


	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_276";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_FireBarrel",1}};
			input[] = {{"DZE_Item_Barrel_Empty",1},{"DZE_Item_JerryCan_Fuel",1},{"DZE_Item_Wood_Pile",4}};
		};
	};
};

class DZE_Item_Barrel_Oil: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_OILBARREL";
	descriptionShort = "$STR_EPOCH_OILBARREL_DESC";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	containerEmpty = "DZE_Item_Barrel_OilEmpty";
	count = 1;
	type = 256;

	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_Barrel_OilEmpty: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_EMPTYOILBARREL";
	descriptionShort = "$STR_EPOCH_EMPTYOILBARREL_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_oildrum_e_CA.paa";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_276";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_FireBarrel",1}};
			input[] = {{"DZE_Item_Barrel_OilEmpty",1},{"DZE_Item_JerryCan_Fuel",1},{"DZE_Item_Wood_Pile",4}};
		};
	};
};

class DZE_Item_Barrel_MethylaminEmpty: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_EMPTYMETHYLAMINEBARREL";
	descriptionShort = "$STR_EPOCH_EMPTYMETHYLAMINEBARREL_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_oildrum_e_CA.paa";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_276";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_FireBarrel",1}};
			input[] = {{"DZE_Item_Barrel_MethylaminEmpty",1},{"DZE_Item_JerryCan_Fuel",1},{"DZE_Item_Wood_Pile",4}};
		};
	};
};

class DZE_Item_Barrel_Methylamin: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_METHYLAMINEBARREL";
	descriptionShort = "$STR_EPOCH_METHYLAMINEBARREL_DESC";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	containerEmpty = "DZE_Item_Barrel_MethylaminEmpty";
	count = 1;
	type = 256;

	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};
