//All Consumable items base class
class DZE_Consumable_Base : CA_Magazine {
	//Sound played when consumed
	consumeSound = "";
	//Item replaced by when consumed
	consumeOutput = "";

	count = 1;
	type = 256;

	//Amount of blood regenerated
	bloodRegen = 0;

	//Nutrition values [Energy, Food, Water, Temperature]
	Nutrition[] = {0,0,0,0};

	//Chance to cause infection value range [-1,1]
	//	 0		has no effect
	//	 0.6	60% chance to cause infection
	//	-0.6	60% chance to cure infection
	infectionChance = 0;

	consumeSoundDistance = 3;

	//Whether the output item is automatically dropped on consumption
	consumeDrop = false;

	class ItemActions {
		class Consume {
			text = "$STR_EAT_FOOD";
			script = "spawn player_consume";
		};
	};
};

//Drink base class
class DZE_Drink_Base : DZE_Consumable_Base {
	consumeSound = "drink";

	Nutrition[] = {150,0,0,0};

	class ItemActions : ItemActions {
		class Consume : Consume {
			text = "$STR_ACTIONS_DRINK2";
		};
	};
};

//Edible food base class
class DZE_Food_Edible_Base : DZE_Consumable_Base {
	consumeSound = "eat";

	Nutrition[] = {239,150,0,0};

	class ItemActions : ItemActions {
		class Consume : Consume {
			text = "$STR_EAT_FOOD";
		};
	};
};

//Prepackaged food base class
class DZE_Food_Packaged_Base : DZE_Food_Edible_Base {
	consumeDrop = true;
};

//Fizzy drinks base class
class DZE_Soda_Base : DZE_Drink_Base {
	consumeSound = "soda";
	consumeOutput = "DZE_Item_Trash_Soda";

	Nutrition[] = {90,0,100,0};
	consumeDrop = true;
};

//Raw food base class
class DZE_Food_Raw_Base : DZE_Food_Edible_Base {
	bloodRegen = 200;
	Nutrition[] = {282,0,0,0};

	infectionChance = 0.7;
};

//Cooked food base class
class DZE_Food_Cooked_Base : DZE_Food_Edible_Base {
	bloodRegen = 400;
	Nutrition[] = {239,0,0,0};
};

#include "PackagedFood.hpp"
#include "Meat.hpp"
#include "Fish.hpp"
#include "Vegetables.hpp"

#include "Soda.hpp"
#include "WaterBottle.hpp"
#include "WaterbottlePlastic.hpp"

#include "Frozen.hpp"

#include "Misc.hpp"