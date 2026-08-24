//	Placeable Fires
class DZE_Fireplace_Base: DZE_Building_Base {
	icon = "\ca\misc3\data\Icons\icon_fireplace_ca.paa";
	vehicleClass = "DayZ Epoch 1071 Fireplaces";
	displayName = "Flammable";
	destrtype = "DestructNo";
	simulation = "fire";
	armor = 1000;
	mapSize = 0.5;

	// Fireplaces store burn time as object variables and never expose cargo storage.
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;

	class effects {
		class Light1 {
			simulation = "light";
			type = "SmallFireLight";
		};
		class sound {
			simulation = "sound";
			type = "Fire";
		};
		class Fire1 {
			simulation = "particles";
			type = "SmallFireF";
		};
		class Smoke1 {
			simulation = "particles";
			type = "SmallFireS";
		};
	};	
	
	actionBegin1 = "lightup";
	actionEnd1 = "lightup";
	
	DZE_isFireplace = 1;
	DZE_spawnFireOnBuild = 0;
	DZE_fireUseFuel = 0;
	DZE_allowRotation = 0;
};

class DZE_FireBarrel: DZE_Fireplace_Base {
	scope = 2;
	model = "\z\addons\dayz_communityassets\models\Barel7";
	armor = 400;
	destrType = "DestructEngine";
	displayName = "$STR_BUIDLINGS_FIREPLACE_FIREBARREL";	
	
	class UserActions {
		class lightup {
			displayNameDefault = "$STR_ACTIONS_LIGHTFIRE";
			displayName = "$STR_ACTIONS_LIGHTFIRE";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,true,true] call DZE_fnc_inflameShowMenu";
			statement = "[this,true,true] call DZE_fnc_inflame";
		};

		class putout {
			displayNameDefault = "$STR_ACTIONS_PUTOUTFIRE";
			displayName = "$STR_ACTIONS_PUTOUTFIRE";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,false,true] call DZE_fnc_inflameShowMenu";
			statement = "[this,false,true] call DZE_fnc_inflame";
		};
	};		
	
	DZE_offset[] = {0,1.5,0};
	removeoutput[] = {{"ItemFireBarrel_kit",1}};
	DZE_fireUseFuel = 1;
};

class DZE_Camp_Fire_Small: DZE_Fireplace_Base {
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\fire";
	displayName = "$STR_BUIDLINGS_FIREPLACE_CAMPFIRE_SMALL";
	
	class UserActions {
		class lightup {
			displayNameDefault = "$STR_ACTIONS_LIGHTFIRE";
			displayName = "$STR_ACTIONS_LIGHTFIRE";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,true] call DZE_fnc_inflameShowMenu";
			statement = "[this,true] call DZE_fnc_inflame";
		};

		class putout {
			displayNameDefault = "$STR_ACTIONS_PUTOUTFIRE";
			displayName = "$STR_ACTIONS_PUTOUTFIRE";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,false] call DZE_fnc_inflameShowMenu";
			statement = "[this,false] call DZE_fnc_inflame";
		};
	};	

	DZE_offset[] = {0,1,-0.05};
	
	DZE_bypassBase = 1; 	
	DZE_saveToDatabase = 0;
	DZE_spawnFireOnBuild = 1;
	DZE_fireUseFuel = 1;
};

class DZE_Camp_Fire_Medium: DZE_Camp_Fire_Small {
	scope = 2;	
	model = "\Ca\misc3\Campfire";
	displayName = "$STR_BUIDLINGS_FIREPLACE_CAMPFIRE_LARGE";
	
	DZE_offset[] = {0,2.5,-0.05};

	DZE_bypassBase = 1;
	DZE_saveToDatabase = 0;
	DZE_spawnFireOnBuild = 1;
	DZE_fireUseFuel = 1;
};

//	Can not be placed by players

class DZE_flamable: DZE_Fireplace_Base {
	scope = 2;
	model = "\z\addons\dayz_communityassets\models\waterHoleProxy";
};

class Land_Fire: DZE_Fireplace_Base {
	scope = 2;	
	model = "\z\addons\dayz_communityassets\models\fire";
	displayName = "$STR_BUIDLINGS_FIREPLACE_CAMPFIRE_SMALL";	
	armor = 150;
    keephorizontalplacement = 0;
    _generalmacro = "Land_FirePlace_F";	

