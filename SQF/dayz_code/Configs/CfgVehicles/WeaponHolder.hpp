class WeaponHolderBase: ReammoBox {
	vehicleClass = "DayZ Epoch 1071 Weaponholder";
};

class WoodenArrowF : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_ITEMWOODENARROW_CODE_NAME";
	model = "\dayz_weapons\models\bolt";
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','1Rnd_Arrow_Wood'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemCrowbar: WeaponHolderBase {
	scope = 2;
	displayName="$STR_EQUIP_NAME_CROWBAR";
	model="\dayz_equip\models\crowbar.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init="[(_this select 0),'cfgWeapons','DZE_Tool_Crowbar'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemPickaxe: WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_PICKAXE";
	model = "z\addons\dayz_communityweapons\models\pickaxe\pickaxe.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init="[(_this select 0),'cfgWeapons','DZE_Tool_Pickaxe'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemPickaxeBroken: WeaponHolder_ItemPickaxe {
	displayName = "$STR_name_ItemPickaxeBroken";
	
	class eventHandlers {
		init="[(_this select 0),'cfgWeapons','DZE_Tool_PickaxeBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemSledge : WeaponHolderBase { // Epoch class. Needed for player_dropWeapon
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SledgeHammer";
	model="\z\addons\dayz_epoch\models\sledge_mag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','DZE_Tool_Sledge'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_DZE_Melee_Machete: WeaponHolderBase {
	scope = 2;
	displayName="$STR_EQUIP_NAME_MACHETE";
	model="\z\addons\dayz_communityassets\models\machete.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init="[(_this select 0),'cfgWeapons','DZE_Melee_Machete'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemJerrycanEmpty : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_ITEM_NAME_JERRYCAN_EMPTY";
	model = "\dayz_equip\proxy\jerrycan_side.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemJerrycanEmpty'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemFuelcanEmpty : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_ITEM_NAME_FUELCAN_EMPTY";
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemFuelcanEmpty'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemFuelcan : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_ITEM_NAME_FUELCAN";
	model = "z\addons\dayz_communityassets\models\fuelcan.p3d";
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemFuelcan'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemCamoNet : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_ITEM_NAME_CAMONET";
	model = "z\addons\dayz_communityassets\models\packed_net_green.p3d";
	destrType = "DestructNo";

	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_Net_Forest'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemDomeTent : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_VEH_NAME_DOME_TENT";
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_Tent_Dome'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemDesertTent : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_VEH_NAME_DESERT_TENT";
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_Tent_Desert'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemTentWinter : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_VEH_NAME_TENTWINTER";
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_Tent_Winter'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemWinterDomeTent : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_VEH_NAME_WINTER_DOME_TENT";
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_Tent_Dome_Winter'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemCrate : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_ITEM_NAME_equip_crate";
	model = "\z\addons\dayz_communityassets\models\crate.p3d";
	destrType = "DestructNo";
		
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','equip_crate'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemHatchet : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_HATCHET";
	model = "\dayz_equip\models\hatchet.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','DZE_Tool_Hatchet'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_DZE_Melee_Crowbar : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CROWBAR";
	model = "\dayz_equip\models\crowbar.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','DZE_Melee_Crowbar'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};


class WeaponHolder_ItemTent : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CAMPING_TENT";
	model = "\dayz_equip\proxy\tentbag.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_Tent'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemFlashlight : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_FLASHLIGHT";
	model = "\dayz_equip\proxy\flashlight.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','DZE_Tool_Flashlight'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemFlashlightRed : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_FLASHLIGHT_MILITARY";
	model = "\dayz_equip\proxy\flashlight_mil.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','DZE_Tool_FlashlightRed'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemWaterbottle : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WATER_BOTTLE";
	model = "\dayz_equip\proxy\waterbottle.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemWaterbottleUnfilled'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemGenerator : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_31";
	model = "\dayz_equip\models\generator.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_Generator'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemToolbox : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_TOOLBOX";
	model = "\dayz_equip\proxy\toolbox.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgWeapons','DZE_Tool_Toolbox'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartFueltank : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_FUELTANK";
	model = "\dayz_equip\proxy\fueltank.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartFueltank'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartWheel : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CAR_WHEEL";
	model = "\dayz_equip\proxy\wheel.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartWheel'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartGeneric : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SCRAP_METAL";
	model = "\dayz_equip\proxy\genericparts.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartGeneric'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartVRotor : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_MAIN_ROTOR";
	model = "\dayz_equip\proxy\vrotor.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartVRotor'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartEngine : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_ENGINE";
	model = "\dayz_equip\proxy\engine.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartEngine'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_PartGlass : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WINDSCREEN_GLASS";
	model = "\dayz_equip\proxy\carglass.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','PartGlass'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemNotebook : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_ITEM_NOTEBOOK";
	model = "\CA\misc2\notebook\notebook.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemNotebook'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemNotebookBroken : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_NOTEBOOK_BROKEN";
	model = "\CA\misc2\notebook\notebook.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemNotebookBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemSmallTV : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_SMALL_TV";
	model = "\CA\misc2\smallTV\smallTV.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemSmallTV'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemSmallTVBroken : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_SMALL_TV_BROKEN";
	model = "\CA\misc2\smallTV\smallTV.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemSmallTVBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemBigTV : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_BIG_TV";
	model = "\CA\Structures\Furniture\Eletrical_appliances\tv_a\tv_a.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemBigTV'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemBigTVBroken : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_BIG_TV_BROKEN";
	model = "\CA\Structures\Furniture\Eletrical_appliances\tv_a\tv_a.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemBigTVBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemSatelitePhone : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_SATELLITE_PHONE";
	model = "\CA\misc3\satelitePhone\satellitePhone.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemSatelitePhone'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemSatelitePhoneBroken : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_SATELLITE_PHONE_BROKEN";
	model = "\CA\misc3\satelitePhone\satellitePhone.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemSatelitePhoneBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemPC : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_PC";
	model = "\CA\Structures\Furniture\Eletrical_appliances\pc\pc.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemPC'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemPCBroken: WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_PC_BROKEN";
	model = "\CA\Structures\Furniture\Eletrical_appliances\pc\pc.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemPCBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemDesktopRadio : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_DESKTOP_RADIO";
	model = "\CA\misc\mutt_vysilacka.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemDesktopRadio'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemDesktopRadioBroken : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_DESKTOP_RADIO_BROKEN";
	model = "\CA\misc\mutt_vysilacka.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemDesktopRadioBroken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemMusicRadio1 : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_RADIO_MUSIC1";
	model = "\CA\misc\radio.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemMusicRadio1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemMusicRadio1Broken : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_RADIO_MUSIC1_BROKEN";
	model = "\CA\misc\radio.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemMusicRadio1Broken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemMusicRadio2 : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_RADIO_MUSIC2";
	model = "\CA\Structures\Furniture\Eletrical_appliances\radio_b\radio_b.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemMusicRadio2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemMusicRadio2Broken : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_RADIO_MUSIC2_BROKEN";
	model = "\CA\Structures\Furniture\Eletrical_appliances\radio_b\radio_b.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemMusicRadio2Broken'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemBucket : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_EPOCH_METAL_BUCKET";
	model = "\CA\Structures\Furniture\Decoration\bucket\bucket.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemBucket'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemJerrycan : WeaponHolderBase {
	scope = 2;
	displayName = "$STR_ITEM_NAME_JERRYCAN";
	model = "\dayz_equip\proxy\jerrycan.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','ItemJerrycan'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};

class WeaponHolder_ItemJerrycanSide : WeaponHolder_ItemJerrycan {
	model = "\dayz_equip\proxy\jerrycan_side.p3d";
};

class WeaponHolder_ItemSafe: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_SAFE";
	seedItem = "DZE_Item_Kit_Safe";
};

class WeaponHolder_ItemSafe2: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_SAFE+";
	seedItem = "DZE_Item_Kit_Safe2";
};

class WeaponHolder_ItemSafeTall: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_SAFE";
	seedItem = "DZE_Item_Kit_SafeTall";
};

class WeaponHolder_ItemLockbox: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX";
	seedItem = "DZE_Item_Kit_Lockbox";
};

class WeaponHolder_ItemLockbox2: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX+";
	seedItem = "DZE_Item_Kit_Lockbox2";
};

