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
    class M79_Base : Rifle_Base
    {
        chamberableFrom[] += {"Ammo_40mm_Flashbang"};
    };
};