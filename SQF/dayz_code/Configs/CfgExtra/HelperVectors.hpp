///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	modularVectors.hpp
//
//	Author:	Victor the Cleaner
//	Date:	August 2021
//
//	Helper array vectors for Remove and Deconstruct of modular objects.
//	Similar to snappoints.hpp, but customized to specific objects for improved visual appeal.
//
//	Pivot or Bottom entry should always be listed first in the array.
//
//	Any object with an animating door should have its helper listed last in the array.
//	DZE_fnc_displayHelpers will check this to prevent the helper from floating in mid air.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

class Helpers;
class HelperVectors: Helpers {

	class vector {
		size = 3;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Metal
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class DZE_MetalFloor4x: vector {
		points[] = {
			{      0,     0, 0.141 },	// Pivot
			{      0, -5.27, 0.141 },	// Back
			{      0,  5.27, 0.141 },	// Front
			{  -5.27,     0, 0.141 },	// Left
			{   5.27,     0, 0.141 }	// Right
		};
	};
	class DZE_Land_Metal_Floor_2x2_Wreck: DZE_MetalFloor4x {};

	class DZE_MetalFloor: vector {
		points[] = {
			{      0, -0.003, 0.141 },	// Pivot
			{      0, -2.638, 0.141 },	// Back
			{      0,  2.632, 0.141 },	// Front
			{ -2.635, -0.003, 0.141 },	// Left
			{  2.635, -0.003, 0.141 }	// Right
		};
	};
	class DZE_ElevatorStart: DZE_MetalFloor {};
	class DZE_ElevatorStop_Transparent: DZE_MetalFloor {};

	class DZE_Land_Wreck_Metal_Floor: vector {
		points[] = {
			{      0, -2.638, 0.141 },	// Back
			{      0,  2.632, 0.141 },	// Front
			{ -2.635, -0.003, 0.141 },	// Left
			{  2.635, -0.003, 0.141 }	// Right
		};
	};

	class DZE_MetalFloor_Half: vector {
		points[] = {
			{  -0.006, -2.623, 0.132 },	// Back
			{  -0.006,  2.647, 0.132 },	// Front
			{ -1.3235,  0.012, 0.132 },	// Left
			{  1.3115,  0.012, 0.132 }	// Right
		};
	};

	class DZE_MetalFloor_Quarter: vector {
		points[] = {
			{  -0.006, -1.2055, 0.132 },	// Back
			{  -0.006,  1.4295, 0.132 },	// Front
			{ -1.3235,   0.112, 0.132 },	// Left
			{  1.3115,   0.112, 0.132 }	// Right
		};
	};

	class DZE_MetalPillar: vector {
		points[] = {
			{0, 0, 0.004 },	// Pivot
			{0, 0, 1.510 },	// Center
			{0, 0, 3.024 }	// Top
		};
	};

	class DZE_MetalContainer1A {
		points[] = {
			{    0,     0, -1.26788 },	// Pivot
			{    0, -3.05,        0 },	// Back
			{    0,  3.05,        0 },	// Front
			{ -1.2,     0,        0 },	// Left
			{  1.2,     0,        0 },	// Right
			{    0,     0,  1.26788 }	// Top
		};
	};
	class DZE_MetalContainer1B: DZE_MetalContainer1A {};
	class DZE_MetalContainer1G: DZE_MetalContainer1A {};

	class DZE_MetalContainer2D {
		points[] = {
			{    0,     0, -2.54288 },	// Pivot
			{    0, -3.05,        0 },	// Back
			{    0,  3.05,        0 },	// Front
			{ -1.2,     0,        0 },	// Left
			{  1.2,     0,        0 },	// Right
			{    0,     0,  2.54288 }	// Top
		};
	};

	class DZE_Metal_Drawbridge: vector {
		points[] = {
			{ 0.0245,  0.008,     0 },	// Bottom
			{  -2.40,  0.008, 3.025 },	// Left (adjusted)
			{   2.46,  0.008, 3.025 },	// Right (adjusted)
			{ 0.0245,  0.008,  6.05 },	// Top
			{ 0.0245, -0.242, 3.025 }	// Center (added)
		};
	};
	class DZE_Metal_DrawbridgeLocked: DZE_Metal_Drawbridge {};

