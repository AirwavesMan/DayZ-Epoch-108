///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	DZE_fnc_onKeyDown
//
//	Description:	Handle key down operations.
//	Groups:		Keyboard
//
//	Syntax:		array call DZE_fnc_onKeyDown
//
//	Return Value:	Boolean
//
//	Called by:	Client (onKeyDown event handler)
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "\z\addons\dayz_code\functions\include\macros.hpp"
#include "\ca\editor\Data\Scripts\dikCodes.h"

local _dikCode	= _this select 1;
local _handled	= false;

if (isNil 'keyboard_keys') then {

	keyboard_keys	= [];
	channel_keys	= [];
	voice_keys	= [];

	{addArray(channel_keys, actionKeys _x)} forEach ['NextChannel','PrevChannel'];
	{addArray(voice_keys, actionKeys _x)} forEach voice_actions;

	keyboard_keys resize 256;

	local _keyArray = [

		[[DIK_ESCAPE],				{_this call kb_escape}],
		[[DIK_F1],				{_this call kb_mute}],
		[[DIK_F3],				{_this call kb_statusUI}],
		[[DIK_F5],				{_this call kb_openGroups}],
		[[DIK_F6],				{_this call kb_handed}],
		[[DIK_F7],				{_this call kb_layout}],
		[[DIK_F8],				{_this call kb_lootText}],

		[[DIK_1, DIK_2, DIK_3],			{_this call kb_switchWeapon}],
		[[DIK_0],				{_this call kb_autoRun}],

		[[DIK_MINUS],				{_this call kb_minus}],
		[[DIK_EQUALS],				{_this call kb_equals}],
		[[DIK_BACKSPACE],			{_this call kb_backspace}],
		[[DIK_TAB],				{_this call kb_tab}],
		[[DIK_PGUP],				{_this call kb_PgUp}],
		[[DIK_PGDN],				{_this call kb_PgDn}],

		[[DIK_Q],				{_this call kb_key_q}],
		[actionKeys 'LeanLeft',			{_this call kb_key_q}],
		[[DIK_E],				{_this call kb_key_e}],
		[actionKeys 'LeanRight',		{_this call kb_key_e}],
		[[DIK_T],				{_this call kb_key_t}],
		[[DIK_P],				{_this call kb_key_p}],
		[[DIK_F],				{_this call kb_key_f}],
		[actionKeys 'ToggleWeapons',		{_this call kb_key_f}],
		[[DIK_H],				{_this call kb_key_h}],
		[[DIK_L],				{_this call kb_key_l}],
		[actionKeys 'ShowMap',			{_this call kb_key_m}],
		[[DIK_SPACE],				{_this call kb_space}],
		[actionKeys 'ForceCommandingMode',	{_this call kb_space}],

///		[[DIK_NUMPADMINUS, DIK_LSHIFT],	{[displayNull, _dikCode, _shift] call dze_filterCheats}],
		[[DIK_NUMPADMINUS, DIK_LSHIFT],		{_this call kb_blockCheat}],

		[actionKeys 'MoveForward',		{_this call kb_playerMove}],
		[actionKeys 'MoveBack',			{_this call kb_playerMoveBack}],
		[actionKeys 'TurnLeft',			{_this call kb_playerMove}],
		[actionKeys 'TurnRight',		{_this call kb_playerMove}],
		[actionKeys 'GetOver',			{_this call kb_getOver}],
		[actionKeys 'Prone',			{_this call kb_drop}],
		[actionKeys 'Crouch',			{_this call kb_drop}],
		[actionKeys 'ReloadMagazine',		{_this call kb_reload}],
		[actionKeys 'Gear',			{_this call kb_gear}],
		[actionKeys 'Diary',			{_this call kb_journal}],
		[actionKeys 'NetworkStats',		{_this call kb_journal}],
		[actionKeys 'Surrender',		{_this call kb_surrender}],
		[actionKeys 'SelectAll',		{_handled}],
		[actionKeys 'Handgun',			{_this call kb_handgun}],	/// **** TODO **** do we do this here or try to catch it when a weapon is swapped???

		[actionKeys 'PushToTalk',		{_this call kb_talk}],
		[actionKeys 'PushToTalkAll',		{_this call kb_talk}],
		[actionKeys 'PushToTalkCommand',	{_this call kb_talk}],
		[actionKeys 'PushToTalkDirect',		{_this call kb_talk}],
		[actionKeys 'PushToTalkGroup',		{_this call kb_talk}],
		[actionKeys 'PushToTalkSide',		{_this call kb_talk}],
		[actionKeys 'PushToTalkVehicle',	{_this call kb_talk}],
		[actionKeys 'VoiceOverNet',		{_this call kb_talk}],
		[actionKeys 'NextChannel',		{_this call kb_switchChannel}],
		[actionKeys 'PrevChannel',		{_this call kb_switchChannel}],
		[actionKeys 'Chat',			{_this call kb_chat}]
	];

	if (DZE_LEFT_HANDED) then {

		{addArray(_keyArray, _x)} forEach
		[
			[[DIK_NUMPAD8],	{_this call kb_up}],
			[[DIK_NUMPAD2],	{_this call kb_down}],
			[[DIK_NUMPAD4],	{_this call kb_left}],
			[[DIK_NUMPAD6],	{_this call kb_right}]
		];
	} else {
		{addArray(_keyArray, _x)} forEach
		[
			[[DIK_NUMPAD8],	{_handled}],
			[[DIK_NUMPAD2],	{_handled}],
			[[DIK_NUMPAD4],	{_handled}],
			[[DIK_NUMPAD6],	{_handled}],
			[[DIK_UP],	{_this call kb_up}],
			[[DIK_DOWN],	{_this call kb_down}],
			[[DIK_LEFT],	{_this call kb_left}],
			[[DIK_RIGHT],	{_this call kb_right}]
		];
	};

	if (dayz_groupSystem) then {

		{addArray(_keyArray, _x)} forEach
		[
			[[DIK_LWIN, DIK_RWIN],		{_this call kb_groupTags}],
			[actionKeys 'TacticalView',	{_handled}]
		];
	};

	//	add custom keys via mission file compiles.sqf using kb_custom_keys function
	//	file: dayz_code\functions\keyboard\kb_custom_keys.sqf

	{addArray(_keyArray, _x)} forEach (call kb_custom_keys);

	local _key	= [];
	local _code	= {};

	{
		_key	= _x select 0;
		_code	= _x select 1;
		{
			if (_x >= 0 && {_x < 256}) then {
				keyboard_keys set [_x, _code];
			};
		} forEach _key;
	} forEach _keyArray;
};

if (r_player_unconsciousInputDisabled) exitWith {true};

local _code = keyboard_keys select _dikCode;

if (!isNil '_code') then {_handled = call _code};

_handled
