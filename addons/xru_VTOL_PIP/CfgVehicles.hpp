class CfgVehicles {
    class Plane;
    class Plane_Base_F: Plane {
        class Turrets;
    };
    class VTOL_Base_F: Plane_Base_F {
        class Turrets: Turrets {
            class CopilotTurret;
        };
        class NewTurret;
    };	
    class VTOL_01_base_F: VTOL_Base_F {
        class Turrets: Turrets {
            class CopilotTurret : CopilotTurret {};
        };
    };
    class VTOL_01_armed_base_F: VTOL_01_base_F {
        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret { //Add laserpointer to copilot 
                magazines[] = {"Laserbatteries"};			
                weapons[] = {"Laserdesignator_mounted"};
            };
            class GunnerTurret_01: NewTurret {
                discreteDistance[] = {100}; //Higher values interfere with PIP, making it useless, vanilla values: {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100, 2400};
                discreteDistanceInitIndex = 1;
                magazines[] = {"100Rnd_105mm_HEAT_MP","4000Rnd_20mm_Tracer_Red_shells","Laserbatteries"};
                weapons[] = {"cannon_105mm_VTOL_01","gatling_20mm_VTOL_01","Laserdesignator_mounted"};
                allowTabLock = 1;
            };
            class GunnerTurret_02: GunnerTurret_01 {
                magazines[] = {"240Rnd_40mm_GPR_Tracer_Red_shells","160Rnd_40mm_APFSDS_Tracer_Red_shells","Laserbatteries"};
                weapons[] = {"autocannon_40mm_VTOL_01","Laserdesignator_mounted"};
            };
        };
    };
};
