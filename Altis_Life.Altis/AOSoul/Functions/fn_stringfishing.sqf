/*
    Mady by AOSoul
    20170501
*/
#include "..\..\script_macros.hpp"

//엑션 제한 걸기
if (player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};
//if !(isTouchingGround Player) exitWith {hint localize "STR_Fishing_Error"};
//if !(stance player isEqualTo "STAND") exitWith {hint localize "STR_Fishing_Error"};
if (life_is_arrested) exitWith {hint localize "STR_Fishing_Error"};

private["_chance"];
if(Life_fishing) exitwith {};
Life_fishing = true;
	//던지는 모션 및 오브젝트, 날아가는 속도 설정
	player playmove "AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthEnd";
	sleep 1;
	_dirAdd = (-30) + random(60);
	_speed = 20; 
	_Dir = (getdir player) + _dirAdd; 
	_vehicle = createVehicle ["Land_Balloon_01_air_F", [getpos player select 0, getpos player select 1, (getpos player select 2) + 3],[], 0, "CAN_COLLIDE"];
	_vel = velocity _vehicle;
	_vehicle setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+(cos _dir*_speed),(_vel select 2) + 12];
	
	//던질때 효과음 추가 가능
	playSound3D ["", player, false, getPosASL player, 1, 1, 8]; 
	
	sleep 2.5;

	//지면에 떨어졌을때 실패
	if!(surfaceIsWater (getpos _vehicle)) exitwith {
		hint "You lost your bait!!";
		deletevehicle _vehicle;
		Life_fishing = false;
	};

	//성공 메세지
	hint "Successful Cast";
	playSound3D ["", player, false, getPosASL _vehicle, 25, 1, 85];

	_timeOut = 0;
	_total = random(6);
	_myStartSpot = getpos player;
	_fail = false;

	while{true} do {
		sleep 3;
		_timeOut = _timeOut + 1;
		if(_timeOut > _total) exitwith {};
		if(_myStartSpot distance player > 25) exitwith { _fail = true; };
	};

	if(_fail) exitwith {
		hint "You lost your bait by moving too far";
		deletevehicle _vehicle;
		Life_fishing = false;
	};

	playSound3D ["", player, false, getPosASL player, 15, 1, 45];
	hint "You got a bite!!";

	sleep 0.5;

	_Dir = _Dir - 180; 
	_vel = velocity _vehicle;
	_speed = 22;

	_timeOut = 0;

	sleep 0.5;
	playSound3D ["", player, false, getPosASL player, 1, 1, 8]; 

	player playmove "gestureNod";

	while{_timeOut < 12 && _vehicle distance player > 5} do {
		_vehicle setpos [getpos _vehicle select 0, getpos _vehicle select 1, (getpos _vehicle select 2) + 0.2];
		_vehicle setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+(cos _dir*_speed),(_vel select 2) + random(2)];
		sleep 1;
		_timeOut = _timeOut + 1;
		player playaction "gestureHi";
		player playaction "gestureHic";
	};

	playSound3D ["", player, false, getPosASL player, 5, 1, 45];
	deletevehicle _vehicle;

	_standardFish = ["salema_raw","ornate_raw","mackerel_raw","tuna_raw","mullet_raw","catshark_raw"];
	_rareFish = ["turtle_raw"];
	_myfish = "";
		_curUniform = uniform player;
		_chance = round (random 200);
		if(_curUniform IN ["U_I_Wetsuit","U_O_Wetsuit","U_B_Wetsuit"]) then { _chance = round (random 202); };
		if(_curUniform == "U_I_Protagonist_VR") then { _chance = round (random 240); };
		if(vehicle player != player) then { _chance = _chance + 30; };
		if(_chance > 198) then {
    		_myFish = _rareFish call BIS_fnc_selectRandom;
	    } else {
	    	_myFish = _standardFish call BIS_fnc_selectRandom;
		};
		hint "Nicely done!! Goojob!!";
		[true,_myFish,1] call life_fnc_handleInv;

		_chance = round (random 100);
		if(vehicle player != player) then { _chance = _chance + 10; };
		if(_curUniform == "U_I_Wetsuit" && _chance > 80) then { [true,_myFish,1] call life_fnc_handleInv; };
		if(_curUniform == "U_O_Wetsuit" && _chance > 80) then { [true,_myFish,1] call life_fnc_handleInv; };
		if(_curUniform == "U_B_Wetsuit" && _chance > 80) then { [true,_myFish,1] call life_fnc_handleInv; };
		if(_curUniform == "U_I_Protagonist_VR") then { [true,_myFish,1] call life_fnc_handleInv; };

Life_fishing = false;