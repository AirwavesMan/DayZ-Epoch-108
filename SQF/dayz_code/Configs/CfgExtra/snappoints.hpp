///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Created by Raymix
//
//	Updated by Victor the Cleaner
//	- Removed snapTo whitelist
//	- Removed radius attribute
//	- Removed obsolete classes
//	- Objects may now snap to any other object
//	- Added explicit point types and local connection normals
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// Explicit snap-point metadata: {x,y,z,label,pointType,{localNormal}}.
// Labels are UI text only; pointType and localNormal guide orientation without restricting compatibility.
// Build objects without a class entry receive curated or collision-refined snap points at runtime.
// Point types: 0 = pivot, 1 = edge; keep in sync with SNAP_POINT_TYPE_* in functions/include/build.hpp.
#define DZE_SNAP_CONFIG_TYPE_PIVOT 0
#define DZE_SNAP_CONFIG_TYPE_EDGE 1
#define DZE_SNAP_META_PIVOT DZE_SNAP_CONFIG_TYPE_PIVOT,{0,0,0}
#define DZE_SNAP_META_BACK DZE_SNAP_CONFIG_TYPE_EDGE,{0,-1,0}
#define DZE_SNAP_META_FRONT DZE_SNAP_CONFIG_TYPE_EDGE,{0,1,0}
#define DZE_SNAP_META_LEFT DZE_SNAP_CONFIG_TYPE_EDGE,{-1,0,0}
#define DZE_SNAP_META_RIGHT DZE_SNAP_CONFIG_TYPE_EDGE,{1,0,0}
#define DZE_SNAP_META_TOP DZE_SNAP_CONFIG_TYPE_EDGE,{0,0,1}
#define DZE_SNAP_META_BOTTOM DZE_SNAP_CONFIG_TYPE_EDGE,{0,0,-1}

class SnapBuilding {