class WeaponHolder_ItemLockboxWinter: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX";
	seedItem = "DZE_Item_Kit_LockboxWinter";
};

class WeaponHolder_ItemLockboxWinter2: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX+";
	seedItem = "DZE_Item_Kit_LockboxWinter2";
};

class WeaponHolder_ItemSafeBroken: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_SAFE_BROKEN";
	seedItem = "DZE_Item_Kit_SafeBroken";
};

class WeaponHolder_ItemSafe2Broken: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_SAFE_BROKEN+";
	seedItem = "DZE_Item_Kit_Safe2Broken";
};

class WeaponHolder_ItemSafeTallBroken: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_SAFE_BROKEN";
	seedItem = "DZE_Item_Kit_SafeTallBroken";
};

class WeaponHolder_ItemLockboxBroken: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN";
	seedItem = "DZE_Item_Kit_LockboxBroken";
};

class WeaponHolder_ItemLockbox2Broken: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	seedItem = "DZE_Item_Kit_Lockbox2Broken";
};

class WeaponHolder_ItemLockboxWinterBroken: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN";
	seedItem = "DZE_Item_Kit_LockboxWinterBroken";
};

class WeaponHolder_ItemLockboxWinter2Broken: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	seedItem = "DZE_Item_Kit_LockboxWinter2Broken";
};
class WeaponHolder_ItemStorageBarrel1_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELREDKIT_DESC";
	model = "\CA\misc\Barel1.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_StorageBarrel1'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemStorageBarrel2_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELEPOCHKIT_DESC";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_StorageBarrel2'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemStorageBarrel3_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELYELLOWKIT_DESC";
	model = "\CA\misc\Barel3.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_StorageBarrel3'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemStorageBarrel4_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELBLACKKIT_DESC";
	model = "\CA\misc\Barel4.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_StorageBarrel4'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemStorageBarrel5_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELGREENDARKKIT_DESC";
	model = "\CA\misc\Barel5.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_StorageBarrel5'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemStorageBarrel6_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELMILKKIT_DESC";
	model = "\CA\misc\Barel6.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_StorageBarrel6'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemStorageBarrel7_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELGREENKIT_DESC";
	model = "\CA\misc\Barel7.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_StorageBarrel7'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
class WeaponHolder_ItemStorageBarrel8_kit: WeaponHolder {
	scope = 1;
	displayName = "$STR_EPOCH_STORAGEBARRELGREENRUSTYKIT_DESC";
	model = "\CA\misc\Barel8.p3d";
	destrType = "DestructNo";
	
	class eventHandlers {
		init = "[(_this select 0),'cfgMagazines','DZE_Item_Kit_StorageBarrel8'] execVM '\z\addons\dayz_code\actions\pickupActions\object_pickupAction.sqf';";
	};
};
