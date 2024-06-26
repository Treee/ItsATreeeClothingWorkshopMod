class CfgPatches
{
    class Survivalists_RPWeapons_Shotguns
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data", "Survivalists_Weapons_JMC_Shotguns", "Dressupbox_Weapons" };
    };
};
class CfgWeapons
{
    class Rifle_Base;
    class Shotgun_Base : Rifle_Base
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
    class DUB_JunkShotgun : Shotgun_Base
    {
        inventorySlot[] += {
            "Shoulder",
                "Melee",
                "SRP_Rifle1",
                "SRP_Rifle2",
                "SRP_Rifle3",
                "SRP_Rifle4",
                "SRP_Rifle5",
                "SRP_Rifle6",
                "SRP_Rifle7",
                "SRP_Rifle8",
                "SRP_Rifle9",
        };
    };
    class DUB_BlunderPistol : Shotgun_Base
    {
        inventorySlot[] += {
            "Shoulder",
                "Melee",
                "SRP_Rifle1",
                "SRP_Rifle2",
                "SRP_Rifle3",
                "SRP_Rifle4",
                "SRP_Rifle5",
                "SRP_Rifle6",
                "SRP_Rifle7",
                "SRP_Rifle8",
                "SRP_Rifle9",
        };
    };
    class DUB_OUShotgun : Shotgun_Base
    {
        inventorySlot[] += {
            "Shoulder",
                "Melee",
                "SRP_Rifle1",
                "SRP_Rifle2",
                "SRP_Rifle3",
                "SRP_Rifle4",
                "SRP_Rifle5",
                "SRP_Rifle6",
                "SRP_Rifle7",
                "SRP_Rifle8",
                "SRP_Rifle9",
        };
    };
    class DUB_GunHand : Shotgun_Base
    {
        inventorySlot[] += {
            "SRP_Rifle1",
                "SRP_Rifle2",
                "SRP_Rifle3",
                "SRP_Rifle4",
                "SRP_Rifle5",
                "SRP_Rifle6",
                "SRP_Rifle7",
                "SRP_Rifle8",
                "SRP_Rifle9",
        };
    };
    class DUB_TrenchGun : Shotgun_Base
    {
        inventorySlot[] += {
            "Shoulder",
                "Melee",
                "SRP_Rifle1",
                "SRP_Rifle2",
                "SRP_Rifle3",
                "SRP_Rifle4",
                "SRP_Rifle5",
                "SRP_Rifle6",
                "SRP_Rifle7",
                "SRP_Rifle8",
                "SRP_Rifle9",
        };
    };
};
