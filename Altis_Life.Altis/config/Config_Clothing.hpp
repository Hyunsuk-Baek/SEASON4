/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_blue", "바비", 3000, "" },
            { "U_C_Poloshirt_stripped", "게이", 3000, "" },
            { "U_C_Poloshirt_salmon", "슈퍼맨", 3000, "" },
            { "U_C_Poloshirt_redwhite", "호랑이", 3000, "" },
            { "U_C_Commoner1_1", "야쿠자", 3000, "" },
            { "U_C_Poor_2", "", 3000, "" },
            { "U_Competitor", "", 2750, "" },
            { "U_IG_Guerilla2_2", "", 3000, "" },
            { "U_IG_Guerilla3_1", "", 3000, "" },
            { "U_OrestesBody", "", 3000, "" },
            { "U_IG_Guerilla2_3", "", 3000, "" },
            { "U_C_HunterBody_grn", "", 3000, "" },
            { "U_C_WorkerCoveralls", "", 3000, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_Competitor", "박대기 기자", 5000, "" },
            { "U_B_CombatUniform_mcam_vest", "헬로 키티", 10000, "" },

			{ "U_C_ConstructionCoverall_Vrana_F", "", 5000, "" },
			{ "U_C_ConstructionCoverall_Red_F", "", 5000, "call life_donorlevel >= 1" },
			{ "U_C_ConstructionCoverall_Blue_F", "", 5000, "call life_donorlevel >= 1" },
			{ "U_C_ConstructionCoverall_Black_F", "", 5000, "" },
            { "U_C_IDAP_Man_TeeShorts_F", "", 15000, "" },
            { "U_C_IDAP_Man_cargo_F", "", 15000, "" },
            { "U_C_IDAP_Man_Jeans_F", "", 15000, "" },
            { "U_C_IDAP_Man_Tee_F", "", 15000, "" },
            { "U_C_IDAP_Man_casual_F", "", 15000, "" },
            { "U_C_IDAP_Man_shorts_F", "", 15000, "" },

            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 1500, "" },
            { "H_Bandanna_surfer", "", 1500, "" },
            { "H_Bandanna_khk", "", 1500, "" },
            { "H_Cap_blu", "", 1500, "" },
            { "H_Cap_grn", "", 1500, "" },
            { "H_Cap_grn_BI", "", 1500, "" },
            { "H_Cap_oli", "", 1500, "" },
            { "H_Cap_red", "", 1500, "" },
            { "H_Cap_tan", "", 1500, "" },

            { "H_HeadSet_white_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_red_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_orange_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_yellow_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_black_F", "", 21500, "call life_donorlevel >= 1" },

            { "H_Construction_basic_vrana_F", "", 32000, "" },
            { "H_Construction_basic_yellow_F", "", 32000, "call life_donorlevel >= 2" },
            { "H_Construction_basic_orange_F", "", 32000, "call life_donorlevel >= 1" },
            { "H_PASGT_basic_blue_press_F", "", 22000, "" },
            { "H_PASGT_neckprot_blue_press_F", "", 22000, "" },

            { "H_Helmet_Skate", "", 1500, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 2000, "" },
            { "H_Bandanna_sgg", "", 2000, "" },
            { "H_Bandanna_cbr", "", 2000, "" },
            { "H_StrawHat", "", 2000, "" },
            { "H_Hat_tan", "", 2000, "" },
            { "H_Hat_brown", "", 2000, "" },
            { "H_Hat_grey", "", 2000, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 2000, "" },
            { "H_Hat_blue", "", 2000, "" },
            { "H_Hat_checker", "", 2000, "" },
            { "H_Booniehat_tan", "", 2000, "" },
            { "H_Booniehat_grn", "", 2000, "" },
            { "H_RacingHelmet_1_red_F", "", 2000, "" },
            { "H_RacingHelmet_1_white_F", "", 2000, "" },
            { "H_RacingHelmet_2_F", "", 2000, "" },
            { "H_Cap_surfer", "", 2000, "" },
            { "H_PASGT_basic_white_F", "", 2000, "" },
            { "H_Hat_Safari_sand_F", "", 32000, "call life_donorlevel >= 1" },
            { "H_Hat_Safari_olive_F", "", 32000, "call life_donorlevel >= 2" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 2000, "" },
            { "G_Shades_Blue", "", 2000, "" },
            { "G_Shades_Green", "", 2000, "" },
            { "G_Shades_Red", "", 2000, "" },
            { "G_Sport_Blackred", "", 2000, "" },
            { "G_Sport_BlackWhite", "", 2000, "" },
            { "G_Sport_Blackyellow", "", 2000, "" },
            { "G_Sport_Checkered", "", 2000, "" },
            { "G_Sport_Greenblack", "", 2000, "" },
            { "G_Sport_Red", "", 2000, "" },
            { "G_Lowprofile", "", 2000, "" },
            { "G_Squares", "", 2000, "" },
            { "G_Aviator", "", 2000, "" },
            { "G_Combat", "", 2000, "" },
            { "G_Lady_Mirror", "", 2000, "" },
            { "G_Lady_Dark", "", 2000, "" },
            { "G_Lady_Blue", "", 2000, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },

            { "B_LegStrapBag_olive_F", "", 6500, "" },
            { "B_LegStrapBag_coyote_F", "", 6500, "" },
            { "B_Messenger_Olive_F", "", 7500, "" },
            { "B_Messenger_Coyote_F", "", 7500, "" },
            { "B_Messenger_Gray_F", "", 7500, "" },

            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" }, //Apex DLC
            { "B_AssaultPack_sgg", "JET PACK", 300000, "" }, //jetpack
			//AOSOUL Added Addons
			{ "FLAY_HangGlider_Bag", "JET PACK", 50000, "" }, //행글라이더 - 블루
			{ "FLAY_HangGliderBlack_Bag", "JET PACK", 50000, "" } //행글라이더 - 블랙
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_Cop_uniforms, 1250, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 1250, "call life_coplevel >= 1" },
            { "U_B_CombatUniform_mcam_worn", "", 1250, "call life_coplevel >= 2" },
            { "U_B_survival_uniform", "", 1250, "call life_coplevel >= 1" },
            { "U_B_CTRG_1", "Black Uniform", 1250, "call life_coplevel >= 1" },
            { "U_B_PilotCoveralls", "", 1250, "call life_coplevel >= 1}" },
            { "U_B_HeliPilotCoveralls", "", 1250, "call life_coplevel >= 1" },
            { "U_B_GhillieSuit", "", 50000, "call life_coplevel >= 3" },
            { "U_B_Wetsuit", "", 10550, "call life_coplevel >= 1" },
            { "U_Marshal", "Marshal", 5550, "call life_coplevel >= 5" },
            { "U_NikosAgedBody", "시민2", 10550, "call life_coplevel >= 3" },
            { "U_B_CTRG_Soldier_3_F", "", 490000, "call life_coplevel >= 1" },
            { "U_B_CTRG_Soldier_F", "", 490000, "call life_coplevel >= 1" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_police", "", 250, "" },
            { "H_Booniehat_mcamo", "", 1000, "call life_coplevel >= 1" },
            { "H_HelmetB_plain_mcamo", "", 1200, "call life_coplevel >= 1" },
            { "H_HelmetB_Enh_tna_F", "", 1200, "call life_coplevel >= 1" }, //Apex DLC
            { "H_Beret_blk_POLICE", "", 1200, "call life_coplevel >= 2" },
            { "H_MilCap_mcamo", "", 1200, "call life_coplevel >= 2" },
            { "H_MilCap_gen_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_tna_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_oucamo", "", 1200, "call life_coplevel >= 2" },
            { "H_Cap_Black_IDAP_F", "", 5000, "call life_coplevel >= 3" },
            { "H_Beret_Colonel", "", 4500, "call life_coplevel >= 2" },
            { "H_Bandanna_khk", "", 4500, "call life_donorlevel >= 1" },
            { "H_HelmetB_light", "", 4500, "call life_coplevel >= 2" },
            { "H_HelmetCrew_O", "", 4500, "call life_donorlevel >= 2" },
            { "H_HelmetSpecO_blk", "", 4500, "call life_coplevel >= 2" },
            { "H_PilotHelmetHeli_O", "", 4500, "call life_donorlevel >= 2" },
            { "H_HelmetB_light_black", "", 4500, "call life_coplevel >= 2" },
            { "H_HelmetB_black", "", 4500, "call life_coplevel >= 2" },
            { "H_Construction_basic_black_F", "", 32000, "call life_donorlevel >= 2" },
            { "H_HeadSet_white_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_red_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_orange_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_yellow_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_black_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_RacingHelmet_4_F", "", 4500, "call life_donorlevel >= 2" },
            { "H_HelmetO_ViperSP_ghex_F", "", 399000, "call life_coplevel >= 2" },
            { "H_Beret_gen_F", "", 2000, "call life_donorlevel >= 2" },
            { "H_HeadBandage_clean_F", "", 2000, "" },
            { "H_HeadBandage_bloody_F", "", 2000, "" },
            { "H_HeadBandage_stained_F", "", 2000, "" },
            { "H_Hat_Safari_sand_F", "", 32000, "call life_donorlevel >= 1" },
            { "H_Hat_Safari_olive_F", "", 32000, "call life_donorlevel >= 2" },


			         //AOSoul Added
            { "H_CrewHelmetHeli_B", "방독면", 5200, "call life_coplevel >= 1" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 1000, "" },
            { "G_Shades_Blue", "", 1000, "" },
            { "G_WirelessEarpiece_F", "", 2000, "" },
            { "G_Sport_Blackred", "", 1000, "" },
            { "G_Sport_Checkered", "", 1000, "" },
            { "G_Sport_Blackyellow", "", 1000, "" },
            { "G_Sport_BlackWhite", "", 1000, "" },
            { "G_Shades_Black", "", 1000, "" },
            { "G_Lowprofile", "", 1000, "" },
            { "G_Combat", "", 1000, "" },
            { "G_Aviator", "", 1000, "" },
            { "G_Lady_Mirror", "", 1000, "" },
            { "G_Lady_Dark", "", 1000, "" },
            { "G_Lady_Blue", "", 1000, "" },
            { "G_Diving", "", 1000, "" },
            { "G_Balaclava_combat", "", 1000, "" },
            { "G_Balaclava_lowprofile", "", 1000, "" },
            { "G_Balaclava_oli", "", 1000, "" },
            { "G_Bandanna_aviator", "", 1000, "" },
            { "G_Bandanna_beast", "", 1000, "" },
            { "G_Bandanna_blk", "", 1000, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 800, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 1" },
            { "V_TacVest_gen_F", "", 1000, "call life_coplevel >= 1" }, //Apex DLC
            { "V_PlateCarrier2_rgr", "", 1500, "call life_coplevel >= 4" },
            { "V_PlateCarrier1_blk", "", 1500, "call life_coplevel >= 3" },
            { "V_Chestrig_blk", "", 1500, "call life_coplevel >= 2" },
            { "V_RebreatherB", "", 1500, "call life_coplevel >= 2" },
            { "V_RebreatherIA", "", 1500, "call life_donorlevel >= 1" },
            { "V_PlateCarrierIAGL_dgtl", "", 1500, "call life_donorlevel >= 3" },
            { "V_PlateCarrierSpec_blk", "", 1500, "call life_coplevel >= 4" },
            { "V_Press_F", "", 1500, "call life_coplevel >= 2" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_cbr", "", 500, "" },
            { "B_AssaultPack_cbr", "", 700, "" },
            { "B_Kitbag_cbr", "", 800, "" },
            { "B_Bergen_sgg", "", 2500, "" },
            { "B_Carryall_cbr", "", 3500, "" },
            { "B_TacticalPack_blk", "", 2500, "" },
            { "B_AssaultPack_blk", "", 2500, "" },
            { "B_Bergen_blk", "", 2500, "" },
            { "B_Carryall_cbr", "", 2500, "" },
            { "B_Parachute", "", 2500, "" },
            { "B_OutdoorPack_blk", "", 2500, "" },
            { "B_Messenger_Black_F", "", 2500, "" },
            { "B_Messenger_Gray_F", "", 2500, "" },
            { "B_LegStrapBag_black_F", "", 2500, "" },
            { "B_AssaultPack_sgg", "JET PACK", 300000, ""}//jetpack
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 5000, "" },
            { "U_O_Wetsuit", "", 5000, "" },
            { "U_B_Wetsuit", "", 5000, "" }
            
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 6900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 5000, "" },
            { "U_I_G_resistanceLeader_F", "", 5000, "" },
            { "U_C_WorkerCoveralls", "", 5000, "" },
            { "U_I_PilotCoveralls", "", 5000, "" },
            { "U_IG_leader", "", 5000, "" },
          		{ "U_I_GhillieSuit", "", 50000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_ShemagOpen_tan", "", 2000, "" },
            { "H_Shemag_olive", "", 2000, "" },
            { "H_ShemagOpen_khk", "", 2000, "" },
            { "H_HelmetO_ocamo", "", 2000, "" },
            { "H_MilCap_oucamo", "", 2000, "" },
            { "H_Bandanna_camo", "", 2000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 2000, "" },
            { "G_Shades_Blue", "", 2000, "" },
            { "G_Sport_Blackred", "", 2000, "" },
            { "G_Sport_Checkered", "", 2000, "" },
            { "G_Sport_Blackyellow", "", 2000, "" },
            { "G_Sport_BlackWhite", "", 2000, "" },
            { "G_Combat", "", 2000, "" },
            { "G_Balaclava_blk", "", 2000, "" },
            { "G_Balaclava_lowprofile", "", 2000, "" },
            { "G_Bandanna_aviator", "", 2000, "" },
            { "G_Bandanna_beast", "", 2000, "" },
            { "G_Bandanna_blk", "", 2000, "" },
            { "G_Bandanna_tan", "", 2000, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" },
            { "V_TacVest_khk", "", 1900, "" },
            { "V_BandollierB_cbr", "", 1900, "" },
            { "V_HarnessO_brn", "", 7900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Parachute", "낙하산", 37500, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" },
            { "U_B_CombatUniform_mcam", "EMS 형광", 1500, "" },
            { "U_B_CombatUniform_mcam_worn", "EMS 녹색", 1500, "" },
            { "U_Competitor", "EMS 주황", 1500, "" },
            { "U_B_Wetsuit", "EMS 잠수복", 5000, "" },
            { "U_B_HeliPilotCoveralls", "", 15000, "" },
            { "U_I_pilotCoveralls", "", 15000, "" },
			{ "U_C_Paramedic_01_F", "", 15000, "call life_mediclevel >= 3" }

        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" },
            { "H_Cap_red", "", 1000, "" },
            { "H_Cap_surfer", "", 1000, "" },
            { "H_Cap_usblack", "", 1000, "" },
            { "H_Cap_press", "", 1000, "" },
            { "H_Cap_blk_ION", "", 1000, "" },
            { "H_Bandanna_surfer", "", 1000, "" },
            { "H_Bandanna_blu", "", 1000, "" },
            { "H_Cap_marshal", "", 1000, "" },
            { "H_Cap_Orange_IDAP_F", "", 5000, "" },
            { "H_Cap_White_IDAP_F", "", 5000, "" },
            { "H_RacingHelmet_1_green_F", "", 5000, "" },
            { "H_RacingHelmet_1_blue_F", "", 5000, "" },
            { "H_RacingHelmet_1_orange_F", "", 5000, "" },
            { "H_Cap_oli", "", 5000, "" },
            { "H_Hat_Safari_sand_F", "", 32000, "call life_donorlevel >= 1" },
            { "H_Hat_Safari_olive_F", "", 32000, "call life_donorlevel >= 2" },
            { "H_Construction_basic_vrana_F", "", 32000, "call life_donorlevel >= 1" },
            { "H_Construction_basic_yellow_F", "", 32000, "call life_donorlevel >= 2" },
            { "H_Construction_basic_orange_F", "", 32000, "call life_donorlevel >= 1" },
            { "H_Construction_basic_red_F", "", 32000, "call life_donorlevel >= 2" },
            { "H_HeadSet_white_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_red_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_orange_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_yellow_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_HeadSet_black_F", "", 21500, "call life_donorlevel >= 1" },
            { "H_CrewHelmetHeli_B", "", 65000, "" },
            { "H_PilotHelmetFighter_I", "", 165000, "" },
            { "H_PilotHelmetHeli_B", "", 5000, "" },
            { "H_PilotHelmetHeli_I", "", 5000, "" },
            { "H_HeadBandage_clean_F", "", 2000, "" },
            { "H_HeadBandage_bloody_F", "", 2000, "" },
            { "H_HeadBandage_stained_F", "", 2000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 1000, "" },
            { "G_Sport_Blackred", "", 1000, "" },
            { "G_Sport_Checkered", "", 1000, "" },
            { "G_Sport_Blackyellow", "", 1000, "" },
            { "G_Sport_BlackWhite", "", 1000, "" },

            { "G_Respirator_white_F", "", 2000, "" },
            { "G_Respirator_blue_F", "", 2000, "" },
            { "G_Respirator_yellow_F", "", 2000, "" },
            { "G_EyeProtectors_F", "", 2000, "" },

            { "G_Squares", "", 1000, "" },
            { "G_Aviator", "", 1000, "" },
            { "G_Lady_Mirror", "", 1000, "" },
            { "G_Lady_Dark", "", 1000, "" },
            { "G_Lady_Blue", "", 1000, "" },
            { "G_Lowprofile", "", 1000, "" },
            { "G_Combat", "", 1000, "" },
            { "G_Diving", "", 1000, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "" },
            { "B_Kitbag_cbr", "", 5800, "" },
            { "B_FieldPack_cbr", "", 6500, "" },
            { "B_AssaultPack_cbr", "", 6700, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Messenger_IDAP_F", "", 17500, "" },
            { "B_Parachute", "낙하산", 37500, "" },
            { "I_UAV_06_medical_backpack_F", "", 900000, "" },
            { "B_Carryall_oucamo", "JET PACK", 300000, "" }

        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" },
            { "H_MilCap_oucamo", "", 12000, "" },
			{ "H_PASGT_basic_olive_F", "", 10000, "" },
			{ "H_PASGT_basic_blue_F", "", 10000, "" },
            { "H_CrewHelmetHeli_B", "방독면1", 90000, "" },
			//Addons
			{ "H_MM_Buzzard_Gasmask_01", "방독면2", 90000, "" },
			{ "H_ALFR_Metal_Gasmask_RU_fuckyou", "방독면3", 90000, "" },
			{ "H_ALFR_Metal_Gasmask_RU_grey", "방독면4", 90000, "" },
			{ "H_ALFR_Metal_Gasmask_RU_khk", "방독면5", 90000, "" },
			{ "H_ALFR_Metal_Gasmask_RU_oli", "방독면6", 90000, "" },
			{ "H_ALFR_Metal_Gasmask_RU_blk", "방독면7", 90000, "" },
			{ "GITS_MASK_HOOD", "고급 방독면", 150000, "" },
			//
            { "H_HelmetO_ViperSP_hex_F", "특수목적hex", 590000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_OutdoorPack_blk", "", 7500, "" },
            { "B_ViperLightHarness_blk_F", "", 17500, "" },
            { "B_AssaultPack_sgg", "JET PACK", 300000, "" },//jetpack
            { "B_Parachute", "낙하산", 37500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_1", "", 3500, "" },
            { "U_C_Driver_2", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    //AOSOUL Added
    class GoldWagon {
        title = "황금마차";
        conditions = "";
        side = "";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "vvv_alien24_hat", "에얼리언", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_AngryGingerbread1", "쿠키맨1", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_AngryGingerbread2", "쿠키맨2", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_AngryGingerbread3", "쿠키맨3", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_AngryGingerbreadSwirl1", "쿠키맨4", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_AngryGingerbreadSwirl2", "쿠키맨5", 100000, "call life_donorlevel >= 1" },
			{ "kio_vfv_mask", "브이포벤데타1", 200000, "call life_donorlevel >= 1" },
			{ "BL_mask_Hat", "브이포벤데타2", 200000, "call life_donorlevel >= 1" },
			{ "H_GuyFawkesMask", "브이포벤데타3", 200000, "call life_donorlevel >= 1" },
			{ "vvv_Anonymous_hat", "게이포벤데타", 300000, "call life_donorlevel >= 1" },
			{ "H_AntmanMask", "엔트맨", 100000, "call life_donorlevel >= 1" },
			{ "H_AugustusMask", "밥샵", 100000, "call life_donorlevel >= 1" },
			{ "cg_dinomask", "공룡1", 100000, "call life_donorlevel >= 1" },
			{ "cg_dinomask_p", "공룡2", 100000, "call life_donorlevel >= 1" },
			{ "cg_dinomask_r", "공룡3", 100000, "call life_donorlevel >= 1" },
			{ "vvv_azteca_hat", "아즈텍1", 100000, "call life_donorlevel >= 1" },
			{ "vvv_azgt_hat", "아즈텍2", 100000, "call life_donorlevel >= 1" },
			{ "vvv_bane_hat", "베인", 100000, "call life_donorlevel >= 1" },
			{ "H_BatmanMask", "베트맨", 100000, "call life_donorlevel >= 1" },
			{ "jokermask", "고전 조커", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Smiley", "조커", 100000, "call life_donorlevel >= 1" },
			{ "H_BobaMask", "스타워즈1", 100000, "call life_donorlevel >= 1" },
			{ "JM_Clone", "스타워즈2", 100000, "call life_donorlevel >= 1" },
			{ "H_BushMask", "부시", 100000, "call life_donorlevel >= 1" },
			{ "H_ClintonMask", "클링턴", 100000, "call life_donorlevel >= 1" },
			{ "H_LincolnMask", "링컨", 100000, "call life_donorlevel >= 1" },
			{ "Casque_Moto", "형광게이", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_PuddingMask1", "쿠키1", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_PuddingMask2", "쿠키2", 100000, "call life_donorlevel >= 1" },
			{ "H_GingerbreadMask", "쿠키3", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_Gingerbread1", "쿠키4", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_CoolElfMask1", "엘프 할아버지1", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_CoolElfMask2", "엘프 할아버지2", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_CoolElfMask3", "엘프 할아버지3", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_ElfMask1", "엘프 할아버지4", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_ElfMask2", "엘프 할아버지5", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_ElfMask3", "엘프 할아버지6", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Dallas_Mask", "페이데이1", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_OVERKILL_IV", "페이데이2", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Anonymous", "페이데이3", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Arnold", "페이데이4", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Aubrey", "페이데이5", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Bonnie", "페이데이6", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Bush", "페이데이7", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Chains", "페이데이8", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Chuck", "페이데이9", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Clinton", "페이데이10", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Clover", "페이데이11", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Dallas", "페이데이12", 100000, "call life_donorlevel >= 1" },
			{ "Masque_forceAlpha", "페이데이13", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Gombo", "페이데이14", 100000, "call life_donorlevel >= 1" },
			{ "Masque_GdG", "페이데이15", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Hockey", "페이데이16", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Hoxton", "페이데이17", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Incendiaire", "페이데이18", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Lincoln", "페이데이19", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Lion", "페이데이20", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Macrilleuse", "페이데이21", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Mark", "페이데이22", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Metalhead", "페이데이23", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Momie", "페이데이24", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Orc", "페이데이25", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Mempo", "페이데이26", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Wolfv2", "페이데이27", 100000, "call life_donorlevel >= 1" },
			{ "H_NixonMask", "페이데이28", 100000, "call life_donorlevel >= 1" },
			{ "H_ObamaMask", "페이데이29", 100000, "call life_donorlevel >= 1" },
			{ "H_WashingtonMask", "페이데이30", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Unic", "유니콘", 100000, "call life_donorlevel >= 1" },
			{ "Masque_speedRunner", "스피드웨건", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Santa", "", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_RoughSantaClaus1", "산타1", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_RoughSantaClaus2", "산타2", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_RoughSantaClaus3", "산타3", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_Santa_White", "산타4", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_Santa_Tan", "산타5", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_Santa_Black", "산타6", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Religieuse", "수녀", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Optimiste", "옵티머스프라임", 100000, "call life_donorlevel >= 1" },
			{ "H_DeadpoolMask", "데드풀", 100000, "call life_donorlevel >= 1" },
			{ "H_FranklinMask", "프랭클린", 100000, "call life_donorlevel >= 1" },
			{ "H_RAAMMask", "괴물1", 100000, "call life_donorlevel >= 1" },
			{ "H_GrantMask", "괴물2", 100000, "call life_donorlevel >= 1" },
			{ "Masque_archNemesis", "괴물3", 100000, "call life_donorlevel >= 1" },
			{ "Masque_Fish", "물고기", 100000, "call life_donorlevel >= 1" },
			{ "vvv_hockey_hat", "제이슨1", 100000, "call life_donorlevel >= 1" },
			{ "H_JasonMask", "제이슨2", 100000, "call life_donorlevel >= 1" },
			{ "H_Ajx_HorseMask", "말가면1", 100000, "call life_donorlevel >= 1" },
			{ "H_Ajx_HorseMask_2", "말가면2", 100000, "call life_donorlevel >= 1" },
			{ "H_Ajx_HorseMask_blk", "말가면3", 100000, "call life_donorlevel >= 1" },
			{ "H_Ajx_HorseMask_pnk", "말가면4", 100000, "call life_donorlevel >= 1" },
			{ "H_HulkMask", "헐크", 100000, "call life_donorlevel >= 1" },
			{ "H_UltronMask", "울트론", 100000, "call life_donorlevel >= 1" },
			{ "vvv_VAMPIRO_hat", "뱀파이어", 100000, "call life_donorlevel >= 1" },
			{ "JM_Chicken", "닭", 100000, "call life_donorlevel >= 1" },
			{ "JM_Cow", "마크 소", 100000, "call life_donorlevel >= 1" },
			{ "JM_Creeper", "마크 크리퍼", 100000, "call life_donorlevel >= 1" },
			{ "JM_Pig", "마크 돼지", 100000, "call life_donorlevel >= 1" },
			{ "JM_Slime", "마크 슬라임", 100000, "call life_donorlevel >= 1" },
			{ "JM_Spider", "마크 거미", 100000, "call life_donorlevel >= 1" },
			{ "JM_SteveHead", "마크 스티브", 100000, "call life_donorlevel >= 1" },
			{ "JM_Zombie", "마크 좀비", 100000, "call life_donorlevel >= 1" },
			{ "JM_Deadmau5", "빨간쥐", 100000, "call life_donorlevel >= 1" },
			{ "JM_Doggo1", "개님1", 100000, "call life_donorlevel >= 1" },
			{ "JM_Doggo2", "개님2", 100000, "call life_donorlevel >= 1" },
			{ "JM_Doggo3", "개님3", 100000, "call life_donorlevel >= 1" },
			{ "JM_Doggo4", "개님4", 100000, "call life_donorlevel >= 1" },
			{ "JM_Doggo5", "개님5", 100000, "call life_donorlevel >= 1" },
			{ "JM_Doggo6", "개님6", 100000, "call life_donorlevel >= 1" },
			{ "JM_Doggo", "개님7", 100000, "call life_donorlevel >= 1" },
			{ "JM_Goat", "염소", 100000, "call life_donorlevel >= 1" },
			{ "JM_sheep", "양1", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Sheep_Mask", "양2", 100000, "call life_donorlevel >= 1" },
			{ "JM_Heavy", "팀포트리스", 100000, "call life_donorlevel >= 1" },
			{ "JM_Luigi", "루이지", 100000, "call life_donorlevel >= 1" },
			{ "JM_Mario", "마리오", 100000, "call life_donorlevel >= 1" },
			{ "JM_Yoshi", "요시", 100000, "call life_donorlevel >= 1" },
			{ "JM_Spiderman", "스파이더맨1", 100000, "call life_donorlevel >= 1" },
			{ "H_SpidermanMask", "스파이더맨2", 100000, "call life_donorlevel >= 1" },
			{ "H_VenomMask", "베놈", 100000, "call life_donorlevel >= 1" },
			{ "H_KermitMask", "개구리", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_OVERKILL_I", "황금박쥐LV1", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_OVERKILL_II", "황금박쥐LV2", 200000, "call life_donorlevel >= 1" },
			{ "H_ALFR_OVERKILL_III", "황금박쥐LV3", 300000, "call life_donorlevel >= 1" },
			{ "H_ALFR_OVERKILL_IV", "황금박쥐LV4", 400000, "call life_donorlevel >= 1" },
			{ "BL_medieval_hat", "중세기사", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Metal_Facemask_gry", "철가면1", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Metal_Facemask_oli", "철가면2", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Metal_Facemask_sand", "철가면3", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Metal_Facemask_blk", "철가면4", 100000, "call life_donorlevel >= 1" },
			{ "H_MickeyMask", "미키마우스", 100000, "call life_donorlevel >= 1" },
			{ "vvv_mono_hat", "원숭이1", 100000, "call life_donorlevel >= 1" },
			{ "vvv_monor_hat", "원숭이2", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_MrsClaus1", "할머니1", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_MrsClaus2", "할머니2", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_MrsClaus3", "할머니3", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_UglyMrsClaus1", "할머니4", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_UglyMrsClaus2", "할머니5", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_UglyMrsClaus3", "할머니6", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_PaintballMsk", "페인트 안면 보호구", 100000, "call life_donorlevel >= 1" },
			{ "vvv_bolsa_hat", "종이박스", 100000, "call life_donorlevel >= 1" },
			{ "H_PatriotMask", "중국산 아이언맨", 100000, "call life_donorlevel >= 1" },
			{ "BL_mask2_Hat", "거대브이", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_Penguin", "펭귄", 100000, "call life_donorlevel >= 1" },
			{ "vvv_cerdo_hat", "돼지", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_Reindeer", "사슴", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Samurai_Mask", "사무라이", 100000, "call life_donorlevel >= 1" },
			{ "H_ScarecrowMask", "살인마1", 100000, "call life_donorlevel >= 1" },
			{ "vvv_slasher_hat", "살인마2", 100000, "call life_donorlevel >= 1" },
			{ "kio_skl_msk_red", "해골가면1", 100000, "call life_donorlevel >= 1" },
			{ "kio_skl_msk", "해골가면2", 100000, "call life_donorlevel >= 1" },
			{ "kio_skl_msk_grn", "해골가면3", 100000, "call life_donorlevel >= 1" },
			{ "vvv_SkullMask_hat", "해골가면4", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Heist_Mask_1", "귀신1", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Heist_Mask_2", "귀신2", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Heist_Mask_3", "귀신3", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Heist_Mask_4", "귀신4", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Heist_Mask_5", "귀신5", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Heist_Mask_6", "귀신6", 100000, "call life_donorlevel >= 1" },
			{ "H_ALFR_Heist_Mask_7", "귀신7", 100000, "call life_donorlevel >= 1" },
			{ "H_MM_Helmet_01", "부랑자", 100000, "call life_donorlevel >= 1" },
			{ "H_ShrekMask", "슈렉", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_Snowman", "눈사람", 100000, "call life_donorlevel >= 1" },
			{ "H_SpongebobMask", "스펀지밥", 100000, "call life_donorlevel >= 1" },
			{ "H_SquidwardMask", "징징이", 100000, "call life_donorlevel >= 1" },
			{ "H_StarFoxMask", "너구리", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_TreeMask1", "트리게이1", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_TreeMask2", "트리게이2", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_TreeMask3", "트리게이3", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_TreeMask4", "트리게이4", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_TreeMask5", "트리게이5", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_TreeMask6", "트리게이6", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_TurkeyMask1", "켄터키1", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_TurkeyMask2", "켄터키2", 100000, "call life_donorlevel >= 1" },
			{ "Gorb_TurkeyMask3", "켄터키3", 100000, "call life_donorlevel >= 1" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
