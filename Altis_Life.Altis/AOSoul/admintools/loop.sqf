for "_i" from 0 to 1 step 0 do {
    waitUntil {alive vehicle player};
    [] execVM "AOSoul\admintools\activate.sqf";
    waitUntil {!alive player};
};