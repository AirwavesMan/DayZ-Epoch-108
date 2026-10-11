class advanced_workBench_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WORKBENCH_ADVANCED";
	descriptionShort = "$STR_EPOCH_WORKBENCH_ADVANCED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Advanced_WorkBench";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class outhouse_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_OUTHOUSE";
	descriptionShort = "$STR_EPOCH_OUTHOUSE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_OutHouse";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class wooden_shed_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_NICEWOODSHED";
	descriptionShort = "$STR_EPOCH_NICEWOODSHED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Wooden_shed";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class wooden_shed_kit2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_NICEWOODSHED2";
	descriptionShort = "$STR_EPOCH_NICEWOODSHED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Wooden_shed2";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class wood_shack_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODSHACK";
	descriptionShort = "$STR_EPOCH_WOODSHACK";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodShack";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class wood_shack_kit2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODSHACK2";
	descriptionShort = "$STR_EPOCH_WOODSHACK";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodShack2";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class storage_shed_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_STORAGESHED";
	descriptionShort = "$STR_EPOCH_STORAGESHED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageShed";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class storage_shed_kit2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_STORAGESHED2";
	descriptionShort = "$STR_EPOCH_STORAGESHED_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageShed2";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemGunRackKit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GUNRACK";
	descriptionShort = "$STR_EPOCH_GUNRACKKIT_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_GunRack";
				require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemGunRackKit2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_GUNRACK2";
	descriptionShort = "$STR_EPOCH_GUNRACKKIT2_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_GunRack2";
				require[] = {"DZE_Tool_Toolbox"};
		};
	};
};


class ItemWoodCrateKit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODCRATE";
	descriptionShort = "$STR_EPOCH_WOODCRATE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodCrate";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemWoodCrateKit2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WOODCRATE2";
	descriptionShort = "$STR_EPOCH_WOODCRATE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_WoodCrate2";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemSafe: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE";
	descriptionShort = "$STR_EPOCH_SAFE_DESC";
	model = "\z\addons\dayz_epoch\models\safe_onside.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_safe_ca.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_230";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_SafeLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemSafe2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE+";
	descriptionShort = "$STR_EPOCH_SAFE_DESC";
	model = "\z\addons\dayz_epoch\models\safe_onside.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_safe_ca.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_230";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Safe2Locked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemSafeTall: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE";
	descriptionShort = "$STR_EPOCH_SAFE_DESC";
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	picture = "\dayz_epoch_c\icons\equipment\tallsafe.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_230";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_SafeTallLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemLockbox: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX";
	descriptionShort = "$STR_EPOCH_LOCKBOX_DESC";
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_231";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_LockboxStorageLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemLockbox2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX+";
	descriptionShort = "$STR_EPOCH_LOCKBOX_DESC";
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_231";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_LockboxStorage2Locked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemLockboxWinter: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX";
	descriptionShort = "$STR_EPOCH_LOCKBOX_DESC";
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_231";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_LockboxStorageWinterLocked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemLockboxWinter2: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX+";
	descriptionShort = "$STR_EPOCH_LOCKBOX_DESC";
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_231";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_LockboxStorageWinter2Locked";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemSafeBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_BROKEN";
	descriptionShort = "$STR_EPOCH_SAFE_DESC";
	model = "\z\addons\dayz_epoch\models\safe_onside.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_safe_ca.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_230";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_SafeBroken";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemSafe2Broken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_BROKEN+";
	descriptionShort = "$STR_EPOCH_SAFE_DESC";
	model = "\z\addons\dayz_epoch\models\safe_onside.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_safe_ca.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_230";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Safe2Broken";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemSafeTallBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SAFE_BROKEN";
	descriptionShort = "$STR_EPOCH_SAFE_DESC";
	model = "\z\addons\dayz_epoch_v\props\safe_tall\tallsafe.p3d";
	picture = "\dayz_epoch_c\icons\equipment\tallsafe.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_230";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_SafeTallBroken";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemLockboxBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN";
	descriptionShort = "$STR_EPOCH_LOCKBOX_DESC";
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_231";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_LockboxStorageBroken";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemLockbox2Broken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	descriptionShort = "$STR_EPOCH_LOCKBOX_DESC";
	model = "\z\addons\dayz_epoch\models\lockbox_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_CA.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_231";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_LockboxStorage2Broken";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemLockboxWinterBroken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN";
	descriptionShort = "$STR_EPOCH_LOCKBOX_DESC";
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_231";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_LockboxStorageWinterBroken";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemLockboxWinter2Broken: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_LOCKBOX_BROKEN+";
	descriptionShort = "$STR_EPOCH_LOCKBOX_DESC";
	model = "\z\addons\dayz_epoch\models\lockbox_w_mag.p3d";
	picture = "\dayz_epoch_c\icons\equipment\equip_lockbox_w_CA.paa";
	count = 1;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_EPOCH_PLAYER_231";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_LockboxStorageWinter2Broken";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class StashSmall_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_VEH_NAME_STASH";
	descriptionShort = "$STR_VEH_NAME_STASH_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StashSmall";
			require[] = {"DZE_Tool_Shovel"};
		};
	};
};