	class DZE_Door: vector {
		points[] = {
			{   0.01, 0, -0.008 },	// Pivot
			{ -0.995, 0,  1.327 },	// Left
			{  1.015, 0,  1.327 },	// Right
			{   0.01, 0,  2.662 }	// Top
		};
	};
	class DZE_DoorFrame: DZE_Door {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Glass
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class DZE_GlassFloor: vector {
		points[] = {
			{      0, -0.002, 0.141 },	// Pivot
			{      0, -2.627, 0.141 },	// Back
			{      0,  2.623, 0.141 },	// Front
			{ -2.625, -0.002, 0.141 },	// Left
			{  2.625, -0.002, 0.141 }	// Right
		};
	};
	class DZE_ElevatorStop_Glass: DZE_GlassFloor {};
	
	class DZE_GlassFloor_Half: vector {
		points[] = {
			{  -0.032, -2.628, 0.141 },	// Back
			{  -0.032,  2.622, 0.141 },	// Front
			{ -1.3445, -0.003, 0.141 },	// Left
			{  1.2805, -0.003, 0.141 }	// Right
		};
	};

	class DZE_GlassFloor_Quarter: vector {
		points[] = {
			{   0.005, -1.3295, 0.141 },	// Back
			{   0.005,  1.2955, 0.141 },	// Front
			{ -1.3075,  -0.017, 0.141 },	// Left
			{  1.3175,  -0.017, 0.141 }	// Right
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Cinder
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class DZE_CinderWall: vector {
		points[] = {
			{      0, 0,   0 },	// Bottom
			{ -2.625, 0, 1.7 },	// Left
			{  2.625, 0, 1.7 },	// Right
			{      0, 0, 3.4 },	// Top
			{      0, 0, 1.7 }	// Center (added)
		};
	};
	class DZE_CinderWallDoorSmall:		DZE_CinderWall {};	// door
	class DZE_CinderWallDoorSmallLocked:	DZE_CinderWall {};	// door
	class DZE_CinderWallWindow:		DZE_CinderWall {};	// window
	class DZE_CinderWallWindowLocked:	DZE_CinderWall {};	// window
	class DZE_CinderDoorHatch:		DZE_CinderWall {};	// door hatch
	class DZE_CinderDoorHatchLocked:		DZE_CinderWall {};	// door hatch
	class DZE_CinderWallDoor:		DZE_CinderWall {};	// garage door
	class DZE_CinderWallDoorLocked:		DZE_CinderWall {};	// garage door
	class DZE_CinderGarageOpenTop:		DZE_CinderWall {};	// open top garage doors
	class DZE_CinderGarageOpenTopLocked:	DZE_CinderWall {};	// open top garage doors

	class DZE_CinderWallHalf: vector {
		points[] = {
			{      0, 0,    0 },	// Bottom
			{ -2.625, 0, 0.75 },	// Left (replacement)
			{  2.625, 0, 0.75 },	// Right (replacement)
			{      0, 0,  1.5 }	// Top
		};
	};
	class DZE_CinderWallHalf_Gap: DZE_CinderWallHalf {};

	class DZE_Land_Wreck_Cinder: vector {
		points[] = {
			{ -1.64, 0, 0.25 },	// Left (replacement)
			{  1.64, 0, 0.25 }	// Right (replacement)
		};
	};

	class DZE_CinderGateFrame: vector {
		points[] = {
			{      0, 0,   0 },	// Bottom
			{ -2.625, 0, 1.7 },	// Lower Left
			{  2.625, 0, 1.7 },	// Lower Right
			{ -2.625, 0, 5.1 },	// Upper Left	(added)
			{  2.625, 0, 5.1 },	// Upper Right	(added)
			{      0, 0, 6.8 }	// Top
		};
	};

	class DZE_CinderGate: vector {
		points[] = {
			{      0, 0,   0 },	// Bottom
			{ -2.625, 0, 1.7 },	// Lower Left
			{  2.625, 0, 1.7 },	// Lower Right
			{ -2.625, 0, 5.1 },	// Upper Left	(added)
			{  2.625, 0, 5.1 },	// Upper Right	(added)
			{      0, 0, 6.8 },	// Top
			{      0, 0, 3.4 }	// Center	(added)
		};
	};
	class DZE_CinderGateLocked: DZE_CinderGate {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Wood
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class DZE_WoodFloor4x: vector {
		points[] = {
			{ -0.012,     0, 0.139 },	// Pivot
			{ -0.012, -4.65, 0.139 },	// Back
			{ -0.012,  4.65, 0.139 },	// Front
			{ -4.912,     0, 0.139 },	// Left
			{  4.888,     0, 0.139 }	// Right
		};
	};
	class DZE_Land_Wood_Floor_2x2_Wreck: DZE_WoodFloor4x {};

	class DZE_WoodFloor: vector {
		points[] = {
			{ -0.029, -0.013, 0.139 },	// Pivot
			{ -0.029, -2.338, 0.139 },	// Back
			{ -0.029,  2.312, 0.139 },	// Front
			{ -2.479, -0.013, 0.139 },	// Left
			{  2.421, -0.013, 0.139 }	// Right
		};
	};

	class DZE_Land_Wood_Wreck_Floor: vector {
		points[] = {
			{ -0.029, -2.338, 0.139 },	// Back
			{ -0.029,  2.312, 0.139 },	// Front
			{ -2.479, -0.013, 0.139 },	// Left
			{  2.421, -0.013, 0.139 }	// Right
		};
	};

	class DZE_WoodFloorHalf: vector {
		points[] = {
			{  0.081, -2.320, 0.116 },	// Back
			{  0.081,  2.330, 0.116 },	// Front
			{ -1.144,  0.005, 0.116 },	// Left
			{  1.306,  0.005, 0.116 }	// Right
		};
	};
	class DZE_Land_Wood_Wreck_Half: DZE_WoodFloorHalf {};

	class DZE_WoodFloorQuarter: vector {
		points[] = {
			{  0.047, -1.2045, 0.114 },	// Back
			{  0.047,  1.1205, 0.114 },	// Front
			{ -1.178,  -0.042, 0.114 },	// Left
			{  1.272,  -0.042, 0.114 }	// Right
		};
	};
	class DZE_Land_Wood_Wreck_Quarter: DZE_WoodFloorQuarter {};

	class DZE_WoodFloorStairs: vector {
		points[] = {
			{    -2.3,     1.4,   0.3 },	// Bottom step (added)
			{ -0.0275, -2.3375, 3.125 },	// Back
			{ -0.0275,  2.3125, 3.125 },	// Front
			{ -2.4775, -0.0125, 3.125 },	// Left
			{  2.4225, -0.0125, 3.125 }	// Right
		};
	};

	class DZE_WoodTriangleFloor: vector {
		points[] = {
			{      0,  -1.3, 0.1 },	// Back
			{      0, 1.288, 0.1 },	// Front
			{ -1.258, 0.027, 0.1 },	// Left
			{  1.258, 0.027, 0.1 }	// Right
		};
	};

	class DZE_WoodSmallWall: vector { // Small wood walls
		points[] = {
			{ -0.039, 0.016, 0.027 },	// Pivot (bottom)
			{ -2.324, 0.016, 1.527 },	// Left
			{  2.246, 0.016, 1.527 },	// Right
			{ -0.039, 0.016, 3.027 },	// Top
			{ -0.039, 0.016, 1.527 }	// Center (added)
		};
	};
	class DZE_Land_WoodDoor: DZE_WoodSmallWall {};
	class DZE_Land_WoodDoorLocked: DZE_WoodSmallWall {};

	class DZE_Land_WoodOpenTopGarageDoor: vector {
		points[] = {
			{ -0.023, 0.016, 0.019 },	// Pivot
			{ -2.308, 0.016, 1.519 },	// Left
			{  2.262, 0.016, 1.519 },	// Right
			{ -0.023, 0.016, 3.019 }	// Top
		};
	};
	class DZE_Land_WoodOpenTopGarageLocked: DZE_Land_WoodOpenTopGarageDoor {};

	class DZE_Land_Wood_Wreck_Frame: vector {
		points[] = {
			{ -0.023, 0.016, 0.019 },	// Pivot (bottom)
			{ -2.308, 0.016, 1.519 },	// Left
			{  2.262, 0.016, 1.519 },	// Right
			{ -0.023, 0.016, 3.019 }	// Top
		};
	};

	class DZE_WoodLargeWall: vector { // Large wood walls
		points[] = {
			{ -0.024, 0.018, 0.038 },	// Pivot
			{ -2.464, 0.018, 1.538 },	// Left
			{  2.416, 0.018, 1.538 },	// Right
			{ -0.024, 0.018, 3.038 },	// Top
			{ -0.024, 0.018, 1.538 }	// Center (added)
		};
	};

	class DZE_Land_LargeWoodDoor: vector {		// door
		points[] = {
			{ -0.041, 0.018, 0.03 },	// Pivot
			{ -2.481, 0.018, 1.53 },	// Left
			{  2.399, 0.018, 1.53 },	// Right
			{ -0.041, 0.018, 3.03 },	// Top
			{ -0.041, 0.018, 1.53 }		// Center (added)
		};
	};
	class DZE_Land_LargeWoodDoorLocked: DZE_Land_LargeWoodDoor {};

	class DZE_Land_GarageWoodDoor: vector {		// garage door
		points[] = {
			{ -0.023, 0.022, 0.018 },	// Pivot
			{ -2.463, 0.022, 1.518 },	// Left
			{  2.417, 0.022, 1.518 },	// Right
			{ -0.023, 0.022, 3.018 },	// Top
			{ -0.023, 0.022, 1.518 }	// Center (added)
		};
	};
	class DZE_Land_GarageWoodDoorLocked: DZE_Land_GarageWoodDoor {};

	class DZE_WoodSmallWallThird: vector {
		points[] = {
			{ -0.023, -0.018,  0.002 },	// Pivot
			{ -2.463, -0.018, 0.5845 },	// Left (lowered)
			{  2.417, -0.018, 0.5845 },	// Right (lowered)
			{ -0.023, -0.018,  1.167 }	// Top
		};
	};

	class DZE_Land_Wood_Wreck_Third: vector {
		points[] = {
			{ -0.023, -0.018,  0.002 },	// Pivot
			{ -2.463, -0.018, 0.5845 },	// Left (lowered)
			{  2.417, -0.018, 0.5845 }	// Right (lowered)
		};
	};

	class DZE_WoodGateFrame: vector {
		points[] = {
			{  0.022, 0.02, 0.025 },	// Bottom
			{ -2.418, 0.02, 1.525 },	// Lower Left
			{  2.462, 0.02, 1.525 },	// Lower Right
			{ -2.418, 0.02, 4.525 },	// Upper Left (added)
			{  2.462, 0.02, 4.525 },	// Upper Right (added)
			{  0.022, 0.02, 6.025 }		// Top
		};
	};

	class DZE_Land_WoodGate: vector {
		points[] = {
			{  0.022, 0.02, 0.025 },	// Bottom
			{ -2.418, 0.02, 1.525 },	// Lower Left
			{  2.462, 0.02, 1.525 },	// Lower Right
			{ -2.418, 0.02, 4.525 },	// Upper Left (added)
			{  2.462, 0.02, 4.525 },	// Upper Right (added)
			{  0.022, 0.02, 6.025 },	// Top
			{  0.022, 0.02, 3.025 }		// Center (added)
		};
	};
	class DZE_Land_WoodGateLocked: DZE_Land_WoodGate {};

	class DZE_WoodPillar: vector {
		points[] = {
			{    0, 0, 0.016 },	// Pivot
			{    0, 0, 1.516 },	// Front
			{    0, 0, 3.016 }	// Top
		};
	};

	class DZE_WoodStairs: vector {
		points[] = {
			{ -0.02, 0.012, -0.02 },	// Pivot (Bottom Step)
			{ -0.02, 3.662,  2.98 },	// Front (Top Step)
			{ -0.81, 1.812,  1.48 },	// Left
			{  0.77, 1.812,  1.48 }		// Right
		};
	};
	class DZE_WoodStairsSans: DZE_WoodStairs {};
	class DZE_WoodStairsRails: DZE_WoodStairs {};

	class DZE_WoodRamp: vector {
		points[] = {
			{  0.065,    0, -0.18 },	// Pivot
			{ -1.585, 3.15,  0.95 },	// Left
			{  1.715, 3.15,  0.95 },	// Right
			{  0.065, 6.30,  2.82 }		// Top
		};
	};

	class DZE_WoodLadder: vector {
		points[] = {
			{    0, 0,     0 },	// Pivot
			{ -0.4, 0, 1.725 },	// Left
			{  0.4, 0, 1.725 },	// Right
			{    0, 0, 3.450 }	// Top (added)
		};
		size = 2;
	};

	class DZE_WoodHandrail: vector {
		points[] = {
			{  0.016, 0.001, 0.002 },	// Pivot
			{ -1.164, 0.001, 0.491 },	// Left
			{  1.196, 0.001, 0.491 },	// Right
			{  0.016, 0.001,  0.98 }	// Top
		};
		size = 2;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Fortifications
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class DZE_Concrete_Bunker: vector {
		points[] = {
			{ -0.04,    2.1,  2.8 },	// Front (added)
			{ -0.04,   -2.1,  2.8 },	// Back (adjusted)
			{ -2.34, -0.007,  2.8 },	// Left (adjusted)
			{  2.34, -0.007,  2.8 },	// Right (adjusted)
			{ -0.04, -0.007, 3.41 }		// Top
		};
	};
	class DZE_Concrete_Bunker_Locked: DZE_Concrete_Bunker {};

	class DZE_Land_HBarrier1: vector {
		points[] = {
			{  0.01, -0.41, 0.075 },	// Back
			{  0.01,  0.39, 0.075 },	// Front
			{ -0.24, -0.01, 0.075 },	// Left
			{  0.26, -0.01, 0.075 },	// Right
			{  0.01, -0.01,   0.4 }		// Top
		};
	};

	class DZE_Land_HBarrier3: vector {
		points[] = {
			{     0, -0.45,   0 },	// Back
			{     0,   0.4,   0 },	// Front
			{ -1.40,     0,   0 },	// Left
			{  1.35,     0,   0 },	// Right
			{     0,     0, 0.4 }	// Top
		};
	};

	class DZE_Land_HBarrier5: vector {
		points[] = {
			{    0, -0.4, 0.04 },	// Back
			{    0,  0.6, 0.04 },	// Front
			{ -2.5,  0.1, 0.04 },	// Left
			{  2.5,  0.1, 0.04 },	// Right
			{    0,  0.1, 0.5  }	// Top
		};
	};

	class DZE_Land_HBarrier5Curved: vector {
		points[] = {
			{  0.07,  -0.77,     0 },	// Back
			{ -0.05,   0.26,     0 },	// Front
			{ -2.55,  -0.31,     0 },	// Left
			{  2.43,   0.42,     0 },	// Right
			{  0.01, -0.255,  0.55 }	// Top
		};
	};

	class DZE_Sandbag: vector {
		points[] = {
			{ 0, 0, -0.1 }		// Pivot (Center)
		};
	};

	class DZE_BagFenceRound: vector {
		points[] = {
			{ 0, -0.30, -0.1 }	// Pivot (Center)
		};
	};

	class DZE_HeavyBagFence: vector {
		points[] = {
			{ 0, 0, 0.1 }		// Center
		};
	};

	class DZE_HeavyBagFenceCorner: vector {
		points[] = {
			{ -1.3,  1.5, 0.1 },	// Front Left
			{  1.5, -1.2, 0.1 },	// Back Right
			{ -1.3, -1.2, 0.1 }	// Back Left (Corner)
		};
	};

	class DZE_HeavyBagFenceRound: vector {
		points[] = {
			{ -2.8,  -1.2, 0.18 },	// Left
			{  2.8,  -1.2, 0.18 },	// Right
			{    0, 1.075, 0.18 }	// Front
		};
	};

	class DZE_SandNest: vector {
		points[] = {
			{ -1.75,  0.8, -0.44 },	// Left
			{  1.75,  0.8, -0.44 },	// Right
			{     0, -1.9, -0.44 }	// Back
		};
	};

	class DZE_SandNestLarge: vector {
		points[] = {
			{    0,    0,    -1 },	// Pivot
			{ -4.5,    0, -0.44 },	// Left
			{  4.5,    0, -0.44 },	// Right
			{    0,  3.8, -0.44 },	// Front
			{    0, -5.2, -0.44 }	// Back
		};
	};

	class DZE_Land_WarfareBarrier5x: vector {
		points[] = {
			{      0, -0.28, 0.1375 },	// Back
			{      0,  0.28, 0.1375 },	// Front
			{ -3.575,     0, 0.1375 },	// Left
			{  3.575,     0, 0.1375 },	// Right
			{      0,     0, 0.4750 }	// Top
		};
	};

	class DZE_Land_WarfareBarrier10x: vector {
		points[] = {
			{    0, -0.28, 0.1547 },	// Back
			{    0,  0.28, 0.1547 },	// Front
			{ -7.5,     0, 0.1547 },	// Left
			{  7.5,     0, 0.1547 },	// Right
			{    0,     0, 0.4922 }		// Top
		};
	};

	class DZE_Land_WarfareBarrier10xTall: vector {
		points[] = {
			{    0, -0.91, -0.3874 },	// Back
			{    0,  0.91, -0.3874 },	// Front
			{ -7.5,     0, -0.3874 },	// Left
			{  7.5,     0, -0.3874 },	// Right
			{    0,     0,  1.2651 }	// Top
		};
	};

	class DZE_ConcreteBarrier {
		points[] = {
			{ 0, 0, 0 }		// Center
		};
	};
	class DZE_ConcreteBarrierStriped: DZE_ConcreteBarrier {};

	class DZE_ConcretePipe {
		points[] = {
			{ -1.125,     0,      0 },	// Left
			{  1.125,     0,      0 },	// Right
			{      0,     0,  1.125 },	// Top
			{      0,     0, -1.125 }	// Bottom
		};
	};

	class DZE_DragonTeeth {
		points[] = {
			{  0, 0, 0 },		// Pivot
			{ -4, 0, 0 },		// Left
			{  4, 0, 0 }		// Right
		};
	};
	class DZE_DragonTeethBig: DZE_DragonTeeth {};

	class Fort_RazorWire: vector {
		points[] = {
			{    0,     0,    0 },		// Pivot
			{ -4.1,     0, -0.3 },		// Left
			{  4.1,     0, -0.3 }		// Right
		};
	};

	class DZE_FortifiedWire: vector {
		points[] = {
			{    0,     0,    0 },		// Pivot
			{ -2.4,     0, -0.3 },		// Left
			{  2.4,     0, -0.3 }		// Right
		};
	};

	class DZE_BarbedGate {
		points[] = {
			{ -1.8, 0.04, 0.2, $STR_VECTOR_BUILDING_HELPER_LEFT},
			{  1.8, 0.04, 0.2, $STR_VECTOR_BUILDING_HELPER_RIGHT}
		};
	};

	class DZE_StickFence: vector {
		points[] = {
			{     0, 0, 0.6 },	// Top
			{ -2.95, 0,   0 },	// Left
			{  2.95, 0,   0 }	// Right
		};
		size = 2;
	};

	class DZE_MetalGate: vector {
		points[] = {
			{ -4, 0, 0.3 },		// Left
			{  0, 0, 0.3 }		// Right
		};
	};

	class DZE_MetalPanel: vector {
		points[] = {
			{    0, 0, -0.8 },	// Pivot
			{ -1.5, 0,  0.5 },	// Left
			{  1.5, 0,  0.5 },	// Right
			{    0, 0,    2 }	// Top
		};
	};

	class DZE_Fence_corrugated: vector {
		points[] = {
			{     0, 0,  1.3 },	// Top
			{     0, 0, -0.4 },	// Bottom
			{ -1.95, 0,  0.4 },	// Left
			{  1.95, 0,  0.4 }	// Right
		};
	};

	class DZE_WoodenFence_1_foundation: vector {
		points[] = {
			{      0, 0, 0.5 },	// Pivot
			{ -2.535, 0, 0.5 },	// Left
			{  2.535, 0, 0.5 }	// Right
		};
	};

	class DZE_WoodenFence_1_frame: vector {
		points[] = {
			{      0, 0, 0.95 },	// Top
			{ -2.535, 0, 0.95 },	// Left
			{  2.535, 0, 0.95 }	// Right
		};
	};
	class DZE_WoodenFence_quaterpanel: DZE_WoodenFence_1_frame {};
	class DZE_WoodenFence_halfpanel: DZE_WoodenFence_1_frame {};
	class DZE_WoodenFence_thirdpanel: DZE_WoodenFence_1_frame {};
	class DZE_WoodenFence_1: DZE_WoodenFence_1_frame {};

	class DZE_WoodenFence_2: vector {
		points[] = {
			{      0, 0,  0.5 },	// Pivot
			{ -2.535, 0,  1.6 },	// Left
			{  2.535, 0,  1.6 },	// Right
			{      0, 0, 2.68 }	// Top
		};
	};
	class DZE_WoodenFence_3: DZE_WoodenFence_2 {};

	class DZE_WoodenFence_4: vector {
		points[] = {
			{      0, 0,  0.5 },	// Pivot
			{ -2.535, 0,    2 },	// Left
			{  2.535, 0,    2 },	// Right
			{      0, 0, 3.58 }	// Top
		};
	};
	class DZE_WoodenFence_5: DZE_WoodenFence_4 {};
	class DZE_WoodenFence_6: DZE_WoodenFence_4 {};
	class DZE_WoodenFence_7: DZE_WoodenFence_4 {};
	class DZE_WoodenFence_7_Preview: DZE_WoodenFence_4 {};

	class DZE_MetalFence_1_foundation: DZE_WoodenFence_1_foundation {};

	class DZE_MetalFence_1_frame: vector {
		points[] = {
			{      0, 0, 1.4 },	// Top
			{ -2.535, 0, 1.4 },	// Left
			{  2.535, 0, 1.4 }	// Right
		};
	};
	class DZE_MetalFence_halfpanel: DZE_MetalFence_1_frame {};
	class DZE_MetalFence_thirdpanel: DZE_MetalFence_1_frame {};
	class DZE_MetalFence_1: DZE_MetalFence_1_frame {};

	class DZE_MetalFence_2: DZE_WoodenFence_2 {};
	class DZE_MetalFence_3: DZE_WoodenFence_2 {};
	class DZE_MetalFence_4: DZE_WoodenFence_4 {};
	class DZE_MetalFence_5: DZE_WoodenFence_4 {};
	class DZE_MetalFence_6: DZE_WoodenFence_4 {};
	class DZE_MetalFence_7: DZE_WoodenFence_4 {};
	class DZE_MetalFence_7_Preview: DZE_WoodenFence_4 {};

	class DZE_WoodenGate_foundation: vector {
		points[] = {
			{ -2.535, 0, 0.95 },	// Left
			{  2.535, 0, 0.95 }	// Right
		};
	};

	class DZE_WoodenGate_1: vector {
		points[] = {
			{      0, 0,    0 },	// Pivot
			{ -2.535, 0, 0.95 },	// Left
			{  2.535, 0, 0.95 },	// Right
			{      0, 0,    2 }	// Top
		};
	};

	class DZE_WoodenGate_2: DZE_WoodenFence_2 {};
	class DZE_WoodenGate_3: DZE_WoodenFence_2 {};

	class DZE_WoodenGate_4: vector {
		points[] = {
			{      0, 0,    0 },	// Pivot
			{ -2.535, 0,  1.9 },	// Left
			{  2.535, 0,  1.9 },	// Right
			{      0, 0, 3.58 }	// Top
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Storage
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class DZE_GunRack: vector {
		points[] = {
			{ -0.0575, -0.0995, -0.140 }	// Center
		};
		size = 2;
	};
	class DZE_GunRack2: DZE_GunRack {};

	class DZE_WoodCrate: vector {
		points[] = {
			{     0,     0, -0.47 },	// Bottom
			{     0, -0.47,     0 },	// Back
			{     0,  0.47,     0 },	// Front
			{ -0.47,     0,     0 },	// Left
			{  0.47,     0,     0 },	// Right
			{     0,     0,  0.47 }		// Top
		};
		size = 2;
	};
	class DZE_WoodCrate2: DZE_WoodCrate {};

	class DZE_StorageCrate: vector {
		points[] = {
			{ 0, 0, 0.08 }	// Top
		};
		size = 2;
	};

	class DZE_CamoStorageCrate: vector {
		points[] = {
			{ 0, 0, 0.45 }	// Top
		};
		size = 2;
	};

	class DZE_OutHouse: vector {
		points[] = {
			{ -0.59,  0.0675, 0 },	// Left
			{  0.59,  0.0675, 0 },	// Right
			{     0,  0.7175, 0 },	// Front
			{     0, -0.5825, 0 }	// Back
		};
		size = 2;
	};

	class DZE_StorageShed: vector {
		points[] = {
			{     -2, -0.075, 1.5 },	// Left
			{   1.57, -0.075, 1.5 },	// Right
			{ -0.215, -0.075,   3 },	// Top
			{ -0.215,    1.2, 1.5 },	// Front
			{ -0.215,  -1.35, 1.5 }		// Back
		};
	};
	class DZE_StorageShed2: DZE_StorageShed {};

	class DZE_Wooden_shed: vector {
		points[] = {
			{  0.7, -1.64,    0 },	// Back
			{  0.7,  1.64,    0 },	// Front
			{  3.1,     0,    0 },	// Right
			{  0.7,     0,  1.6 },	// Top
			{ -1.7,     0,    0 }	// Left (cull on open door)
		};
	};
	class DZE_Wooden_shed2: DZE_Wooden_shed {};

	class DZE_WoodShack: vector{
		points[] = {
			{     0,  2.4,   0 },	// Front
			{ -1.18, 0.65,   0 },	// Left
			{  1.18, 0.65,   0 },	// Right
			{     0, -1.1, 1.1 }	// Top
		};
	};
	class DZE_WoodShack2: DZE_WoodShack {};

	class DZE_StashSmall: vector {
		points[] = {
			{ 0, 0, 0.3 }	// Top
		};
		size = 2;
	};
	class DZE_StashSmall1: DZE_StashSmall {};
	class DZE_StashSmall2: DZE_StashSmall {};
	class DZE_StashSmall3: DZE_StashSmall {};
	class DZE_StashSmall4: DZE_StashSmall {};

	class DZE_StashMedium: vector {
		points[] = {
			{ 0, 0, 0.8 }	// Top
		};
		size = 2;
	};
	class DZE_StashMedium1: DZE_StashMedium {};
	class DZE_StashMedium2: DZE_StashMedium {};
	class DZE_StashMedium3: DZE_StashMedium {};
	class DZE_StashMedium4: DZE_StashMedium {};

	class DZE_TentStorage: vector {
		points[] = {
			{ 0, 0, 0.55 }	// Top
		};
		size = 2;
	};
	class DZE_TentStorage0: DZE_TentStorage {};
	class DZE_TentStorage1: DZE_TentStorage {};
	class DZE_TentStorage2: DZE_TentStorage {};
	class DZE_TentStorage3: DZE_TentStorage {};
	class DZE_TentStorage4: DZE_TentStorage {};
	class DZE_TentStorageWinter: DZE_TentStorage {};
	class DZE_TentStorageWinter0: DZE_TentStorage {};
	class DZE_TentStorageWinter1: DZE_TentStorage {};
	class DZE_TentStorageWinter2: DZE_TentStorage {};
	class DZE_TentStorageWinter3: DZE_TentStorage {};
	class DZE_TentStorageWinter4: DZE_TentStorage {};
	class IC_Tent: DZE_TentStorage {};

	class DZE_DomeTentStorage: vector {
		points[] = {
			{ 0.25, 0, 0.7 }	// Top
		};
		size = 2;
	};
	class DZE_DomeTentStorage0: DZE_DomeTentStorage {};
	class DZE_DomeTentStorage1: DZE_DomeTentStorage {};
	class DZE_DomeTentStorage2: DZE_DomeTentStorage {};
	class DZE_DomeTentStorage3: DZE_DomeTentStorage {};
	class DZE_DomeTentStorage4: DZE_DomeTentStorage {};
	class DZE_DesertTentStorage: DZE_DomeTentStorage {};
	class DZE_DesertTentStorage0: DZE_DomeTentStorage {};
	class DZE_DesertTentStorage1: DZE_DomeTentStorage {};
	class DZE_DesertTentStorage2: DZE_DomeTentStorage {};
	class DZE_DesertTentStorage3: DZE_DomeTentStorage {};
	class DZE_DesertTentStorage4: DZE_DomeTentStorage {};
	class DZE_WinterDomeTentStorage: DZE_DomeTentStorage {};
	class DZE_WinterDomeTentStorage0: DZE_DomeTentStorage {};
	class DZE_WinterDomeTentStorage1: DZE_DomeTentStorage {};
	class DZE_WinterDomeTentStorage2: DZE_DomeTentStorage {};
	class DZE_WinterDomeTentStorage3: DZE_DomeTentStorage {};
	class DZE_WinterDomeTentStorage4: DZE_DomeTentStorage {};
	class IC_DomeTent: DZE_DomeTentStorage {};

	class DZE_LockboxStorage: vector {
		points[] = {
			{ 0, 0, 0.25 }	// Top
		};
		size = 2;
	};
	class DZE_LockboxStorageLocked: DZE_LockboxStorage {};
	class DZE_LockboxStorage2: DZE_LockboxStorage {};
	class DZE_LockboxStorage2Locked: DZE_LockboxStorage {};
	class DZE_LockboxStorageWinter: DZE_LockboxStorage {};
	class DZE_LockboxStorageWinterLocked: DZE_LockboxStorage {};
	class DZE_LockboxStorageWinter2: DZE_LockboxStorage {};
	class DZE_LockboxStorageWinter2Locked: DZE_LockboxStorage {};

	class DZE_Safe: vector {
		points[] = {
			{      0,      0,     0 },	// Pivot
			{      0,  0.284, 0.615 },	// Front
			{      0, -0.284, 0.615 },	// Back (Door Center)
			{      0,      0,  1.23 },	// Top
			{ -0.362,      0, 0.615 },	// Left
			{  0.362,      0, 0.615 }	// Right
		};
		size = 2;
	};
	class DZE_SafeLocked: DZE_Safe {};
	class DZE_Safe2: DZE_Safe {};
	class DZE_Safe2Locked: DZE_Safe {};
	class DZE_SafeBroken: DZE_Safe {};
	class DZE_Safe2Broken: DZE_Safe {};

	class DZE_SafeTall: vector {
		points[] = {
			{     0,     0, 0 },	// Pivot
			{     0,  0.35, 1 },	// Front
			{     0, -0.35, 1 },	// Back (Door Center)
			{     0,     0, 2 },	// Top
			{ -0.42,     0, 1 },	// Left
			{  0.42,     0, 1 }	// Right
		};
		size = 2;
	};
	class DZE_SafeTallLocked: DZE_SafeTall {};
	class DZE_SafeTallBroken: DZE_SafeTall {};
};
