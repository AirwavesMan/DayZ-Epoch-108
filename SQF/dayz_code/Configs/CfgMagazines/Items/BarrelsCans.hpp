class ItemJerrycanEmpty : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_JERRYCAN_EMPTY";
	descriptionShort = "$STR_ITEM_DESC_JERRYCAN_EMPTY";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_e_ca.paa";
	fullcan = "ItemJerrycan";
	count = 1;
	type = 256;
	DZE_fuelQuantity = 0;
};

class ItemJerrycan : ItemJerrycanEmpty {
	displayName = "$STR_ITEM_NAME_JERRYCAN";
	descriptionShort = "$STR_ITEM_DESC_JERRYCAN";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	containerEmpty = "ItemJerrycanEmpty";
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

class ItemJerrycanWater : ItemJerrycanEmpty {
	displayName = "$STR_ITEM_NAME_JERRYCAN_WATER";
	descriptionShort = "$STR_ITEM_DESC_JERRYCAN_WATER";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	containerEmpty = "ItemJerrycanEmpty";
	
	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemJerrycanMilk : ItemJerrycanEmpty {
	displayName = "$STR_ITEM_NAME_JERRYCAN_MILK";
	descriptionShort = "$STR_ITEM_DESC_JERRYCAN_MILK";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	containerEmpty = "ItemJerrycanEmpty";
	
	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemFuelcanEmpty : ItemJerrycanEmpty {
	displayName = "$STR_ITEM_NAME_FUELCAN_EMPTY";
	descriptionShort = "$STR_ITEM_DESC_FUELCAN_EMPTY";
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	picture = "\dayz_epoch_c\icons\equipment\ItemFuelcanEmpty.paa";
	fullcan = "ItemFuelcan";
	type = 256;
	DZE_fuelQuantity = 0;
};

class ItemFuelcan : ItemFuelcanEmpty {
	displayName = "$STR_ITEM_NAME_FUELCAN";
	descriptionShort = "$STR_ITEM_DESC_FUELCAN";
	picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_CA.paa";
	containerEmpty = "ItemFuelcanEmpty";
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

class ItemFuelcanWater : ItemFuelcanEmpty {
	displayName = "$STR_ITEM_NAME_FUELCAN_WATER";
	descriptionShort = "$STR_ITEM_DESC_FUELCAN_WATER";
	picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_CA.paa";
	containerEmpty = "ItemFuelcanEmpty";
	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class ItemFuelcanMilk : ItemFuelcanEmpty {
	displayName = "$STR_ITEM_NAME_FUELCAN_MILK";
	descriptionShort = "$STR_ITEM_DESC_FUELCAN_MILK";
	picture = "\z\addons\dayz_communityassets\pictures\equip_fuelcan_CA.paa";
	containerEmpty = "ItemFuelcanEmpty";
	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class ItemFuelBarrel: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FUELBARREL";
	descriptionShort = "$STR_EPOCH_FUELBARREL_DESC";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	containerEmpty = "ItemFuelBarrelEmpty";
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

class ItemFuelBarrelWater: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FUELBARREL_WATER";
	descriptionShort = "$STR_EPOCH_FUELBARREL_DESC_WATER";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	containerEmpty = "ItemFuelBarrelEmpty";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemFuelBarrelMilk: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FUELBARREL_MILK";
	descriptionShort = "$STR_EPOCH_FUELBARREL_DESC_MILK";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	containerEmpty = "ItemFuelBarrelEmpty";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemFuelBarrelEmpty: ItemFuelBarrel {
	scope = 2;
	displayName = "$STR_EPOCH_EMPTYFUELBARREL";
	descriptionShort = "$STR_EPOCH_EMPTYFUELBARREL_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_oildrum_e_CA.paa";
	fullcan = "ItemFuelBarrel";
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
			output[] = {{"ItemFireBarrel_kit",1}};
			input[] = {{"ItemFuelBarrelEmpty",1},{"ItemJerryCan",1},{"PartWoodPile",4}};
		};
	};
};

class ItemOilBarrel: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_OILBARREL";
	descriptionShort = "$STR_EPOCH_OILBARREL_DESC";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	containerEmpty = "ItemOilBarrelEmpty";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};	
};

class ItemOilBarrelEmpty : CA_Magazine {
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
			output[] = {{"ItemFireBarrel_kit",1}};
			input[] = {{"ItemOilBarrelEmpty",1},{"ItemJerryCan",1},{"PartWoodPile",4}};
		};
	};	
};	

class ItemMethylaminBarrelEmpty : CA_Magazine {
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
			output[] = {{"ItemFireBarrel_kit",1}};
			input[] = {{"ItemMethylaminBarrelEmpty",1},{"ItemJerryCan",1},{"PartWoodPile",4}};
		};
	};	
};

class ItemMethylaminBarrel : CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_METHYLAMINEBARREL";
	descriptionShort = "$STR_EPOCH_METHYLAMINEBARREL_DESC";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	containerEmpty = "ItemMethylaminBarrelEmpty";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};	
};
