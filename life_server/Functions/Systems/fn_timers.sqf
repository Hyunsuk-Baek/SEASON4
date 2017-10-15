#include "\life_server\script_macros.hpp"
/*
    file: fn_timers.sqf
    Author: Fresqo
    Description: Sorts server side timers so no timer exploits
*/
params [
    ["_type",0,[0]],
    ["_arr",[],[[]]]
];

switch (_type) do {
    case 3: 
        {
            _fire = [_arr,0,objNull,[objNull]] call BIS_FNC_PARAM;
            sleep 300;
            if (!isNull _fire) then {deleteVehicle _fire;};
        };
    default {};
};