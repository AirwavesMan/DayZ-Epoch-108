class DZE_Item_Kit_Advanced_WorkBench: CA_Magazine {
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

class DZE_Item_Kit_Outhouse: CA_Magazine {
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

class DZE_Item_Kit_Wooden_Shed: CA_Magazine {
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

class DZE_Item_Kit_Wooden_Shed_2: CA_Magazine {
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

class DZE_Item_Kit_Wood_Shack: CA_Magazine {
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

class DZE_Item_Kit_Wood_Shack_2: CA_Magazine {
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

class DZE_Item_Kit_Storage_Shed: CA_Magazine {
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

class DZE_Item_Kit_Storage_Shed_2: CA_Magazine {
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

class DZE_Item_Kit_GunRack: CA_Magazine {
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

class DZE_Item_Kit_GunRack2: CA_Magazine {
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


class DZE_Item_Kit_WoodCrate: CA_Magazine {
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

class DZE_Item_Kit_WoodCrate2: CA_Magazine {
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

class DZE_Item_Kit_Safe: CA_Magazine {
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

class DZE_Item_Kit_Safe2: CA_Magazine {
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

class DZE_Item_Kit_SafeTall: CA_Magazine {
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

class DZE_Item_Kit_Lockbox: CA_Magazine {
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

class DZE_Item_Kit_Lockbox2: CA_Magazine {
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

class DZE_Item_Kit_LockboxWinter: CA_Magazine {
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

class DZE_Item_Kit_LockboxWinter2: CA_Magazine {
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

class DZE_Item_Kit_SafeBroken: CA_Magazine {
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

class DZE_Item_Kit_Safe2Broken: CA_Magazine {
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

class DZE_Item_Kit_SafeTallBroken: CA_Magazine {
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

class DZE_Item_Kit_LockboxBroken: CA_Magazine {
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

class DZE_Item_Kit_Lockbox2Broken: CA_Magazine {
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

class DZE_Item_Kit_LockboxWinterBroken: CA_Magazine {
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

class DZE_Item_Kit_LockboxWinter2Broken: CA_Magazine {
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

class DZE_Item_Kit_StashSmall: CA_Magazine {
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

class DZE_Item_Kit_Cook_Tripod: CA_Magazine {
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

class DZE_Item_Kit_Stoneoven: CA_Magazine {
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

class DZE_Item_Kit_Commode: CA_Magazine {
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

class DZE_Item_Kit_Wardrobe: CA_Magazine {
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

class DZE_Item_Kit_Fridge: CA_Magazine {
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

class DZE_Item_Kit_Washing_Machine: CA_Magazine {
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

class DZE_Item_Kit_Server_Rack: CA_Magazine {
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

class DZE_Item_Kit_Atm: CA_Magazine {
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

class DZE_Item_Kit_Armchair: CA_Magazine {
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

class DZE_Item_Kit_Sofa: CA_Magazine {
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

class DZE_Item_Kit_Arcade: CA_Magazine {
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

class DZE_Item_Kit_Vendmachine1: CA_Magazine {
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

class DZE_Item_Kit_Vendmachine2: CA_Magazine {
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

class DZE_Item_Kit_Storage_Crate: CA_Magazine {
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

class DZE_Item_Kit_Camo_Storage_Crate: CA_Magazine {
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

class DZE_Item_Kit_StorageBarrel1: CA_Magazine {
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

class DZE_Item_Kit_StorageBarrel2: DZE_Item_Kit_StorageBarrel1 {
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

class DZE_Item_Kit_StorageBarrel3: DZE_Item_Kit_StorageBarrel1 {
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

class DZE_Item_Kit_StorageBarrel4: DZE_Item_Kit_StorageBarrel1 {
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

class DZE_Item_Kit_StorageBarrel5: DZE_Item_Kit_StorageBarrel1 {
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

class DZE_Item_Kit_StorageBarrel6: DZE_Item_Kit_StorageBarrel1 {
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

class DZE_Item_Kit_StorageBarrel7: DZE_Item_Kit_StorageBarrel1 {
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

class DZE_Item_Kit_StorageBarrel8: DZE_Item_Kit_StorageBarrel1 {
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

class DZE_Item_Kit_Rabbit_Hutch: CA_Magazine {
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

class DZE_Item_Kit_Chicken_Coop: CA_Magazine {
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

class DZE_Item_Kit_Doghouse: CA_Magazine {
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

class DZE_Item_Kit_Postbox: CA_Magazine {
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

class DZE_Item_Kit_Wild_Bee_Hive: CA_Magazine {
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

class DZE_Item_Kit_Cow_Stable: CA_Magazine {
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

class DZE_Item_Kit_Goat_Stable: CA_Magazine {
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

class DZE_Item_Kit_Sheep_Stable: CA_Magazine {
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

class DZE_Item_Kit_Boar_Stable: CA_Magazine {
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
