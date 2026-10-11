class equip_aa_battery : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_aa_battery";
	descriptionShort = "$STR_ITEM_DESC_equip_aa_battery";
	model = "\z\addons\dayz_epoch_w\magazine\dze_aa_battery.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_aa_battery_ca.paa";
	count = 1;
	type = 256;
};

class equip_aa_battery_empty : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_aa_battery_empty";
	descriptionShort = "$STR_ITEM_DESC_equip_aa_battery_empty";
	model = "\z\addons\dayz_epoch_w\magazine\dze_aa_battery.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_aa_battery_ca.paa";
	count = 1;
	type = 256;
};

class equip_d_battery : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_d_battery";
	descriptionShort = "$STR_ITEM_DESC_equip_d_battery";
	model = "\z\addons\dayz_epoch_w\magazine\dze_d_battery.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_d_battery_ca.paa";
	count = 1;
	type = 256;
};

class equip_d_battery_empty : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_d_battery_empty";
	descriptionShort = "$STR_ITEM_DESC_equip_d_battery_empty";
	model = "\z\addons\dayz_epoch_w\magazine\dze_d_battery.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_d_battery_ca.paa";
	count = 1;
	type = 256;
};

class equip_floppywire : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_floppywire";
	descriptionShort = "$STR_ITEM_DESC_equip_floppywire";
	model = "\z\addons\dayz_communityassets\models\floppywire.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_floppywire.paa";
	count = 1;
	type = 256;
};

class equip_satawire : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_satawire";
	descriptionShort = "$STR_ITEM_DESC_equip_satawire";
	model = "\z\addons\dayz_communityassets\models\floppywire.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_floppywire.paa";
	count = 1;
	type = 256;
};

class equip_scrapelectronics : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_scrapelectronics";
	descriptionShort = "$STR_ITEM_DESC_equip_scrapelectronics";
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	count = 1;
	type = 256;
};

class equip_graphicscard : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_graphicscard";
	descriptionShort = "$STR_ITEM_DESC_equip_graphicscard";
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	count = 1;
	type = 256;
};

class equip_graphicscard_broken : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_graphicscard_broken";
	descriptionShort = "$STR_ITEM_DESC_equip_graphicscard_broken";
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	count = 1;
	type = 256;
};

class equip_soundcard : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_soundcard";
	descriptionShort = "$STR_ITEM_DESC_equip_soundcard";
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	count = 1;
	type = 256;
};

class equip_soundcard_broken : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_soundcard_broken";
	descriptionShort = "$STR_ITEM_DESC_equip_soundcard_broken";
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	count = 1;
	type = 256;
};

class equip_pcicard : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_pcicard";
	descriptionShort = "$STR_ITEM_DESC_equip_pcicard";
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	count = 1;
	type = 256;
};

class equip_pcicard_broken : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_pcicard_broken";
	descriptionShort = "$STR_ITEM_DESC_equip_pcicard_broken";
	model = "\z\addons\dayz_communityassets\models\scrapelectronics.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\scrapelectronics.paa";
	count = 1;
	type = 256;
};

class ItemLightBulb: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LIGHTBULB";
	descriptionShort = "$STR_EPOCH_LIGHTBULB_DESC";
	model = "\z\addons\dayz_epoch\models\bulb.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_bulb_CA.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Crafting {
			text = "$STR_EPOCH_PLAYER_196";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"DZE_Tool_Etool","DZE_Tool_Toolbox"};
			output[] = {{"light_pole_kit",1}};
			input[] = {{"ItemLightBulb",1},{"PartGeneric",1},{"PartWoodLumber",6}};
		};
	};
};

class ItemLightBulbBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LIGHTBULB_BROKEN";
	descriptionShort = "$STR_EPOCH_LIGHTBULB_BROKEN_DESC";
	model = "\z\addons\dayz_epoch\models\bulb.p3d";
	picture = "\dayz_epoch_c\icons\equipment\LightBulbBroken.paa";
	count = 1;
	type = 256;
};

class ItemNotebook: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_ITEM_NOTEBOOK";
	descriptionShort = "$STR_EPOCH_ITEM_NOTEBOOK_DESC";
	model = "\CA\misc2\notebook\notebook.p3d";
	picture = "\dayz_epoch_c\icons\equipment\Notebook.paa";
	count = 1;
	type = 256;
};

class ItemNotebookBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_NOTEBOOK_BROKEN";
	descriptionShort = "$STR_EPOCH_NOTEBOOK_BROKEN_DESC";
	model = "\CA\misc2\notebook\notebook.p3d";
	picture = "\dayz_epoch_c\icons\equipment\NotebookBroken.paa";
	count = 1;
	type = 256;
};

class ItemSmallTV: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SMALL_TV";
	descriptionShort = "$STR_EPOCH_SMALL_TV_DESC";
	model = "\CA\misc2\smallTV\smallTV.p3d";
	picture = "\dayz_epoch_c\icons\equipment\SmallTV.paa";
	count = 1;
	type = 256;
};

class ItemSmallTVBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SMALL_TV_BROKEN";
	descriptionShort = "$STR_EPOCH_SMALL_TV_BROKEN_DESC";
	model = "\CA\misc2\smallTV\smallTV.p3d";
	picture = "\dayz_epoch_c\icons\equipment\SmallTVBroken.paa";
	count = 1;
	type = 256;
};

class ItemBigTV: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BIG_TV";
	descriptionShort = "$STR_EPOCH_BIG_TV_DESC";
	model = "\CA\Structures\Furniture\Eletrical_appliances\tv_a\tv_a.p3d";
	picture = "\dayz_epoch_c\icons\equipment\BigTV.paa";
	count = 1;
	type = 256;
};

class ItemBigTVBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_BIG_TV_BROKEN";
	descriptionShort = "$STR_EPOCH_BIG_TV_BROKEN_DESC";
	model = "\CA\Structures\Furniture\Eletrical_appliances\tv_a\tv_a.p3d";
	picture = "\dayz_epoch_c\icons\equipment\BigTVBroken.paa";
	count = 1;
	type = 256;
};

class ItemSatelitePhone: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SATELLITE_PHONE";
	descriptionShort = "$STR_EPOCH_SATELLITE_PHONE_DESC";
	model = "\CA\misc3\satelitePhone\satellitePhone.p3d";
	picture = "\dayz_epoch_c\icons\equipment\SatPhone.paa";
	count = 1;
	type = 256;
};

class ItemSatelitePhoneBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SATELLITE_PHONE_BROKEN";
	descriptionShort = "$STR_EPOCH_SATELLITE_PHONE_BROKEN_DESC";
	model = "\CA\misc3\satelitePhone\satellitePhone.p3d";
	picture = "\dayz_epoch_c\icons\equipment\SatPhoneBroken.paa";
	count = 1;
	type = 256;
};

class ItemPC: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_PC";
	descriptionShort = "$STR_EPOCH_PC_DESC";
	model = "\CA\Structures\Furniture\Eletrical_appliances\pc\pc.p3d";
	picture = "\dayz_epoch_c\icons\equipment\PC.paa";
	count = 1;
	type = 256;
};

class ItemPCBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_PC_BROKEN";
	descriptionShort = "$STR_EPOCH_PC_BROKEN_DESC";
	model = "\CA\Structures\Furniture\Eletrical_appliances\pc\pc.p3d";
	picture = "\dayz_epoch_c\icons\equipment\PCBroken.paa";
	count = 1;
	type = 256;
};

class ItemDesktopRadio: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_DESKTOP_RADIO";
	descriptionShort = "$STR_EPOCH_DESKTOP_RADIO_DESC";
	model = "\CA\misc\mutt_vysilacka.p3d";
	picture = "\dayz_epoch_c\icons\equipment\DesktopRadio.paa";
	count = 1;
	type = 256;
};

class ItemDesktopRadioBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_DESKTOP_RADIO_BROKEN";
	descriptionShort = "$STR_EPOCH_DESKTOP_RADIO_BROKEN_DESC";
	model = "\CA\misc\mutt_vysilacka.p3d";
	picture = "\dayz_epoch_c\icons\equipment\DesktopRadioBroken.paa";
	count = 1;
	type = 256;
};

class ItemMusicRadio1: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_RADIO_MUSIC1";
	descriptionShort = "$STR_EPOCH_RADIO_MUSIC1_DESC";
	model = "\CA\misc\radio.p3d";
	picture = "\dayz_epoch_c\icons\equipment\MusicRadio1.paa";
	count = 1;
	type = 256;
};

class ItemMusicRadio1Broken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_RADIO_MUSIC1_BROKEN";
	descriptionShort = "$STR_EPOCH_RADIO_MUSIC1_BROKEN_DESC";
	model = "\CA\misc\radio.p3d";
	picture = "\dayz_epoch_c\icons\equipment\MusicRadio1Broken.paa";
	count = 1;
	type = 256;
};

class ItemMusicRadio2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_RADIO_MUSIC2";
	descriptionShort = "$STR_EPOCH_RADIO_MUSIC2_DESC";
	model = "\CA\Structures\Furniture\Eletrical_appliances\radio_b\radio_b.p3d";
	picture = "\dayz_epoch_c\icons\equipment\MusicRadio2.paa";
	count = 1;
	type = 256;
};

class ItemMusicRadio2Broken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_RADIO_MUSIC2_BROKEN";
	descriptionShort = "$STR_EPOCH_RADIO_MUSIC2_BROKEN_DESC";
	model = "\CA\Structures\Furniture\Eletrical_appliances\radio_b\radio_b.p3d";
	picture = "\dayz_epoch_c\icons\equipment\MusicRadio2Broken.paa";
	count = 1;
	type = 256;
};