/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";

//AOSoul Added : Custom Script
[] execVM "AOSoul\statusbar_loop.sqf";//Status Bar Loop
[] execVM "AOSoul\admintools\loop.sqf";//Admin Helper
[] execVM "AOSoul\teargas.sqf"; //TearGas
[] execVM "AOSoul\DynWeather.sqf"; // 날씨 
//[] execVM "AOSoul\CL.sqf"; //돔 네온
[] execVM "AOSoul\CL2.sqf"; //돔 네온
[] execVM "AOSoul\safezone.sqf";//세이프존
[] execVM "AOSoul\VehicleIndicators\indicatorInit.sqf"; //Vehicle Indicator
[] execVM "AOSoul\dlc_unlocker.sqf";	//DLC Unlocker

setTerrainGrid 50;
//setViewDistance 1200;
//setObjectViewDistance [1000,50];

//Tow Config
SA_MAX_TOWED_CARGO = 1;
SA_TOW_SUPPORTED_VEHICLES_OVERRIDE = [ "Ship","Car" ];
SA_TOW_RULES_OVERRIDE = [
                        ["Car", "CAN_TOW", "Car"],
                        ["Car", "CAN_TOW", "Air"],
                        ["Car", "CAN_TOW", "Ship"],
                        ["Ship", "CAN_TOW", "Ship"]
                        ];
SA_TOW_LOCKED_VEHICLES_ENABLED = false;

//Cop & Medic Radio disable
enableRadio false;
enableSentences false;

//Ambient Setting
//enableEnvironment false;
// --------------------------------------------------------------------------------------------------------------
StartProgress = true;
