#include "..\..\script_macros.hpp"
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos", "_elased"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
 //_kassa = 1000; //The amount the shop has to rob, you could make this a parameter of the call (https://community.bistudio.com/wiki/addAction). Give it a try and post below ;)
_action = [_this,2] call BIS_fnc_param;//Action name

[] spawn life_fnc_hudUpdate;

if(side _robber != civilian) exitWith {hint "주유소는 시민만 털수있습니다!"};
if(_robber distance _shop > 5) exitWith {hint "점원과 5m 이내에서 주유소 강도를 실행할 수 있습니다"};

if (west countSide playableUnits < (LIFE_SETTINGS(getNumber,"minimum_cops_gas"))) exitWith {
     hint format ["주유소를 털기위한 최소 경찰수가 부족합니다"];
};

if !(_kassa) then {_kassa = 1000;};
if (_rip) exitWith {hint "이미 주유소 털리고 있어요!"};
if (vehicle player != _robber) exitWith {hint "차에서 내리세요!"};

if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith {hint "하하 내가 호군지아냐? 무기도 없으면서 어쩌시려고?"};
if (_kassa == 0) exitWith {hint "이미 털려서 돈이 없어요.."};

_rip = true;
_kassa = 60000 + round(random 50000);
_shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";

_chance = random(100);
if(_chance >= 1) then {[1,format["경보! - 주유소: %1 에 강도 발생!", _shop]] remoteExec ["life_fnc_broadcast",west];};
if(_chance >= 1) then {[1,format["경보! - 주유소: %1 에 강도 발생!", _shop]] remoteExec ["life_fnc_broadcast",civilian];};

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["주유소 강도 진행중.. 점원과 10m 이내 유지하세요. (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.0001;

if(_rip) then
{
    _elased = 0;
    [_shop,"alert"] remoteExec ["life_fnc_say3D",RANY];
    while{true} do
    {
        sleep 1.5; // 150초 넘으면 프로그레스바 사라지므로 150초로 세팅. (100 * 1.5 = 150)
        _cP = _cP + 0.01;
        _elased = _elased + 1;
        if(_elased isEqualTo 5 ) then {
            [_shop,"alert"] remoteExec ["life_fnc_say3D",RANY];
            _elased = 0;
        };
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format["주유소 강도 진행중.. 점원과 10m 이내 유지하세요. (%1%2)...",round(_cP * 100),"%"];
        _Pos = position player; // by ehno: get player pos
        _marker = createMarker ["Marker200", _Pos];//by ehno: Place a Maker on the map
        "Marker200" setMarkerColor "ColorRed";
        "Marker200" setMarkerText "!ATTENTION! robbery gas station!";
        "Marker200" setMarkerType "mil_warning";
        if( round(_cP * 100) >= 100) exitWith {};
        if(_robber distance _shop > 11) exitWith {};
        if!(alive _robber) exitWith {};
    };
    if!(alive _robber) exitWith {_rip = false;};
    if(_robber distance _shop > 11) exitWith {
        deleteMarker "Marker200"; _shop switchMove ""; 
        hint "10m이내에서 강도가 머물러야합니다. 주유소 금고가 닫혔습니다.";
        5 cutText ["","PLAIN"];
        _rip = false;
    };
    5 cutText ["","PLAIN"];

    deleteMarker "Marker200"; // by ehno delete maker
    if(_rip) then {
        life_cash = life_cash + _kassa;
        titleText[format["주유소에서 $%1 를 털었습니다. 경찰오기전에 어서튀셈!",[_kassa] call life_fnc_numberText],"PLAIN"];
        [getPlayerUID _robber,name _robber,"26"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
        _rip = false;
        life_use_atm = false;
        sleep (60 * (LIFE_SETTINGS(getNumber,"noatm_timer"))); // 15분
        life_use_atm = true;
    } else {
        [getPlayerUID _robber,name _robber,"27"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
    };
    if!(alive _robber) exitWith {};
};
[] spawn life_fnc_hudUpdate;
sleep 300;
_action = _shop addAction["Rob the Gas Station",life_fnc_robstore];
_shop switchMove "AmovPercMstpSnonWnonDnon";