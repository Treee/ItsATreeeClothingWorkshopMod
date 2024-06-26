class CfgPatches
{
    class Survivalists_RPWeapons_Smgs
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Weapons_Firearms_PP19",
            "DZ_Weapons_Firearms_MP5",
            "DZ_Weapons_Firearms_cz61",
            "Survivalists_Weapons_JMC_Smgs"
        };
    };
};
class cfgWeapons
{
    class Rifle_Base;
    class PP19_Base : Rifle_Base
    {
        salvageParts[] +=
        {
            "TT_Grip_Wood",
                "TT_Buttstock_Wood",
                "TT_GunBarrel_Medium",
                "TT_RifledBarrel_Medium",
                "TT_MainReceiver_SemiMedium",
                "TT_MainReceiver_AutoMedium",
                "TT_Trigger_Simple",
                "TT_Hammer_Simple",
        };
    };
    class MP5K_Base : Rifle_Base
    {
        salvageParts[] +=
        {
            "TT_Grip_Wood",
                "TT_Buttstock_Wood",
                "TT_GunBarrel_Medium",
                "TT_RifledBarrel_Medium",
                "TT_MainReceiver_SemiMedium",
                "TT_MainReceiver_AutoMedium",
                "TT_Trigger_Simple",
                "TT_Hammer_Simple",
        };
    };
    class CZ61_Base : Rifle_Base
    {
        salvageParts[] +=
        {
            "TT_Grip_Wood",
                "TT_Buttstock_Wood",
                "TT_GunBarrel_Medium",
                "TT_RifledBarrel_Medium",
                "TT_MainReceiver_SemiMedium",
                "TT_MainReceiver_AutoMedium",
                "TT_Trigger_Simple",
                "TT_Hammer_Simple",
        };
    };
};