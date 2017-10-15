#include "..\..\script_macros.hpp"
removeAllWeapons AOSOUL_JailGuard_1; 
removeAllItems AOSOUL_JailGuard_1; 
removeAllAssignedItems AOSOUL_JailGuard_1; 
removeUniform AOSOUL_JailGuard_1; 
removeVest AOSOUL_JailGuard_1; 
removeBackpack AOSOUL_JailGuard_1; 
removeHeadgear AOSOUL_JailGuard_1; 
removeGoggles AOSOUL_JailGuard_1; 
AOSOUL_JailGuard_1 forceAddUniform "U_B_GEN_Commander_F"; 
for "_i" from 1 to 3 do {AOSOUL_JailGuard_1 addItemToUniform "30Rnd_65x39_caseless_mag";}; 
AOSOUL_JailGuard_1 addVest "V_TacVest_blk_POLICE"; 
for "_i" from 1 to 9 do {AOSOUL_JailGuard_1 addItemToVest "30Rnd_65x39_caseless_mag";}; 
for "_i" from 1 to 2 do {AOSOUL_JailGuard_1 addItemToVest "10Rnd_9x21_Mag";}; 
AOSOUL_JailGuard_1 addHeadgear "H_MilCap_gen_F"; 
AOSOUL_JailGuard_1 addGoggles "G_Aviator"; 
 
AOSOUL_JailGuard_1 addWeapon "arifle_MXC_Black_F"; 
AOSOUL_JailGuard_1 addPrimaryWeaponItem "acc_flashlight"; 
AOSOUL_JailGuard_1 addPrimaryWeaponItem "optic_Nightstalker"; 
AOSOUL_JailGuard_1 addWeapon "hgun_Pistol_01_F"; 
 
AOSOUL_JailGuard_1 linkItem "ItemMap"; 
AOSOUL_JailGuard_1 linkItem "ItemCompass"; 
AOSOUL_JailGuard_1 linkItem "Itemwatch"; 
doStop AOSOUL_JailGuard_1; 
AOSOUL_JailGuard_1 setunitpos "up"; 
AOSOUL_JailGuard_1 addeventhandler ["fired", {(_AOSOUL_JailGuard_1 select 0) setvehicleammo 1}]; 
AOSOUL_JailGuard_1 allowdamage false;
