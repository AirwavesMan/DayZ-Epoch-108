class advanced_workBench_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WORKBENCH_ADVANCED;
	descriptionShort = $STR_EPOCH_WORKBENCH_ADVANCED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Advanced_WorkBench";
		};
	};
};

class outhouse_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_OUTHOUSE;
	descriptionShort = $STR_EPOCH_OUTHOUSE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_OutHouse";
		};
	};
};

class wooden_shed_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_NICEWOODSHED;
	descriptionShort = $STR_EPOCH_NICEWOODSHED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Wooden_shed";
		};
	};
};

class wooden_shed_kit2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_NICEWOODSHED2;
	descriptionShort = $STR_EPOCH_NICEWOODSHED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Wooden_shed2";
		};
	};
};

class wood_shack_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODSHACK;
	descriptionShort = $STR_EPOCH_WOODSHACK;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_WoodShack";
		};
	};
};

class wood_shack_kit2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODSHACK2;
	descriptionShort = $STR_EPOCH_WOODSHACK;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_WoodShack2";
		};
	};
};

class storage_shed_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STORAGESHED;
	descriptionShort = $STR_EPOCH_STORAGESHED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_StorageShed";
		};
	};
};

class storage_shed_kit2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STORAGESHED2;
	descriptionShort = $STR_EPOCH_STORAGESHED_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_StorageShed2";
		};
	};
};

class ItemGunRackKit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GUNRACK;
	descriptionShort = $STR_EPOCH_GUNRACKKIT_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
				text = $STR_ACTIONS_BUILD;
				script = "spawn DZE_fnc_modularBuild;";
				require[] = {"ItemToolbox"};
				create = "DZE_GunRack";
		};
	};
};

class ItemGunRackKit2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_GUNRACK2;
	descriptionShort = $STR_EPOCH_GUNRACKKIT2_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
				text = $STR_ACTIONS_BUILD;
				script = "spawn DZE_fnc_modularBuild;";
				require[] = {"ItemToolbox"};
				create = "DZE_GunRack2";
		};
	};
};


class ItemWoodCrateKit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODCRATE;
	descriptionShort = $STR_EPOCH_WOODCRATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_WoodCrate";
		};
	};
};

class ItemWoodCrateKit2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_WOODCRATE2;
	descriptionShort = $STR_EPOCH_WOODCRATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_WoodCrate2";
		};
	};
};

class ItemSafe: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SAFE;
	model = "\z\addons\dayz_epoch\models\safe_onside.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_safe_ca.paa";
	descriptionShort = $STR_EPOCH_SAFE_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_230;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_SafeLocked";
		};
	};
};

class ItemSafe2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_SAFE+";
	model = "\z\addons\dayz_epoch\models\safe_onside.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_safe_ca.paa";
	descriptionShort = $STR_EPOCH_SAFE_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_230;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Safe2Locked";
		};
	};
};

class ItemSafeTall: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SAFE;
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	picture = "\dayz_epoch_c\icons\equipment\tallsafe.paa";
	descriptionShort = $STR_EPOCH_SAFE_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_230;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_SafeTallLocked";
		};
	};
};

class ItemLockbox: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LOCKBOX;
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_LockboxStorageLocked";
		};
	};
};

class ItemLockbox2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_LOCKBOX+";
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_LockboxStorage2Locked";
		};
	};
};

class ItemLockboxWinter: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LOCKBOX;
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_LockboxStorageWinterLocked";
		};
	};
};

class ItemLockboxWinter2: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_LOCKBOX+";
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_LockboxStorageWinter2Locked";
		};
	};
};

class ItemSafeBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SAFE_BROKEN;
	model = "\z\addons\dayz_epoch\models\safe_onside.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_safe_ca.paa";
	descriptionShort = $STR_EPOCH_SAFE_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_230;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_SafeBroken";
		};
	};
};

class ItemSafe2Broken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_SAFE_BROKEN+";
	model = "\z\addons\dayz_epoch\models\safe_onside.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_safe_ca.paa";
	descriptionShort = $STR_EPOCH_SAFE_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_230;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Safe2Broken";
		};
	};
};

class ItemSafeTallBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_SAFE_BROKEN;
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	picture = "\dayz_epoch_c\icons\equipment\tallsafe.paa";
	descriptionShort = $STR_EPOCH_SAFE_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_230;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_SafeTallBroken";
		};
	};
};

class ItemLockboxBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_LockboxStorageBroken";
		};
	};
};

class ItemLockbox2Broken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_LockboxStorage2Broken";
		};
	};
};

class ItemLockboxWinterBroken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_LOCKBOX_BROKEN;
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_LockboxStorageWinterBroken";
		};
	};
};

class ItemLockboxWinter2Broken: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	descriptionShort = $STR_EPOCH_LOCKBOX_DESC;
	
	class ItemActions
	{
		class Build
		{
			text = $STR_EPOCH_PLAYER_231;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_LockboxStorageWinter2Broken";
		};
	};
};

class StashSmall_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_VEH_NAME_STASH;
	descriptionShort = $STR_VEH_NAME_STASH_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemShovel"};
			create = "DZE_StashSmall";
		};
	};
};

class cook_tripod_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_ITEM_NAME_COOKINGTRIPOD;
	descriptionShort = $STR_ITEM_DESC_COOKINGTRIPOD;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CookTripod";
		};
	};    
};

class stoneoven_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_STONEOVEN;
	descriptionShort = $STR_EPOCH_STONEOVEN_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Stoneoven";
		};
	};    
};

