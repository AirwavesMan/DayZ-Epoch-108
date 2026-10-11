class DZE_Tool_Flashlight : ItemCore {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_FLASHLIGHT";
	descriptionShort = "$STR_EQUIP_DESC_FLASHLIGHT";
	model = "\dayz_equip\models\flashlight.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
	
	class ItemActions {
		class Toolbelt {
			text = "$STR_ACTIONS_RFROMTB";
			script = "spawn DZE_fnc_addToolbelt;";
			use[] = {"DZE_Tool_Flashlight"};
			output[] = {"DZE_Tool_MeleeFlashlight"};
		};
	};
};

class DZE_Tool_FlashlightBroken : ItemCore {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_FLASHLIGHT_BROKEN";
	descriptionShort = "$STR_EQUIP_DESC_FLASHLIGHT_BROKEN";
	model = "\dayz_equip\models\flashlight.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemFlashlightBroken.paa";
};

class DZE_Tool_MeleeFlashlight : Pistol {
	scope = 2;	
	displayName = "$STR_EQUIP_NAME_FLASHLIGHT";
	descriptionShort = "$STR_EQUIP_DESC_FLASHLIGHT";
	model = "\dayz_equip\models\flashlight.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_ca.paa";
	modelOptics = "-";

	magazines[] = {};
	
	class FlashLight {
		position = "flash dir";
		direction = "flash";
		color[] = {0.9, 0.9, 0.7, 0.9};
		ambient[] = {0.1, 0.1, 0.1, 1};
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.1;
	};
	
	class ItemActions {
		class Toolbelt {
			text = "$STR_ACTIONS_2TB";
			script = "spawn DZE_fnc_addToolbelt;";
			use[] = {"DZE_Tool_MeleeFlashlight"};
			output[] = {"DZE_Tool_Flashlight"};
		};
	};
};

class DZE_Tool_FlashlightRed : DZE_Tool_Flashlight {
	displayName = "$STR_EQUIP_NAME_FLASHLIGHT_MILITARY";
	descriptionShort = "$STR_EQUIP_DESC_FLASHLIGHT_MILITARY";
	model = "\dayz_equip\models\flashlight_mil.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
	
	class ItemActions {
		class Toolbelt {
			text = "$STR_ACTIONS_RFROMTB";
			script = "spawn DZE_fnc_addToolbelt;";
			use[] = {"DZE_Tool_FlashlightRed"};
			output[] = {"DZE_Tool_MeleeFlashlightRed"};
		};
	};
};

class DZE_Tool_FlashlightRedBroken : ItemCore {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_FLASHLIGHT_MILITARY_BROKEN";
	descriptionShort = "$STR_EQUIP_DESC_FLASHLIGHT_MILITARY_BROKEN";
	model = "\dayz_equip\models\flashlight_mil.p3d";
	picture = "\dayz_epoch_c\icons\tools\ItemMilitaryFlashlightBroken.paa";
};

class DZE_Tool_MeleeFlashlightRed : DZE_Tool_MeleeFlashlight {
	displayName = "$STR_EQUIP_NAME_FLASHLIGHT_MILITARY";
	descriptionShort = "$STR_EQUIP_DESC_FLASHLIGHT_MILITARY";
	model = "\dayz_equip\models\flashlight_mil.p3d";
	picture = "\dayz_equip\textures\equip_flashlight_mil_ca.paa";
	
	class FlashLight {
		position = "flash dir";
		direction = "flash";
		color[] = {0.9, 0.0, 0.0, 0.9};
		ambient[] = {0.1, 0.0, 0.0, 1};
		angle = 30;
		scale[] = {1, 1, 0.5};
		brightness = 0.08;
	};
	
	class ItemActions {
		class Toolbelt {
			text = "$STR_ACTIONS_2TB";
			script = "spawn DZE_fnc_addToolbelt;";
			use[] = {"DZE_Tool_MeleeFlashlightRed"};
			output[] = {"DZE_Tool_FlashlightRed"};
		};
	};
};
