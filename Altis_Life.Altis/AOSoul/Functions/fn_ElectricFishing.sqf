/*
    Mady by AOSoul
    20170501
*/
#include "..\..\script_macros.hpp"

//엑션 제한 걸기
if (player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};
if !(isTouchingGround Player) exitWith {hint localize "STR_Fishing_Error"};
if !(stance player isEqualTo "STAND") exitWith {hint localize "STR_Fishing_Error"};
if (life_is_arrested) exitWith {hint localize "STR_Fishing_Error"};
if (life_safezone) exitwith {hint localize "STR_AOSOUL_SafeZone";}; //세이프존 사용 불가

private["_catch"];
if(Life_fishing) exitwith {};
Life_fishing = true;
	
	//모션 및 던지는 궤도 설정
	player playmove "AinvPknlMstpSnonWnonDnon_medic_1";
	sleep 5;
	player playmove "AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthEnd";
	sleep 3.5;
	_dirAdd = (-30) + random(60);
	_speed = 15; 	//던지는 속도
	_Dir = (getdir player) + _dirAdd; 
	_vehicle = createVehicle ["Land_Portable_generator_F", [getpos player select 0, getpos player select 1, (getpos player select 2) + 3],[], 0, "CAN_COLLIDE"];
	_vel = velocity _vehicle;
	_vehicle setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+(cos _dir*_speed),(_vel select 2) + 2];	//날아가는 높이
	playSound3D ["", player, false, getPosASL player, 11, 1, 35]; 	

	sleep 2.5;
	
	//바닥에 던졌을때 실패
	if!(surfaceIsWater (getpos _vehicle)) exitwith {
		sleep 5;
		hint "You lost your dynamite!";
		deletevehicle _vehicle;
		Life_fishing = false;
	};

	_catchPos = (getpos _vehicle);
	hint "Successful Throw - Stand Back!";
	
	sleep 8;
	//폭발 효과
	"UnderwaterMine_Range_Ammo" createvehicle [(getpos _vehicle select 0)-2,(getpos _vehicle select 1)+1,(getpos _vehicle select 2)-3];
	"Bo_GBU12_LGB_MI10" createvehicle [(getpos _vehicle select 0),(getpos _vehicle select 1)+4,(getpos _vehicle select 2)-1];
	"UnderwaterMine_Range_Ammo" createvehicle [(getpos _vehicle select 0)+3,(getpos _vehicle select 1),(getpos _vehicle select 2)-1];

	deletevehicle _vehicle;
	Life_fishing = false;

	//성공 메세지 및 채집 스크립트
	hint "Get close to pick up your catch!";
	_timeout = 60; 
	
	//폭심지로 이동 시 물고기 습득 스크립트
	while{true} do {
		_timeout = _timeout - 1;
		if(player distance _catchPos < 9) exitwith { _catch = true; };
		if(_timeout < 1) exitwith { _catch = false; };
		sleep 0.5;
	};
	if(_catch) then {
		playSound3D ["", player, false, getPosASL player, 51, 1, 45];
	hint "You picked up your catch!";
	
	//기본 물고기 수량 설정
	_amount = 1 + random(10);
	
	//레어 물고기 확률 설정
	_chance = random (100);
	
	//레어 물고기 확률 및 설정
	if(_chance > 80) then {
		_rareFish = ["turtle_raw","tuna_raw","catshark_raw"];
		_myfish = "";
		_myFish = _rareFish call BIS_fnc_selectRandom;
		[true,_myFish,1] call life_fnc_handleInv;
		
		_myFish = _rareFish call BIS_fnc_selectRandom;
		[true,_myFish,1] call life_fnc_handleInv;
		
		_myFish = _rareFish call BIS_fnc_selectRandom;
		[true,_myFish,1] call life_fnc_handleInv;
	};
		//기본적으로 들어오는 물고기
		while{_amount > 0} do {
			_type = floor (random(4));
			switch (_type) do
			{
				case 0 :
				{
					[true,"salema_raw",1] call life_fnc_handleInv;
				};
				case 1 :
				{
					[true,"ornate_raw",1] call life_fnc_handleInv;
				};
				case 2 :
				{
					[true,"mackerel_raw",1] call life_fnc_handleInv;

				};
				case 3 :
				{
					[true,"mullet_raw",1] call life_fnc_handleInv;

				};
				default
				{
				};
			};	
			_amount = _amount - 1;	
		};		
	} else { hint "You didnt pick up your fish in time!";};
Life_fishing = false;
