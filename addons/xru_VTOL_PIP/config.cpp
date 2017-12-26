class CfgPatches {
    class xru_VTOL_PIP {
        name = "VTOL CCIP Mod";
        version = 1.1.0.2;
        author = "xrufix";
        url = "https://github.com/xrufix/vtol_pip";
        requiredVersion = 1.8;
        requiredAddons[] = {"A3_Air_F_Exp_VTOL_01","A3_Weapons_F_Exp"};
    };
    class xru_VTOL_PIP_Laser : xru_VTOL_PIP {};
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
