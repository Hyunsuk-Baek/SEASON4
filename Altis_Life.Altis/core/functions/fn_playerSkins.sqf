#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private ["_skinName"];

switch (playerSide) do {
    case civilian: {
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
                player setObjectTextureGlobal [0, "textures\AOSoul\clothes\civ\Civ_Barbie.paa"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
                player setObjectTextureGlobal [0, "textures\AOSoul\clothes\civ\Civ_Gay.paa"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_salmon") then {
                player setObjectTextureGlobal [0, "textures\AOSoul\clothes\civ\Civ_Super.paa"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_redwhite") then {
                player setObjectTextureGlobal [0, "textures\AOSoul\clothes\civ\Civ_Tiger.paa"];
            };
            if (uniform player isEqualTo "U_C_Commoner1_1") then {
                player setObjectTextureGlobal [0, "textures\AOSoul\clothes\civ\civ_yakuja.paa"];
            };
            //기자 복장
            if (uniform player isEqualTo "U_Competitor") then {
                player setObjectTextureGlobal [0, "textures\AOSoul\clothes\civ\Civ_Broadcast.paa"];
            };
            //키티 복장(고급형)
            if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest") then {
                player setObjectTextureGlobal [0, "textures\AOSoul\clothes\civ\Civ_HelloKitty.paa"];
            };
        };
    };

    case west: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            _skinName = "textures\AOSoul\clothes\cop\cop_uniform.jpg";
            if (LIFE_SETTINGS(getNumber,"cop_extendedSkins") isEqualTo 1) then {
                if (FETCH_CONST(life_coplevel) isEqualTo 4) then {
                    _skinName = "textures\AOSoul\clothes\cop\cop_uniform_white.jpg";
                };
                if (FETCH_CONST(life_coplevel) >= 5) then {
                    _skinName = "textures\AOSoul\clothes\cop\cop_uniform_black.jpg";
                };
            };
            player setObjectTextureGlobal [0, _skinName];
        };
    };

    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\AOSoul\clothes\Medic\medic_uniform.jpg"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
            player setObjectTextureGlobal [0, "textures\AOSoul\clothes\Medic\paramedic_uniform_hv.paa"];
        };
        if (uniform player isEqualTo "U_B_CombatUniform_mcam_worn") then {
            player setObjectTextureGlobal [0, "textures\AOSoul\clothes\Medic\paramedic_unifrom.paa"];
        };
        if (uniform player isEqualTo "U_Competitor") then {
            player setObjectTextureGlobal [0, "textures\AOSoul\clothes\Medic\orange_EMS.paa"];
        };
    };
};
