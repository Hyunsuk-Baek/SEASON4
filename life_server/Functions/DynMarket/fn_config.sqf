/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// ███████████████████████████████████████████████████████████████████████
// █████████████████ DYNAMIC MARKET BASIC CONFIGURATION ██████████████████
// ███████████████████████████████████████████████████████████████████████

DYNMARKET_Serveruptime         = 05;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = true; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 01;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = true; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 03;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = false; // Should the user be informed with a hint whenever the prices got updated?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text = 
[
 "Your prices have been updated!",
 "The new prices are being calculated by the server..."
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
 ["Food",
  [
   /*["아이템 코드",-1,최소,최대],*/
   //Food
   ["apple",-1,280,420],
   ["peach",-1,260,400]
  ],
  0.3
 ],
 ["Fish",
  [
   ["salema_raw",-1,360,540],
   ["salema",-1,800,1200],
   ["ornate_raw",-1,720,1080],
   ["ornate",-1,880,1320],
   ["mackerel_raw",-1,920,1380],
   ["mackerel",-1,1320,2000],
   ["tuna_raw",-1,3200,4800],
   ["tuna",-1,4240,6360],
   ["mullet_raw",-1,2000,3000],
   ["mullet",-1,2720,4080],
   ["catshark_raw",-1,6400,10000],
   ["catshark",-1,6600,10000]
  ],
  0.5
 ],
 ["Animal",
  [
   ["rabbit_raw",-1,400,600],
   ["rabbit",-1,600,900],
   ["hen_raw",-1,2640,4000],
   ["hen",-1,3600,5500],
   ["rooster_raw",-1,4800,7200],
   ["rooster",-1,5200,8300],
   ["sheep_raw",-1,8000,15000],
   ["sheep",-1,10000,16000],
   ["goat_raw",-1,10400,15600],
   ["goat",-1,9200,17000],
   ["snake_raw",-1,2000,4000],
   ["snakemeat",-1,4000,8000]
  ],
  0.4
 ],
 ["Mined",
  [
   ["oil_processed",-1,2200,4500],
   ["copper_refined",-1,1300,2500],
   ["iron_refined",-1,2200,4100],
   ["salt_refined",-1,1100,2000],
   ["glass",-1,1200,2150],
   ["diamond_uncut",-1,400,1000],
   ["diamond_cut",-1,2100,3300],
   ["cement",-1,1500,2500]
  ],
  0.5
 ],
 ["Illegal", 
  [
   /*["아이템 코드",-1,최소,최대],*/
   ["heroin_processed",-1,2500,4900],
   ["marijuana",-1,1600,3050],
   ["cocaine_processed",-1,3900,6500],
   ["turtle_raw",-1,5000,12800],
   ["turtle_soup",-1,6500,14000]
  ],
  0.6
 ]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        = 
[
 /* ["아이템코드",기본가격], */
 //Food
 ["apple",350],
 ["peach",330],
 //Fish
 ["salema_raw",450],
 ["salema",1000],
 ["ornate_raw",900],
 ["ornate",1100],
 ["mackerel_raw",1150],
 ["mackerel",1650],
 ["tuna_raw",9000],
 ["tuna",10000],
 ["mullet_raw",2500],
 ["mullet",3400],
 ["catshark_raw",8000],
 ["catshark",8300],
 //Animal
 ["rabbit_raw",500],
 ["rabbit",750],
 ["hen_raw",3300],
 ["hen",4500],
 ["rooster_raw",6000],
 ["rooster",6800],
 ["sheep_raw",12000],
 ["sheep",13300],
 ["goat_raw",13000],
 ["goat",14000],
 ["snake_raw",3000],
 ["snakemeat",6000],
 //Mined
 ["oil_processed",3500],
 ["copper_refined",2000],
 ["iron_refined",3400],
 ["salt_refined",1600],
 ["glass",1800],
 ["diamond_uncut",750],
 ["diamond_cut",2500],
 ["cement",2150],
 //Illegal
 ["heroin_processed",4000],
 ["marijuana",2550],
 ["cocaine_processed",5600],
 ["turtle_raw",10000],
 ["turtle_soup",12000]
];

//███████████████████████████████████████████████████████████████████████
//██████████████████ DO NOT MODIFY THE FOLLOWING CODE! ██████████████████
//███████████████████████████████████████████████████████████████████████

DYNMARKET_Items_CurrentPriceArr = [];
DYNMARKET_sellarraycopy = DYNMARKET_Items_ToTrack;
DYNMARKET_Serveruptime = (DYNMARKET_Serveruptime * 3600) - 300;
{
 _currentArray = _x;
 DYNMARKET_Items_CurrentPriceArr pushBack [_currentArray select 0,_currentArray select 1,0];
} forEach DYNMARKET_Items_ToTrack;
publicVariable "DYNMARKET_UserNotification";
publicVariable "DYNMARKET_UserNotification_Text";
if (DYNMARKET_UseExternalDatabase) then {[1] call TON_fnc_HandleDB;};
DYNMARKET_UpdateCount = 0;
if (DYNMARKET_UseExternalDatabase) then {
 [] spawn {
  sleep DYNMARKET_Serveruptime;
  diag_log "### DYNMARKET >> CURRENT PRICES ARE BEING WRITTEN TO THE DATABASE    ###";
  diag_log "### DYNMARKET >> AS PLANNED, AWAITING RESULT...                      ###";
  [0] call TON_fnc_HandleDB;
 };
};
sleep 5;
[] call TON_fnc_sleeper;
