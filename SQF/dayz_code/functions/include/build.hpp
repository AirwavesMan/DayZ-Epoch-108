#ifndef BUILD_NOKEY

// build key index
#define BUILD_NOKEY                     0 // default
#define BUILD_MOVE                      1 // PGUP/PGDN / ARROW KEYS
#define BUILD_ROTATE2D                  2 // Q/E
#define BUILD_ROTATE3D                  3 // Q/E / ARROW KEYS
#define BUILD_DEGREE                    4 // MINUS/EQUALS
#define BUILD_SNAP                      5 // TAB/SHIFT-TAB
#define BUILD_TERRAIN_ALIGN             6 // T
#define BUILD_PLOT_BOUNDARY             7 // P
#define BUILD_HOLD_RELEASE              8 // F
#define BUILD_RESET                     9 // BACKSPACE
#define BUILD_BUILD                    10 // SPACE BAR
#define BUILD_VECTOR_RESET             11 // Vector action menu

// vector action type
#define BUILD_VECTOR_ACTION_TYPE_BOTH       0
#define BUILD_VECTOR_ACTION_TYPE_ROTATION   1
#define BUILD_VECTOR_ACTION_TYPE_DEGREE     2

// build move index
#define BUILD_MOVE_UP                   [0,6] select BUILD_AXIS_LOCAL // PGUP
#define BUILD_MOVE_DOWN                 [1,7] select BUILD_AXIS_LOCAL // PGDN
#define BUILD_MOVE_RIGHT                [2,8] select BUILD_AXIS_LOCAL // RIGHT ARROW
#define BUILD_MOVE_LEFT                 [3,9] select BUILD_AXIS_LOCAL // LEFT ARROW
#define BUILD_MOVE_FWD                 [4,10] select BUILD_AXIS_LOCAL // UP ARROW
#define BUILD_MOVE_BACK                [5,11] select BUILD_AXIS_LOCAL // DOWN ARROW

// build transform metrics
#define BUILD_MAX_DEGREE               90
#define BUILD_MIN_DEGREE                1
#define BUILD_MAX_MOVE                  1
#define BUILD_MED_MOVE                  0.1
#define BUILD_MIN_MOVE                  0.01

// lockable storage
#define BUILD_LOCKBOX                   2
#define BUILD_COMBO_LOCK                3
#define BUILD_SAFE                      4

// build stage
#define BUILD_INACTIVE                  0
#define BUILD_CANCELLED                 1
#define BUILD_HOTKEYS_ACTIVE            2 // main loop
#define BUILD_NOW_BUILDING              3 // hotkeys inactive

// modular-build context
#define BUILD_CONTEXT_OBJECT                    0
#define BUILD_CONTEXT_OBJECT_HELPER             1
#define BUILD_CONTEXT_BASE_HELPER               2
#define BUILD_CONTEXT_CENTER_HELPER             3
#define BUILD_CONTEXT_HEIGHT_HELPER             4
#define BUILD_CONTEXT_USE_MODEL_CENTER          5
#define BUILD_CONTEXT_PREVENT_UNDERGROUND       6
#define BUILD_CONTEXT_BASE_OFFSET               7
#define BUILD_CONTEXT_MIN_HEIGHT                8
#define BUILD_CONTEXT_OFFSET                    9
#define BUILD_CONTEXT_POSITION_RELATIVE        10
#define BUILD_CONTEXT_CENTER_PREVIOUS_ASL      11
#define BUILD_CONTEXT_VECTOR                   12
#define BUILD_CONTEXT_OBJECT_POSITION_ASL      13
#define BUILD_CONTEXT_DIRECTION_Y              14
#define BUILD_CONTEXT_TOO_LOW                  15
#define BUILD_CONTEXT_MODEL_POSITION_ASL       16
#define BUILD_CONTEXT_PLAYER_POSITION_ASL      17
#define BUILD_CONTEXT_HELPER_POSITION_ASL      18
#define BUILD_CONTEXT_MOVE_STATE               19
#define BUILD_CONTEXT_DISPLAY_NAME             20
#define BUILD_CONTEXT_VECTORING_ENABLED        21
#define BUILD_CONTEXT_STATIC_WEAPON            22
#define BUILD_CONTEXT_HIT_SOUNDS               23
#define BUILD_CONTEXT_HIT_INDEX                24
#define BUILD_CONTEXT_SCREAM_PREFIX            25
#define BUILD_CONTEXT_SCREAM_SOUNDS            26
#define BUILD_CONTEXT_SCREAM_INDEX             27
#define BUILD_CONTEXT_SCREAM_COUNT             28
#define BUILD_CONTEXT_SNAPPING_ENABLED         29
#define BUILD_CONTEXT_CLASS_NAME               30
#define BUILD_CONTEXT_SNAP_SESSION             31
#define BUILD_CONTEXT_HELPERS                  32
#define BUILD_CONTEXT_HEIGHT_POSITION_ASL      33
#define BUILD_CONTEXT_UNDERGROUND_CANCELLED    34
#define BUILD_CONTEXT_SIZE                     35

// build-validation stages
#define BUILD_VALIDATION_STAGE_PREBUILD         0
#define BUILD_VALIDATION_STAGE_PREVIEW          1
#define BUILD_VALIDATION_STAGE_FINAL            2

// build-validation context
#define BUILD_VALIDATION_DISTANCE               0
#define BUILD_VALIDATION_OZONE                  1
#define BUILD_VALIDATION_CLASS_NAME             2
#define BUILD_VALIDATION_DISPLAY_NAME           3
#define BUILD_VALIDATION_ITEM                   4
#define BUILD_VALIDATION_REQUIRED_ITEMS         5
#define BUILD_VALIDATION_PLAYER_POSITION_ASL    6
#define BUILD_VALIDATION_OBJECT                 7
#define BUILD_VALIDATION_MODEL_POSITION_ASL     8
#define BUILD_VALIDATION_HEIGHT_POSITION_ASL    9
#define BUILD_VALIDATION_MOVE_STATE            10
#define BUILD_VALIDATION_NEAREST_POLE          11
#define BUILD_VALIDATION_NEAREST_POLE_ASL      12
#define BUILD_VALIDATION_FAST_MOVE_STARTED_AT  13
#define BUILD_VALIDATION_STAGE                 14
#define BUILD_VALIDATION_SIZE                  15

// snap-point metadata
#define SNAP_POINT_TYPE_INVALID        -1
#define SNAP_POINT_TYPE_PIVOT           0
#define SNAP_POINT_TYPE_EDGE            1
#define SNAP_POINT_NORMAL_EPSILON       0.001
#define SNAP_POINT_OPPOSING_DOT        -0.999
#define SNAP_POINT_CONNECTION_DOT       0.001
#define SNAP_SEARCH_POSITION_EPSILON    0.005
#define SNAP_SEARCH_VECTOR_EPSILON      0.0001
#define SNAP_SEARCH_INTERVAL            0.04

#define X_AXIS                          0
#define Y_AXIS                          1
#define Z_AXIS                          2

#endif

/**
BUILD_KEY_QUEUE
BUILD_CUR_DEGREE
BUILD_AXIS_LOCAL
BUILD_ROTATION_MODE
BUILD_HOTKEYS_ACTIVE
BUILD_DEGREES	= sanitized copy of DZE_vectorDegrees;
**/