	class DZE_Plastic_Pole_EP1 {
		points[] = {
			{ 0, 0, -0.47, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT}
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Metal
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class DZE_MetalFloor4x { // f=5.25 / 2.625
		points[] = {
			{      0,      0, 0.141, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{      0,  -5.25, 0.141, $STR_SNAPPING_POINT_BACK_CENTER, DZE_SNAP_META_BACK},
			{ -2.625,  -5.25, 0.141, $STR_SNAPPING_POINT_BACK_LEFT, DZE_SNAP_META_BACK},
			{  2.625,  -5.25, 0.141, $STR_SNAPPING_POINT_BACK_RIGHT, DZE_SNAP_META_BACK},
			{      0,   5.25, 0.141, $STR_SNAPPING_POINT_FRONT_CENTER, DZE_SNAP_META_FRONT},
			{ -2.625,   5.25, 0.141, $STR_SNAPPING_POINT_FRONT_LEFT, DZE_SNAP_META_FRONT},
			{  2.625,   5.25, 0.141, $STR_SNAPPING_POINT_FRONT_RIGHT, DZE_SNAP_META_FRONT},
			{  -5.25,      0, 0.141, $STR_SNAPPING_POINT_LEFT_CENTER, DZE_SNAP_META_LEFT},
			{  -5.25, -2.625, 0.141, $STR_SNAPPING_POINT_LEFT_BACK, DZE_SNAP_META_LEFT},
			{  -5.25,  2.625, 0.141, $STR_SNAPPING_POINT_LEFT_FRONT, DZE_SNAP_META_LEFT},
			{   5.25,      0, 0.141, $STR_SNAPPING_POINT_RIGHT_CENTER, DZE_SNAP_META_RIGHT},
			{   5.25, -2.625, 0.141, $STR_SNAPPING_POINT_RIGHT_BACK, DZE_SNAP_META_RIGHT},
			{   5.25,  2.625, 0.141, $STR_SNAPPING_POINT_RIGHT_FRONT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_MetalFloor4x_Preview: DZE_MetalFloor4x {};

	class DZE_MetalFloor { // f=5.25 / 2.625
		points[] = {
			{      0, -0.003, 0.141, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{      0, -2.628, 0.141, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{      0,  2.622, 0.141, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -2.625, -0.003, 0.141, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.625, -0.003, 0.141, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_MetalFloor_Preview: DZE_MetalFloor {};
	class DZE_ElevatorStart: DZE_MetalFloor {};
	class DZE_ElevatorStop_Transparent: DZE_MetalFloor {};
	
	class DZE_MetalFloor_Half { // f=5.25 / 2.625 / 1.3125
		points[] = {
			{  -0.006,  0.012, 0.132, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{  -0.006, -2.613, 0.132, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{  -0.006,  2.637, 0.132, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -1.3185,  0.012, 0.132, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.3065,  0.012, 0.132, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_MetalFloor_Half_Preview: DZE_MetalFloor_Half {};

	class DZE_MetalFloor_Quarter { // f=5.25 / 2.625 / 1.3125
		points[] = {
			{  -0.006,   0.112, 0.132, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{  -0.006, -1.2005, 0.132, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{  -0.006,  1.4245, 0.132, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -1.3185,   0.112, 0.132, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.3065,   0.112, 0.132, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_MetalFloor_Quarter_Preview: DZE_MetalFloor_Quarter {};

	class DZE_Metal_Drawbridge {
		points[] = {
			{  0.0245, 0.008,    0, $STR_SNAPPING_POINT_BOTTOM, DZE_SNAP_META_BOTTOM},
			{ -2.6005, 0.008,  1.7, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.6495, 0.008,  1.7, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{  0.0245, 0.008, 6.05, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};	
	class DZE_Drawbridge_Preview: DZE_Metal_Drawbridge {};
	class DZE_Metal_DrawbridgeLocked: DZE_Metal_Drawbridge {};

	class DZE_MetalPillar { // h=3.024
		points[] = {
			{      0,      0, 0.004, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{      0, -0.199, 1.516, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{      0,  0.199, 1.516, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -0.199,      0, 1.516, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  0.199,      0, 1.516, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0,      0, 3.028, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_MetalPillar_Preview: DZE_MetalPillar {};

	class DZE_MetalContainer1A {
		points[] = {
			{    0,     0, -1.26788, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{    0, -3.05, -1.26788, $STR_SNAPPING_POINT_BACK_CENTER, DZE_SNAP_META_BACK},
			{ -1.2, -3.05,        0, $STR_SNAPPING_POINT_BACK_LEFT, DZE_SNAP_META_BACK},
			{  1.2, -3.05,        0, $STR_SNAPPING_POINT_BACK_RIGHT, DZE_SNAP_META_BACK},
			{    0, -3.05,  1.26788, $STR_SNAPPING_POINT_BACK_TOP, DZE_SNAP_META_BACK},
			{    0,  3.05, -1.26788, $STR_SNAPPING_POINT_FRONT_CENTER, DZE_SNAP_META_FRONT},
			{ -1.2,  3.05,        0, $STR_SNAPPING_POINT_FRONT_LEFT, DZE_SNAP_META_FRONT},
			{  1.2,  3.05,        0, $STR_SNAPPING_POINT_FRONT_RIGHT, DZE_SNAP_META_FRONT},
			{    0,  3.05,  1.26788, $STR_SNAPPING_POINT_FRONT_TOP, DZE_SNAP_META_FRONT},
			{ -1.2,     0,        0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.2,     0,        0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0,     0,  1.26788, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_MetalContainer1B: DZE_MetalContainer1A {};
	class DZE_MetalContainer1G: DZE_MetalContainer1A {};

	class DZE_MetalContainer2D {
		points[] = {
			{    0,     0, -2.54288, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{    0, -3.05, -2.54288, $STR_SNAPPING_POINT_BACK_CENTER, DZE_SNAP_META_BACK},
			{ -1.2, -3.05,   -1.275, $STR_SNAPPING_POINT_BACK_LEFT, DZE_SNAP_META_BACK},
			{  1.2, -3.05,   -1.275, $STR_SNAPPING_POINT_BACK_RIGHT, DZE_SNAP_META_BACK},
			{    0, -3.05,  2.54288, $STR_SNAPPING_POINT_BACK_TOP, DZE_SNAP_META_BACK},
			{    0,  3.05, -2.54288, $STR_SNAPPING_POINT_FRONT_CENTER, DZE_SNAP_META_FRONT},
			{ -1.2,  3.05,   -1.275, $STR_SNAPPING_POINT_FRONT_LEFT, DZE_SNAP_META_FRONT},
			{  1.2,  3.05,   -1.275, $STR_SNAPPING_POINT_FRONT_RIGHT, DZE_SNAP_META_FRONT},
			{    0,  3.05,  2.54288, $STR_SNAPPING_POINT_FRONT_TOP, DZE_SNAP_META_FRONT},
			{ -1.2,     0,   -1.275, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.2,     0,   -1.275, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0,     0,  2.54288, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_Door {
		points[] = {
			{   0.01, 0, -0.008, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -0.995, 0,  1.327, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.015, 0,  1.327, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{   0.01, 0,  2.662, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_DoorLocked: DZE_Door {};
	class DZE_DoorFrame: DZE_Door {};
	class DZE_DoorFrame_Preview: DZE_Door {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Glass
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class DZE_GlassFloor { // f=5.25 / 2.625 / 1.3125
		points[] = {
			{      0, -0.002, 0.141, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{      0, -2.627, 0.141, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{      0,  2.623, 0.141, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -2.625, -0.002, 0.141, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.625, -0.002, 0.141, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_GlassFloor_Preview: DZE_GlassFloor {};
	class DZE_ElevatorStop_Glass: DZE_GlassFloor {};
	
	class DZE_GlassFloor_Half { // f=5.25 / 2.625 / 1.3125
		points[] = {
			{  -0.032, -0.003, 0.141, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{  -0.032, -2.628, 0.141, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{  -0.032,  2.622, 0.141, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -1.3445, -0.003, 0.141, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.2805, -0.003, 0.141, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_GlassFloor_Half_Preview: DZE_GlassFloor_Half {};

	class DZE_GlassFloor_Quarter { // f=5.25 / 2.625 / 1.3125
		points[] = {
			{   0.005,  -0.017, 0.141, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{   0.005, -1.3295, 0.141, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{   0.005,  1.2955, 0.141, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -1.3075,  -0.017, 0.141, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.3175,  -0.017, 0.141, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_GlassFloor_Quarter_Preview: DZE_GlassFloor_Quarter {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Cinder
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class DZE_Cinder { // All cinder walls and doors
		points[] = {
			{      0, 0,   0, $STR_SNAPPING_POINT_BOTTOM, DZE_SNAP_META_BOTTOM},
			{ -2.625, 0, 1.7, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.625, 0, 1.7, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0, 0, 3.4, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_CinderWall:				DZE_Cinder {};	// wall
	class DZE_CinderWall_Preview:			DZE_Cinder {};	// wall
	class DZE_CinderWallSmallDoorway:		DZE_Cinder {};	// doorway
	class DZE_CinderWallSmallDoorway_Preview:	DZE_Cinder {};	// doorway
	class DZE_CinderWallDoorSmall:			DZE_Cinder {};	// door
	class DZE_CinderWallDoorSmallLocked:		DZE_Cinder {};	// door
	class DZE_CinderDoorHatch:			DZE_Cinder {};	// door hatch
	class DZE_CinderDoorHatchLocked:			DZE_Cinder {};	// door hatch
	class DZE_CinderDoorHatch_Preview:		DZE_Cinder {};	// door hatch
	class DZE_CinderWallWindow:			DZE_Cinder {};	// window
	class DZE_CinderWallWindowLocked:		DZE_Cinder {};	// window
	class DZE_CinderWallWindow_Preview:		DZE_Cinder {};	// window
	class DZE_CinderWallDoorway:			DZE_Cinder {};	// garage doorway
	class DZE_CinderWallDoorway_Preview:		DZE_Cinder {};	// garage doorway
	class DZE_CinderWallDoor:			DZE_Cinder {};	// garage door
	class DZE_CinderWallDoorLocked:			DZE_Cinder {};	// garage door
	class DZE_CinderGarageOpenTopFrame:		DZE_Cinder {};	// open top garage frame only
	class DZE_CinderGarageOpenTop:			DZE_Cinder {};	// open top garage doors
	class DZE_CinderGarageOpenTopLocked:		DZE_Cinder {};	// open top garage doors
	class DZE_CinderGarageOpenTop_Preview:		DZE_Cinder {};	// open top garage doors

	class DZE_CinderWallHalf: DZE_Cinder {
		points[] = {
			{      0, 0,   0, $STR_SNAPPING_POINT_BOTTOM, DZE_SNAP_META_BOTTOM},
			{ -2.625, 0, 1.7, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.625, 0, 1.7, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0, 0, 1.5, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_CinderWallHalf_Preview: DZE_CinderWallHalf {};
	class DZE_CinderWallHalf_Gap: DZE_CinderWallHalf {};
	class DZE_CinderWallHalf_Gap_Preview: DZE_CinderWallHalf {};

	class DZE_CinderGateFrame {
		points[] = {
			{      0, 0,   0, $STR_SNAPPING_POINT_BOTTOM, DZE_SNAP_META_BOTTOM},
			{ -2.625, 0, 1.7, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.625, 0, 1.7, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0, 0, 6.8, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_CinderGate: DZE_CinderGateFrame {};
	class DZE_CinderGateLocked: DZE_CinderGateFrame {};
	class DZE_CinderGate_Preview: DZE_CinderGateFrame {};

	///////////////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Modular Wood
	//
	///////////////////////////////////////////////////////////////////////////////////////////////////

	class DZE_WoodFloor4x { // LR=9.76 / FB=9.3
		points[] = {
			{ -0.012,      0, 0.139, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{ -0.012,  -4.65, 0.139, $STR_SNAPPING_POINT_BACK_CENTER, DZE_SNAP_META_BACK},
			{ -2.452,  -4.65, 0.139, $STR_SNAPPING_POINT_BACK_LEFT, DZE_SNAP_META_BACK},
			{  2.428,  -4.65, 0.139, $STR_SNAPPING_POINT_BACK_RIGHT, DZE_SNAP_META_BACK},
			{ -0.012,   4.65, 0.139, $STR_SNAPPING_POINT_FRONT_CENTER, DZE_SNAP_META_FRONT},
			{ -2.452,   4.65, 0.139, $STR_SNAPPING_POINT_FRONT_LEFT, DZE_SNAP_META_FRONT},
			{  2.428,   4.65, 0.139, $STR_SNAPPING_POINT_FRONT_RIGHT, DZE_SNAP_META_FRONT},
			{ -4.892,      0, 0.139, $STR_SNAPPING_POINT_LEFT_CENTER, DZE_SNAP_META_LEFT},
			{ -4.892, -2.325, 0.139, $STR_SNAPPING_POINT_LEFT_BACK, DZE_SNAP_META_LEFT},
			{ -4.892,  2.325, 0.139, $STR_SNAPPING_POINT_LEFT_FRONT, DZE_SNAP_META_LEFT},
			{  4.868,      0, 0.139, $STR_SNAPPING_POINT_RIGHT_CENTER, DZE_SNAP_META_RIGHT},
			{  4.868, -2.325, 0.139, $STR_SNAPPING_POINT_RIGHT_BACK, DZE_SNAP_META_RIGHT},
			{  4.868,  2.325, 0.139, $STR_SNAPPING_POINT_RIGHT_FRONT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_WoodFloor4x_Preview: DZE_WoodFloor4x {};

	class DZE_WoodFloor { // LR=4.88 / FB=4.65
		points[] = {
			{ -0.029, -0.013, 0.139, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{ -0.029, -2.338, 0.139, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{ -0.029,  2.312, 0.139, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -2.469, -0.013, 0.139, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.411, -0.013, 0.139, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_WoodFloor_Preview: DZE_WoodFloor {};

	class DZE_WoodFloorHalf { // LR=2.44 / FB=4.65
		points[] = {
			{  0.081,  0.005, 0.116, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{  0.081, -2.320, 0.116, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{  0.081,  2.330, 0.116, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -1.139,  0.005, 0.116, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.301,  0.005, 0.116, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_WoodFloorHalf_Preview: DZE_WoodFloorHalf {};

	class DZE_WoodFloorQuarter { // LR=2.44 / FB=2.325
		points[] = {
			{  0.047,  -0.042, 0.114, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{  0.047, -1.2045, 0.114, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{  0.047,  1.1205, 0.114, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -1.173,  -0.042, 0.114, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.267,  -0.042, 0.114, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_WoodFloorQuarter_Preview: DZE_WoodFloorQuarter {};

	class DZE_WoodFloorStairs { // LR=4.88 / FB=4.65
		points[] = {
			{ -0.0275, -0.0125, 0.125, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -0.0275, -2.3375, 3.125, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{ -0.0275,  2.3125, 3.125, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -2.4675, -0.0125, 3.125, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.4125, -0.0125, 3.125, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};		
	};
	class DZE_Wood_Floor_Stairs_Preview: DZE_WoodFloorStairs {};

	class DZE_WoodTriangleFloor {
		points[] = {
			{      0,     0, 0.1, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{      0,  -1.3, 0.1, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{      0, 1.288, 0.1, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -1.258, 0.027, 0.1, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.258, 0.027, 0.1, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};	
	class DZE_WoodTriangleFloor_Preview: DZE_WoodTriangleFloor {};

	////////	Small Wooden Walls	////////

	class DZE_WoodSmall { // LR=4.57
		points[] = {
			{ -0.039, 0.021, 0.029, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.324, 0.021, 1.529, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.246, 0.021, 1.529, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{ -0.039, 0.021, 3.029, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_WoodSmallWall:			DZE_WoodSmall {};	// wall
	class DZE_WoodSmallWall_Preview:		DZE_WoodSmall {};	// wall
	class DZE_WoodSmallWallDoor:		DZE_WoodSmall {};	// doorway
	class DZE_WoodSmallWallDoor_Preview:	DZE_WoodSmall {};	// doorway
	class DZE_WoodSmallWallWin:		DZE_WoodSmall {};	// window
	class DZE_WoodSmallWallWin_Preview:	DZE_WoodSmall {};	// window
	class Land_DZE_WoodDoor:		DZE_WoodSmall {};	// door
	class Land_DZE_WoodDoorLocked:		DZE_WoodSmall {};	// door
	class DZE_WoodDoor_Preview:		DZE_WoodSmall {};	// door

	class Land_DZE_WoodOpenTopGarageDoor {	// garage door
		points[] = {
			{ -0.023, 0.016, 0.019, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.308, 0.016, 1.519, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.262, 0.016, 1.519, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{ -0.023, 0.016, 3.019, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class Land_DZE_WoodOpenTopGarageLocked:	Land_DZE_WoodOpenTopGarageDoor {};
	class DZE_Wood_GarageOpenTop_Preview:	Land_DZE_WoodOpenTopGarageDoor {};

	////////	Large Wooden Walls	////////

	class DZE_WoodLarge { // LR=4.88
		points[] = {
			{ -0.024, 0.018, 0.038, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.464, 0.018, 1.538, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.416, 0.018, 1.538, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{ -0.024, 0.018, 3.038, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_WoodLargeWall:			DZE_WoodLarge {};	// wall
	class DZE_WoodLargeWall_Preview:		DZE_WoodLarge {};

	class DZE_WoodLargeWallDoor {		// doorway
		points[] = {
			{ -0.041, 0.018, 0.028, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.481, 0.018, 1.528, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.399, 0.018, 1.528, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{ -0.041, 0.018, 3.028, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_WoodLargeWallDoor_Preview: DZE_WoodLargeWallDoor {};

	class Land_DZE_LargeWoodDoor {		// door
		points[] = {
			{ -0.041, 0.018, 0.03, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.481, 0.018, 1.53, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.399, 0.018, 1.53, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{ -0.041, 0.018, 3.03, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class Land_DZE_LargeWoodDoorLocked: Land_DZE_LargeWoodDoor {};
	class DZE_LargeWoodDoor_Preview: Land_DZE_LargeWoodDoor {};

	class DZE_WoodLargeWallWin {		// window
		points[] = {
			{ -0.023, 0.021, 0.039, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.463, 0.021, 1.539, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.417, 0.021, 1.539, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{ -0.023, 0.021, 3.039, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_WoodLargeWallWin_Preview: DZE_WoodLargeWallWin {};

	class Land_DZE_GarageWoodDoor {		// garage
		points[] = {
			{ -0.023, 0.022, 0.018, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.463, 0.022, 1.518, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.417, 0.022, 1.518, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{ -0.023, 0.022, 3.018, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class Land_DZE_GarageWoodDoorLocked: Land_DZE_GarageWoodDoor {};
	class DZE_GarageWoodDoor_Preview: Land_DZE_GarageWoodDoor {};

	class DZE_WoodSmallWallThird { // 4.88m
		points[] = {
			{ -0.023, -0.018, 0.002, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.463, -0.018, 1.502, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.417, -0.018, 1.502, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{ -0.023, -0.018, 1.167, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_WoodSmallWallThird_Preview: DZE_WoodSmallWallThird {};

	class DZE_WoodTriangleWall {
		points[] = {
			{     0, 0,    0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -1.26, 0, 1.32, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.26, 0, 1.32, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{     0, 0, 2.59, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};	
	class DZE_Wood_Triangle_Wall_Preview: DZE_WoodTriangleWall {};

	class DZE_WoodGateFrame { // 4.88m
		points[] = {
			{  0.022, 0.02, 0.025, $STR_SNAPPING_POINT_BOTTOM, DZE_SNAP_META_BOTTOM},
			{ -2.418, 0.02, 1.525, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.462, 0.02, 1.525, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{  0.022, 0.02, 6.025, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class Land_DZE_WoodGate:	DZE_WoodGateFrame {};
	class Land_DZE_WoodGateLocked:	DZE_WoodGateFrame {};
	class DZE_WoodGate_Preview:	DZE_WoodGateFrame {};

	class DZE_WoodPillar {
		points[] = {
			{    0,      0, 0.016, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{    0, -0.158, 1.516, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{    0,  0.158, 1.516, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -0.2,      0, 1.516, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  0.2,      0, 1.516, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0,      0, 3.016, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_Wood_Pillar_Preview: DZE_WoodPillar {};

	class DZE_Stairs {
		points[] = {
			{ -0.02, 0.012, -0.02, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{ -0.02, 1.337, -0.02, $STR_SNAPPING_POINT_BOTTOM, DZE_SNAP_META_BOTTOM},
			{ -0.02, 3.662,  2.98, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -0.81, 1.812,  1.48, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  0.77, 1.812,  1.48, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	class DZE_WoodStairsSans:		DZE_Stairs {};
	class DZE_WoodStairsSans_Preview:	DZE_Stairs {};
	class DZE_WoodStairs:			DZE_Stairs {};
	class DZE_WoodStairs_Preview:		DZE_Stairs {};
	class DZE_WoodStairsRails:		DZE_Stairs {};

	class DZE_WoodRamp {
		points[] = {
			{  0.065,    0, -0.18, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -1.585, 3.15,  0.95, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.715, 3.15,  0.95, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{  0.065, 6.30,  2.82, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP},
			{  0.065, 6.30, -0.18, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT}
		};
	};
	class DZE_WoodRamp_Preview: DZE_WoodRamp {};

	class DZE_WoodLadder {
		points[] = {
			{    0, 0,     0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -0.4, 0, 1.725, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  0.4, 0, 1.725, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0, 0, 3.450, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_WoodLadder_Preview: DZE_WoodLadder {};

	class DZE_WoodHandrail {
		points[] = {
			{  0.016, 0.001, 0.002, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -1.164, 0.001, 0.491, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.196, 0.001, 0.491, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{  0.016, 0.001,  0.98, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_Wood_Handrail_Preview: DZE_WoodHandrail {};

	class DZE_SimpleFootbridge {
		points[] = {
			{ 0,    0, 0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{ 0, -3.0, 0, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{ 0,  3.0, 0, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT}
		};
	};

	class DZE_WoodenFootbridge {
		points[] = {
			{ 0,    0, 0.05, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{ 0, -2.4, 0.05, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{ 0,  2.4, 0.05, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT}
		};
	};

	class DZE_Windbreak {
		points[] = {
			{      0, 0, 0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{ -1.975, 0, 0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.975, 0, 0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//					Fortifications
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class DZE_Land_HBarrier1 {
		points[] = {
			{  0.01, -0.01, -0.665, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{  0.01, -0.81,  0.075, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{  0.01,  0.79,  0.075, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -0.59, -0.01,  0.075, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  0.61, -0.01,  0.075, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{  0.01, -0.01,  0.835, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_Land_HBarrier3 {
		points[] = {
			{    0, -0.03, -0.62, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{    0, -0.78,  0.12, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{    0,  0.72,  0.12, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -1.7, -0.03,  0.12, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.7, -0.03,  0.12, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0, -0.03,  0.88, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_Land_HBarrier5 {
		points[] = {
			{     0,  0.1, -0.7, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{     0, -0.7, 0.04, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{     0,  0.9, 0.04, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -2.85,  0.1, 0.04, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.85,  0.1, 0.04, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{     0,  0.1,  0.8, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_Land_HBarrier5Curved {
		points[] = {
			{  0.01, -0.255, -0.6975, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{  0.12,  -1.07,  0.0425, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{ -0.10,   0.56,  0.0425, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -2.90,  -0.31,  0.0425, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.78,   0.42,  0.0425, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{  0.01, -0.255,  0.9025, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_Sandbag {
		points[] = {
			{    0, 0, -0.4, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -1.5, 0,    0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.5, 0,    0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0, 0,  0.4, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_BagFenceRound {
		points[] = {
			{      0,    0, -0.4, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -1.295, 0.38,    0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.295, 0.38,    0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0,    0,  0.4, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_SandNest {
		points[] = {
			{     0,   0,    -1, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -1.75, 0.8, -0.44, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.75, 0.8, -0.44, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};

	class DZE_SandNestLarge {
		points[] = {
			{    0,    0,    -1, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -4.5,    0, -0.44, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  4.5,    0, -0.44, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0,  3.8, -0.44, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{    0, -5.2, -0.44, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK}
		};
	};

	class DZE_HeavyBagFence {
		points[] = {
			{    0, 0, -0.377709, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},		// -0,3
			{ -1.5, 0,       0.1, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.5, 0,       0.1, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0, 0,       0.5, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_HeavyBagFenceCorner {
		points[] = {
			{    0,    0, -0.377709, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},		// -0.3
			{  1.5, -1.2,       0.1, $STR_SNAPPING_POINT_BACK_RIGHT, DZE_SNAP_META_BACK},
			{    0, -1.2,       0.5, $STR_SNAPPING_POINT_BACK_CENTER, DZE_SNAP_META_BACK},
			{ -1.5, -1.2,       0.1, $STR_SNAPPING_POINT_BACK_LEFT, DZE_SNAP_META_BACK},
			{ -1.3,    0,       0.5, $STR_SNAPPING_POINT_LEFT_CENTER, DZE_SNAP_META_LEFT},
			{ -1.3,  1.5,       0.1, $STR_SNAPPING_POINT_LEFT_FRONT, DZE_SNAP_META_LEFT}
		};
	};

	class DZE_HeavyBagFenceRound {
		points[] = {
			{     0,      0, -0.293546, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},	// -0.2158
			{ -2.78,   -1.2,    0.1842, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.78,   -1.2,    0.1842, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{     0,  1.075,    0.5842, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_Land_WarfareBarrier5x {
		points[] = {
			{      0,     0,  -0.55, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{      0, -0.63, 0.1375, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{      0,  0.63, 0.1375, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -3.925,     0, 0.1375, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  3.925,     0, 0.1375, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0,     0, 0.8250, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	
	class DZE_Land_WarfareBarrier10x {
		points[] = {
			{     0,     0, -0.5328, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{     0, -0.63,  0.1547, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{     0,  0.63,  0.1547, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -7.85,     0,  0.1547, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  7.85,     0,  0.1547, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{     0,     0,  0.8422, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	
	class DZE_Land_WarfareBarrier10xTall {
		points[] = {
			{     0,     0, -1.0749, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{     0, -1.26, -0.3874, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{     0,  1.26, -0.3874, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -7.85,     0, -0.3874, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  7.85,     0, -0.3874, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{     0,     0,  1.6151, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_ConcreteBarrier {
		points[] = {
			{    0, 0, -0.4, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -1.3, 0,    0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.3, 0,    0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0, 0,  0.3, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_ConcreteBarrierStriped: DZE_ConcreteBarrier {};

	class DZE_ConcreteWall {
		points[] = {
			{ -0.031, 0,   -1.75, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -1.276, 0, -0.0125, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.214, 0, -0.0125, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{ -0.031, 0,   1.725, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_ConcretePipe {
		points[] = {
			{      0,     0,      0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{      0, -1.45, -1.225, $STR_SNAPPING_POINT_BACK_CENTER, DZE_SNAP_META_BACK},
			{ -1.225, -1.45,      0, $STR_SNAPPING_POINT_BACK_LEFT, DZE_SNAP_META_BACK},
			{  1.225, -1.45,      0, $STR_SNAPPING_POINT_BACK_RIGHT, DZE_SNAP_META_BACK},
			{      0, -1.45,  1.225, $STR_SNAPPING_POINT_BACK_TOP, DZE_SNAP_META_BACK},
			{      0,  1.45, -1.225, $STR_SNAPPING_POINT_FRONT_CENTER, DZE_SNAP_META_FRONT},
			{ -1.225,  1.45,      0, $STR_SNAPPING_POINT_FRONT_LEFT, DZE_SNAP_META_FRONT},
			{  1.225,  1.45,      0, $STR_SNAPPING_POINT_FRONT_RIGHT, DZE_SNAP_META_FRONT},
			{      0,  1.45,  1.225, $STR_SNAPPING_POINT_FRONT_TOP, DZE_SNAP_META_FRONT},
			{ -1.225,     0,      0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.225,     0,      0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0,     0,  1.225, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP},
			{      0,     0, -1.225, $STR_SNAPPING_POINT_BOTTOM, DZE_SNAP_META_BOTTOM}
		};
	};

	class DZE_DragonTeeth {
		points[] = {
			{    0, 0, 0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{ -4.5, 0, 0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  4.5, 0, 0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};

	class DZE_DragonTeethBig {
		points[] = {
			{    0, 0, 0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{ -4.9, 0, 0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  4.9, 0, 0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};

	class Fort_RazorWire {
		points[] = {
			{    0,     0,    0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{    0, -0.95, -0.3, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{    0,  0.95, -0.3, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -4.1,     0, -0.3, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  4.1,     0, -0.3, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0,     0,    1, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_FortifiedWire {
		points[] = {
			{    0,     0,    0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{    0, -0.95, -0.3, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{    0,  0.95, -0.3, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -2.9,     0, -0.3, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.9,     0, -0.3, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0,     0,    1, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_BarbedGate {
		points[] = {
			{ -1.88, 0.04, 0.2, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.88, 0.04, 0.2, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};

	class DZE_Concrete_Bunker {
		points[] = {
			{  -0.04, -0.007, 0.01, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.527, -0.007, 1.71, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.447, -0.007, 1.71, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{  -0.04, -0.007, 3.41, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};	
	};
	class DZE_Concrete_Bunker_Locked: DZE_Concrete_Bunker {};
	class DZE_Concrete_Bunker_Preview: DZE_Concrete_Bunker {};

	class DZE_MetalPanel {
		points[] = {
			{    0, 0,   0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -1.5, 0, 0.7, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.5, 0, 0.7, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{    0, 0,   2, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};

	class DZE_MetalGate {
		points[] = {
			{   -2, 0, 0.3, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_PIVOT},
			{ -4.1, 0, 0.3, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{    0, 0, 0.3, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	
	class DZE_Fence_corrugated {
		points[] = {
			{     0, 0, -0.45, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -1.99, 0,  0.00, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.99, 0,  0.00, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};
	
	class DZE_StickFence {
		points[] = {
			{     0, 0,   0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.95, 0, 0.3, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.95, 0, 0.3, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};

	class DZE_WoodenFence_1_foundation {
		points[] = {
			{      0, 0,       0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.535, 0,    0.95, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.535, 0,    0.95, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0, 0, 1.78042, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};	
	
	class DZE_WoodenFence_1_frame: DZE_WoodenFence_1_foundation {};
	class DZE_WoodenFence_quaterpanel: DZE_WoodenFence_1_foundation {};
	class DZE_WoodenFence_halfpanel: DZE_WoodenFence_1_foundation {};
	class DZE_WoodenFence_thirdpanel: DZE_WoodenFence_1_foundation {};
	class DZE_WoodenFence_1: DZE_WoodenFence_1_foundation {};
	
	class DZE_WoodenFence_4 {
		points[] = {
			{      0, 0,       0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.535, 0,    0.95, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.535, 0,    0.95, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0, 0, 3.58042, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	
	class DZE_WoodenGate_4: DZE_WoodenFence_4 {};
	class DZE_WoodenFence_5: DZE_WoodenFence_4 {};
	class DZE_WoodenFence_6: DZE_WoodenFence_4 {};
	class DZE_WoodenFence_7: DZE_WoodenFence_4 {};
	class DZE_WoodenFence_7_Preview: DZE_WoodenFence_4 {};

	class DZE_WoodenFence_2 {
		points[] = {
			{      0, 0,       0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.535, 0,    0.95, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.535, 0,    0.95, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0, 0, 2.68042, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	
	class DZE_WoodenFence_3: DZE_WoodenFence_2 {};
	class DZE_WoodenGate_foundation: DZE_WoodenFence_2 {};
	class DZE_WoodenGate_1: DZE_WoodenFence_2 {};
	class DZE_WoodenGate_2: DZE_WoodenFence_2 {};
	class DZE_WoodenGate_3: DZE_WoodenFence_2 {};

	class DZE_MetalFence_1_foundation {
		points[] = {
			{      0, 0,       0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.535, 0,    0.95, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.535, 0,    0.95, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0, 0, 1.78042, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	
	class DZE_MetalFence_1_frame: DZE_MetalFence_1_foundation {};
	class DZE_MetalFence_halfpanel: DZE_MetalFence_1_foundation {};
	class DZE_MetalFence_thirdpanel: DZE_MetalFence_1_foundation {};
	class DZE_MetalFence_1: DZE_MetalFence_1_foundation {};
	
	class DZE_MetalFence_2 {
		points[] = {
			{      0, 0,       0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.575, 0,    0.95, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.575, 0,    0.95, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0, 0, 2.68042, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_MetalFence_3: DZE_MetalFence_2 {};
	
	class DZE_MetalFence_4 {
		points[] = {
			{      0, 0,       0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -2.575, 0,    0.95, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  2.575, 0,    0.95, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0, 0, 3.58042, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_MetalFence_5: DZE_MetalFence_4 {};
	class DZE_MetalFence_6: DZE_MetalFence_4 {};
	class DZE_MetalFence_7: DZE_MetalFence_4 {};
	class DZE_MetalFence_7_Preview: DZE_MetalFence_4 {};

	///////////////////////////////////////////////////////////////////////////////////////////
	//
	//						Storage
	//
	///////////////////////////////////////////////////////////////////////////////////////////

	class DZE_WoodCrate {
		points[] = {
			{     0,     0, -0.47, $STR_SNAPPING_POINT_BOTTOM, DZE_SNAP_META_BOTTOM},
			{     0, -0.47,     0, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{     0,  0.47,     0, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -0.47,     0,     0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  0.47,     0,     0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{     0,     0,  0.47, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_WoodCrate2: DZE_WoodCrate {};

	class DZE_GunRack {
		points[] = {
			{ -0.0575, -0.0995, -0.505, $STR_SNAPPING_POINT_BOTTOM, DZE_SNAP_META_BOTTOM},
			{ -0.0575, -0.5745, -0.140, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{ -0.0575,  0.3755, -0.140, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -0.4475, -0.0995, -0.140, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  0.3325, -0.0995, -0.140, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{ -0.0575, -0.0995,  0.225, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_GunRack2: DZE_GunRack {};

	class DZE_StorageCrate {
		points[] = {
			{     0,    0, -0.22, $STR_SNAPPING_POINT_BOTTOM, DZE_SNAP_META_BOTTOM},
			{     0, -0.2,     0, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{     0,  0.2,     0, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -0.44,    0,     0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  0.44,    0,     0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{     0,    0,  0.08, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};		
	};

	class DZE_StorageShed {
		points[] = {
			{ -0.215, -0.075,   0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{ -0.215,  -1.35, 1.5, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{ -0.215,    1.2, 1.5, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{     -2, -0.075, 1.5, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{   1.57, -0.075, 1.5, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{ -0.215, -0.075,   3, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_StorageShed2: DZE_StorageShed {};
	class DZE_StorageShed_Preview: DZE_StorageShed {};

	class DZE_WoodShack {
		points[] = {
			{     0, 0.65, -1.1, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{     0, -1.1,    0, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{     0,  2.4,    0, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -1.18, 0.65,    0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  1.18, 0.65,    0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{     0, 0.65,  1.1, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_WoodShack2: DZE_WoodShack {};

	class DZE_Wooden_shed {
		points[] = {
			{  0.7,     0, -1.6, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{  0.7, -1.64,    0, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{  0.7,  1.64,    0, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -1.7,     0,    0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  3.1,     0,    0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{  0.7,     0,  1.6, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};	
	class DZE_Wooden_shed2: DZE_Wooden_shed {};

	class DZE_OutHouse {
		points[] = {
			{     0,  0.0675, -1.25, $STR_SNAPPING_POINT_BOTTOM, DZE_SNAP_META_BOTTOM},
			{     0, -0.5825,     0, $STR_SNAPPING_POINT_BACK, DZE_SNAP_META_BACK},
			{     0,  0.7175,     0, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -0.59,  0.0675,     0, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  0.59,  0.0675,     0, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};
	};

	class DZE_SafeLocked {
		points[] = {
			{      0,     0,     0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{      0, 0.284, 0.615, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{ -0.362,     0, 0.615, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  0.362,     0, 0.615, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT},
			{      0,     0,  1.23, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP}
		};
	};
	class DZE_Safe: DZE_SafeLocked {};
	class DZE_Safe2: DZE_SafeLocked {};
	class DZE_Safe2Locked: DZE_SafeLocked {};
	class DZE_SafeBroken: DZE_SafeLocked {};
	class DZE_Safe2Broken: DZE_SafeLocked {};

	class DZE_SafeTallLocked {
		points[] = {
			{     0,    0,     0, $STR_SNAPPING_POINT_PIVOT, DZE_SNAP_META_BOTTOM},
			{     0, 0.35, 0.615, $STR_SNAPPING_POINT_FRONT, DZE_SNAP_META_FRONT},
			{     0,    0,     2, $STR_SNAPPING_POINT_TOP, DZE_SNAP_META_TOP},
			{ -0.42,    0, 0.615, $STR_SNAPPING_POINT_LEFT, DZE_SNAP_META_LEFT},
			{  0.42,    0, 0.615, $STR_SNAPPING_POINT_RIGHT, DZE_SNAP_META_RIGHT}
		};		
	};

	class DZE_SafeTall: DZE_SafeTallLocked {};
	class DZE_SafeTallBroken: DZE_SafeTallLocked {};
};
#undef DZE_SNAP_META_BOTTOM
#undef DZE_SNAP_META_TOP
#undef DZE_SNAP_META_RIGHT
#undef DZE_SNAP_META_LEFT
#undef DZE_SNAP_META_FRONT
#undef DZE_SNAP_META_BACK
#undef DZE_SNAP_META_PIVOT
#undef DZE_SNAP_CONFIG_TYPE_EDGE
#undef DZE_SNAP_CONFIG_TYPE_PIVOT
