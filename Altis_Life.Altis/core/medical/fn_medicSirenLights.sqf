#include "..\..\script_macros.hpp"
/*
    File: fn_sirenLights.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Lets play a game! Can you guess what it does? I have faith in you, if you can't
    then you have failed me and therefor I lose all faith in humanity.. No pressure.
*/
private ["_vehicle","_trueorfalse"];
_vehicle = param [0,objNull,[objNull]];
if (isNull _vehicle) exitWith {}; //Bad entry!
if (!(typeOf _vehicle in ["B_Quadbike_01_F","C_Hatchback_01_F","C_Hatchback_01_sport_F","C_Offroad_02_unarmed_F","C_SUV_01_F","C_Offroad_01_F","C_Van_01_box_F","B_MRAP_01_F","I_MRAP_03_F","I_Truck_02_medical_F","O_Truck_03_medical_F","B_Truck_01_medical_F","I_Truck_02_box_F","O_Truck_03_repair_F","B_Truck_01_Repair_F","B_Truck_01_mover_F","B_Heli_Light_01_F","O_Heli_Light_02_unarmed_F","I_Heli_Transport_02_F","B_Heli_Transport_01_F","O_Heli_Transport_04_repair_F","O_Heli_Transport_04_fuel_F","O_Heli_Transport_04_covered_F","O_Heli_Transport_04_medevac_F","O_Heli_Transport_04_F","C_Boat_Civil_01_rescue_F","C_Boat_Transport_02_F","I_SDV_01_F"])) exitWith {}; 

_trueorfalse = _vehicle getVariable ["lights",false];

if (_trueorfalse) then {
    _vehicle setVariable ["lights",false,true];
} else {
    _vehicle setVariable ["lights",true,true];
    [_vehicle,0.22] remoteExec ["life_fnc_medicLights",RCLIENT];
};