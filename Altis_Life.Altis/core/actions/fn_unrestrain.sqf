#include "..\..\script_macros.hpp"
/*
    File: fn_unrestrain.sqf
    Author:

    Description:

*/
private ["_unit"];
_unit = param [0,objNull,[objNull]];

///// 수갑 키로 풀기 /// 
if(!([false,"keys",1] call life_fnc_handleInv)) exitWith { hint "수갑 열쇠가 없습니다"; };
[true,"keys",1] call life_fnc_handleInv; // key를 일회용으로 쓸거면 이 라인 삭제
/////////////////////

if (isNull _unit || !(_unit getVariable ["restrained",false])) exitWith {}; //Error check?

_unit setVariable ["restrained",false,true];
_unit setVariable ["Escorting",false,true];
_unit setVariable ["transporting",false,true];
detach _unit;

[0,"STR_NOTF_Unrestrain",true,[_unit getVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];