class DZE_DefenseObject_Base: DZE_Building_Base {
	vehicleClass = "DayZ Epoch 1071 Defense";
	DZE_preventUnderground = 0;
};

class DZE_Hedgehog: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_BUILT_HEDGEHOG";
	model = "\ca\misc\jezek_kov.p3d";
	cost = 100;
	DZE_offset[] = {0,1.5,0};
	mapSize = 2;
	armor = 400;
	DZE_buildingSteps = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_TankTrap";
		DZE_refundArray[] = {};
	};
};

class DZE_MetalPanel: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_EPOCH_METALPANEL";
	destrType = "DestructTree";
	model = "\ca\structures\wall\wall_indcnc2_3.p3d";
	cost = 100;
	DZE_offset[] = {0,2.5,0};
	mapSize = 2;
	armor = 4000;
	DZE_buildingSteps = 6;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Metal_Panel";
		DZE_refundArray[] = {};
	};
};

class DZE_Fort_RazorWire: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_EPOCH_WIRE";
	model = "\ca\misc\Fort_Razorwire.p3d";
	icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
	destrType = "DestructTent";
	DZE_offset[] = {0,5,-0.05};
	mapSize = 3;
	armor = 500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Wire";
		DZE_refundArray[] = {};
	};
};

class DZE_FortifiedWire: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_FORT_WIRE";
	model = "\ca\misc\Barbedwire.p3d";
	icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
	destrType = "DestructTent";
	DZE_offset[] = {0,4,-0.05};
	mapSize = 3;
	armor = 750;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Fortified_Wire";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Wire",1},{"DZE_Item_Kit_TankTrap",2}}};
	};
};

class DZE_BarbedGate: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_BARBED_GATE";
	model = "ca\misc2\BarbGate.p3d";
	destrType = "DestructBuilding";
	DZE_offset[] = {0,4,0};
	armor = 3000;
	DZE_buildingSteps = 2;
	class AnimationSources {
		class Door01 {
			source = "User";
			animPeriod = 1;
			initPhase = 0;
		};
	};

	class UserActions {
		class CloseDoor {
			displayName = "Close Door";
			position = "";
			condition = "this animationPhase 'Door01' == 1";
			statement = "this animate ['Door01', 0];";
			radius = 1.5;
			onlyForPlayer = 0;
		};

		class OpenDoor {
			displayName = "Open Door";
			position = "";
			condition = "this animationPhase 'Door01' == 0";
			statement = "this animate ['Door01', 1];";
			radius = 1.5;
			onlyForPlayer = 0;
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Barbed_Gate";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Wire",1},{"DZE_Item_Kit_TankTrap",2},{"DZE_Item_Metal_Pole",2}}};
	};
};

class DZE_ConcreteBarrier: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CNC_BARRIER";
	model = "\ca\misc3\CncBlock.p3d";
	destrType = "DestructBuilding";
	DZE_offset[] = {0,2,-0.05};
	armor = 4000;
	DZE_buildingSteps = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Concrete_Barrier";
		DZE_refundArray[] = {{{"DZE_Item_Conc_CementBag",3},{"DZE_Item_Conc_Stone",2},{"DZE_Item_Kit_Wire",1}}};
	};
};

class DZE_ConcreteBarrierStriped: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CNC_BARRIER_STRIPED";
	model = "\ca\misc3\CncBlock_stripes.p3d";
	destrType = "DestructBuilding";
	DZE_offset[] = {0,2,-0.05};
	armor = 4000;
	DZE_buildingSteps = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Concrete_Barrier_Striped";
		DZE_refundArray[] = {{{"DZE_Item_Conc_CementBag",3},{"DZE_Item_Conc_Stone",2},{"DZE_Item_Kit_Wire",1}}};
	};
};

class DZE_ConcreteWall: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CONCRETE_WALL";
	model = "\ca\mp_armory\misc\concrete_wall\concrete_wall.p3d";
	destrType = "DestructBuilding";
	armor = 10000;
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Concrete_Wall";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Concrete_Barrier",5},{"DZE_Item_Conc_CementBag",2}}};
	};
};

class DZE_ConcretePipe: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_CONCRETE_PIPE";
	model = "\ca\structures_e\misc\misc_construction\misc_concpipeline_ep1.p3d";
	destrType = "DestructBuilding";
	armor = 10000;
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Concrete_Pipe";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Concrete_Barrier",6},{"DZE_Item_Conc_CementBag",2}}};
	};
};

class DZE_DragonTeeth: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_DRAGONTEETH";
	model = "\ca\misc3\dragonTeeth\dragonTeeth.p3d";
	destrType = "DestructBuilding";
	DZE_offset[] = {0,5.5,0};
	armor = 10000;
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Dragonteeth";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Concrete_Wall",1},{"DZE_Item_Conc_Stone",6},{"DZE_Item_Conc_CementBag",4}}};
	};
};

class DZE_DragonTeethBig: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_DRAGONTEETH_BIG";
	model = "\ca\misc3\dragonTeeth\dragonTeethBig.p3d";
	destrType = "DestructBuilding";
	DZE_offset[] = {0,5.5,0};
	armor = 10000;
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Dragonteeth_Big";
		DZE_refundArray[] = {{{"DZE_Item_Kit_Dragonteeth",1},{"DZE_Item_Conc_Stone",6},{"DZE_Item_Conc_CementBag",4}}};
	};
};

class DZE_Windbreak: DZE_DefenseObject_Base {
	scope = 2;
	displayName = "$STR_EQUIP_NAME_WINDBREAK";
	model = "ca\structures\Misc\Misc_WindBreak\Misc_WindBreak.p3d";
	DZE_offset[] = {0,3,-0.1};
	armor = 1000;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "DZE_Item_Kit_Windbreak";
		DZE_refundArray[] = {{{"DZE_Item_Wood_Pallet",2},{"DZE_Item_Wood_Lumber",2},{"DZE_Item_Metal_Nails",1}}};
	};
};
