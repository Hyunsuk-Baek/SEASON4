#include "..\..\script_macros.hpp"
/*
    File: fn_restrainAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Restrains the target.
*/
private ["_unit"];
_unit = cursorObject;
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (_unit getVariable "restrained") exitWith {};
if (side _unit isEqualTo west) exitWith {};
if (player isEqualTo _unit) exitWith {};
if (!isPlayer _unit) exitWith {};
//Broadcast!

///// 수갑 아이템 체크 /// 
if(!([false,"handcuffs",1] call life_fnc_handleInv)) exitWith { hint "수갑이 없습니다"; };
[true,"handcuffs",1] call life_fnc_handleInv;  // 풀었을 때 수갑 돌려 받지 않으려면 이 부분 주석처리 hsbaek  
/////////////////////

_unit setVariable ["playerSurrender",false,true];
_unit setVariable ["restrained",true,true];
[player] remoteExec ["life_fnc_restrain",_unit];
[0,"STR_NOTF_Restrained",true,[_unit getVariable ["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
