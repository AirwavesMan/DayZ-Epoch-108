class DZE_Item_Cur_Briefcase_Base: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BRIEFCASE";
	model = "\z\addons\dayz_epoch\models\briefcase.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_E_CA.paa";
	count = 1;
	type = 256;
};


class DZE_Item_Cur_BriefcaseEmpty: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_EMPTY";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_E_CA.paa";
};

// Gold
class DZE_Item_Cur_BriefcaseG_10oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_1X10OZGOLD";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_10oz_CA.paa";
	worth = 1000;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_20oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_10oz",1},{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_199";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_10oz",1},{"DZE_Item_Cur_GoldBar10oz",9}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_10oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseG_20oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_2X10OZGOLD";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_20oz_CA.paa";
	worth = 2000;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_30oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_20oz",1},{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_202";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_20oz",1},{"DZE_Item_Cur_GoldBar10oz",8}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1},{"DZE_Item_Cur_BriefcaseG_10oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_20oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",2},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_20oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseG_30oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_3X10OZGOLD";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_30oz_CA.paa";
	worth = 3000;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_40oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_30oz",1},{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_203";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_30oz",1},{"DZE_Item_Cur_GoldBar10oz",7}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1},{"DZE_Item_Cur_BriefcaseG_20oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_30oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",3},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_30oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseG_40oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_4X10OZGOLD";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_40oz_CA.paa";
	worth = 4000;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_50oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_40oz",1},{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_204";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_40oz",1},{"DZE_Item_Cur_GoldBar10oz",6}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1},{"DZE_Item_Cur_BriefcaseG_30oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_40oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",4},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_40oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseG_50oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_5X10OZGOLD";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_50oz_CA.paa";
	worth = 5000;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_60oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_50oz",1},{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_205";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_50oz",1},{"DZE_Item_Cur_GoldBar10oz",5}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1},{"DZE_Item_Cur_BriefcaseG_40oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_50oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",5},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_50oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseG_60oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_6X10OZGOLD";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_60oz_CA.paa";
	worth = 6000;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_70oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_60oz",1},{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_206";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_60oz",1},{"DZE_Item_Cur_GoldBar10oz",4}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1},{"DZE_Item_Cur_BriefcaseG_50oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_60oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",6},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_60oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseG_70oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_7X10OZGOLD";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_70oz_CA.paa";
	worth = 7000;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_80oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_70oz",1},{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_207";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_70oz",1},{"DZE_Item_Cur_GoldBar10oz",3}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1},{"DZE_Item_Cur_BriefcaseG_60oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_70oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",7},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_70oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseG_80oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_8X10OZGOLD";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_80oz_CA.paa";
	worth = 8000;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_90oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_80oz",1},{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_208";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_80oz",1},{"DZE_Item_Cur_GoldBar10oz",2}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1},{"DZE_Item_Cur_BriefcaseG_70oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_80oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",8},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_80oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseG_90oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_9X10OZGOLD";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_90oz_CA.paa";
	worth = 9000;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_90oz",1},{"DZE_Item_Cur_GoldBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_200";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1},{"DZE_Item_Cur_BriefcaseG_80oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_90oz",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",9},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_90oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseG_100oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_10X10OZGOLD";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_100oz_CA.paa";
	worth = 10000;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_200";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",1},{"DZE_Item_Cur_BriefcaseG_90oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_GoldBar10oz",10},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseG_100oz",1}};
		};
	};
};
// Silver
class DZE_Item_Cur_BriefcaseS_Base: DZE_Item_Cur_Briefcase_Base {
	model = "\z\addons\dayz_epoch\models\silvercase.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_E_CA.paa";
};
class DZE_Item_Cur_BriefcaseS_10oz: DZE_Item_Cur_BriefcaseS_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_1X10OZSILVER";
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_10oz_CA.paa";
	worth = 10;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_S_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_20oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_10oz",1},{"DZE_Item_Cur_SilverBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_S_199";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_10oz",1},{"DZE_Item_Cur_SilverBar10oz",9}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_S_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_10oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseS_20oz: DZE_Item_Cur_BriefcaseS_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_2X10OZSILVER";
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_20oz_CA.paa";
	worth = 20;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_S_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_30oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_20oz",1},{"DZE_Item_Cur_SilverBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_S_202";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_20oz",1},{"DZE_Item_Cur_SilverBar10oz",8}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_S_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1},{"DZE_Item_Cur_BriefcaseS_10oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_20oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",2},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_20oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseS_30oz: DZE_Item_Cur_BriefcaseS_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_3X10OZSILVER";
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_30oz_CA.paa";
	worth = 30;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_S_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_40oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_30oz",1},{"DZE_Item_Cur_SilverBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_S_203";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_30oz",1},{"DZE_Item_Cur_SilverBar10oz",7}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_S_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1},{"DZE_Item_Cur_BriefcaseS_20oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_30oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",3},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_30oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseS_40oz: DZE_Item_Cur_BriefcaseS_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_4X10OZSILVER";
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_40oz_CA.paa";
	worth = 40;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_S_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_50oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_40oz",1},{"DZE_Item_Cur_SilverBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_S_204";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_40oz",1},{"DZE_Item_Cur_SilverBar10oz",6}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_S_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1},{"DZE_Item_Cur_BriefcaseS_30oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_40oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",4},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_40oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseS_50oz: DZE_Item_Cur_BriefcaseS_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_5X10OZSILVER";
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_50oz_CA.paa";
	worth = 50;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_S_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_60oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_50oz",1},{"DZE_Item_Cur_SilverBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_S_205";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_50oz",1},{"DZE_Item_Cur_SilverBar10oz",5}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_S_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1},{"DZE_Item_Cur_BriefcaseS_40oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_50oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",5},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_50oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseS_60oz: DZE_Item_Cur_BriefcaseS_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_6X10OZSILVER";
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_60oz_CA.paa";
	worth = 60;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_S_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_70oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_60oz",1},{"DZE_Item_Cur_SilverBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_S_206";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_60oz",1},{"DZE_Item_Cur_SilverBar10oz",4}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_S_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1},{"DZE_Item_Cur_BriefcaseS_50oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_60oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",6},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_60oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseS_70oz: DZE_Item_Cur_BriefcaseS_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_7X10OZSILVER";
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_70oz_CA.paa";
	worth = 70;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_S_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_80oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_70oz",1},{"DZE_Item_Cur_SilverBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_S_207";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_70oz",1},{"DZE_Item_Cur_SilverBar10oz",3}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_S_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1},{"DZE_Item_Cur_BriefcaseS_60oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_70oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",7},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_70oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseS_80oz: DZE_Item_Cur_BriefcaseS_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_8X10OZSILVER";
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_80oz_CA.paa";
	worth = 80;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_S_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_90oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_80oz",1},{"DZE_Item_Cur_SilverBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_S_208";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_80oz",1},{"DZE_Item_Cur_SilverBar10oz",2}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_S_200";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1},{"DZE_Item_Cur_BriefcaseS_70oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_80oz",1}};
		};
		class Crafting3 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",8},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_80oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseS_90oz: DZE_Item_Cur_BriefcaseS_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_9X10OZSILVER";
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_90oz_CA.paa";
	worth = 90;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_S_197";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_90oz",1},{"DZE_Item_Cur_SilverBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_S_200";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1},{"DZE_Item_Cur_BriefcaseS_80oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_90oz",1}};
		};
		class Crafting2 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",9},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_90oz",1}};
		};
	};
};
class DZE_Item_Cur_BriefcaseS_100oz: DZE_Item_Cur_BriefcaseS_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_10X10OZSILVER";
	picture = "\z\addons\dayz_epoch\pictures\equip_silvercase_100oz_CA.paa";
	worth = 100;
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_S_200";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",1},{"DZE_Item_Cur_BriefcaseS_90oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_PLAYER_201";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_SilverBar10oz",10},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseS_100oz",1}};
		};
	};
};

