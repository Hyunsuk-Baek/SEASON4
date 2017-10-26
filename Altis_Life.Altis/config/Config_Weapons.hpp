/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/


/* AOSoul Added
 * 시민레벨 3이 살수 있는 무기 : license_civ_level1 || license_civ_level2 || license_civ_level3
 * 시민레벨 5'만' 살수 있는 무기 : license_civ_level5
 * [시민레벨 4이상]와 [경찰레벨3이상] 그리고 [후원자레벨2]가 살수 있게 : license_civ_level4 || license_civ_level5 || call life_coplevel > 3 || call life_donorlevel == 2
 * commented by soulfucker
 */


class WeaponShops {
    //Armory Shops
    class gun {
        name = "gun shop";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_ACPC2_F", "", 20000, 10000, "" },
            { "hgun_Rook40_F", "", 30000, 15000, "" },
            { "hgun_Pistol_heavy_01_F", "", 40000, 20000, "" },
            { "hgun_PDW2000_F", "플레어 건", 70000, 35000, "license_civ_level1" },
            { "SMG_01_F", "", 90000, 45000, "license_civ_level2" },
            { "SMG_02_F", "", 100000, 50000, "license_civ_level3" }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 2000, 1000, "" },
            { "11Rnd_45ACP_Mag", "", 3000, 1500, "" },
            { "30Rnd_9x21_Mag", "", 5000, 2500, "" },
            { "30Rnd_9x21_Red_Mag", "", 5000, 2500, "" },
            { "30Rnd_9x21_Yellow_Mag", "", 5000, 2500, "" },
            { "30Rnd_9x21_Green_Mag", "", 5000, 2500, "" },
            { "16Rnd_9x21_Mag", "", 3000, 1500, "" },
            { "16Rnd_9x21_red_Mag", "", 3000, 1500, "" },
            { "16Rnd_9x21_green_Mag", "", 3000, 1500, "" },
            { "16Rnd_9x21_yellow_Mag", "", 3000, 1500, "" },
            { "30Rnd_45ACP_Mag_SMG_01", "", 5000, 1500, "" },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 5000, 1500, "" },
            { "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", "", 5000, 1500, "" },
            { "30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow", "", 5000, 1500, "" }
        };
        accs[] = {
        };
    };

    class rebel {
        name = "Rebel Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "FirstAidKit", "", 8000, -1, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "acc_flashlight", "", 5000, -1, "" },
            { "acc_pointer_IR", "", 5000, -1, "" },

            //5.56
            { "arifle_CTAR_hex_F", "", 250000, 130000, "license_civ_level1" },
            { "arifle_CTAR_ghex_F", "", 250000, 130000, "call life_donorlevel >= 2" },
            { "arifle_SPAR_01_snd_F", "", 300000, 155000, "license_civ_level2" },
            { "arifle_SPAR_01_khk_F", "", 300000, 155000, "call life_donorlevel >= 2" },
            { "arifle_SPAR_02_snd_F", "", 320000, 165000, "license_civ_level3" },
            { "arifle_SPAR_02_khk_F", "", 320000, 165000, "call life_donorlevel >= 3" },

            //6.5
            { "arifle_MX_F", "", 350000, 180000, "" },
            { "arifle_MX_khk_F", "", 350000, 180000, "call life_donorlevel >= 2" },
            { "arifle_MX_SW_F", "", 370000, 200000, "license_civ_level4" },
            { "arifle_MX_SW_khk_F", "", 370000, 200000, "call life_donorlevel >= 3" },
            { "arifle_MXC_F", "", 320000, 165000, "license_civ_level1" },
            { "arifle_MXC_khk_F", "", 320000, 165000, "license_civ_level3 && call life_donorlevel >= 2" },
            { "arifle_MXM_F", "", 300000, 150000, "license_civ_level3" },
            { "arifle_MXM_khk_F", "", 300000, 150000, "call life_donorlevel >= 2" },
            { "srifle_DMR_07_blk_F", "", 320000, 165000, "" },
            { "srifle_DMR_07_hex_F", "", 320000, 165000, "call life_donorlevel >= 1" },
            { "srifle_DMR_07_ghex_F", "", 320000, 165000, "call life_donorlevel >= 3" },
            { "arifle_ARX_blk_F", "", 320000, 165000, "license_civ_level2" },
            { "arifle_ARX_ghex_F", "", 320000, 165000, "call life_donorlevel >= 3" },
            { "arifle_ARX_hex_F", "", 320000, 165000, "call life_donorlevel >= 2" },

            // 7.62
            { "srifle_DMR_01_F", "", 210000, 150000, "" },
            { "srifle_EBR_F", "", 320000, 165000, "license_civ_level3" },
            { "arifle_SPAR_03_snd_F", "", 370000, 205000, "call life_donorlevel >= 1" },
            { "arifle_SPAR_03_khk_F", "", 370000, 205000, "call life_donorlevel >= 2" },
            { "srifle_DMR_06_camo_F", "", 420000, 240000, "license_civ_level5 || call life_donorlevel >= 3" },
            { "srifle_DMR_06_olive_F", "", 420000, 240000, "license_civ_level5 && call life_donorlevel >= 2" },
            { "arifle_AKM_F", "", 160000, 85000, "" },

            // 기관총
            { "LMG_Mk200_F", "", 750000, 370000, "license_civ_level4" },
            { "MMG_02_camo_F", "", 700000, 370000, "license_civ_level3 || call life_donorlevel >= 2" },
            { "MMG_02_black_F", "", 700000, 350000, "license_civ_level3 && call life_donorlevel >= 1" },
            { "MMG_02_sand_F", "", 700000, 350000, "license_civ_level3 && call life_donorlevel >= 3" },
            { "LMG_03_F", "", 720000, 350000, "license_civ_level4 && call life_donorlevel >= 1" },
            //저격, 대구경
            { "srifle_DMR_02_F", "", 550000, 300000, "license_civ_level4" },
            { "srifle_DMR_02_camo_F", "", 550000, 300000, "call life_donorlevel >= 2" },
            { "srifle_DMR_02_sniper_F", "", 600000, 300000, "call life_donorlevel >= 2" },
            { "srifle_DMR_04_F", "", 720000, 360000, "license_civ_level5" },
            { "srifle_DMR_04_Tan_F", "", 720000, 360000, "call life_donorlevel >= 3" },
            { "srifle_DMR_05_blk_F", "", 630000, 330000, "license_civ_level4" },
            { "srifle_DMR_05_hex_F", "", 630000, 330000, "call life_donorlevel >= 3" },
            { "srifle_DMR_05_tan_f", "", 630000, 330000, "call life_donorlevel >= 2" },
            //런쳐
            { "launch_RPG7_F", "", 730000, 330000, "license_civ_level4" },
            { "launch_RPG32_F", "", 730000, 330000, "license_civ_level5" },
            { "launch_RPG32_ghex_F", "", 830000, 430000, "call life_donorlevel >= 2" },
            { "launch_B_Titan_short_F", "", 830000, 330000, "license_civ_level5 && call life_donorlevel >= 2" },
            { "launch_NLAW_F", "", 870000, 330000, "license_civ_level4 && call life_donorlevel >= 1" }
        };

        mags[] = {
            { "30Rnd_580x42_Mag_Tracer_F", "", 5000, 2500, "" },
            { "30Rnd_556x45_Stanag_red", "",  5000, 2500, "" },
            { "30Rnd_556x45_Stanag_Tracer_Red", "",  5000, 2500, "" },
            { "150Rnd_556x45_Drum_Mag_Tracer_F", "",  15000, 7500, "" },
            //arifle_MX_SW
            { "100Rnd_65x39_caseless_mag_Tracer", "", 12000, 6000, "" },
            //arifle_MX_SW, arifle_MXC_F
            { "30Rnd_65x39_caseless_mag_Tracer", "", 5000, 2500, "" },
            //srifle_DMR
            { "20Rnd_650x39_Cased_Mag_F", "", 4000, 2000, "" },
            //arifle_ARX
            { "30Rnd_65x39_caseless_green", "", 5000, 2500, "" },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 5000, 2500, "" },
            { "10Rnd_50BW_Mag_F", "", 25000, 14000, "call life_donorlevel >= 2" },
            //arifle_DMR, arifle_SPAR, srifle_EBR
            { "10Rnd_762x54_Mag", "", 2000, 1000, "" },
            { "20Rnd_762x51_Mag", "", 5000, 2500, "" },
            //arifle_AKM
            { "30Rnd_762x39_Mag_Green_F", "", 5000, 2500, "" },
            { "30Rnd_762x39_Mag_Tracer_F", "", 5000, 2500, "" },
            { "30Rnd_762x39_Mag_Tracer_Green_F", "", 5000, 2500, "" },
            //srifle_DMR_02
            { "10Rnd_338_Mag", "", 10000, 5000, "" },
            //srifle_DMR_04
            { "10Rnd_127x54_Mag", "", 10000, 5000, "" },
            //srifle_DMR_05
            { "10Rnd_93x64_DMR_05_Mag", "", 10000, 5000, "" },
            //LMG_Mk200_F
            { "200Rnd_65x39_cased_Box_Tracer", "", 20000, 10000, "" },
            //LMG_03_F
            { "200Rnd_556x45_Box_Red_F", "", 20000, 10000, "" },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 20000, 10000, "" },
            //MMG
            { "130Rnd_338_Mag", "", 20000, 10000, "" },
            //launcher
            { "RPG32_F", "", 50000, 25000, "" },
            { "RPG32_HE_F", "", 50000, 25000, "" },
            { "RPG7_F", "", 40000, 15000, "" },
            { "Titan_AT", "", 70000, 30000, "" },
            { "Titan_AP", "", 70000, 30000, "" }
        };
        accs[] = {
            { "optic_Yorris", "", 5000, 2000, "license_civ_level2 || call life_coplevel >= 2 || call life_donorlevel >= 2" },
			{ "optic_tws_mg", "", 120000, 60000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "optic_tws", "", 120000, 60000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "optic_SOS_khk_F", "", 60000, 30000, "call life_donorlevel >= 2" },
			{ "optic_SOS", "", 60000, 30000, "license_civ_level3 || call life_coplevel >= 3" },
			{ "optic_NVS", "", 100000, 50000, "license_civ_level4 || call life_coplevel >= 4 || call life_donorlevel >= 1" },
			{ "optic_Nightstalker", "", 200000, 100000, "license_civ_level5 call life_coplevel >= 5 || call life_donorlevel >= 2" },
			{ "optic_MRD", "", 10000, 5000, "" },
			{ "optic_MRCO", "", 20000, 10000, "" },
			{ "optic_LRPS_tna_F", "", 200000, 100000, "license_civ_level5 || call life_coplevel >= 5 || call life_donorlevel >= 3" },
			{ "optic_LRPS_ghex_F", "", 200000, 100000, "call life_donorlevel >= 3" },
			{ "optic_LRPS", "", 200000, 100000, "license_civ_level5 || call life_coplevel >= 5 || call life_donorlevel >= 2" },
			{ "optic_KHS_tan", "", 100000, 50000, "license_civ_level4 || call life_coplevel >= 4 || call life_donorlevel >= 2" },
			{ "optic_KHS_old", "", 100000, 50000, "license_civ_level3 || call life_coplevel >= 3 || call life_donorlevel >= 2" },
			{ "optic_KHS_hex", "", 100000, 50000, "call life_donorlevel >= 3" },
			{ "optic_KHS_blk", "", 100000, 50000, "license_civ_level4 || call life_coplevel >= 4" },
			{ "optic_Holosight_smg_blk_F", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 1" },
			{ "optic_Holosight_smg", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 1" },
			{ "optic_Holosight_khk_F", "", 5000, 3000, "call life_donorlevel >= 1" },
			{ "optic_Holosight_blk_F", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 1" },
			{ "optic_Holosight", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 1" },
			{ "optic_Hamr_khk_F", "", 5000, 3000, "call life_donorlevel >= 1" },
			{ "optic_Hamr", "", 5000, 3000, "" },
			{ "optic_ERCO_snd_F", "", 20000, 10000, "license_civ_level4 || call life_coplevel >= 4 || call life_donorlevel >= 2" },
			{ "optic_ERCO_khk_F", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "optic_ERCO_blk_F", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" },
			{ "optic_DMS_ghex_F", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "optic_DMS", "", 20000, 10000, "license_civ_level2 || call life_coplevel >= 2 || call life_donorlevel >= 1" },
			{ "optic_Arco_ghex_F", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "optic_Arco_blk_F", "", 20000, 10000, "" },
			{ "optic_Arco", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" },
			{ "optic_AMS_snd", "", 20000, 10000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "optic_AMS_khk", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "optic_AMS", "", 20000, 10000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "optic_Aco_smg", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
			{ "optic_ACO_grn_smg", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
			{ "optic_ACO_grn", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
			{ "optic_Aco", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
			{ "muzzle_snds_m_snd_F", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_m_khk_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_M", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_L", "", 20000, 10000, "call life_coplevel >= 1" },
			{ "muzzle_snds_H_SW", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_H_snd_F", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_H_MG_khk_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_H_MG_blk_F", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "muzzle_snds_H_MG", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_H_khk_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_H", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_B_snd_F", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "muzzle_snds_B_khk_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_B", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_acp", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_93mmg_tan", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "muzzle_snds_93mmg", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "muzzle_snds_65_TI_hex_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_65_TI_ghex_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_65_TI_blk_F", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "muzzle_snds_58_wdm_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_58_hex_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_58_ghex_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_58_blk_F", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_338_sand", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_338_green", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_338_black", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "bipod_03_F_oli", "", 20000, 10000, "license_civ_level4 || call life_coplevel >= 4" },
			{ "bipod_03_F_blk", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" },
			{ "bipod_02_F_tan", "", 20000, 10000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "bipod_02_F_hex", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "bipod_02_F_blk", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" },
			{ "bipod_01_F_snd", "", 20000, 10000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "bipod_01_F_mtp", "", 20000, 10000, "license_civ_level4 || call life_coplevel >= 4" },
			{ "bipod_01_F_khk", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "bipod_01_F_blk", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "FirstAidKit", "", 8000, -1, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Rangefinder", "", 10000, -1, "" },
            { "acc_flashlight", "", 5000, -1, "" },
            { "acc_pointer_IR", "", 5000, -1, "" },
            { "hgun_Rook40_F", "", 20000, 15000, "" },
            { "hgun_PDW2000_F", "플레어 건", 70000, 35000, "license_civ_level1" },
            { "SMG_01_F", "", 80000, 45000, "license_civ_level2" },
            { "SMG_02_F", "", 90000, 50000, "license_civ_level3" },
            //5.56
            { "arifle_Mk20_F", "", 150000, 75000, "license_civ_level1 || call life_donorlevel >= 1" },
            { "arifle_Mk20_plain_F", "", 150000, 75000, "license_civ_level1" },
            { "arifle_Mk20C_F", "", 150000, 75000, "call life_donorlevel >= 1" },
            { "arifle_Mk20C_plain_F", "", 150000, 75000, "license_civ_level2" },
            { "arifle_Mk20_GL_F", "", 810000, 250000, "license_civ_level5 && call life_donorlevel >= 2" },
            { "arifle_SDAR_F", "", 200000, 100000, "" },
            { "arifle_TRG20_F", "", 150000, 75000, "" },
            { "arifle_TRG21_F", "", 150000, 75000, "license_civ_level1" },
            { "arifle_AKS_F", "", 150000, 75000, "license_civ_level2" },
            //6.5
            { "arifle_Katiba_F", "", 200000, 100000, "license_civ_level2" },
            { "arifle_Katiba_C_F", "", 200000, 100000, "call life_donorlevel >= 1" },
            { "arifle_Katiba_GL_F", "", 950000, 250000, "license_civ_level5 && call life_donorlevel >= 3" }
        };
        mags[] = {
            { "30Rnd_9x21_Red_Mag", "", 5000, 2500, "" },
            { "16Rnd_9x21_red_Mag", "", 3000, 1500, "" },
            { "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", "", 5000, 1500, "" },
            //arifle_Mk20, arifle_Mk20C, arifle_SDAR_F,
            //arifle_SPAR_01, arifle_TRG20
            { "30Rnd_556x45_Stanag_red", "",  5000, 2500, "" },
            { "30Rnd_556x45_Stanag_Tracer_Red", "",  5000, 2500, "" },
            //유탄발사기용 // arifle_Mk20_GL_F, arifle_AK12_GL_F
            { "1Rnd_HE_Grenade_shell", "",  45000, 5000, "" },
            { "1Rnd_SmokeRed_Grenade_shell", "",  5000, 2500, "" },
            //arifle_SDAR_F
            { "20Rnd_556x45_UW_mag", "", 1000, 500, "" },
            //arifle_AKS_F
            { "30Rnd_545x39_Mag_Tracer_F", "", 5000, 2500, "" },
            //arifle_Katiba
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 5000, 2500, "" }
        };
        accs[] = {
            { "optic_Yorris", "", 5000, 2000, "license_civ_level2 || call life_coplevel >= 2 || call life_donorlevel >= 2" },
			{ "optic_tws_mg", "", 120000, 60000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "optic_tws", "", 120000, 60000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "optic_SOS_khk_F", "", 60000, 30000, "call life_donorlevel >= 2" },
			{ "optic_SOS", "", 60000, 30000, "license_civ_level3 || call life_coplevel >= 3" },
			{ "optic_NVS", "", 100000, 50000, "license_civ_level4 || call life_coplevel >= 4 || call life_donorlevel >= 1" },
			{ "optic_Nightstalker", "", 200000, 100000, "license_civ_level5 call life_coplevel >= 5 || call life_donorlevel >= 2" },
			{ "optic_MRD", "", 10000, 5000, "" },
			{ "optic_MRCO", "", 20000, 10000, "" },
			{ "optic_LRPS_tna_F", "", 200000, 100000, "license_civ_level5 || call life_coplevel >= 5 || call life_donorlevel >= 3" },
			{ "optic_LRPS_ghex_F", "", 200000, 100000, "call life_donorlevel >= 3" },
			{ "optic_LRPS", "", 200000, 100000, "license_civ_level5 || call life_coplevel >= 5 || call life_donorlevel >= 2" },
			{ "optic_KHS_tan", "", 100000, 50000, "license_civ_level4 || call life_coplevel >= 4 || call life_donorlevel >= 2" },
			{ "optic_KHS_old", "", 100000, 50000, "license_civ_level3 || call life_coplevel >= 3 || call life_donorlevel >= 2" },
			{ "optic_KHS_hex", "", 100000, 50000, "call life_donorlevel >= 3" },
			{ "optic_KHS_blk", "", 100000, 50000, "license_civ_level4 || call life_coplevel >= 4" },
			{ "optic_Holosight_smg_blk_F", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 1" },
			{ "optic_Holosight_smg", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 1" },
			{ "optic_Holosight_khk_F", "", 5000, 3000, "call life_donorlevel >= 1" },
			{ "optic_Holosight_blk_F", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 1" },
			{ "optic_Holosight", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 1" },
			{ "optic_Hamr_khk_F", "", 5000, 3000, "call life_donorlevel >= 1" },
			{ "optic_Hamr", "", 5000, 3000, "" },
			{ "optic_ERCO_snd_F", "", 20000, 10000, "license_civ_level4 || call life_coplevel >= 4 || call life_donorlevel >= 2" },
			{ "optic_ERCO_khk_F", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "optic_ERCO_blk_F", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" },
			{ "optic_DMS_ghex_F", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "optic_DMS", "", 20000, 10000, "license_civ_level2 || call life_coplevel >= 2 || call life_donorlevel >= 1" },
			{ "optic_Arco_ghex_F", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "optic_Arco_blk_F", "", 20000, 10000, "" },
			{ "optic_Arco", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" },
			{ "optic_AMS_snd", "", 20000, 10000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "optic_AMS_khk", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "optic_AMS", "", 20000, 10000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "optic_Aco_smg", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
			{ "optic_ACO_grn_smg", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
			{ "optic_ACO_grn", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
			{ "optic_Aco", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
			{ "muzzle_snds_m_snd_F", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_m_khk_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_M", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_L", "", 20000, 10000, "call life_coplevel >= 1" },
			{ "muzzle_snds_H_SW", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_H_snd_F", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_H_MG_khk_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_H_MG_blk_F", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "muzzle_snds_H_MG", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_H_khk_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_H", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_B_snd_F", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "muzzle_snds_B_khk_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_B", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_acp", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_93mmg_tan", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "muzzle_snds_93mmg", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "muzzle_snds_65_TI_hex_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_65_TI_ghex_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_65_TI_blk_F", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "muzzle_snds_58_wdm_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_58_hex_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_58_ghex_F", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_58_blk_F", "", 20000, 10000, "call life_donorlevel >= 1" },
			{ "muzzle_snds_338_sand", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_338_green", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "muzzle_snds_338_black", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "bipod_03_F_oli", "", 20000, 10000, "license_civ_level4 || call life_coplevel >= 4" },
			{ "bipod_03_F_blk", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" },
			{ "bipod_02_F_tan", "", 20000, 10000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "bipod_02_F_hex", "", 20000, 10000, "call life_donorlevel >= 2" },
			{ "bipod_02_F_blk", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" },
			{ "bipod_01_F_snd", "", 20000, 10000, "license_civ_level5 || call life_coplevel >= 5" },
			{ "bipod_01_F_mtp", "", 20000, 10000, "license_civ_level4 || call life_coplevel >= 4" },
			{ "bipod_01_F_khk", "", 20000, 10000, "call life_donorlevel >= 3" },
			{ "bipod_01_F_blk", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 500, -1, "" },
            { "ItemGPS", "", 500, -1, "" },
            { "ItemMap", "", 500, -1, "" },
            { "ItemCompass", "", 500, -1, "" },
            { "ItemWatch", "", 500, -1, "" },
            { "FirstAidKit", "", 8000, -1, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            //{ "NVGoggles_INDEP", "", 10000, 1000, "call life_coplevel >= 1" },	//에드온에서 갈색만 작동되게 함(다른걸로 대처하기)
            { "NVGoggles_tna_F", "", 10000, 1000, "license_civ_level2 || call life_coplevel >= 2" },
            //{ "NVGoggles_OPFOR", "", 10000, 1000, "" },	//에드온에서 갈색만 작동되게 함(다른걸로 대처하기)
            { "NVGogglesB_blk_F", "", 900000, 450000, "call life_donorlevel >= 4" },
            { "NVGogglesB_gry_F", "", 900000, 450000, "call life_donorlevel >= 4" },
            { "NVGogglesB_grn_F", "", 900000, 450000, "call life_donorlevel >= 4" },

            { "Chemlight_red", "", 1500, -1, "" },
            { "Chemlight_yellow", "", 1500, -1, "" },
            { "Chemlight_green", "", 1500, -1, "" },
            { "Chemlight_blue", "", 1500, -1, "" },

			{ "AOS_FlashLight_Red", "손전등 - 빨강", 1000, -1, "" },
			{ "AOS_FlashLight_Yellow", "손전등 - 노랑", 1000, -1, "" },
			{ "AOS_FlashLight_Blue", "손전등 - 파랑", 1000, -1, "" },
			{ "AOS_FlashLight_Green", "손전등 - 초록", 1000, -1, "" },
			{ "AOS_FlashLight_White", "손전등 - 흰색", 1000, -1, "" },

			{ "murshun_cigs_cigpack", "담배한갑", 4500, -1, "" },
			{ "immersion_pops_poppack", "츄파춥스", 1200, -1, "" },
			{ "murshun_cigs_lighter", "라이터", 10000, -1, "" },
			{ "murshun_cigs_matches", "성냥", 3000, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 500, -1, "" },
            { "ItemGPS", "", 500, -1, "" },
            { "ItemMap", "", 500, -1, "" },
            { "ItemCompass", "", 500, -1, "" },
            { "ItemWatch", "", 500, -1, "" },
            { "FirstAidKit", "", 8000, -1, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 500, "" },
            { "Chemlight_yellow", "", 1500, 500, "" },
            { "Chemlight_green", "", 1500, 500, "" },
            { "Chemlight_blue", "", 1500, 500, "" },

			{ "AOS_FlashLight_Red", "손전등 - 빨강", 1000, -1, "" },
			{ "AOS_FlashLight_Yellow", "손전등 - 노랑", 1000, -1, "" },
			{ "AOS_FlashLight_Blue", "손전등 - 파랑", 1000, -1, "" },
			{ "AOS_FlashLight_Green", "손전등 - 초록", 1000, -1, "" },
			{ "AOS_FlashLight_White", "손전등 - 흰색", 1000, -1, "" },

			{ "murshun_cigs_cigpack", "담배한갑", 4500, -1, "" },
			{ "immersion_pops_poppack", "츄파춥스", 1200, -1, "" },
			{ "murshun_cigs_lighter", "라이터", 10000, -1, "" },
			{ "murshun_cigs_matches", "성냥", 3000, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 500, -1, "" },
            { "ItemGPS", "", 500, -1, "" },
            { "ItemMap", "", 500, -1, "" },
            { "ItemCompass", "", 500, -1, "" },
            { "ItemWatch", "", 500, -1, "" },
            { "FirstAidKit", "", 8000, -1, "" },
            { "acc_flashlight", "", 5000, -1, "" },
            { "acc_pointer_IR", "", 5000, -1, "" },
            { "Rangefinder", "", 10000, -1, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            //{ "NVGoggles_INDEP", "", 10000, 1000, "call life_coplevel >= 1" },	//에드온에서 갈색만 작동되게 함(다른걸로 대처하기)
            { "NVGoggles_tna_F", "", 10000, 1000, "call life_coplevel >= 2" },
            //{ "NVGoggles_OPFOR", "", 10000, 1000, "" },	//에드온에서 갈색만 작동되게 함(다른걸로 대처하기)
            { "NVGogglesB_blk_F", "", 500000, 300000, "call life_coplevel >= 4" },
            { "NVGogglesB_gry_F", "", 500000, 300000, "call life_donorlevel >= 3" },
            { "NVGogglesB_grn_F", "", 500000, 300000, "call life_donorlevel >= 3" },

			{ "murshun_cigs_cigpack", "담배한갑", 4500, -1, "" },
			{ "immersion_pops_poppack", "츄파춥스", 1200, -1, "" },
			{ "murshun_cigs_lighter", "라이터", 10000, -1, "" },
			{ "murshun_cigs_matches", "성냥", 3000, -1, "" },

			{ "AOS_FlashLight_Red", "손전등 - 빨강", 1000, -1, "" },
			{ "AOS_FlashLight_Yellow", "손전등 - 노랑", 1000, -1, "" },
			{ "AOS_FlashLight_Blue", "손전등 - 파랑", 1000, -1, "" },
			{ "AOS_FlashLight_Green", "손전등 - 초록", 1000, -1, "" },
			{ "AOS_FlashLight_White", "손전등 - 흰색", 1000, -1, "" },

            { "acc_flashlight", "", 5000, -1, "" },
            { "acc_pointer_IR", "", 5000, -1, "" },
            { "Chemlight_red", "", 1500, -1, "" },
            { "Chemlight_yellow", "", 1500, -1, "" },
            { "Chemlight_green", "", 1500, -1, "" },
            { "Chemlight_blue", "", 1500, -1, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, -1, "" },
            { "SmokeShellRed", "최루탄", 32000, 16000, "" },
            { "B_UavTerminal", "", 130000, 65000, "call life_coplevel >= 3" },
            //{ "I_UavTerminal", "", 130000, 65000, "call life_coplevel >= 3" },
            //플레어 건
            { "hgun_PDW2000_F", "플레어 건", 70000, 35000, "" },
            
            //권총
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 5000, 1000, "" },
            { "hgun_P07_khk_F", "", 10000, 5000, "call life_donorlevel >= 1" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 50000, 25000, "call life_coplevel >= 4" },
            { "SMG_05_F", "", 50000, 25000, "call life_coplevel >= 2" },
            { "hgun_Pistol_01_F", "", 50000, 25000, "call life_coplevel >= 2" },

            //5.56
            { "arifle_Mk20_F", "", 50000, 25000, "call life_coplevel >= 1 && call life_donorlevel >= 1" },
            { "arifle_Mk20_plain_F", "", 50000, 25000, "call life_coplevel >= 1" },
            { "arifle_Mk20C_F", "", 50000, 25000, "call life_donorlevel >= 1" },
            { "arifle_Mk20C_plain_F", "", 50000, 25000, "call life_coplevel >= 2" },
            { "arifle_Mk20_GL_F", "", 50000, 25000, "call life_coplevel >= 5 && call life_donorlevel >= 3" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 30000, 15000, "" },
            { "arifle_SPAR_01_blk_F", "", 150000, 75000, "call life_coplevel >= 3" },
            { "arifle_SPAR_01_snd_F", "", 150000, 75000, "call life_coplevel >= 3 && call life_donorlevel >= 1" },
            { "arifle_SPAR_01_khk_F", "", 150000, 75000, "call life_coplevel >= 3 && call life_donorlevel >= 2" },

            //6.5
            { "arifle_MX_SW_F", "", 150000, 75000, "call life_coplevel >= 4" },
            { "arifle_MX_SW_Black_F", "", 150000, 75000, "call life_coplevel >= 4" },
            { "arifle_MX_SW_khk_F", "", 150000, 75000, "call life_coplevel >= 4 && call life_donorlevel >= 2" },
            { "arifle_MXC_Black_F", "", 150000, 75000, "call life_coplevel >= 2" },
            { "arifle_MXC_khk_F", "", 150000, 75000, "call life_coplevel >= 2 && call life_donorlevel >= 1" },

            //7.62
            { "srifle_EBR_F", "", 220000, 100000, "call life_coplevel >= 3" },
            { "arifle_SPAR_03_blk_F", "", 220000, 100000, "call life_coplevel >= 3" },
            { "arifle_SPAR_03_khk_F", "", 220000, 170000, "call life_coplevel >= 3 && call life_donorlevel >= 2" },
            { "arifle_SPAR_03_snd_F", "", 220000, 170000, "call life_coplevel >= 3 && call life_donorlevel >= 1" },
            { "srifle_DMR_03_F", "", 340000, 170000, "call life_coplevel >= 4" },
            { "srifle_DMR_03_khaki_F", "", 340000, 170000, "call life_coplevel >= 4 && call life_donorlevel >= 3" },
            { "srifle_DMR_03_tan_F", "", 340000, 170000, "call life_coplevel >= 4" },
            { "srifle_DMR_03_multicam_F", "", 340000, 170000, "call life_coplevel >= 4 && call life_donorlevel >= 3" },
            { "srifle_DMR_03_woodland_F", "", 340000, 170000, "call life_coplevel >= 4 && call life_donorlevel >= 2" },
            { "arifle_AK12_F", "", 300000, 150000, "call life_coplevel >= 4" },
            { "arifle_AK12_GL_F", "", 700000, 350000, "call life_coplevel >= 5" },

            //대구경,스나이퍼
            { "srifle_GM6_F", "", 800000, 400000, "call life_coplevel >= 5" },
            { "srifle_GM6_camo_F", "", 800000, 400000, "call life_coplevel >= 5 && call life_donorlevel >= 2" },
            { "srifle_GM6_ghex_F", "", 800000, 400000, "call life_coplevel >= 5 && call life_donorlevel >= 3" },
            { "srifle_LRR_F", "", 800000, 400000, "call life_coplevel >= 4" },
            { "srifle_LRR_camo_F", "", 800000, 400000, "call life_coplevel >= 4 && call life_donorlevel >= 2" },
            { "srifle_LRR_tna_F", "", 800000, 400000, "call life_coplevel >= 4 && call life_donorlevel >= 2" },

            //기관총//중화기
            { "arifle_CTARS_blk_F", "", 400000, 200000, "call life_coplevel >= 3" },
            { "arifle_CTARS_hex_F", "", 400000, 200000, "call life_coplevel >= 3 && call life_donorlevel >= 1" },
            { "arifle_CTARS_ghex_F", "",400000, 200000, "call life_coplevel >= 3 && call life_donorlevel >= 2" },
            { "LMG_Zafir_F", "", 800000, 400000, "call life_coplevel >= 5" },
            { "LMG_Mk200_F", "", 800000, 400000, "call life_coplevel >= 4" },
            { "MMG_01_hex_F", "", 800000, 400000, "call life_coplevel >= 5 && call life_donorlevel >= 2" },
            { "MMG_01_tan_F", "", 800000, 400000, "call life_coplevel >= 5" },
            { "LMG_03_F", "", 600000, 300000, "call life_coplevel >= 4 && call life_donorlevel >= 2" },

            //런쳐
            { "launch_RPG32_F", "", 800000, 400000, "call life_coplevel >= 5" },
            { "launch_RPG32_ghex_F", "", 800000, 400000, "call life_coplevel >= 5 && call life_donorlevel >= 2" },
            { "launch_Titan_F", "", 600000, 300000, "call life_coplevel >= 4" },
            { "launch_B_Titan_F", "", 600000, 300000, "call life_coplevel >= 5" },
            { "launch_I_Titan_F", "", 600000, 300000, "call life_coplevel >= 5 && call life_donorlevel >= 1" },
            { "launch_O_Titan_F", "", 600000, 300000, "call life_coplevel >= 5 && call life_donorlevel >= 1" },
            { "launch_B_Titan_tna_F", "", 600000, 300000, "call life_coplevel >= 5 && call life_donorlevel >= 2" },
            { "launch_O_Titan_ghex_F", "", 600000, 300000, "call life_coplevel >= 5 && call life_donorlevel >= 2" },
            { "launch_Titan_short_F", "", 600000, 300000, "call life_coplevel >= 5 && call life_donorlevel >= 3" },
            { "launch_B_Titan_short_F", "", 600000, 300000, "call life_coplevel >= 4" },
            { "launch_I_Titan_short_F", "", 600000, 300000, "call life_coplevel >= 4 && call life_donorlevel >= 1" },
            { "launch_O_Titan_short_F", "", 600000, 300000, "call life_coplevel >= 4 && call life_donorlevel >= 1" },
            { "launch_B_Titan_short_tna_F", "", 600000, 300000, "call life_coplevel >= 4 && call life_donorlevel >= 1" },
            { "launch_O_Titan_short_ghex_F", "", 600000, 300000, "call life_coplevel >= 4 && call life_donorlevel >= 2" }
        };

        mags[] = {
            //hgun_P07_F, hgun_P07_khk_F, hgun_Rook40_F
            { "16Rnd_9x21_Mag", "",        1000, 500, "" },
            { "16Rnd_9x21_red_Mag", "",    1000, 500, "" },
            { "16Rnd_9x21_green_Mag", "",  1000, 500, "" },
            { "16Rnd_9x21_yellow_Mag", "", 1000, 500, "" },
            { "30Rnd_9x21_Mag", "",        1000, 500, "" },
            { "30Rnd_9x21_Red_Mag", "",    1000, 500, "" },
            { "30Rnd_9x21_Yellow_Mag", "", 1000, 500, "" },
            { "30Rnd_9x21_Green_Mag", "",  1000, 500, "" },
            //hgun_Pistol_heavy_02_F (Zubr)
            { "6Rnd_45ACP_Cylinder", "",  1000, 500, "" },
            //SMG_05_F (protector 9mm), SMG_02_F
            { "30Rnd_9x21_Mag_SMG_02", "",  3000, 1500, "" },
            { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "",  3000, 1500, "" },
            { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "",  3000, 1500, "" },
            { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "",  3000, 1500, "" },
            //hgun_Pistol_01_F
            { "10Rnd_9x21_Mag", "",  1000, 500, "" },
            //arifle_Mk20, arifle_Mk20C, arifle_SDAR_F,
            //arifle_SPAR_01, arifle_TRG20
            { "30Rnd_556x45_Stanag", "",  5000, 2500, "" },
            { "30Rnd_556x45_Stanag_Tracer_Red", "",  5000, 2500, "" },
            { "30Rnd_556x45_Stanag_Tracer_Green", "",  5000, 2500, "" },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "",  5000, 2500, "" },
            { "30Rnd_556x45_Stanag_red", "",  5000, 2500, "" },
            { "30Rnd_556x45_Stanag_green", "",  5000, 2500, "" },
            //유탄발사기용 // arifle_Mk20_GL_F, arifle_AK12_GL_F
            { "1Rnd_HE_Grenade_shell", "",  15000, 5000, "" },
            { "1Rnd_SmokeYellow_Grenade_shell", "",  5000, 2500, "" },
            { "1Rnd_SmokePurple_Grenade_shell", "",  5000, 2500, "" },
            { "1Rnd_SmokeRed_Grenade_shell", "",  5000, 2500, "" },
            { "1Rnd_Smoke_Grenade_shell", "",  5000, 2500, "" },
            { "UGL_FlareWhite_F", "",  3000, 1500, "" },
            { "UGL_FlareGreen_F", "",  3000, 1500, "" },
            { "UGL_FlareRed_F", "",  3000, 1500, "" },
            { "UGL_FlareYellow_F", "",  3000, 1500, "" },
            { "UGL_FlareCIR_F", "",  3000, 1500, "" },
            //arifle_SDAR_F
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 1000, 500, "" },
            //arifle_MX_SW
            { "100Rnd_65x39_caseless_mag", "", 5000, 2500, "" },
            { "100Rnd_65x39_caseless_mag_Tracer", "", 5000, 2500, "" },
            //arifle_MX_SW, arifle_MXC_F
            { "30Rnd_65x39_caseless_mag", "", 5000, 2500, "" },
            { "30Rnd_65x39_caseless_mag_Tracer", "", 5000, 2500, "" },
            //srifle_EBR_F, srifle_DMR_03, arifle_SPAR_03
            { "20Rnd_762x51_Mag", "", 5000, 2500, "" },
            //arifle_AK12_F
            { "30Rnd_762x39_Mag_F", "", 5000, 2500, "" },
            { "30Rnd_762x39_Mag_Green_F", "", 5000, 2500, "" },
            { "30Rnd_762x39_Mag_Tracer_F", "", 5000, 2500, "" },
            { "30Rnd_762x39_Mag_Tracer_Green_F", "", 5000, 2500, "" },
            //srifle_GM6
            { "5Rnd_127x108_Mag", "", 10000, 5000, "" },
            { "5Rnd_127x108_APDS_Mag", "", 15000, 7500, "" },
            //srifle_LRR
            { "7Rnd_408_Mag", "", 10000, 5000, "" },
            { "7Rnd_408_Mag", "", 10000, 5000, "" },
            //arifle_CTARS
            { "100Rnd_580x42_Mag_F", "", 20000, 10000, "" },
            { "100Rnd_580x42_Mag_Tracer_F", "", 20000, 10000, "" },
            //LMG_Zafir_F
            { "150Rnd_762x54_Box", "", 25000, 13000, "" },
            { "150Rnd_762x54_Box_Tracer", "", 25000, 13000, "" },
            //LMG_Mk200_F
            { "200Rnd_65x39_cased_Box", "", 20000, 10000, "" },
            { "200Rnd_65x39_cased_Box_Tracer", "", 20000, 10000, "" },
            //LMG_03_F
            { "200Rnd_556x45_Box_F", "", 20000, 10000, "" },
            { "200Rnd_556x45_Box_Red_F", "", 20000, 10000, "" },
            { "200Rnd_556x45_Box_Tracer_F", "", 20000, 10000, "" },
            { "200Rnd_556x45_Box_Tracer_Red_F", "", 20000, 10000, "" },
            //launcher
            { "RPG32_F", "", 30000, 20000, "" },
            { "RPG32_HE_F", "", 30000, 20000, "" },
            { "RPG7_F", "", 20000, 10000, "" },
            { "Titan_AA", "", 50000, 30000, "" },
            { "Titan_AT", "", 50000, 30000, "" },
            { "Titan_AP", "", 50000, 30000, "" }
         };
        accs[] = {
            { "acc_flashlight", "", 5000, 2000, "" },
            { "acc_pointer_IR", "", 5000, 2000, "license_civ_level3" },
            { "optic_Yorris", "", 5000, 2000, "license_civ_level2 || call life_coplevel >= 2 || call life_donorlevel >= 2" },
            { "optic_tws_mg", "", 120000, 60000, "license_civ_level5 || call life_coplevel >= 5" },
            { "optic_tws", "", 120000, 60000, "license_civ_level5 || call life_coplevel >= 5" },
            { "optic_SOS_khk_F", "", 60000, 30000, "call life_donorlevel >= 2" },
            { "optic_SOS", "", 60000, 30000, "license_civ_level3 || call life_coplevel >= 3" },
            { "optic_NVS", "", 100000, 50000, "license_civ_level4 || call life_coplevel >= 4 || call life_donorlevel >= 2" },
            { "optic_Nightstalker", "", 200000, 100000, "license_civ_level5 call life_coplevel >= 5 || call life_donorlevel >= 2" },
            { "optic_MRD", "", 10000, 5000, "" },
            { "optic_MRCO", "", 20000, 10000, "" },
            { "optic_LRPS_tna_F", "", 200000, 100000, "license_civ_level5 || call life_coplevel >= 5 || call life_donorlevel >= 3" },
            { "optic_LRPS_ghex_F", "", 200000, 100000, "call life_donorlevel >= 3" },
            { "optic_LRPS", "", 200000, 100000, "license_civ_level5 || call life_coplevel >= 5 || call life_donorlevel >= 2" },
            { "optic_KHS_tan", "", 100000, 50000, "license_civ_level4 || call life_coplevel >= 4 || call life_donorlevel >= 2" },
            { "optic_KHS_old", "", 100000, 50000, "license_civ_level3 || call life_coplevel >= 3 || call life_donorlevel >= 2" },
            { "optic_KHS_hex", "", 100000, 50000, "call life_donorlevel >= 3" },
            { "optic_KHS_blk", "", 100000, 50000, "license_civ_level4 || call life_coplevel >= 4" },
            { "optic_Holosight_smg_blk_F", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 2" },
            { "optic_Holosight_smg", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 2" },
            { "optic_Holosight_khk_F", "", 5000, 3000, "call life_donorlevel >= 1" },
            { "optic_Holosight_blk_F", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 2" },
            { "optic_Holosight", "", 5000, 3000, "license_civ_level1 || call life_coplevel >= 1 || call life_donorlevel >= 2" },
            { "optic_Hamr_khk_F", "", 5000, 3000, "call life_donorlevel >= 1" },
            { "optic_Hamr", "", 5000, 3000, "" },
            { "optic_ERCO_snd_F", "", 20000, 10000, "license_civ_level4 || call life_coplevel >= 4 || call life_donorlevel >= 2" },
            { "optic_ERCO_khk_F", "", 20000, 10000, "call life_donorlevel >= 2" },
            { "optic_ERCO_blk_F", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" },
            { "optic_DMS_ghex_F", "", 20000, 10000, "call life_donorlevel >= 1" },
            { "optic_DMS", "", 20000, 10000, "license_civ_level2 || call life_coplevel >= 2 || call life_donorlevel >= 1" },
            { "optic_Arco_ghex_F", "", 20000, 10000, "call life_donorlevel >= 1" },
            { "optic_Arco_blk_F", "", 20000, 10000, "" },
            { "optic_Arco", "", 20000, 10000, "license_civ_level3 || call life_coplevel >= 3" },
            { "optic_AMS_snd", "", 20000, 10000, "license_civ_level5 || call life_coplevel >= 5" },
            { "optic_AMS_khk", "", 20000, 10000, "call life_donorlevel >= 3" },
            { "optic_AMS", "", 20000, 10000, "license_civ_level5 || call life_coplevel >= 5" },
            { "optic_Aco_smg", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
            { "optic_ACO_grn_smg", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
            { "optic_ACO_grn", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
            { "optic_Aco", "", 10000, 5000, "license_civ_level2 || call life_coplevel >= 2" },
            { "muzzle_snds_m_snd_F", "", 20000, 100, "call life_donorlevel >= 1" },
            { "muzzle_snds_m_khk_F", "", 20000, 100, "call life_donorlevel >= 3" },
            { "muzzle_snds_M", "", 20000, 100, "call life_donorlevel >= 1" },
            { "muzzle_snds_L", "", 20000, 100, "call life_coplevel >= 1" },
            { "muzzle_snds_H_SW", "", 20000, 100, "call life_donorlevel >= 1" },
            { "muzzle_snds_H_snd_F", "", 20000, 100, "call life_donorlevel >= 1" },
            { "muzzle_snds_H_MG_khk_F", "", 20000, 100, "call life_donorlevel >= 3" },
            { "muzzle_snds_H_MG_blk_F", "", 20000, 100, "call life_donorlevel >= 2" },
            { "muzzle_snds_H_MG", "", 20000, 100, "call life_donorlevel >= 1" },
            { "muzzle_snds_H_khk_F", "", 20000, 100, "call life_donorlevel >= 3" },
            { "muzzle_snds_H", "", 20000, 100, "call life_donorlevel >= 1" },
            { "muzzle_snds_B_snd_F", "", 20000, 100, "call life_donorlevel >= 2" },
            { "muzzle_snds_B_khk_F", "", 20000, 100, "call life_donorlevel >= 3" },
            { "muzzle_snds_B", "", 20000, 100, "call life_donorlevel >= 1" },
            { "muzzle_snds_acp", "", 20000, 100, "call life_donorlevel >= 1" },
            { "muzzle_snds_93mmg_tan", "", 20000, 100, "call life_donorlevel >= 2" },
            { "muzzle_snds_93mmg", "", 20000, 100, "call life_donorlevel >= 2" },
            { "muzzle_snds_65_TI_hex_F", "", 20000, 100, "call life_donorlevel >= 3" },
            { "muzzle_snds_65_TI_ghex_F", "", 20000, 100, "call life_donorlevel >= 3" },
            { "muzzle_snds_65_TI_blk_F", "", 20000, 100, "call life_donorlevel >= 2" },
            { "muzzle_snds_58_wdm_F", "", 20000, 100, "call life_donorlevel >= 3" },
            { "muzzle_snds_58_hex_F", "", 20000, 100, "call life_donorlevel >= 3" },
            { "muzzle_snds_58_ghex_F", "", 20000, 100, "call life_donorlevel >= 3" },
            { "muzzle_snds_58_blk_F", "", 20000, 100, "call life_donorlevel >= 1" },
            { "muzzle_snds_338_sand", "", 20000, 100, "call life_donorlevel >= 3" },
            { "muzzle_snds_338_green", "", 20000, 100, "call life_donorlevel >= 3" },
            { "muzzle_snds_338_black", "", 20000, 100, "call life_donorlevel >= 3" },
            { "bipod_03_F_oli", "", 20000, -1, "license_civ_level4 || call life_coplevel >= 4" },
            { "bipod_03_F_blk", "", 20000, -1, "license_civ_level3 || call life_coplevel >= 3" },
            { "bipod_02_F_tan", "", 20000, -1, "license_civ_level5 || call life_coplevel >= 5" },
            { "bipod_02_F_hex", "", 20000, -1, "call life_donorlevel >= 2" },
            { "bipod_02_F_blk", "", 20000, -1, "license_civ_level3 || call life_coplevel >= 3" },
            { "bipod_01_F_snd", "", 20000, -1, "license_civ_level5 || call life_coplevel >= 5" },
            { "bipod_01_F_mtp", "", 20000, -1, "license_civ_level4 || call life_coplevel >= 4" },
            { "bipod_01_F_khk", "", 20000, -1, "call life_donorlevel >= 3" },
            { "bipod_01_F_blk", "", 20000, -1, "license_civ_level3 || call life_coplevel >= 3" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "Binocular", "", 500, -1, "" },
            { "ItemGPS", "", 500, -1, "" },
            { "ItemMap", "", 500, -1, "" },
            { "ItemCompass", "", 500, -1, "" },
            { "ItemWatch", "", 500, -1, "" },
            { "FirstAidKit", "", 8000, -1, "" },
            { "Rangefinder", "", 10000, -1, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            //{ "NVGoggles_INDEP", "", 10000, 1000, "" },	//에드온에서 갈색만 작동되게 함(다른걸로 대처하기)
            { "NVGoggles_tna_F", "", 10000, 1000, "call life_mediclevel >= 2" },
            //{ "NVGoggles_OPFOR", "", 10000, 1000, "call life_donorlevel >= 2" },	//에드온에서 갈색만 작동되게 함(다른걸로 대처하기)
            { "NVGogglesB_blk_F", "", 900000, 450000, "call life_mediclevel >= 4" },
            { "NVGogglesB_gry_F", "", 900000, 450000, "call life_donorlevel >= 4" },
            { "NVGogglesB_grn_F", "", 900000, 450000, "call life_donorlevel >= 4" },

			{ "murshun_cigs_cigpack", "담배한갑", 4500, -1, "" },
			{ "immersion_pops_poppack", "츄파춥스", 1200, -1, "" },
			{ "murshun_cigs_lighter", "라이터", 10000, -1, "" },
			{ "murshun_cigs_matches", "성냥", 3000, -1, "" },

			{ "AOS_FlashLight_Red", "손전등 - 빨강", 1000, -1, "" },
			{ "AOS_FlashLight_Yellow", "손전등 - 노랑", 1000, -1, "" },
			{ "AOS_FlashLight_Blue", "손전등 - 파랑", 1000, -1, "" },
			{ "AOS_FlashLight_Green", "손전등 - 초록", 1000, -1, "" },
			{ "AOS_FlashLight_White", "손전등 - 흰색", 1000, -1, "" },

            { "hgun_ACPC2_F", "", 120000, 60000, "" },
            { "hgun_Rook40_F", "", 130000, 65000, "" },
            //{ "C_UavTerminal", "", 130000, 65000, "call life_mediclevel >= 3" },
            { "I_UavTerminal", "", 130000, 65000, "call life_mediclevel >= 3" },
            { "hgun_Pistol_heavy_01_F", "", 240000, 120000, "" },
            { "hgun_PDW2000_F", "플레어 건", 70000, 35000, "" },
            { "SMG_01_F", "", 390000, 145000, "" },
            { "SMG_02_F", "", 500000, 250000, "" }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 2000, 1000, "" },
            { "11Rnd_45ACP_Mag", "", 3000, 1500, "" },
            { "30Rnd_9x21_Mag", "", 5000, 2500, "" },
            { "30Rnd_9x21_Red_Mag", "", 5000, 2500, "" },
            { "30Rnd_9x21_Yellow_Mag", "", 5000, 2500, "" },
            { "30Rnd_9x21_Green_Mag", "", 5000, 2500, "" },
            { "16Rnd_9x21_Mag", "", 3000, 1500, "" },
            { "16Rnd_9x21_red_Mag", "", 3000, 1500, "" },
            { "16Rnd_9x21_green_Mag", "", 3000, 1500, "" },
            { "16Rnd_9x21_yellow_Mag", "", 3000, 1500, "" },
            { "30Rnd_45ACP_Mag_SMG_01", "", 5000, 1500, "" },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 5000, 1500, "" },
            { "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", "", 5000, 1500, "" },
            { "30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow", "", 5000, 1500, "" }
        };
        accs[] = {};
    };
};
