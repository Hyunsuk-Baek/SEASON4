/*
    Mady by AOSoul
    2017/05/22
*/
#include "..\..\script_macros.hpp"

if (playerSide isEqualTo civilian) exitWith {hint localize "STR_Cop_wantedList_notCop";};

private ["_veh","_locked"];
_veh = cursorObject;
_locked = locked _veh;

//Animation
if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
    [player,"AinvPknlMstpSnonWnonDnon_medic_1"] remoteExecCall ["life_fnc_animSync",RCLIENT];
    player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
};
sleep 6;

//Open Script
_veh = objNull;
if (vehicle player == player) then {
    _veh = cursorTarget;
} else {
    _veh = vehicle player;
};
if (!isNull _veh) then {
    _locked = locked _veh;
    if(player distance _veh < 8) then {
        if(_locked == 2) then {
            if(local _veh) then {
                _veh lock 0;
            } else {
                [_veh,0] remoteExec ["life_fnc_lockVehicle",_veh];
            };
            systemChat localize "STR_MISC_VehUnlock";
        } else {
            if(local _veh) then {
                _veh lock 2;
            } else {
                [_veh,2] remoteExec ["life_fnc_lockVehicle",_veh];
            };
            systemChat localize "STR_MISC_VehLock";
        };
    };
} else {hint "실패 : 차량을 쳐다보고 다시 시도하세요";};