class DZE_Item_Waterbottle_PET_Unfilled : CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WBPET_01";
	descriptionShort = "$STR_EQUIP_DESC_WBPET_01";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottleEmpty.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	count = 1;
	type = 256;
	class ItemActions {
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};

class DZE_Item_Waterbottle_PET_Dmg : CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WBPET_02";
	descriptionShort = "$STR_EQUIP_DESC_WBPET_02";
	model = "z\addons\dayz_communityassets\models\waterbottle_damaged.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottleDamaged.paa";
	sfx = "bandage";
	count = 1;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_ACTIONS_FIX_W";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Waterbottle_PET_Unfilled",1}};
			input[] = {{"DZE_Item_Waterbottle_PET_Dmg",1},{"DZE_Item_Plastic_Duct_Tape",1}};
		};
	};
};

class DZE_Item_Waterbottle_PET : DZE_Item_Waterbottle {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WBPET_03";
	descriptionShort = "$STR_EQUIP_DESC_WBPET_03";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	Nutrition[] = {0,0,1000,0};
	infectionChance = 0.3;
};

class DZE_Item_Waterbottle_PET_Infected : DZE_Item_Waterbottle {
	displayName = "$STR_EQUIP_NAME_WBPET_03";
	descriptionShort = "$STR_EQUIP_DESC_WBPET_03";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 1;
};

class DZE_Item_Waterbottle_PET_Safe : DZE_Item_Waterbottle {
	displayName = "$STR_EQUIP_NAME_WBPET_03";
	descriptionShort = "$STR_EQUIP_DESC_WBPET_03";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 0;
};

class DZE_Item_Waterbottle_PET_Boiled : DZE_Item_Waterbottle {
	displayName = "$STR_EQUIP_NAME_WBPET_04";
	descriptionShort = "$STR_EQUIP_DESC_WBPET_04";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 0;
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Crafting {
			text = "$STR_CRAFTING_HERBALDRINK";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Waterbottle_PET_Herbal",1}};
			input[] = {{"DZE_Item_Medi_Herb_Box",1},{"DZE_Item_Waterbottle_PET_Boiled",1}};
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_Waterbottle_PET_Herbal : DZE_Item_Waterbottle {
	displayName = "$STR_EQUIP_NAME_WBPET_05";
	descriptionShort = "$STR_EQUIP_DESC_WBPET_05";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = -0.5;
};

class DZE_Item_Waterbottle_PET_1oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE1OZ";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE1OZ_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle1oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	wateroz = 1;
	Nutrition[] = {0,0,100,0};
	infectionChance = 0.03;
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class DZE_Item_Waterbottle_PET_2oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE2OZ";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE2OZ_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle2oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	wateroz = 2;
	Nutrition[] = {0,0,200,0};
	infectionChance = 0.06;
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class DZE_Item_Waterbottle_PET_3oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE3OZ";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE3OZ_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle3oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	wateroz = 3;
	Nutrition[] = {0,0,300,0};
	infectionChance = 0.09;
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class DZE_Item_Waterbottle_PET_4oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE4OZ";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE4OZ_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle4oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	wateroz = 4;
	Nutrition[] = {0,0,400,0};
	infectionChance = 0.12;
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class DZE_Item_Waterbottle_PET_5oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE5OZ";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE5OZ_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle5oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	wateroz = 5;
	Nutrition[] = {0,0,500,0};
	infectionChance = 0.15;
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class DZE_Item_Waterbottle_PET_6oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE6OZ";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE6OZ_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle6oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	wateroz = 6;
	Nutrition[] = {0,0,600,0};
	infectionChance = 0.18;
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class DZE_Item_Waterbottle_PET_7oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE7OZ";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE7OZ_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle7oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	wateroz = 7;
	Nutrition[] = {0,0,700,0};
	infectionChance = 0.21;
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class DZE_Item_Waterbottle_PET_8oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE8OZ";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE8OZ_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle8oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	wateroz = 8;
	Nutrition[] = {0,0,800,0};
	infectionChance = 0.24;
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};

};
class DZE_Item_Waterbottle_PET_9oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE9OZ";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE9OZ_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle9oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	wateroz = 9;
	Nutrition[] = {0,0,900,0};
	infectionChance = 0.27;
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};

