class DZE_DefenseObject_Base: DZE_Building_Base {
	DZE_preventUnderground = 0;
	vehicleClass = "DayZ Epoch 1071 Defense";
};

class DZE_Hedgehog: DZE_DefenseObject_Base {
	scope = 2;
	cost = 100;
	DZE_offset[] = {0,1.5,0};
	model = "\ca\misc\jezek_kov.p3d";
	mapSize = 2;
	armor = 400;
	displayName = $STR_BUILT_HEDGEHOG;
	DZE_buildingSteps = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemTankTrap";
		DZE_refundArray[] = {};
	};
};

class DZE_MetalPanel: DZE_DefenseObject_Base {
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	DZE_offset[] = {0,2.5,0};
	model = "\ca\structures\wall\wall_indcnc2_3.p3d";
	mapSize = 2;
	armor = 4000;
	displayName = $STR_EPOCH_METALPANEL;
	DZE_buildingSteps = 6;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "metal_panel_kit";
		DZE_refundArray[] = {};
	};
};

class DZE_Fort_RazorWire: DZE_DefenseObject_Base {
	scope = 2;
	model = "\ca\misc\Fort_Razorwire.p3d";
	icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
	DZE_offset[] = {0,5,-0.05};
	mapSize = 3;
	displayName = $STR_EPOCH_WIRE;
	destrType = "DestructTent";
	armor = 500;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "ItemWire";
		DZE_refundArray[] = {};
	};
};

class DZE_FortifiedWire: DZE_DefenseObject_Base {
	scope = 2;
	model = "\ca\misc\Barbedwire.p3d";
	icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
	DZE_offset[] = {0,4,-0.05};
	mapSize = 3;
	displayName = $STR_EQUIP_NAME_FORT_WIRE;
	destrType = "DestructTent";
	armor = 750;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "fortified_wire_kit";
		DZE_refundArray[] = {{{"ItemWire",1},{"ItemTankTrap",2}}};
	};
};

class DZE_BarbedGate: DZE_DefenseObject_Base {
	scope = 2;
	DZE_offset[] = {0,4,0};
	model = "ca\misc2\BarbGate.p3d";
	armor = 3000;
	displayName = $STR_EQUIP_NAME_BARBED_GATE;
	destrType = "DestructBuilding";
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
			position = "";
			displayName = "Close Door";
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "this animationPhase 'Door01' == 1";
			statement = "this animate ['Door01', 0];";
		};

		class OpenDoor {
			position = "";
			displayName = "Open Door";
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "this animationPhase 'Door01' == 0";
			statement = "this animate ['Door01', 1];";
		};
	};
	class RemoveObject: RemoveObject {
		DZE_refundKit = "barbed_gate_kit";
		DZE_refundArray[] = {{{"ItemWire",1},{"ItemTankTrap",2},{"ItemPole",2}}};
	};
};

class DZE_ConcreteBarrier: DZE_DefenseObject_Base {
	scope = 2;
	DZE_offset[] = {0,2,-0.05};
	model = "\ca\misc3\CncBlock.p3d";
	armor = 4000;
	displayName = $STR_EQUIP_NAME_CNC_BARRIER;
	destrType = "DestructBuilding";
	DZE_buildingSteps = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "concrete_barrier_kit";
		DZE_refundArray[] = {{{"CementBag",3},{"ItemStone",2},{"ItemWire",1}}};
	};
};

class DZE_ConcreteBarrierStriped: DZE_DefenseObject_Base {
	scope = 2;
	DZE_offset[] = {0,2,-0.05};
	model = "\ca\misc3\CncBlock_stripes.p3d";
	armor = 4000;
	displayName = $STR_EQUIP_NAME_CNC_BARRIER_STRIPED;
	destrType = "DestructBuilding";
	DZE_buildingSteps = 1;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "concrete_barrier_striped_kit";
		DZE_refundArray[] = {{{"CementBag",3},{"ItemStone",2},{"ItemWire",1}}};
	};
};

class DZE_ConcreteWall: DZE_DefenseObject_Base {
	scope = 2;
	model = "\ca\mp_armory\misc\concrete_wall\concrete_wall.p3d";
	armor = 10000;
	displayName = $STR_EQUIP_NAME_CONCRETE_WALL;
	destrType = "DestructBuilding";
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "concrete_wall_kit";
		DZE_refundArray[] = {{{"concrete_barrier_kit",5},{"CementBag",2}}};
	};
};

class DZE_ConcretePipe: DZE_DefenseObject_Base {
	scope = 2;
	model = "\ca\structures_e\misc\misc_construction\misc_concpipeline_ep1.p3d";
	armor = 10000;
	displayName = $STR_EQUIP_NAME_CONCRETE_PIPE;
	destrType = "DestructBuilding";
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "concrete_pipe_kit";
		DZE_refundArray[] = {{{"concrete_barrier_kit",6},{"CementBag",2}}};
	};
};

class DZE_DragonTeeth: DZE_DefenseObject_Base {
	scope = 2;
	DZE_offset[] = {0,5.5,0};
	model = "\ca\misc3\dragonTeeth\dragonTeeth.p3d";
	armor = 10000;
	displayName = $STR_EQUIP_NAME_DRAGONTEETH;
	destrType = "DestructBuilding";
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "dragonteeth_kit";
		DZE_refundArray[] = {{{"concrete_wall_kit",1},{"ItemStone",6},{"CementBag",4}}};
	};
};

class DZE_DragonTeethBig: DZE_DefenseObject_Base {
	scope = 2;
	DZE_offset[] = {0,5.5,0};
	model = "\ca\misc3\dragonTeeth\dragonTeethBig.p3d";
	armor = 10000;
	displayName = $STR_EQUIP_NAME_DRAGONTEETH_BIG;
	destrType = "DestructBuilding";
	DZE_buildingSteps = 3;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "dragonteeth_big_kit";
		DZE_refundArray[] = {{{"dragonteeth_kit",1},{"ItemStone",6},{"CementBag",4}}};
	};
};

class DZE_Windbreak: DZE_DefenseObject_Base {
	scope = 2;
	DZE_offset[] = {0,3,-0.1};
	model = "ca\structures\Misc\Misc_WindBreak\Misc_WindBreak.p3d";
	armor = 1000;
	displayName = $STR_EQUIP_NAME_WINDBREAK;
	class RemoveObject: RemoveObject {
		DZE_refundKit = "windbreak_kit";
		DZE_refundArray[] = {{{"equip_wood_pallet",2},{"PartWoodLumber",2},{"equip_nails",1}}};
	};
};
