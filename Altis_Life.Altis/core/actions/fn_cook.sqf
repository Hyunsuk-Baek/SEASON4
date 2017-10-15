#include "..\..\script_macros.hpp"
/*
    File: fn_cook.sqf
    Author: Fresqo
    Description: cooks de foods mmmmmmmmm yum
*/
params [
    ["_fire",objNull,[objNull]],
    ["_item","",[""]]
];
private _time = .15;
if (isNull _fire) exitWith {};
if (_item isEqualTo "") exitWith {};
if !((typeOf _fire) isEqualTo "Land_Campfire_F") exitWith {};
if (player distance _fire > 3) exitWith {hint localize "STR_Cook_Closer"};
if !(inFlamed _fire) exitWith {hint localize "STR_Cook_Light"};
//if !(animationState player isEqualTo "amovpsitmstpsnonwnondnon_ground") exitWith {hint localize "STR_Cook_Sitting"};
if (life_cooking) exitWith {};

private _itemName = M_CONFIG(getText, "VirtualItems", _item, "displayName");
private _newItem = M_CONFIG(getText, "VirtualItems", _item, "cooked");
private _newItemName = M_CONFIG(getText, "VirtualItems", _newItem, "displayName");

if (_itemName isEqualTo "" || _newItem isEqualTo "" || _newItemName isEqualTo "") exitWith {};

if ([false,_item,1] call life_fnc_handleInv) then {
    life_cooking = true;
    
    //Setup our progress bar.
    disableSerialization;
    5 cutRsc ["life_progress","PLAIN"];
    private _ui = uiNameSpace getVariable "life_progress";
    private _progress = _ui displayCtrl 38201;
    private _pgText = _ui displayCtrl 38202;
    _pgText ctrlSetText format["Cooking %2 (1%1)...","%",(localize _itemName)];
    _progress progressSetPosition 0.01;
    private _cP = 0.01;
    
	for "_i" from 0 to 1 step 0 do {
	    if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
        [player,"AinvPknlMstpSnonWnonDnon_medic_1"] remoteExecCall ["life_fnc_animSync",RCLIENT];
        player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
		};
		sleep _time;
	    _cP = _cP + 0.01;
	    _progress progressSetPosition _cP;
	    _pgText ctrlSetText format["Cooking %3 (%1%2)...",round(_cP * 100),"%",(localize _itemName)];

	    if(_cP >= 1) exitWith {};
	    if(player distance _fire > 3) exitWith {};
	    if!(alive player) exitWith {};
	    if !(inFlamed _fire) exitWith {};
	};

        if !(inFlamed _fire) exitWith {hint localize "STR_Cook_Light";5 cutText ["","PLAIN"];life_cooking = false;[] call life_fnc_hudUpdate;};
        //if !(animationState player isEqualTo "amovpsitmstpslowwrfldnon") exitWith {hint localize "STR_Cook_Sitting";5 cutText ["","PLAIN"];life_cooking = false;[] call life_fnc_hudUpdate;};
	if!(alive player) exitWith { life_cooking = false; [] call life_fnc_hudUpdate;};
	if(player distance _fire > 3) exitWith {hint localize "STR_Cook_Closer2";5 cutText ["","PLAIN"];life_cooking = false;[] call life_fnc_hudUpdate; };
	5 cutText ["","PLAIN"];
	[] call life_fnc_hudUpdate;
    if ([true,_newItem,1] call life_fnc_handleInv) then {
        hint format[localize "STR_Cook_Cooked",(localize _newItemName)];
    };
    life_cooking = false;
};