//inherit from DZE_Item_Waterbottle because that's how the crafting script checks required input
class DZE_Item_Waterbottle_PET_1ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE1OZBOILED";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE1OZBOILED_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle1oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 0;
	wateroz = 1;
	Nutrition[] = {0,0,100,0};
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class DZE_Item_Waterbottle_PET_2ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE2OZBOILED";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE2OZBOILED_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle2oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 0;
	wateroz = 2;
	Nutrition[] = {0,0,200,0};
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class DZE_Item_Waterbottle_PET_3ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE3OZBOILED";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE3OZBOILED_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle3oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 0;
	wateroz = 3;
	Nutrition[] = {0,0,300,0};
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class DZE_Item_Waterbottle_PET_4ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE4OZBOILED";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE4OZBOILED_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle4oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 0;
	wateroz = 4;
	Nutrition[] = {0,0,400,0};
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class DZE_Item_Waterbottle_PET_5ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE5OZBOILED";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE5OZBOILED_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle5oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 0;
	wateroz = 5;
	Nutrition[] = {0,0,500,0};
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class DZE_Item_Waterbottle_PET_6ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE6OZBOILED";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE6OZBOILED_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle6oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 0;
	wateroz = 6;
	Nutrition[] = {0,0,600,0};
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class DZE_Item_Waterbottle_PET_7ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE7OZBOILED";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE7OZBOILED_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle7oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 0;
	wateroz = 7;
	Nutrition[] = {0,0,700,0};
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class DZE_Item_Waterbottle_PET_8ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE8OZBOILED";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE8OZBOILED_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle8oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 0;
	wateroz = 8;
	Nutrition[] = {0,0,800,0};
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class DZE_Item_Waterbottle_PET_9ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_PET_WATERBOTTLE9OZBOILED";
	descriptionShort = "$STR_EPOCH_PET_WATERBOTTLE9OZBOILED_DESC";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle9oz.paa";
	containerWater = "DZE_Item_Waterbottle_PET";
	containerWaterSafe = "DZE_Item_Waterbottle_PET_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_PET_Infected";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	infectionChance = 0;
	wateroz = 9;
	Nutrition[] = {0,0,900,0};
	class ItemActions {
		class Consume {
			text = "$STR_ACTIONS_DRINK2";
			script = "spawn player_consume";
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};
class DZE_Item_Waterbottle_PET_Coffee : DZE_Drink_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WBPET_COFFEE";
	descriptionShort = "$STR_EQUIP_DESC_WBPET_COFFEE";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	Nutrition[] = {50,0,950,0};
	infectionChance = 0;
	class ItemActions : ItemActions {
		class Consume : Consume	{};

		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};
class DZE_Item_Waterbottle_PET_BlackTea : DZE_Drink_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WBPET_BLACKTEA";
	descriptionShort = "$STR_EQUIP_DESC_WBPET_BLACKTEA";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	consumeOutput = "DZE_Item_Waterbottle_PET_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_PET_Unfilled";
	Nutrition[] = {90,0,900,0};
	infectionChance = 0;
	class ItemActions : ItemActions {
		class Consume : Consume	{};

		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};
class DZE_Item_Waterbottle_PET_Frozen : CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WBPET_FROZEN";
	descriptionShort = "$STR_EQUIP_DESC_WBPET_FROZEN";
	model = "z\addons\dayz_communityassets\models\waterbottle.p3d";
	picture = "\dayz_epoch_c\icons\plasticwaterbottle\PETwaterbottle10oz.paa";
	count = 1;
	type = 256;
};