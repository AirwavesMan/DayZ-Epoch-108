class ItemGPS;

class DZE_Tool_GPS: ItemGPS {
	model = "z\addons\dayz_communityassets\models\gps.p3d";
};

class DZE_Tool_GPSBroken : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_BROKEN_GPS";
	descriptionShort = "$STR_EQUIP_BROKEN_GPS_DESC";
	model = "z\addons\dayz_communityassets\models\gps.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemGPSBroken.paa";
	
	class ItemActions {
		class Repair {
			text = "$STR_ACTIONS_FIX_GPS";
			script = ";['Repair','CfgWeapons', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Solder"};
			output[] = {};
			outputweapons[] = {"DZE_Tool_GPS"};
			input[] = {{"DZE_Item_Elec_Floppywire",1},{"DZE_Item_Elec_Scrapelectronics",1}};
			inputweapons[] = {"DZE_Tool_GPSBroken"};
		};		
	};	
};