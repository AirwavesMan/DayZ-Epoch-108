///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_snapBuilding
//
//	Description:	Displays the current snap-building helper panel during object placement.
//	Groups:		Build, Snap Building
//
//	Syntax:		[distFromPlot, radius, snappingEnabled, vectoringEnabled, isStaticWeapon, snapList, object] spawn DZE_fnc_snapBuilding
//
//	Parameters:	distFromPlot: String - Plot-distance availability state
//			radius: Number - Plot radius
//			snappingEnabled: Boolean - Whether snapping is available
//			vectoringEnabled: Boolean - Whether vector rotation is available
//			isStaticWeapon: Boolean - Whether the object is a static weapon
//			snapList: Array - Localized snapping states and point names
//			object: Object - Object being built
//
//	Return Value:	Nothing
//
//	Called by:	Client
//
///////////////////////////////////////////////////////////////////////////////////////////////////
//#define DEBUG_DZE_FNC_SNAP_BUILDING

#include "\z\addons\dayz_code\functions\include\defines.hpp"

#ifdef DEBUG_DZE_FNC_SNAP_BUILDING
	diag_log format ['[Client Debug]: [DZE_fnc_snapBuilding]: Function called with arguments: %1',_this];
#endif

/**
	Height cur / max

	[Q] [E] Yaw
	[L] Axis [World] [Local]
	[M] Arrow Keys [Pitch / Bank] [Move X/Y]
**/

local _distFromPlot	= p0;
local _radius		= p1;
local _snappingEnabled	= p2;
local _vectoringEnabled	= p3;
local _isStaticWeapon	= p4;
local _snapList		= p5;
local _object		= p6;

BUILD_DISTANCE_FROM_PLOT = 0;	/// **** TODO **** check this

// The panel belongs only to the active object-placement stage.
if (BUILD_STAGE != BUILD_HOTKEYS_ACTIVE) exitWith {};

local _header		= '<img align=''left'' size=''1'' image=''\z\addons\dayz_code\gui\EpochSnapBuilding.paa''></img><br/>';
local _format		= '<t align=''left'' size=''0.4'' font=''Zeppelin33''>';
local _COL		= '<t shadow=''2'' color=';
local _WHT		= _COL + '''#E0E0E0''>';		// white	'#FFFFFF'
local _GRN		= _COL + '''#20E020''>';		// green
local _ORA		= _COL + '''#FF8800''>';		// orange
local _GRY		= _COL + '''#808080''>';		// greyed out
local _TRN		= _format + '<t shadow=''0'' color=''#00000000''>';	// transparent
local _VEC		= [_GRY, _WHT] select _vectoringEnabled;	// initial text color
local _TER		= [_VEC, _WHT] select _isStaticWeapon;		// initial text color
local _END		= '</t>';			// end of segment
local _NL		= _END + '<br/>';		// new line
local _spacing		= _TRN + '.' + _NL;		// blank line

local _strPitch		= localize 'STR_SNAPPING_STATUS_PITCH';
local _strBank		= localize 'STR_SNAPPING_STATUS_BANK';
local _strRotate	= localize 'STR_SNAPPING_STATUS_ROTATION';
local _tab		= localize 'STR_SNAPPING_KEY_TAB';
local _ctrl		= localize 'STR_SNAPPING_KEYBOARD_ENGLISH_CTRL';
local _PgUp		= localize 'STR_SNAPPING_KEYBOARD_ENGLISH_PAGE_UP';
local _PgDn		= localize 'STR_SNAPPING_KEYBOARD_ENGLISH_PAGE_DOWN';
local _degKeys		= toArray (localize 'STR_SNAPPING_KEYBOARD_ENGLISH_ADJUST_DEGREES_KEYS');