// Aluminum
class DZE_Item_Cur_BriefcaseA_10oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_1X10OZALUMINUM";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_10oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZALUMINUM";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseA_20oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_10oz",1},{"DZE_Item_Cur_AluminumBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_AluminumBar10oz",1},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_10oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseA_20oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_2X10OZALUMINUM";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_20oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZALUMINUM";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseA_30oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_20oz",1},{"DZE_Item_Cur_AluminumBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_AluminumBar10oz",2},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_20oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseA_30oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_3X10OZALUMINUM";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_30oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZALUMINUM";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseA_40oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_30oz",1},{"DZE_Item_Cur_AluminumBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_AluminumBar10oz",3},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_30oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseA_40oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_4X10OZALUMINUM";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_40oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZALUMINUM";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseA_50oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_40oz",1},{"DZE_Item_Cur_AluminumBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_AluminumBar10oz",4},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_40oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseA_50oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_5X10OZALUMINUM";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_50oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZALUMINUM";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseA_60oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_50oz",1},{"DZE_Item_Cur_AluminumBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_AluminumBar10oz",5},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_50oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseA_60oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_6X10OZALUMINUM";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_60oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZALUMINUM";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseA_70oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_60oz",1},{"DZE_Item_Cur_AluminumBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_AluminumBar10oz",6},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_60oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseA_70oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_7X10OZALUMINUM";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_70oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZALUMINUM";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseA_80oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_70oz",1},{"DZE_Item_Cur_AluminumBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_AluminumBar10oz",7},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_70oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseA_80oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_8X10OZALUMINUM";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_80oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZALUMINUM";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseA_90oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_80oz",1},{"DZE_Item_Cur_AluminumBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_AluminumBar10oz",8},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_80oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseA_90oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_9X10OZALUMINUM";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_90oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZALUMINUM";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseA_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_90oz",1},{"DZE_Item_Cur_AluminumBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_AluminumBar10oz",9},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_90oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseA_100oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_10X10OZALUMINUM";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_100oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_AluminumBar10oz",10},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseA_100oz",1}};
		};
	};
};


