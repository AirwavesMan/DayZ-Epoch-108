class DZE_Supply_Crate_Base: NonStrategic {
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

class DZE_Supply_Crate: DZE_Supply_Crate_Base {
	scope = 2;
	model = "\z\addons\dayz_epoch\models\ammo_supply.p3d";
	armor = 40;
	displayName = $STR_EPOCH_BULK_NAME;
	DZE_destroyedRuin = "DZE_Supply_Crate_Ruin";
};

class DZE_Supply_Crate_Ruin: DZE_Supply_Crate_Base	{
	scope = 2;
	model = "\z\addons\dayz_epoch\models\ammo_supply_wreck.p3d";
	displayName = $STR_EPOCH_BULK_NAME;
	vehicleClass = "DayZ Epoch 1071 Event Objects";
};
