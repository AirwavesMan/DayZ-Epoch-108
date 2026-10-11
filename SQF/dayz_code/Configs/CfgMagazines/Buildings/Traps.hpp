class DZE_Item_Kit_Trap_BearTrap : CA_Magazine {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_BEARTRAP";
	descriptionShort = "$STR_EQUIP_DESC_BEARTRAP";
	model = "\dayz_equip\models\bear_trap_gear.p3d";
	picture = "\dayz_equip\textures\equip_bear_trap_ca.paa";
	count = 1;
	type = 256;

	class ItemActions {
		class Build {
			text = "$STR_ACTION_BUILD";
			script = "spawn DZE_fnc_modularBuild;";
			create = "DZE_BearTrap";
			require[] = {"DZE_Tool_Toolbox"};
			consume[] = {"DZE_Item_Kit_Trap_BearTrap"};
		};
		class Crafting {
			text = "$STR_ITEM_NAME_BEAR_TRAP_FLARE";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Trap_BearTrapFlare",1}};
			input[] = {{"equip_string",1},{"DZE_Item_Kit_Trap_BearTrap",1},{"PartWoodPile",1},{"equip_duct_tape",1},{"HandRoadFlare",1}};
		};
		class Crafting1 {
			text = "$STR_ITEM_NAME_BEAR_TRAP_SMOKE";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"DZE_Tool_Toolbox"};
			output[] = {{"DZE_Item_Kit_Trap_BearTrapSmoke",1}};
			input[] = {{"equip_string",1},{"DZE_Item_Kit_Trap_BearTrap",1},{"PartWoodPile",1},{"equip_duct_tape",1},{"SmokeShell",1}};
		};		
	};
};

class DZE_Item_Kit_Trap_BearTrapFlare : DZE_Item_Kit_Trap_BearTrap {
	displayName = "$STR_ITEM_NAME_BEAR_TRAP_FLARE";
	descriptionShort = "$STR_ITEM_DESC_BEAR_TRAP_FLARE";
	model = "z\addons\dayz_communityassets\models\trap_beartrap_dropped_flare.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_beartrap_dropped_flare.paa";

	class ItemActions : ItemActions {
		class Build : Build {
			create = "DZE_TrapBearTrapFlare";
			consume[] = {"DZE_Item_Kit_Trap_BearTrapFlare"};
		};
	};
};

class DZE_Item_Kit_Trap_BearTrapSmoke : DZE_Item_Kit_Trap_BearTrap {
	displayName = "$STR_ITEM_NAME_BEAR_TRAP_SMOKE";
	descriptionShort = "$STR_ITEM_DESC_BEAR_TRAP_SMOKE";
	model = "z\addons\dayz_communityassets\models\trap_beartrap_dropped_smoke.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_beartrap_dropped_smoke.paa";

	class ItemActions : ItemActions {
		class Build : Build {
			create = "DZE_TrapBearTrapSmoke";
			consume[] = {"DZE_Item_Kit_Trap_BearTrapSmoke"};
		};
	};
};

class DZE_Item_Kit_Trap_TripwireCans : CA_Magazine {
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
			consume[] = {"DZE_Item_Kit_Trap_TripwireCans"};
		};
	};
};

class DZE_Item_Kit_Trap_TripwireFlare : DZE_Item_Kit_Trap_TripwireCans {
	displayName = "$STR_ITEM_NAME_TRIPWIRE_FLARE";
	descriptionShort = "$STR_ITEM_DESC_TRIPWIRE_FLARE";
	model = "z\addons\dayz_communityassets\models\trap_tripwire_dropped_flare.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_tripwire_flare.paa";

	class ItemActions : ItemActions {
		class Build : Build {
			create = "DZE_TrapTripwireFlare";
			consume[] = {"DZE_Item_Kit_Trap_TripwireFlare"};
		};
	};
};

class DZE_Item_Kit_Trap_TripwireGrenade : DZE_Item_Kit_Trap_TripwireCans {
	displayName = "$STR_ITEM_NAME_TRIPWIRE_GRENADE";
	descriptionShort = "$STR_ITEM_DESC_TRIPWIRE_GRENADE";
	model = "z\addons\dayz_communityassets\models\trap_tripwire_dropped_grenade.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_tripwire_grenade.paa";

	class ItemActions : ItemActions {
		class Build : Build {
			create = "DZE_TrapTripwireGrenade";
			consume[] = {"DZE_Item_Kit_Trap_TripwireGrenade"};
		};
	};
};

class DZE_Item_Kit_Trap_TripwireSmoke : DZE_Item_Kit_Trap_TripwireCans {
	displayName = "$STR_ITEM_NAME_TRIPWIRE_SMOKE";
	descriptionShort = "$STR_ITEM_DESC_TRIPWIRE_SMOKE";
	model = "z\addons\dayz_communityassets\models\trap_tripwire_dropped_smoke.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_trap_tripwire_smoke.paa";

	class ItemActions : ItemActions {
		class Build : Build {
			create = "DZE_TrapTripwireSmoke";
			consume[] = {"DZE_Item_Kit_Trap_TripwireSmoke"};
		};
	};
};