class CardboardBox : ReammoBox {
	accuracy = 1000;	// accuracy needed to recognize type of this target	
};

class FoodBox0 : CardboardBox {
	scope = 2;
	displayName = $STR_DAYZ_OBJ_1;
	model = "\dayz_equip\models\cardboard_box.p3d";
	vehicleClass = "DayZ Epoch 1071 Crates";
	
	class transportmagazines {
		class _xx_FoodCanBakedBeans {
			magazine = "DZE_Item_Food_CanBakedBeans";
			count = 6;
		};
		
		class _xx_FoodCanSardines {
			magazine = "DZE_Item_Food_CanSardines";
			count = 6;
		};
		
		class _xx_ItemSodaCoke {
			magazine = "DZE_Item_Drink_SodaLirik";
			count = 6;
		};
		
		class _xx_ItemSodaGrapeDrink {
			magazine = "DZE_Item_Drink_SodaGrapeDrink";
			count = 6;
		};
	};
};

class FoodBox1 : FoodBox0 {};

class FoodBox2 : FoodBox0 {};

class MedBox0 : CardboardBox {
	scope = 2;
	displayName = $STR_DAYZ_OBJ_2;
	model = "z\addons\dayz_communityassets\models\medical_freezbox.p3d";
	vehicleClass = "DayZ Epoch 1071 Crates";
	
	class transportmagazines {
		class _xx_ItemBandage {
			magazine = "DZE_Item_Medi_Bandage";
			count = 6;
		};
		
		class _xx_ItemEpinephrine {
			magazine = "DZE_Item_Medi_Epinephrine";
			count = 2;
		};
		
		class _xx_ItemMorphine {
			magazine = "DZE_Item_Medi_Morphine";
			count = 3;
		};
		
		class _xx_ItemPainkiller {
			magazine = "DZE_Item_Medi_Painkiller";
			count = 1;
		};
	};
};

class MedBox1 : CardboardBox {
	scope = 2;
	displayName = $STR_DAYZ_OBJ_2;
	model = "z\addons\dayz_communityassets\models\medical_freezbox.p3d";
	vehicleClass = "DayZ Epoch 1071 Crates";
	
	class transportmagazines {
		class _xx_ItemBandage {
			magazine = "DZE_Item_Medi_Bandage";
			count = 3;
		};
		
		class _xx_ItemEpinephrine {
			magazine = "DZE_Item_Medi_Epinephrine";
			count = 2;
		};
		
		class _xx_ItemMorphine {
			magazine = "DZE_Item_Medi_Morphine";
			count = 5;
		};
		
		class _xx_ItemBloodbag {
			magazine = "DZE_Item_Medi_EmptyBloodBag";
			count = 2;
		};
		
		class _xx_ItemPainkiller {
			magazine = "DZE_Item_Medi_Painkiller";
			count = 2;
		};
		
		class _xx_ItemAntibiotic {
			magazine = "DZE_Item_Medi_Antibiotic";
			count = 1;
		};
	};	
};

class MedBox2 : CardboardBox {
	scope = 2;
	displayName = $STR_DAYZ_OBJ_2;
	model = "z\addons\dayz_communityassets\models\medical_freezbox.p3d";
	vehicleClass = "DayZ Epoch 1071 Crates";
	
	class transportmagazines {
		class _xx_ItemBandage {
			magazine = "DZE_Item_Medi_Bandage";
			count = 3;
		};
		class _xx_transfusionKit {
			magazine = "DZE_Item_Medi_TransfusionKit";
			count = 4;
		};
		class _xx_ItemMorphine {
			magazine = "DZE_Item_Medi_Morphine";
			count = 3;
		};
		class _xx_bloodBagOPOS {
			magazine = "DZE_Item_Medi_BloodBagOPOS";
			count = 1;
		};
		class _xx_bloodBagABPOS {
			magazine = "DZE_Item_Medi_BloodBagABPOS";
			count = 1;
		};
		class _xx_bloodBagBPOS {
			magazine = "DZE_Item_Medi_BloodBagBPOS";
			count = 1;
		};
		class _xx_bloodBagAPOS {
			magazine = "DZE_Item_Medi_BloodBagAPOS";
			count = 1;
		};
		class _xx_bloodTester {
			magazine = "DZE_Item_Medi_BloodTester";
			count = 2;
		};
	};
};