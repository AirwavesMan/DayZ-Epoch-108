class MeleeBaseBallBat : MeleeWeapon {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_BASEBALLBAT";
	descriptionShort = "$STR_EQUIP_DESC_BASEBALLBAT";
	model = "\z\addons\dayz_communityassets\models\baseball_bat_weaponized.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_baseball_bat_ca.paa";
	droppeditem = "MeleeBaseBallBat";
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
			outputweapons[] = {"MeleeBaseBallBatNails"};
			input[] = {{"equip_nails",1}};
			inputweapons[] = {"MeleeBaseBallBat"};
		};
		class Crafting1 {
			text = "$STR_CRAFTING_BASEBALLBATBARBED";
			script = ";['Crafting1','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {};
			outputweapons[] = {"MeleeBaseBallBatBarbed"};
			input[] = {{"equip_nails",1},{"ItemWire",1}};
			inputweapons[] = {"MeleeBaseBallBat"};
		};		
	};	
};

class MeleeBaseBallBatBarbed : MeleeWeapon {
	scope = 2;
	displayName="$STR_EQUIP_NAME_BASEBALLBATBARBED";
	descriptionShort="$STR_EQUIP_DESC_BASEBALLBATBARBED";
	model="\z\addons\dayz_communityassets\models\baseball_bat_barbed_weaponized.p3d";
	picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_barbed_ca.paa";
	droppeditem = "MeleeBaseBallBatBarbed";

	
	magazines[] = {"BatBarbed_Swing"};
	
	
	class Library {
		libTextDesc = "$STR_EQUIP_DESC_BASEBALLBATBARBED";
	};
};

class MeleeBaseBallBatNails : MeleeWeapon {
	scope = 2;
	displayName="$STR_EQUIP_NAME_BASEBALLBATNAILS";
	descriptionShort="$STR_EQUIP_DESC_BASEBALLBATNAILS";
	model="\z\addons\dayz_communityassets\models\baseball_bat_nails_weaponized.p3d";
	picture="\z\addons\dayz_communityassets\pictures\equip_baseball_bat_nails_ca.paa";
	droppeditem = "MeleeBaseBallBatNails";

	
	magazines[] = {"BatNails_Swing"};
	
	
	class Library {
		libTextDesc = "$STR_EQUIP_DESC_BASEBALLBATNAILS";
	};
};