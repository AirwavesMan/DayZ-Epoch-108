class DZE_Melee_BaseBallBat : DZE_Melee_Weapon_Base {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_BASEBALLBAT";
	descriptionShort = "$STR_EQUIP_DESC_BASEBALLBAT";
	model = "\z\addons\dayz_communityassets\models\baseball_bat_weaponized.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_baseball_bat_ca.paa";
	droppeditem = "DZE_Melee_BaseBallBat";
	magazines[] = {"Bat_Swing"};
	
	class Library {
		libTextDesc = "$STR_EQUIP_DESC_BASEBALLBAT";
	};
	
	class ItemActions {
		class Crafting {
			text = "$STR_CRAFTING_NAILEDBASEBALLBAT";
			script = ";['Crafting','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {};
			outputweapons[] = {"DZE_Melee_BaseBallBatNails"};
			input[] = {{"equip_nails",1}};
			inputweapons[] = {"DZE_Melee_BaseBallBat"};
		};
		class Crafting1 {
			text = "$STR_CRAFTING_BASEBALLBATBARBED";
			script = ";['Crafting1','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {};
			outputweapons[] = {"DZE_Melee_BaseBallBatBarbed"};
			input[] = {{"equip_nails",1},{"DZE_Item_Kit_Wire",1}};
			inputweapons[] = {"DZE_Melee_BaseBallBat"};
		};		
	};	
};

class DZE_Melee_BaseBallBatBarbed : DZE_Melee_Weapon_Base {
	scope = 2;
	displayName="$STR_EQUIP_NAME_BASEBALLBATBARBED";
	descriptionShort="$STR_EQUIP_DESC_BASEBALLBATBARBED";
	model="\z\addons\dayz_communityassets\models\baseball_bat_barbed_weaponized.p3d";
	picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_barbed_ca.paa";
	droppeditem = "DZE_Melee_BaseBallBatBarbed";

	
	magazines[] = {"BatBarbed_Swing"};
	
	
	class Library {
		libTextDesc = "$STR_EQUIP_DESC_BASEBALLBATBARBED";
	};
};

class DZE_Melee_BaseBallBatNails : DZE_Melee_Weapon_Base {
	scope = 2;
	displayName="$STR_EQUIP_NAME_BASEBALLBATNAILS";
	descriptionShort="$STR_EQUIP_DESC_BASEBALLBATNAILS";
	model="\z\addons\dayz_communityassets\models\baseball_bat_nails_weaponized.p3d";
	picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_nails_ca.paa";
	droppeditem = "DZE_Melee_BaseBallBatNails";

	
	magazines[] = {"BatNails_Swing"};
	
	
	class Library {
		libTextDesc = "$STR_EQUIP_DESC_BASEBALLBATNAILS";
	};
};