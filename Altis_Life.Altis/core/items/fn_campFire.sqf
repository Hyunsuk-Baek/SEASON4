#include "..\..\script_macros.hpp"
/*
    File: fn_campFire.sqf
    Author: Fresqo
    Description: creates a camp fire for a period so player can cook food. can only be created in hunting zone
*/
if (life_fire) exitWith {hint "캠프파이어가 이미 주변에 있습니다!!"};
private _fire = "Land_Campfire_F" createVehicle position player;
if (isNull _fire) exitWith {};

hint "캠프파이어를 만들었습니다, 불을 키고 캠핑을 즐기세요~!(캠프파이어는 5분뒤에 사라집니다)";
[9,[_fire]] remoteExec ["TON_fnc_timers",RSERV];
life_fire = true;
waitUntil {!alive _fire || !isNull _fire};
life_fire = false;
//Delete Fire
sleep 300;
if (!isNull _fire) then {deleteVehicle _fire;};