// Copper
class DZE_Item_Cur_BriefcaseC_10oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_1X10OZCOPPER";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_10oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZCOPPER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseC_20oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_10oz",1},{"DZE_Item_Cur_CopperBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_CopperBar10oz",1},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_10oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseC_20oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_2X10OZCOPPER";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_20oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZCOPPER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseC_30oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_20oz",1},{"DZE_Item_Cur_CopperBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_CopperBar10oz",2},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_20oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseC_30oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_3X10OZCOPPER";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_30oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZCOPPER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseC_40oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_30oz",1},{"DZE_Item_Cur_CopperBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_CopperBar10oz",3},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_30oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseC_40oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_4X10OZCOPPER";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_40oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZCOPPER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseC_50oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_40oz",1},{"DZE_Item_Cur_CopperBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_CopperBar10oz",4},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_40oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseC_50oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_5X10OZCOPPER";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_50oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZCOPPER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseC_60oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_50oz",1},{"DZE_Item_Cur_CopperBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_CopperBar10oz",5},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_50oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseC_60oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_6X10OZCOPPER";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_60oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZCOPPER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseC_70oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_60oz",1},{"DZE_Item_Cur_CopperBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_CopperBar10oz",6},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_60oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseC_70oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_7X10OZCOPPER";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_70oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZCOPPER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseC_80oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_70oz",1},{"DZE_Item_Cur_CopperBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_CopperBar10oz",7},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_70oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseC_80oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_8X10OZCOPPER";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_80oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZCOPPER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseC_90oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_80oz",1},{"DZE_Item_Cur_CopperBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_CopperBar10oz",8},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_80oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseC_90oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_9X10OZCOPPER";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_90oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZCOPPER";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseC_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_90oz",1},{"DZE_Item_Cur_CopperBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_CopperBar10oz",9},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_90oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseC_100oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_10X10OZCOPPER";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_100oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_CopperBar10oz",10},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseC_100oz",1}};
		};
	};
};


// Tin
class DZE_Item_Cur_BriefcaseT_10oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_1X10OZTIN";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_10oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZTIN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_20oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_10oz",1},{"DZE_Item_Cur_TinBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar10oz",1},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_10oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseT_20oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_2X10OZTIN";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_20oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZTIN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_30oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_20oz",1},{"DZE_Item_Cur_TinBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar10oz",2},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_20oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseT_30oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_3X10OZTIN";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_30oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZTIN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_40oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_30oz",1},{"DZE_Item_Cur_TinBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar10oz",3},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_30oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseT_40oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_4X10OZTIN";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_40oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZTIN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_50oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_40oz",1},{"DZE_Item_Cur_TinBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar10oz",4},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_40oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseT_50oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_5X10OZTIN";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_50oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZTIN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_60oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_50oz",1},{"DZE_Item_Cur_TinBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar10oz",5},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_50oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseT_60oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_6X10OZTIN";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_60oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZTIN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_70oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_60oz",1},{"DZE_Item_Cur_TinBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar10oz",6},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_60oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseT_70oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_7X10OZTIN";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_70oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZTIN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_80oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_70oz",1},{"DZE_Item_Cur_TinBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar10oz",7},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_70oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseT_80oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_8X10OZTIN";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_80oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZTIN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_90oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_80oz",1},{"DZE_Item_Cur_TinBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar10oz",8},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_80oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseT_90oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_9X10OZTIN";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_90oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_BRIEFCASE_ADD_10OZTIN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_BriefcaseT_100oz",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_90oz",1},{"DZE_Item_Cur_TinBar10oz",1}};
		};
		class Crafting1 {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar10oz",9},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_90oz",1}};
		};
	};
};

class DZE_Item_Cur_BriefcaseT_100oz: DZE_Item_Cur_Briefcase_Base {
	descriptionShort = "$STR_EPOCH_BRIEFCASE_10X10OZTIN";
	picture = "\z\addons\dayz_epoch\pictures\equip_briefcase_100oz_CA.paa";

	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_ACTIONS_OPEN";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {};
			output[] = {{"DZE_Item_Cur_TinBar10oz",10},{"DZE_Item_Cur_BriefcaseEmpty",1}};
			input[] = {{"DZE_Item_Cur_BriefcaseT_100oz",1}};
		};
	};
};