class cook_tripod_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_COOKINGTRIPOD";
	descriptionShort = "$STR_ITEM_DESC_COOKINGTRIPOD";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CookTripod";
		};
	};    
};

class stoneoven_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_STONEOVEN";
	descriptionShort = "$STR_EPOCH_STONEOVEN_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Stoneoven";
		};
	};    
};

class commode_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_COMMODE";
	descriptionShort = "$STR_EPOCH_COMMODE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Commode";
		};
	};    
};

class wardrobe_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WARDROBE";
	descriptionShort = "$STR_EPOCH_WARDROBE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Wardrobe";
		};
	};    
};

class fridge_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_FRIDGE";
	descriptionShort = "$STR_EPOCH_FRIDGE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Fridge";
		};
	};    
};

class washing_machine_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_WASHINGMACHINE";
	descriptionShort = "$STR_EPOCH_WASHINGMACHINE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Washing_Machine";
		};
	};    
};

class server_rack_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SERVERRACK";
	descriptionShort = "$STR_EPOCH_SERVERRACK_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Server_Rack";
		};
	};    
};

class atm_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_ATM";
	descriptionShort = "$STR_EPOCH_ATM_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_ATM";
		};
	};    
};

class armchair_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_ARMCHAIR";
	descriptionShort = "$STR_EPOCH_ARMCHAIR_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Armchair";
		};
	};    
};

class sofa_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_SOFA";
	descriptionShort = "$STR_EPOCH_SOFA_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Sofa";
		};
	};    
};

class arcade_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_ARCADE";
	descriptionShort = "$STR_EPOCH_ARCADE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Arcade";
		};
	};    
};

class vendmachine1_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VENDINGMACHINE1";
	descriptionShort = "$STR_EPOCH_VENDINGMACHINE1_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Vendmachine1";
		};
	};    
};

class vendmachine2_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_VENDINGMACHINE2";
	descriptionShort = "$STR_EPOCH_VENDINGMACHINE2_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Vendmachine2";
		};
	};    
};

class storage_crate_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_STORAGECRATE";
	descriptionShort = "$STR_EPOCH_STORAGECRATE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageCrate";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class camo_storage_crate_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_CAMO_STORAGE_CRATE";
	descriptionShort = "$STR_EPOCH_CAMO_STORAGE_CRATE_DESC";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_CamoStorageCrate";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class ItemStorageBarrel1_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EPOCH_STORAGEBARRELREDKIT";
	descriptionShort = "$STR_EPOCH_STORAGEBARRELREDKIT_DESC";
	model = "\CA\misc\Barel1.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_oil_drum_model_ca.paa";
	count = 1;
	type = 256;
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelRed1";
		};
	};
};

