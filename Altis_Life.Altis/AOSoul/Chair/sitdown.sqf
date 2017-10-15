#include "..\..\script_macros.hpp"

private ["_chair","_unit", "_dir"];

_chair = _this select 0; 
_unit = _this select 1; 

if(life_sitting) then{
    [player,"","switch",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
    life_sitting = false;
} else {
    [_unit,"Crew","switch",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
    _unit setPosATL (getPosATL _chair); 
    _unit setDir ((getDir _chair) - 180); 
    _unit setPosATL [getPosATL _unit select 0, getPosATL _unit select 1, ((getPosATL _unit select 2) + 1)];
    life_sitting = true;
};