class commode_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_COMMODE;
	descriptionShort = $STR_EPOCH_COMMODE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Commode";
		};
	};    
};

class wardrobe_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_WARDROBE;
	descriptionShort = $STR_EPOCH_WARDROBE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Wardrobe";
		};
	};    
};

class fridge_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_FRIDGE;
	descriptionShort = $STR_EPOCH_FRIDGE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Fridge";
		};
	};    
};

class washing_machine_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_WASHINGMACHINE;
	descriptionShort = $STR_EPOCH_WASHINGMACHINE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Washing_Machine";
		};
	};    
};

class server_rack_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_SERVERRACK;
	descriptionShort = $STR_EPOCH_SERVERRACK_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Server_Rack";
		};
	};    
};

class atm_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_ATM;
	descriptionShort = $STR_EPOCH_ATM_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ATM";
		};
	};    
};

class armchair_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_ARMCHAIR;
	descriptionShort = $STR_EPOCH_ARMCHAIR_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Armchair";
		};
	};    
};

class sofa_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_SOFA;
	descriptionShort = $STR_EPOCH_SOFA_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Sofa";
		};
	};    
};

class arcade_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_ARCADE;
	descriptionShort = $STR_EPOCH_ARCADE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Arcade";
		};
	};    
};

class vendmachine1_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_VENDINGMACHINE1;
	descriptionShort = $STR_EPOCH_VENDINGMACHINE1_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Vendmachine1";
		};
	};    
};

class vendmachine2_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	displayName = $STR_EPOCH_VENDINGMACHINE2;
	descriptionShort = $STR_EPOCH_VENDINGMACHINE2_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";	
	
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Vendmachine2";
		};
	};    
};

class storage_crate_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STORAGECRATE;
	descriptionShort = $STR_EPOCH_STORAGECRATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_StorageCrate";
		};
	};
};

class camo_storage_crate_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_CAMO_STORAGE_CRATE;
	descriptionShort = $STR_EPOCH_CAMO_STORAGE_CRATE_DESC;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_CamoStorageCrate";
		};
	};
};

class ItemStorageBarrel1_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EPOCH_STORAGEBARRELREDKIT;
    model = "\CA\misc\Barel1.p3d";           
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	descriptionShort = $STR_EPOCH_STORAGEBARRELREDKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelRed1";
		};
	};
};

class ItemStorageBarrel2_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELEPOCHKIT;
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELEPOCHKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelEpoch1";
		};
	};
};

class ItemStorageBarrel3_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELYELLOWKIT;
    model = "\CA\misc\Barel3.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELYELLOWKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelYellow1";
		};
	};
};

class ItemStorageBarrel4_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELBLACKKIT;
    model = "\CA\misc\Barel4.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELBLACKKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelBlack1";
		};
	};
};

class ItemStorageBarrel5_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELGREENDARKKIT;
    model = "\CA\misc\Barel5.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELGREENDARKKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelGreenDark1";
		};
	};
};

class ItemStorageBarrel6_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELMILKKIT;
    model = "\CA\misc\Barel6.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELMILKKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelMilk1";
		};
	};
};

class ItemStorageBarrel7_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELGREENKIT;
    model = "\CA\misc\Barel7.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELGREENKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelGreen1";
		};
	};
};

class ItemStorageBarrel8_kit: ItemStorageBarrel1_kit
{
	displayName = $STR_EPOCH_STORAGEBARRELGREENRUSTYKIT;
    model = "\CA\misc\Barel8.p3d";
	descriptionShort = $STR_EPOCH_STORAGEBARRELGREENRUSTYKIT_DESC;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelGreenRusty1";
		};
	};
};

class rabbit_hutch_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_RABBIT_HUTCH;
	descriptionShort = $STR_EQUIP_DESC_RABBIT_HUTCH;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Rabbit_Hutch";
		};
	};
};

class chicken_coop_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_CHICKEN_COOP;
	descriptionShort = $STR_EQUIP_DESC_CHICKEN_COOP;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Chicken_Coop";
		};
	};
};

class doghouse_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_DOG_HOUSE;
	descriptionShort = $STR_EQUIP_DESC_DOG_HOUSE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Doghouse";
		};
	};
};

class postbox_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_POSTBOX;
	descriptionShort = $STR_EQUIP_DESC_POSTBOX;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Postbox";
		};
	};
};

class wild_bee_hive_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_WILD_BEE_HIVE;
	descriptionShort = $STR_EQUIP_DESC_WILD_BEE_HIVE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Wild_Bee_Hive";
		};
	};
};

class cow_stable_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_COW_STABLE;
	descriptionShort = $STR_EQUIP_DESC_COW_STABLE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Cow_Stable";
		};
	};
};

class goat_stable_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_GOAT_STABLE;
	descriptionShort = $STR_EQUIP_DESC_GOAT_STABLE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Goat_Stable";
		};
	};
};

class sheep_stable_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_SHEEP_STABLE;
	descriptionShort = $STR_EQUIP_DESC_SHEEP_STABLE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Sheep_Stable";
		};
	};
};

class boar_stable_kit: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_BOAR_STABLE;
	descriptionShort = $STR_EQUIP_DESC_BOAR_STABLE;
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";

	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn DZE_fnc_modularBuild;";
			require[] = {"ItemToolbox"};
			create = "DZE_Boar_Stable";
		};
	};
};