	class UserActions {
		class lightup {
			displayNameDefault = "$STR_ACTIONS_LIGHTFIRE";
			displayName = "$STR_ACTIONS_LIGHTFIRE";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,true] call DZE_fnc_inflameShowMenu";
			statement = "[this,true] call DZE_fnc_inflame";
		};
		class putout {
			displayNameDefault = "$STR_ACTIONS_PUTOUTFIRE";
			displayName = "$STR_ACTIONS_PUTOUTFIRE";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,false] call DZE_fnc_inflameShowMenu";
			statement = "[this,false] call DZE_fnc_inflame";
		};
	};
};

//	Fire place permanent burning
class Land_Fire_burning: Land_Fire {
	displayName = "$STR_BUIDLINGS_FIREPLACE_CAMPFIRE_SMALL_BURNING";
	vehicleClass = "DayZ Epoch 1071 Fireplaces";
	
	class UserActions {};
	
	class EventHandlers {
		init = "(_this select 0) inflame true";
	};
};

//	Old small camp fire
class DZE_Land_Fire: Land_Fire {
	vehicleClass = "DayZ Epoch 1071 Fireplaces";
};

//	Editor placed fire barrel
class Land_Fire_barrel: DZE_FireBarrel {};

//	Editor placed fire barrel permanent burning
class Land_Fire_barrel_burning: Land_Fire_barrel {
	displayName = "$STR_BUIDLINGS_FIREPLACE_FIREBARREL_BURNING";
	
	class UserActions {};
	
	class EventHandlers {
		init = "(_this select 0) inflame true";
	};
};

//	Medium fire place
class DZE_Land_Camp_Fire: DZE_Fireplace_Base {
	scope = 2;	
	model = "\Ca\misc3\Campfire";
	displayName = "$STR_BUIDLINGS_FIREPLACE_CAMPFIRE_LARGE";
	
	class UserActions {
		class lightup {
			displayNameDefault = "$STR_ACTIONS_LIGHTFIRE";
			displayName = "$STR_ACTIONS_LIGHTFIRE";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,true] call DZE_fnc_inflameShowMenu";
			statement = "[this,true] call DZE_fnc_inflame";
		};
		class putout {
			displayNameDefault = "$STR_ACTIONS_PUTOUTFIRE";
			displayName = "$STR_ACTIONS_PUTOUTFIRE";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,false] call DZE_fnc_inflameShowMenu";
			statement = "[this,false] call DZE_fnc_inflame";
		};
	};	
	
};

//	Medium fire place
class DZE_Base_Fire: DZE_Land_Camp_Fire {};

//	Medium fire place
class Land_Campfire: DZE_Land_Camp_Fire {};

//	Medium fire place permanent burning
class Land_Campfire_burning: Land_Campfire {
	displayName = "$STR_BUIDLINGS_FIREPLACE_CAMPFIRE_LARGE_BURNING";
	
	class UserActions {};
	
	class EventHandlers {
		init = "(_this select 0) inflame true";
	};
};

class Misc_TyreHeap: DZE_Fireplace_Base {
	scope = 2;
	model = "\ca\misc\Misc_TyreHeap";
	displayName = "$STR_BUIDLINGS_FIREPLACE_TYREHEAP";	
	vehicleClass = "DayZ Epoch 1071 Fireplaces";
	
	class UserActions {
		class lightup {
			displayNameDefault = "$STR_ACTIONS_LIGHTFIRE";
			displayName = "$STR_ACTIONS_LIGHTFIRE";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,true,true] call DZE_fnc_inflameShowMenu";
			statement = "[this,true,true] call DZE_fnc_inflame";
		};

		class putout {
			displayNameDefault = "$STR_ACTIONS_PUTOUTFIRE";
			displayName = "$STR_ACTIONS_PUTOUTFIRE";
			position = "ohniste";
			radius = 3;
			onlyForPlayer = 0;
			condition = "[this,false,true] call DZE_fnc_inflameShowMenu";
			statement = "[this,false,true] call DZE_fnc_inflame";
		};
	};	
};

class Misc_TyreHeap_burning: Misc_TyreHeap {
	displayName = "$STR_BUIDLINGS_FIREPLACE_TYREHEAP_BURNING";	
	class UserActions {};
	
	class EventHandlers {
		init = "(_this select 0) inflame true";
	};	
};

class Stove: DZE_Fireplace_Base {
	scope = 2;
	displayName = "$STR_BUIDLINGS_FIREPLACE_STOVE";
	model = "\z\addons\dayz_buildings\models\stove.p3d";
	destrType = "DestructNo";
};
