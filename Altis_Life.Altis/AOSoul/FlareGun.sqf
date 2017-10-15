/*
	Made by AOSOUL
	2017/07/23
*/
player addEventHandler ["fired",{

	_p = _this select 6;
	_weapon = _this select 1;
	_v = velocity _p;
	if(_weapon == "hgun_PDW2000_F") then {
		_f = 'CMflare_Chaff_Ammo' createVehicle (position _p);
		_f setPosATL (getPosATL _p);_f setVelocity _v;
		[_p,_f] spawn {waitUntil{isNull (_this select 0)}; deleteVehicle (_this select 1);};
	};
}];