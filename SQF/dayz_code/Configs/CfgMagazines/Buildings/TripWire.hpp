class ItemTrapTripwireCans : CA_Magazine {
	scope = 2;
	displayName = "$STR_ITEM_NAME_TRIPWIRE_CANS";
	descriptionShort = "$STR_ITEM_DESC_TRIPWIRE_CANS";
	model = "z\addons\dayz_communityassets\models\trap_tripwire_dropped_can.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_tripwire_can.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTION_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_Trap_Cans";
			require[] = {"DZE_Tool_Toolbox"};
			consume[] = {"ItemTrapTripwireCans"};
		};
	};
};

class ItemTrapTripwireFlare : ItemTrapTripwireCans {
	displayName = "$STR_ITEM_NAME_TRIPWIRE_FLARE";
	descriptionShort = "$STR_ITEM_DESC_TRIPWIRE_FLARE";
	model = "z\addons\dayz_communityassets\models\trap_tripwire_dropped_flare.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_tripwire_flare.paa";

	class ItemActions : ItemActions {
		class Build : Build {
			create = "DZE_TrapTripwireFlare";
			consume[] = {"ItemTrapTripwireFlare"};
		};
	};
};

class ItemTrapTripwireGrenade : ItemTrapTripwireCans {
	displayName = "$STR_ITEM_NAME_TRIPWIRE_GRENADE";
	descriptionShort = "$STR_ITEM_DESC_TRIPWIRE_GRENADE";
	model = "z\addons\dayz_communityassets\models\trap_tripwire_dropped_grenade.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_tripwire_grenade.paa";

	class ItemActions : ItemActions {
		class Build : Build {
			create = "DZE_TrapTripwireGrenade";
			consume[] = {"ItemTrapTripwireGrenade"};
		};
	};
};

class ItemTrapTripwireSmoke : ItemTrapTripwireCans {
	displayName = "$STR_ITEM_NAME_TRIPWIRE_SMOKE";
	descriptionShort = "$STR_ITEM_DESC_TRIPWIRE_SMOKE";
	model = "z\addons\dayz_communityassets\models\trap_tripwire_dropped_smoke.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_tripwire_smoke.paa";

	class ItemActions : ItemActions {
		class Build : Build {
			create = "DZE_TrapTripwireSmoke";
			consume[] = {"ItemTrapTripwireSmoke"};
		};
	};
};