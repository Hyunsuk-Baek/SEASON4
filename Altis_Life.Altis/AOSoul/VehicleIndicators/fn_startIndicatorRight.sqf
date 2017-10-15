/*
Created by AOSOUL 2017/06/14
*/

private["_vehicle"];
_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if(isNull _vehicle) exitWith {};
if(!(typeOf _vehicle in blinkerveh)) exitWith {};

_trueorfalse = _vehicle getVariable["lights",FALSE];

if(_trueorfalse) then {
	_vehicle setVariable["lights",FALSE,TRUE];
} else {
	playsound "blinkerstart";
	_vehicle setVariable["lights",TRUE,TRUE];
	[_vehicle,0.22] remoteExec ["life_fnc_rightIndicatorLight",0];
};