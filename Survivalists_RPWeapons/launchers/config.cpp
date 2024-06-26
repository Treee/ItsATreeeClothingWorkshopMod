class CfgPatches
{
    class Survivalists_RPWeapons_Launchers
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Weapons_Launchers"
        };
    };
};

class cfgWeapons
{
    class Rifle_Base;
    class LauncherCore;

    class Launcher_Base : LauncherCore
    {
        salvageParts[] +=
        {
            "TT_Grip_Wood",
                "TT_Trigger_Simple",
        };
    };
    class M79_Base : Rifle_Base
    {
        chamberableFrom[] += {"Ammo_40mm_Flashbang"};
    };

};