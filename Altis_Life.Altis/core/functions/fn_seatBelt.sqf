//���� ��Ʈ
#include "..\..\script_macros.hpp"
/*
	fn_seatBelt.sqf
*/
//playSound "seatbelt"; //사운드 추가하게 되면 여기다 추가
if(!life_seatbelt) then {
	life_seatbelt = true;
} else {
	life_seatbelt = false;
};

[] call life_fnc_hudUpdate; //벨트 아이콘 활성화(필수)