class DZE_Item_Waterbottle : DZE_Drink_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WATER_BOTTLE";
	descriptionShort = "$STR_EQUIP_DESC_WATER_BOTTLE";
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle10oz_ca.paa";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
	Nutrition[] = {0,0,1000,0};
	infectionChance = 0.3;
	class ItemActions : ItemActions {
		class Consume : Consume	{};

		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
	wateroz = 10; //Custom Epoch value
};

class DZE_Item_Waterbottle_Infected : DZE_Item_Waterbottle {
	infectionChance = 1;
};

class DZE_Item_Waterbottle_Safe : DZE_Item_Waterbottle {
	infectionChance = 0;
};

class DZE_Item_Waterbottle_Boiled : DZE_Item_Waterbottle {
	displayName = "$STR_ITEMWATERBOTTLEBOILED_CODE_NAME";
	descriptionShort = "$STR_ITEMWATERBOTTLEBOILED_CODE_DESC";
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
			output[] = {{"DZE_Item_Waterbottle_Herbal",1}};
			input[] = {{"DZE_Item_Medi_Herb_Box",1},{"DZE_Item_Waterbottle_Boiled",1}};
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
 };

class DZE_Item_Waterbottle_Herbal : DZE_Item_Waterbottle {
	displayName = "$STR_ITEM_NAME_HerbalDrink";
	descriptionShort = "$STR_ITEM_DESC_HerbalDrink";
	infectionChance = -0.5;
};

class DZE_Item_Waterbottle_Unfilled : CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WATER_BOTTLE_EMPTY";
	descriptionShort = "$STR_EQUIP_DESC_WATER_BOTTLE_EMPTY";
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	count = 1;
	type = 256;
	class ItemActions {
		class Fill {
			text = "$STR_ACTIONS_FILL_W";
			script = "spawn player_fillWater;";
		};
	};
};

class DZE_Item_Waterbottle_Dmg : CA_Magazine { //We don't have a damaged canteen image/model , so the regular bottle image is used for now
	scope = 2;
	displayName = "$STR_ITEMWATERBOTTLEDMG_CODE_NAME";
	descriptionShort = "$STR_ITEMWATERBOTTLEDMG_CODE_DESC";
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
	sfx = "bandage";
	count = 1;
	type = 256;
	class ItemActions {
		class Crafting {
			text = "$STR_ACTIONS_FIX_W";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Waterbottle_Unfilled",1}};
			input[] = {{"DZE_Item_Waterbottle_Dmg",1},{"DZE_Item_Plastic_Duct_Tape",1}};
		};
	};
};

class DZE_Item_Waterbottle_1oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE1OZ";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE1OZ_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_1oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_2oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE2OZ";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE2OZ_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_2oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_3oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE3OZ";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE3OZ_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_3oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_4oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE4OZ";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE4OZ_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_4oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_5oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE5OZ";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE5OZ_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_5oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_6oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE6OZ";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE6OZ_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_6oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_7oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE7OZ";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE7OZ_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_7oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_8oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE8OZ";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE8OZ_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_8oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_9oz : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE9OZ";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE9OZ_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_9oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_1ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE1OZBOILED";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE1OZBOILED_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_1oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_2ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE2OZBOILED";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE2OZBOILED_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_2oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_3ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE3OZBOILED";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE3OZBOILED_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_3oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_4ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE4OZBOILED";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE4OZBOILED_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_4oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_5ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE5OZBOILED";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE5OZBOILED_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_5oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_6ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE6OZBOILED";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE6OZBOILED_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_6oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_7ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE7OZBOILED";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE7OZBOILED_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_7oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_8ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE8OZBOILED";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE8OZBOILED_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_8oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_9ozBoiled : DZE_Item_Waterbottle {
	displayName = "$STR_EPOCH_WATERBOTTLE9OZBOILED";
	descriptionShort = "$STR_EPOCH_WATERBOTTLE9OZBOILED_DESC";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle_9oz_ca.paa";
	containerWater = "DZE_Item_Waterbottle";
	containerWaterSafe = "DZE_Item_Waterbottle_Safe";
	containerWaterInfected = "DZE_Item_Waterbottle_Infected";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_Coffee : DZE_Drink_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WATER_BOTTLE_COFFEE";
	descriptionShort = "$STR_EQUIP_DESC_WATER_BOTTLE_COFFEE";
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle10oz_ca.paa";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_BlackTea : DZE_Drink_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WATER_BOTTLE_BLACKTEA";
	descriptionShort = "$STR_EQUIP_DESC_WATER_BOTTLE_BLACKTEA";
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle10oz_ca.paa";
	consumeOutput = "DZE_Item_Waterbottle_Unfilled";
	containerEmpty = "DZE_Item_Waterbottle_Unfilled";
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
class DZE_Item_Waterbottle_Frozen : CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WATER_BOTTLE_FROZEN";
	descriptionShort = "$STR_EQUIP_DESC_WATER_BOTTLE_FROZEN";
	model = "\dayz_equip\models\waterbottle_gear.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_waterbottle10oz_ca.paa";
	count = 1;
	type = 256;
};