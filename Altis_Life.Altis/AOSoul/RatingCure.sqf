/*
	RatingCure System by AOSOUL
	2017/10/12
*/
#include "..\..\script_macros.hpp"
if(life_atmbank < 499999) exitWith {hint "속죄의 기도를 하려면 50만원이 필요합니다."};
life_atmbank = life_atmbank - 500000;
player addRating 9999999;
titleText ["너의 죄를 사하노라", "PLAIN"];
[player,"AOS_bow_pray",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
player switchMove "AOS_bow_pray";
player playMoveNow "AOS_bow_pray";