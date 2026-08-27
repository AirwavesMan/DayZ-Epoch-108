class DZE_Generator_Base: DZE_SupplyObject_Base {
	scope = 0;
	model = "\dayz_equip\models\generator_gear.p3d";
	picture = "\dayz_equip\textures\equip_generator_ca.paa";
};

class DZE_Generator: DZE_Generator_Base {
	scope = 2;
	transportMaxWeapons= 0;
	transportmaxbackpacks = 0;
	transportMaxMagazines= 10;
	displayName = "Generator";
	weapons[] = {};
	magazines[] = {};

	class TransportBackpacks {};

	class TransportMagazines {};

	class TransportWeapons {};

	class TransportItems {};
	maximumLoad = 200;
	supplyRadius = -1;
	memoryPointSupply = "";
	soundengineoffext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-stop-1", 0.398107, 1, 250};
	soundengineonext[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-start-1", 0.398107, 1, 250};
	// Epoch values
	destrType = "DestructNo";
	cost = 100;
	DZE_offset[] = {0,1.5,0};
	model = "\dayz_equip\models\generator.p3d";
	mapSize = 2;
	armor = 400;
	DZE_buildingSteps = 1;
	DZE_bypassBase = 0;
	class Turrets {
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemGenerator";
		DZE_refundArray[] = {};
	};
};
