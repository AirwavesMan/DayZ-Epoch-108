local _timeout = diag_tickTime + 3;	// 3 second timeout
local _object = objNull;

waitUntil {
    uiSleep 0.1;
    !isNil 'DZE_Wait_For_Object' || {diag_tickTime > _timeout}
};

if !(isNil 'DZE_Wait_For_Object') then {
    _object = objectFromNetId DZE_Wait_For_Object;

    local _netID = DZE_Wait_For_Object;
    DZE_Wait_For_Object = nil;
    local _objectTimeout = diag_tickTime + 3;

    waitUntil {
        uiSleep 0.1;
        _object = objectFromNetId _netID;
        !isNull _object || {diag_tickTime > _objectTimeout}
    };    

    // Reveal the new object to the player so it can be used immediately.
    if !(isNull _object) then {
        player reveal [_object,4.0];
    };
};

_object