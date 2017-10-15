/*
Created by AOSOUL 2017/06/14
*/

qinuse = "no";
einuse = "no";
_qhand = "no";
_ehand = "no";

blinkerveh = [
"C_Offroad_01_F",
"B_MRAP_01_F",
"C_Van_01_transport_F",
"C_Van_01_box_F",
"C_Hatchback_01_F",
"I_MRAP_03_F",
"B_Truck_01_transport_F",
"B_Truck_01_covered_F",
"B_Truck_01_fuel_F",
"B_Truck_01_ammo_F",
"B_Truck_01_Repair_F",
"B_Truck_01_mover_F",
"B_Truck_01_box_F",
"C_SUV_01_F",

"C_Kart_01_Blu_F",
"C_Kart_01_Fuel_F",
"C_Kart_01_Red_F",
"C_Kart_01_Vrana_F",

"B_Quadbike_01_F",

"C_Hatchback_01_sport_F",

"C_Offroad_02_unarmed_F",
"B_G_Offroad_01_F",
"B_G_Offroad_01_armed_F",

"I_Truck_02_covered_F",
"O_Truck_03_device_F",
"O_Truck_03_medical_F",
"B_Truck_01_medical_F",
"I_Truck_02_box_F",
"O_Truck_03_repair_F",
"I_Truck_02_ammo_F",
"O_Truck_03_ammo_F",

"C_Van_01_fuel_F",

"I_Truck_02_fuel_F",
"O_Truck_03_fuel_F",
"I_Truck_02_medical_F",


"O_MRAP_02_F",
"I_MRAP_03_hmg_F",
"B_MRAP_01_hmg_F",

"O_T_LSV_02_unarmed_F",
"O_T_LSV_02_armed_F",
"B_T_LSV_01_unarmed_F",
"B_T_LSV_01_armed_F"
];

if (!isnil "keyp") then

{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", keyp];
};

keybinds =
{
	switch (_this) do 
	{
			case 16:
			{
			if(vehicle player != player && (typeOf vehicle player) in blinkerveh) then {
			if(driver (vehicle player) == player) then {
			[vehicle player] call life_fnc_startIndicatorLeft;
		};
	};
};
					case 18:
					{
					if(vehicle player != player && (typeOf vehicle player) in blinkerveh) then {
					if(driver (vehicle player) == player) then {
					[vehicle player] call life_fnc_startIndicatorRight;
				
				};
			};
		};
	};
};

waituntil {!isnull (finddisplay 46)};
keyp = (findDisplay 46) displayAddEventHandler ["KeyDown", "_this select 1 call keybinds; false;"];