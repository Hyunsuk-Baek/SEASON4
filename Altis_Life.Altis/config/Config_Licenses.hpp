/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
*/
class Licenses {
    //Civilian Licenses
    class driver {
        variable = "driver";
        displayName = "STR_License_Driver";
        price = 5000;
        illegal = false;
        side = "civ";
    };

    class boat {
        variable = "boat";
        displayName = "STR_License_Boat";
        price = 30000;
        illegal = false;
        side = "civ";
    };

    class pilot {
        variable = "pilot";
        displayName = "STR_License_Pilot";
        price = 55000;
        illegal = false;
        side = "civ";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_License_Truck";
        price = 30000;
        illegal = false;
        side = "civ";
    };

    class gun {
        variable = "gun";
        displayName = "STR_License_Firearm";
        price = 200000;
        illegal = false;
        side = "civ";
    };

    class dive {
        variable = "dive";
        displayName = "STR_License_Diving";
        price = 50000;
        illegal = false;
        side = "civ";
    };

    class home {
        variable = "home";
        displayName = "STR_License_Home";
        price = 150000;
        illegal = false;
        side = "civ";
    };

    //Processing Licenses
    class oil {
        variable = "oil";
        displayName = "STR_License_Oil";
        price = 100000;
        illegal = false;
        side = "civ";
    };

    class diamond {
        variable = "diamond";
        displayName = "STR_License_Diamond";
        price = 150000;
        illegal = false;
        side = "civ";
    };

    class salt {
        variable = "salt";
        displayName = "STR_License_Salt";
        price = 120000;
        illegal = false;
        side = "civ";
    };

    class sand {
        variable = "sand";
        displayName = "STR_License_Sand";
        price = 145000;
        illegal = false;
        side = "civ";
    };

    class iron {
        variable = "iron";
        displayName = "STR_License_Iron";
        price = 95000;
        illegal = false;
        side = "civ";
    };

    class copper {
        variable = "copper";
        displayName = "STR_License_Copper";
        price = 80000;
        illegal = false;
        side = "civ";
    };

    class cement {
        variable = "cement";
        displayName = "STR_License_Cement";
        price = 65000;
        illegal = false;
        side = "civ";
    };

    class medmarijuana {
        variable = "medmarijuana";
        displayName = "STR_License_Medmarijuana";
        price = 150000;
        illegal = false;
        side = "civ";
    };

    //Illegal Licenses
    class cocaine {
        variable = "cocaine";
        displayName = "STR_License_Cocaine";
        price = 300000;
        illegal = true;
        side = "civ";
    };

    class heroin {
        variable = "heroin";
        displayName = "STR_License_Heroin";
        price = 250000;
        illegal = true;
        side = "civ";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_License_Marijuana";
        price = 195000;
        illegal = true;
        side = "civ";
    };

    class rebel {
        variable = "rebel";
        displayName = "STR_License_Rebel";
        price = 300000;
        illegal = true;
        side = "civ";
    };

    //Cop Licenses
    class cAir {
        variable = "cAir";
        displayName = "STR_License_Pilot";
        price = 55000;
        illegal = false;
        side = "cop";
    };

    class cg {
        variable = "cg";
        displayName = "STR_License_CG";
        price = 58000;
        illegal = false;
        side = "cop";
    };

    //Medic Licenses
    class mAir {
        variable = "mAir";
        displayName = "STR_License_Pilot";
        price = 25000;
        illegal = false;
        side = "med";
    };

    // AOSoul Added
    // this addAction[format [""%1 ($%2)"",localize (getText(missionConfigFile >> ""Licenses"" >> ""level1"" >> ""displayName"")), [(getNumber(missionConfigFile >> ""Licenses"" >> ""level1"" >> ""price""))] call life_fnc_numberText],life_fnc_buyLicense,""level1"",0,false,false,"""",' !license_civ_level1 '];

    // level 1
    class level1 {
        variable = "level1";
        displayName = "STR_License_Level1";
        price = 500000;
        illegal = false;
        side = "civ";
    };
    // level 2
    class level2 {
        variable = "level2";
        displayName = "STR_License_Level2";
        price = 1500000;
        illegal = false;
        side = "civ";
    };
    // level 3
    class level3 {
        variable = "level3";
        displayName = "STR_License_Level3";
        price = 3900000;
        illegal = false;
        side = "civ";
    };
    // level 4
    class level4 {
        variable = "level4";
        displayName = "STR_License_Level4";
        price = 5900000;
        illegal = false;
        side = "civ";
    };
    // level 5
    class level5 {
        variable = "level5";
        displayName = "STR_License_Level5";
        price = 9900000;
        illegal = false;
        side = "civ";
    };
};
