class CfgPatches
{
    class Survivalists_RPWeapons_Pistols_tttt33
    {
        units[] = {};
        weapons[] = { "tttt33" };
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Weapons_Firearms" };
        magazines[] = { "tttt33mag" };
    };
};
class Mode_Safe;
class Mode_SemiAuto;
class CfgWeapons
{
    class Glock19;
    class tttt33 : Glock19
    {
        scope = 2;
        displayName = "Tokarev TT-33";
        descriptionShort = "S.T.A.G. Industries. Tokarev TT-33 is a Soviet weapon designed and manufactured by S.T.A.G. Industries. Most commonly used by high ranking officials of the company. Chambered in 9x39mm, fed by its own unique magazine. Inspected by Master Gunsmith: Turko";
        model = "Survivalists_RPWeapons\pistols\tttt33\tttt33.p3d";
        attachments[] = {};
        magazines[] = { "tttt33mag" };
        magazineSwitchTime = 3.5;
        chamberableFrom[] = { "Ammo_9x39","Ammo_9x39AP" };
        ejectType = 0;
        WeaponLength = 1.18986;
        barrelArmor = 2.5;
        weight = 600;
        chamberSize = 1;
        itemSize[] = { 3,2 };
    };
};
class CfgMagazines
{
    class Mag_Glock_15Rnd;
    class tttt33mag : Mag_Glock_15Rnd
    {
        scope = 2;
        displayName = "TT-33 Magazine";
        descriptionShort = "9 round Tokarev TT-33 magazine, 9x39mm.";
        model = "Survivalists_RPWeapons\pistols\tttt33\tttt33mag.p3d";
        weight = 120;
        itemSize[] = { 1,2 };
        count = 9;
        ammo = "Bullet_9x39";
        ammoItems[] = { "Ammo_9x39","Ammo_9x39AP" };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\pistols\tttt33\data\tttt33_co.paa" };
    };
};
class CfgNonAIVehicles
{
    class ProxyAttachment;
    class Proxytt57mag : ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model = "Survivalists_RPWeapons\pistols\tttt33\tttt33mag.p3d";
    };
};