class ItemStorageBarrel2_kit: ItemStorageBarrel1_kit {
	displayName = "$STR_EPOCH_STORAGEBARRELEPOCHKIT";
	descriptionShort = "$STR_EPOCH_STORAGEBARRELEPOCHKIT_DESC";
	model = "\z\addons\dayz_epoch\models\oil_drum_model.p3d";
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelEpoch1";
		};
	};
};

class ItemStorageBarrel3_kit: ItemStorageBarrel1_kit {
	displayName = "$STR_EPOCH_STORAGEBARRELYELLOWKIT";
	descriptionShort = "$STR_EPOCH_STORAGEBARRELYELLOWKIT_DESC";
	model = "\CA\misc\Barel3.p3d";
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelYellow1";
		};
	};
};

class ItemStorageBarrel4_kit: ItemStorageBarrel1_kit {
	displayName = "$STR_EPOCH_STORAGEBARRELBLACKKIT";
	descriptionShort = "$STR_EPOCH_STORAGEBARRELBLACKKIT_DESC";
	model = "\CA\misc\Barel4.p3d";
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelBlack1";
		};
	};
};

class ItemStorageBarrel5_kit: ItemStorageBarrel1_kit {
	displayName = "$STR_EPOCH_STORAGEBARRELGREENDARKKIT";
	descriptionShort = "$STR_EPOCH_STORAGEBARRELGREENDARKKIT_DESC";
	model = "\CA\misc\Barel5.p3d";
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelGreenDark1";
		};
	};
};

class ItemStorageBarrel6_kit: ItemStorageBarrel1_kit {
	displayName = "$STR_EPOCH_STORAGEBARRELMILKKIT";
	descriptionShort = "$STR_EPOCH_STORAGEBARRELMILKKIT_DESC";
	model = "\CA\misc\Barel6.p3d";
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelMilk1";
		};
	};
};

class ItemStorageBarrel7_kit: ItemStorageBarrel1_kit {
	displayName = "$STR_EPOCH_STORAGEBARRELGREENKIT";
	descriptionShort = "$STR_EPOCH_STORAGEBARRELGREENKIT_DESC";
	model = "\CA\misc\Barel7.p3d";
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelGreen1";
		};
	};
};

class ItemStorageBarrel8_kit: ItemStorageBarrel1_kit {
	displayName = "$STR_EPOCH_STORAGEBARRELGREENRUSTYKIT";
	descriptionShort = "$STR_EPOCH_STORAGEBARRELGREENRUSTYKIT_DESC";
	model = "\CA\misc\Barel8.p3d";
	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_StorageBarrelGreenRusty1";
		};
	};
};

class rabbit_hutch_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_RABBIT_HUTCH";
	descriptionShort = "$STR_EQUIP_DESC_RABBIT_HUTCH";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Rabbit_Hutch";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class chicken_coop_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CHICKEN_COOP";
	descriptionShort = "$STR_EQUIP_DESC_CHICKEN_COOP";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Chicken_Coop";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class doghouse_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_DOG_HOUSE";
	descriptionShort = "$STR_EQUIP_DESC_DOG_HOUSE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Doghouse";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class postbox_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_POSTBOX";
	descriptionShort = "$STR_EQUIP_DESC_POSTBOX";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Postbox";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class wild_bee_hive_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WILD_BEE_HIVE";
	descriptionShort = "$STR_EQUIP_DESC_WILD_BEE_HIVE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Wild_Bee_Hive";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class cow_stable_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_COW_STABLE";
	descriptionShort = "$STR_EQUIP_DESC_COW_STABLE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Cow_Stable";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class goat_stable_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_GOAT_STABLE";
	descriptionShort = "$STR_EQUIP_DESC_GOAT_STABLE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Goat_Stable";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class sheep_stable_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_SHEEP_STABLE";
	descriptionShort = "$STR_EQUIP_DESC_SHEEP_STABLE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Sheep_Stable";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};

class boar_stable_kit: CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_BOAR_STABLE";
	descriptionShort = "$STR_EQUIP_DESC_BOAR_STABLE";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTIONS_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Boar_Stable";
			require[] = {"DZE_Tool_Toolbox"};
		};
	};
};
