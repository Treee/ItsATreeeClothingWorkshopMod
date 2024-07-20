class CfgPatches
{
    class Survivalists_RPWeapons_Pistols
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Pistols_Derringer",
            "DZ_Pistols_Flaregun",
            "Survivalists_Weapons_JMC_Pistols",
            "Dressupbox_Weapons"
        };
    };
};

class CfgWeapons
{
    class PistolCore;
    //=========================================== VANILLA OVERRIDE
    class Pistol_Base : PistolCore
    {
        inventorySlot[] +=
        {
            "SRP_GunDerringer",
                "SRP_Pistol1",
                "SRP_Pistol2",
                "SRP_Pistol3",
                "SRP_Pistol4",
        };
        salvageParts[] +=
        {
            "TT_GunBarrel_Small",
                "TT_RifledBarrel_Small",
                "TT_MainReceiver_SemiSmall",
                "TT_MainReceiver_AutoSmall",
                "TT_Trigger_Simple",
                "TT_Hammer_Simple",
        };
    };
    class Derringer_Base : Pistol_Base
    {
        itemSize[] = { 2,2 };
    };
    class Derringer_Black : Derringer_Base
    {
        scope = 0;
    };
    class Derringer_Pink : Derringer_Base
    {
        scope = 0;
    };
    class Derringer_Grey : Derringer_Base
    {
        scope = 0;
    };
};
