// For Chainsaw
class DZE_Item_ChainGas_MixOil: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CHAINSAW_OIL";
	descriptionShort = "$STR_EPOCH_CHAINSAW_OIL";
	model = "\z\addons\dayz_epoch\models\oilmix.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oilmix_CA.paa";
	sfx = "refuel";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_CHAINSAW_MIXGAS_ACTION";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_ChainGas_JerryMixed",1}};
			input[] = {{"DZE_Item_ChainGas_MixOil",1},{"DZE_Item_JerryCan_Fuel",1}};
			inputstrict = true;
		};
	};
};

class DZE_Mag_CSGAS: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CHAINSAW_GAS";
	descriptionShort = "$STR_EPOCH_CHAINSAW_GAS_DESC";
	picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	ammo = "Chainsaw_Swing_Ammo";
	type = VSoft;
	count = 1000;

	initSpeed = 100;
	maxLeadSpeed = 15;
	tracersEvery = 0;
	lastRoundsTracer = 0;

	optics = false;
	distanceZoomMin = 0;
	distanceZoomMax = 0;

	showEmpty = 0;
	autoReload = true;
	canLock = LockNo;

	burst = 1;
	multiplier = 1;
	ffMagnitude = 0.1;
	ffFrequency = 1;
	ffCount = 1;

	class HitEffects {
		hit_blood = "ImpactBlood";
		hit_concrete = "ImpactConcrete";
		hit_foliage = "ImpactWood";
		hit_foliage_green = "ImpactWood";
		hit_glass = "ImpactGlass";
		hit_glass_thin = "ImpactGlassThin";
		hit_metal = "ImpactMetal";
		hit_plaster = "ImpactPlaster";
		hit_rubber = "ImpactRubber";
		hit_wood = "ImpactWood";
	};
};

class DZE_Item_ChainGas_JerryMixed: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CHAINSAW_MIXEDGAS20L_CAN";
	descriptionShort = "$STR_EPOCH_CHAINSAW_MIXEDGAS20L_CAN_DESC";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	sfx = "refuel";
	containerEmpty = "DZE_Item_JerryCan_Empty";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_CHAINSAW_MIXEDGAS_CAN_ACTION";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_ChainSaw"};
			output[] = {{"DZE_Mag_CSGAS",1},{"DZE_Item_ChainGas_JerryMixed4",1}};
			input[] = {{"DZE_Item_ChainGas_JerryMixed",1}};
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_ChainGas_JerryMixed4: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CHAINSAW_MIXEDGAS16L_CAN";
	descriptionShort = "$STR_EPOCH_CHAINSAW_MIXEDGAS16L_CAN_DESC";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	sfx = "refuel";
	containerEmpty = "DZE_Item_JerryCan_Empty";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_CHAINSAW_MIXEDGAS_CAN_ACTION";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_ChainSaw"};
			output[] = {{"DZE_Mag_CSGAS",1},{"DZE_Item_ChainGas_JerryMixed3",1}};
			input[] = {{"DZE_Item_ChainGas_JerryMixed4",1}};
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_ChainGas_JerryMixed3: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CHAINSAW_MIXEDGAS12L_CAN";
	descriptionShort = "$STR_EPOCH_CHAINSAW_MIXEDGAS12L_CAN_DESC";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	sfx = "refuel";
	containerEmpty = "DZE_Item_JerryCan_Empty";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_CHAINSAW_MIXEDGAS_CAN_ACTION";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_ChainSaw"};
			output[] = {{"DZE_Mag_CSGAS",1},{"DZE_Item_ChainGas_JerryMixed2",1}};
			input[] = {{"DZE_Item_ChainGas_JerryMixed3",1}};
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_ChainGas_JerryMixed2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CHAINSAW_MIXEDGAS8L_CAN";
	descriptionShort = "$STR_EPOCH_CHAINSAW_MIXEDGAS8L_CAN_DESC";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	sfx = "refuel";
	containerEmpty = "DZE_Item_JerryCan_Empty";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_CHAINSAW_MIXEDGAS_CAN_ACTION";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_ChainSaw"};
			output[] = {{"DZE_Mag_CSGAS",1},{"DZE_Item_ChainGas_JerryMixed1",1}};
			input[] = {{"DZE_Item_ChainGas_JerryMixed2",1}};
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};

class DZE_Item_ChainGas_JerryMixed1: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CHAINSAW_MIXEDGAS4L_CAN";
	descriptionShort = "$STR_EPOCH_CHAINSAW_MIXEDGAS4L_CAN";
	model = "\dayz_equip\models\jerrycan.p3d";
	picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
	sfx = "refuel";
	containerEmpty = "DZE_Item_JerryCan_Empty";
	count = 1;
	type = 256;

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_CHAINSAW_MIXEDGAS_CAN_ACTION";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox","DZE_Tool_ChainSaw"};
			output[] = {{"DZE_Mag_CSGAS",1},{"DZE_Item_JerryCan_Empty",1}};
			input[] = {{"DZE_Item_ChainGas_JerryMixed1",1}};
		};
		class Empty {
			text = "$STR_EQUIP_NAME_13_EMPTY";
			script = "spawn player_emptyContainer";
		};
	};
};