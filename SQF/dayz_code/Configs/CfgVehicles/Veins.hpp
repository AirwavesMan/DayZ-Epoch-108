class DZE_Ore_Veins_Base: NonStrategic {
	destrType = "DestructBuilding";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	vehicleClass = "DayZ Epoch 1071 Event Objects";
	
	class DestructionEffects {
		class Sound {
			simulation = "sound";
			type = "DestrMine";
			position = "destructionEffect1";
			intensity = 1;
			interval = 1;
			lifeTime = 0.05;
		};

		class DestroyPhase1 {
			simulation = "destroy";
			type = "DelayedDestruction";
			lifeTime = 2.5;
			position = "";
			intensity = 1;
			interval = 1;
		};

		class DamageAround1 {
			simulation = "damageAround";
			type = "DamageAroundHouse";
			position = "";
			intensity = 0.1;
			interval = 1;
			lifeTime = 1;
		};
	};
	DZE_buildingSteps = 3;
};

class DZE_Ore_Vein_Gold: DZE_Ore_Veins_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\gold_vein.p3d";
	armor = 70;
	displayName = $STR_ORE_VEIN_WRECK_GOLD;
	DZE_destroyedRuin = "DZE_Ore_Vein_Ruin_Gold";
};

class DZE_Ore_Vein_Silver: DZE_Ore_Veins_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\silver_vein.p3d";
	armor = 60;
	displayName = $STR_ORE_VEIN_WRECK_SILVER;
	DZE_destroyedRuin = "DZE_Ore_Vein_Ruin_Silver";
};

class DZE_Ore_Vein_Iron: DZE_Ore_Veins_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\iron_vein.p3d";
	armor = 50;
	displayName = $STR_ORE_VEIN_WRECK_IRON;
	DZE_destroyedRuin = "DZE_Ore_Vein_Ruin_Iron";
};

//	Ore Vein ruins

class DZE_Ore_Vein_Ruin_Iron: DZE_Ore_Veins_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\iron_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_IRON;	
};

class DZE_Ore_Vein_Ruin_Silver: DZE_Ore_Veins_Base	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\silver_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_SILVER;
};

class DZE_Ore_Vein_Ruin_Gold: DZE_Ore_Veins_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\gold_vein_wreck.p3d";
	displayName = $STR_ORE_VEIN_WRECK_GOLD;
};
