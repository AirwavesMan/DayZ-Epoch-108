#ifndef NO_LOCK

#define NO_LOCK                 -1
#define KB_CLOSE_VOICE_CHAT     disableUserInput true; disableUserInput true; findDisplay DISPLAY_VOICE_CHAT closeDisplay IDC_CANCEL; 0 spawn {disableUserInput false; disableUserInput true; disableUserInput false; disableUserInput false}
#define KB_CLOSE_CHAT           findDisplay DISPLAY_CHAT closeDisplay IDC_CANCEL

#define getCurrentChannel       local _currentChannel = ctrlText (findDisplay DISPLAY_CHANNEL displayCtrl 101); if (_currentChannel != '') then {currentChannel = _currentChannel}
#define isSideChannelActive     currentChannel == localize 'str_channel_side'

#endif
