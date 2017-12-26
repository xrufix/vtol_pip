class CfgWeapons {
    class autocannon_Base_F;
    class autocannon_40mm_CTWS : autocannon_Base_F {
        class HE;
        class AP;
    };
    class autocannon_40mm_VTOL_01: autocannon_40mm_CTWS {
        ballisticsComputer = "1 + 8";
        laserLock = 1;
        class HE: HE {
            ballisticsComputer = "1 + 8";
            laserLock = 1;
        };
        class AP: AP {
            ballisticsComputer = "1 + 8";
            laserLock = 1;
        };
    };
    class cannon_105mm;
    class cannon_105mm_VTOL_01: cannon_105mm {
        displayName = "M102 Howitzer";
        ballisticsComputer = "1 + 8";
        laserLock = 1;
    };
    class gatling_20mm;
    class gatling_20mm_VTOL_01 : gatling_20mm {
        displayName = "M61A1 Vulcan";
        ballisticsComputer = "1 + 8";
        laserLock = 1;
    };
};
