class DZE_Garage_Base: DZE_Building_Base {
	destrType = "DestructBuilding";
	mapSize = 2;
	DZE_buildingSteps = 3;
	DZE_offset[] = {0,6,0};

	class AnimationSources {
		class Open_Gate_1_Slide {
			animPeriod = 1;
			source = "user";
		};

		class Open_Gate_1_Rotate {
			animPeriod = 1;
			source = "user";
		};
	};

	class UserActions {
		class OpenDoor {
			displayName = "Open Gate";
			position = "Action_Points";
			radius = 3;
			condition = "this animationPhase ""Open_Gate_1_Rotate"" < 0.5";
			statement = "[this] spawn {(_this select 0) animate['Open_Gate_1_Rotate',1];player say 'MBG_B3_GarageOpen';sleep 1;(_this select 0) animate['Open_Gate_1_Slide',1];};";
			onlyforplayer = 0;
		};

		class CloseDoor {
			displayName = "Close Gate";
			position = "Action_Points";
			radius = 3;
			condition = "this animationPhase ""Open_Gate_1_Rotate"" > 0.5";
			statement = "[this] spawn {(_this select 0) animate['Open_Gate_1_slide',0];player say 'MBG_B3_GarageClose';sleep 1;(_this select 0) animate['Open_Gate_1_rotate',0];};";
			onlyforplayer = 0;
		};
	};
};

class DZE_Garage_Green: DZE_Garage_Base {
	scope = 2;
	model = "\MBG_Buildings_3\m\Misc\MBG_Garage_Single_D.p3d";
	displayName = $STR_EPOCH_GARAGE_GREEN;
	removeoutput[] = {{"garage_green_kit",1}};
};

class DZE_Garage_White: DZE_Garage_Base {
	scope = 2;
	model = "\MBG_Buildings_3\m\Misc\MBG_Garage_Single_A.p3d";
	displayName = $STR_EPOCH_GARAGE_WHITE;
	removeoutput[] = {{"garage_white_kit",1}};
};

class DZE_Garage_Brown: DZE_Garage_Base {
	scope = 2;
	model = "\MBG_Buildings_3\m\Misc\MBG_Garage_Single_B.p3d";
	displayName = $STR_EPOCH_GARAGE_BROWN;
	removeoutput[] = {{"garage_brown_kit",1}};
};

class DZE_Garage_Grey: DZE_Garage_Base {
	scope = 2;
	model = "\MBG_Buildings_3\m\Misc\MBG_Garage_Single_C.p3d";
	displayName = $STR_EPOCH_GARAGE_GREY;
	removeoutput[] = {{"garage_grey_kit",1}};
};
