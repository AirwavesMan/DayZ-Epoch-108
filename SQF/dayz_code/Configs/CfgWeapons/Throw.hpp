class Throw : GrenadeLauncher
{
/*
	scope = public;
	autoAimEnabled = false;
	cursor = "Vehicle_Grenade_W";
	cursoraim = "\ca\Weapons\Data\clear_empty";
	cursorSize = 1;
	value = 0;
	type = VSoft;
	displayName = $STR_MAG_ACTION2_4;
	canDrop = false;
	//autoReload = true;
	//backgroundReload = true;
*/
	
	muzzles[] =
	{
		"HandGrenadeMuzzle",
		"SmokeShellMuzzle",
		"RoadFlareMuzzle",
		"ChemLightMuzzle",
		"TrashMuzzle"
	};
	
	class ThrowMuzzle : GrenadeLauncher
	{
	/*
		cursoraim = "Vehicle_Grenade_W";
		cursorSize = 1;
		sound[] = {"", 0.000316228, 1};
		reloadSound[] = {"", 0.000316228, 1};
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 6;
		reloadTime = 0;
		magazineReloadTime = 0;
		enableAttack = false;
		showEmpty = 0;
		autoReload = true;
		modelOptics = "";
		minRange = 30;
		minRangeProbab = 0.5;
		midRange = 45;
		midRangeProbab = 0.2;
		maxRange = 60;
		maxRangeProbab = 0.03;
	*/
		cursor = "\ca\Weapons\Data\clear_empty";
		//backgroundReload = true;
	};
	
	class RoadFlareMuzzle : ThrowMuzzle
	{
		displayName = $STR_MAG_ACTION_4;
		magazines[] = {"HandRoadFlare"};
		
		begin1[] = {"dayz_weapons\sounds\roadflare_start", 1.77828, 1, 1000};
		soundBegin[] = {"begin1", 1};
	};
	
	class ChemLightMuzzle : ThrowMuzzle
	{
		displayName = $STR_MAG_ACTION_CHEMLIGHT;
		magazines[] = {"HandChemGreen", "HandChemRed", "HandChemBlue"};
	};
	
	class TrashMuzzle : ThrowMuzzle
	{
		displayName = $STR_ACTION_THROW;
		magazines[] =
		{
			"DZE_Item_Trash_WhiskyBottle",
			"DZE_Item_Trash_TinCan",
			"DZE_Item_Trash_FoodCanGriff",
			"DZE_Item_Trash_FoodCanBadguy",
			"DZE_Item_Trash_FoodCanBoneboy",
			"DZE_Item_Trash_FoodCanCorn",
			"DZE_Item_Trash_FoodCanCurgon",
			"DZE_Item_Trash_FoodCanDemon",
			"DZE_Item_Trash_FoodCanFraggleos",
			"DZE_Item_Trash_FoodCanHerpy",
			"DZE_Item_Trash_FoodCanDerpy",
			"DZE_Item_Trash_FoodCanOrlok",
			"DZE_Item_Trash_FoodCanPowell",
			"DZE_Item_Trash_FoodCanTylers",
			"DZE_Item_Trash_FoodCanUnlabeled",
			"DZE_Item_Trash_FoodCanRusUnlabeled",
			"DZE_Item_Trash_FoodCanRusPork",
			"DZE_Item_Trash_FoodCanRusPeas",
			"DZE_Item_Trash_FoodCanRusMilk",
			"DZE_Item_Trash_FoodCanRusCorn",
			"DZE_Item_Trash_FoodCanRusStew",
			"DZE_Item_Trash_FoodCanBeef",
			"DZE_Item_Trash_FoodCanPotatoes",
			"DZE_Item_Trash_Soda",
			"DZE_Item_Trash_SodaClays",
			"DZE_Item_Trash_SodaCoke",
			"DZE_Item_Trash_SodaDrwaste",
			"DZE_Item_Trash_SodaFranka",
			"DZE_Item_Trash_SodaGrapeDrink",
			"DZE_Item_Trash_SodaLemonade",
			"DZE_Item_Trash_SodaLirik",
			"DZE_Item_Trash_SodaLvg",
			"DZE_Item_Trash_SodaMdew",
			"DZE_Item_Trash_SodaMtngreen",
			"DZE_Item_Trash_SodaMzly",
			"DZE_Item_Trash_SodaPeppsy",
			"DZE_Item_Trash_SodaPepsi",
			"DZE_Item_Trash_SodaR4z0r",
			"DZE_Item_Trash_SodaRabbit",
			"DZE_Item_Trash_SodaRocketFuel",
			"DZE_Item_Trash_SodaSacrite",
			"DZE_Item_Trash_SodaSherbet",
			"DZE_Item_Trash_SodaSmasht"
		};
	};
};