if (DZE_KEYBOARD == DZE_GERMAN) then {
	_ctrl		= localize 'STR_SNAPPING_KEYBOARD_GERMAN_CTRL';
	_PgUp		= localize 'STR_SNAPPING_KEYBOARD_GERMAN_PAGE_UP';
	_PgDn		= localize 'STR_SNAPPING_KEYBOARD_GERMAN_PAGE_DOWN';
	_degKeys	= toArray (localize 'STR_SNAPPING_KEYBOARD_GERMAN_ADJUST_DEGREES_KEYS');
};
local _decrease		= toString [_degKeys select 0];
local _increase		= toString [_degKeys select 1];
local _hyphen		= _WHT + '-' + _ORA;
local _slash		= _WHT + '/' + _ORA;
local _colon		= _WHT + ': ';
local _pipe		= _WHT + ' | ' + _ORA;
local _na		= _GRY + '-';
local _OBR		= _ORA + '[';
local _WBR		= _WHT + ']';
local _DBR		= '] [';
local _BRW		= '] ' + _WHT;
local _hpsp		= _hyphen + _PgUp + _slash + _PgDn + _BRW;
local _handedness	= ['STR_SNAPPING_KEY_ARROW_KEYS','STR_SNAPPING_KEY_NUMPAD_ARROW_KEYS'] select DZE_LEFT_HANDED;

local _HK = _OBR + _tab + _DBR + localize 'STR_SNAPPING_KEY_SHIFT' + _hyphen + _tab + _BRW	+ localize 'STR_SNAPPING_HELP_NEXT_PREVIOUS_POINT'	+ _NL +
	_OBR + _PgUp + _DBR + _PgDn + _BRW							+ localize 'STR_SNAPPING_HELP_ADJUST_HEIGHT_10CM'		+ _NL +
	_OBR + _ctrl + _hpsp									+ localize 'STR_SNAPPING_HELP_ADJUST_HEIGHT_1CM'		+ _NL +
	_OBR + localize 'STR_SNAPPING_KEY_ALT'  + _hpsp						+ localize 'STR_SNAPPING_HELP_ADJUST_HEIGHT_1M'		+ _NL +
	_OBR + localize _handedness + _BRW								+ _strPitch + ' / ' + _strBank			+ _NL +
	_ORA + '[Q] [E] '										+ _WHT + _strRotate				+ _NL +
	_OBR + _decrease + _DBR + _increase + _BRW							+ localize 'STR_SNAPPING_HELP_ADJUST_DEGREES'		+ _NL +
	_spacing +
	_ORA + '[L] '										+ _WHT + localize 'STR_SNAPPING_HELP_LOCAL_AXIS' + ' [%1' + _NL +
	_ORA + '[T] '										+ _TER + localize 'STR_SNAPPING_HELP_TERRAIN_ALIGNMENT'	+ _NL +
	_ORA + '[P] '										+ _WHT + localize 'STR_SNAPPING_HELP_BASE_BOUNDARY'	+ _NL +
	_ORA + '[F] '										+ _WHT + localize 'STR_SNAPPING_HELP_RELEASE_HOLD'	+ _NL +
	_ORA + '[H] '										+ _WHT + localize 'STR_SNAPPING_HELP_HIDE_PANEL'	+ _NL +
	_spacing;
local _H2 = _OBR + localize 'STR_SNAPPING_KEY_ESCAPE' + _BRW					+ localize 'STR_SNAPPING_HELP_CANCEL'		+ _NL +
	_OBR + localize 'STR_SNAPPING_KEY_BACKSPACE' + _BRW					+ localize 'STR_SNAPPING_HELP_RESET'		+ _NL +
	_OBR + localize 'STR_SNAPPING_KEY_SPACE_BAR' + _BRW						+ localize 'STR_SNAPPING_HELP_BUILD'		+ _END;

local _distance = 0;
if (_distFromPlot != '0') then {
	_distance	= _na;
	_radius		= _na;
} else {
	_radius = str _radius + 'm';
};

local _snapState	= localize 'STR_SNAPPING_STATE_DISABLED';
local _SNP		= _GRY;						// initial text color
local _snapRange	= '';
local _snapMaxIdx	= (count _snapList) - 3;			// 0-based index max
local _pitch		= 0;
local _bank		= 0;
local _rotate		= 0;
local _rotation		= ORIGIN;
local _pitchValue	= 0;
local _bankValue	= 0;
local _rotateValue	= 0;
local _localModeOn	= _GRN	+ (localize 'STR_SNAPPING_STATE_ON')	+ _WBR;
local _localModeOff	= _ORA	+ (localize 'STR_SNAPPING_STATE_OFF')	+ _WBR;
local _txt		= '';
local _screenX		= 0.67 * safezoneW + safezoneX;
local _screenY		= 0.46 * safezoneH + safezoneY;

local _tutDistance	= _ORA + localize 'STR_SNAPPING_STATUS_DISTANCE_FROM_BASE' + _colon + '%1' + _pipe + localize 'STR_SNAPPING_STATUS_RADIUS' + _colon + '%2' + _NL;
local _tutSnapping	= _ORA + localize 'STR_SNAPPING_STATUS_MODE' + _colon + '[%1' + _WHT + ']%2' + _NL;
local _tutVectoring	= _ORA + _strPitch + _colon + '%1' + _pipe + _strBank + _colon + '%2' + _pipe + _strRotate + _colon + '%3' + _NL;
local _tutDegrees	= _ORA + localize 'STR_SNAPPING_STATUS_DEGREES' + _colon + '%1' + _NL;

while {BUILD_STAGE == BUILD_HOTKEYS_ACTIVE} do {

	if (!BUILD_HIDE_PANEL) then {

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//
		//					Distance From Plot
		//
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////

		if (_distFromPlot == '0') then {

			_distance = [BUILD_DISTANCE_FROM_PLOT, 1] call BIS_fnc_cutDecimals;

			if (_distance - floor _distance == 0) then {_distance = str _distance + '.0'};
		};

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//
		//						Snapping
		//
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////

		if (!skipUpdates) then {
			if (_snappingEnabled) then {

				// Snap state and indices are synchronized by DZE_fnc_snapStateTransition: OFF 0/-2, ON/Auto 1/-1, Selected point+2/point.

				_snapState = _snapList select DZE_SnapTabIdx;

				if (snapActionState == localize 'STR_SNAPPING_STATE_ON' &&
					{snapActionStateSelect == localize 'STR_SNAPPING_MODE_MANUAL'}) then {
					_SNP = _GRN;
					_snapState = snapActionStateSelect;	// Manual (Action Menu only)
				} else {
					_SNP = [_ORA, _GRN] select (DZE_SnapTabIdx >= 1);	// OFF / Auto / Selected
				};

				_snapRange = if (DZE_SnapSelIdx >= 0) then {
					format [' [ ' + _GRN + '%1' + _WHT + ' / %2 ]', DZE_SnapSelIdx + 1, _snapMaxIdx + 1]
				} else {
					''
				};
			};

			/////////////////////////////////////////////////////////////////////////////////////////////////////////////
			//
			//						Vectoring
			//
			/////////////////////////////////////////////////////////////////////////////////////////////////////////////

			// Read the complete world orientation so composed local rotations and local yaw remain visible.
			_rotation = matrixToEuler(getRotationMatrix(_object));
			_pitchValue = _rotation select X_AXIS;
			_bankValue = _rotation select Y_AXIS;
			_rotateValue = _rotation select Z_AXIS;

			// Present the 0-360 Euler result as signed angles and suppress negative zero.
			if (_pitchValue > 180) then {_pitchValue = _pitchValue - 360};
			if (_bankValue > 180) then {_bankValue = _bankValue - 360};
			if (_rotateValue > 180) then {_rotateValue = _rotateValue - 360};
			if (abs _pitchValue < 0.005) then {_pitchValue = 0};
			if (abs _bankValue < 0.005) then {_bankValue = 0};
			if (abs _rotateValue < 0.005) then {_rotateValue = 0};

			_pitch = _VEC + str ([_pitchValue, 2] call BIS_fnc_cutDecimals);
			_bank = _VEC + str ([_bankValue, 2] call BIS_fnc_cutDecimals);
			_rotate = [_rotateValue, 2] call BIS_fnc_cutDecimals;
		};

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//
		//						Local Mode
		//
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//
		//						Dynamic Text
		//
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////

		_txt = _header + _format +
			format[_tutDistance,	_distance, _radius] +
			format[_tutSnapping,	_SNP + _snapState, _snapRange] +
			_spacing +
			format[_tutVectoring,	_pitch, _bank, _rotate] +
			format[_tutDegrees,	BUILD_CUR_DEGREE] +
			_spacing +
			// hotkeys
			format[_HK, [_localModeOff, _localModeOn] select BUILD_AXIS_LOCAL] +
			_H2;

		[_txt, _screenX, _screenY, 0.1, 0, 0, 17] spawn BIS_fnc_dynamicText;

	};

	uiSleep 0.08;
};
