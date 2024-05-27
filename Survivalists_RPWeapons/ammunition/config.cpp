class CfgPatches
{
    class Survivalists_RPWeapons_Ammunition
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Weapons_Magazines",
            "DZ_Weapons_Ammunition",
            "JMC_Mjolnir",
            "jmc_SnowOwl",
            "jmc_Prototype",
            "jmc_SnowOwl_Ammo",
            "Survivalists_Weapons_JMC_Ammunition"
        };
    };
};
class CfgMagazines
{
    class Ammunition_Base;
    class Ammo_40mm_Base;

    //=================================== MODDED OVERRIDE
    class jmc_SnowOwl_Ammo : Ammunition_Base
    {
        scope = 0;
    };
    class jmc_SnowOwl_Mag_Base;
    class jmc_SnowOwl_Mag : jmc_SnowOwl_Mag_Base
    {
        scope = 0;
    };
    class jmc_Prototype_Mag_Base;
    class jmc_Prototype_Mag : jmc_Prototype_Mag_Base
    {
        scope = 0;
    };

    //=================================== CUSTOM AMMO
    class Ammo_12gaNails : Ammunition_Base
    {
        scope = 0;
        displayName = "Shredded Nails";
        descriptionShort = "Ordinary nails chopped into small pieces.";
        model = "\dz\gear\consumables\Nails_box.p3d";
        iconCartridge = 4;
        weight = 28;
        count = 10;
        ammo = "Bullet_12Nail";
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,	{"DZ\weapons\ammunition\data\rem870_ammo.rvmat"}},
                        {0.69999999,{"DZ\weapons\ammunition\data\rem870_ammo.rvmat"}},
                        {0.5,{"DZ\weapons\ammunition\data\rem870_ammo_damage.rvmat"}},
                        {0.30000001,{"DZ\weapons\ammunition\data\rem870_ammo_damage.rvmat"}},
                        {0,{"DZ\weapons\ammunition\data\rem870_ammo_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    class Ammo_12gaStones : Ammunition_Base
    {
        scope = 0;
        displayName = "Crushed Stones";
        descriptionShort = "Ordinary stones are crushed so that they are pushed into 12-round cartridges";
        model = "\dz\gear\consumables\Nails_box.p3d";
        iconCartridge = 4;
        weight = 28;
        count = 10;
        ammo = "Bullet_12Nail";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\ammunition\data\box_of_stonebullets_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\weapons\ammunition\data\rem870_ammo.rvmat"}},
                        {0.69999999,{"DZ\weapons\ammunition\data\rem870_ammo.rvmat"}},
                        {0.5,{"DZ\weapons\ammunition\data\rem870_ammo_damage.rvmat"}},
                        {0.30000001,{"DZ\weapons\ammunition\data\rem870_ammo_damage.rvmat"}},
                        {0,{"DZ\weapons\ammunition\data\rem870_ammo_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    class Ammo_40mm_Flashbang : Ammo_40mm_Base
    {
        scope = 2;
        displayName = "40mm Flash Bang Shell";
        descriptionShort = "A shell specifically made to distribute a flash bang at a distance.";
        model = "\dz\weapons\ammunition\40mm_grenade.p3d";
        ammo = "Bullet_40mm_Flash";
    };
};

class CfgAmmoTypes
{
    class AType_Bullet_12Nail
    {
        name = "Bullet_12Nail";
    };
    class AType_Bullet_12Stone
    {
        name = "Bullet_12Stone";
    };
    class AType_Bullet_40mm_Flash
    {
        name = "Bullet_40mm_Flash";
    };
};

// jmc weapons ammo override
class CfgAmmo
{
    //=================================== MODDED OVERRIDE
    class Bullet_Base;
    class Bullet_40mm_Base;
    class jmc_SnowOwl_Bullet : Bullet_Base
    {
        scope = 0;
    };

    class MeleeDamage;
    class MeleeMjolnir : MeleeDamage
    {
        class DamageApplied
        {
            type = "Melee";
            class Health
            {
                damage = 0;
            };
            class Blood
            {
                damage = 0;
            };
            class Shock
            {
                damage = 0;
            };
        };
    };

    class Bullet_40mm_Flash : Bullet_40mm_Base
    {
        spawnPileType = "Ammo_40mm_Flashbang";
        class DamageApplied
        {
            type = "Projectile";
            dispersion = 0.0;
            bleedThreshold = 1.0;
            class Health
            {
                damage = 1;
            };
            class Blood
            {
                damage = 0;
            };
            class Shock
            {
                damage = 10;
            };
        };
    };
};
class CfgVehicles
{
    class Box_Base;
    class Inventory_Base;
    //--------------------------- Gunpowder Crafting
    class SRP_Explosive_NitroCellulose : Box_Base
    {
        scope = 2;
        displayName = "Nitrocellulose Powder";
        descriptionShort = "During combustion, in the chamber, an area is formed with a pressure of 630 kgf / sq.cm to 650, depending on the caliber. The combustion speed is 2.2 m / s. Bulk density with equipment - 0, 510 kg / l. High muzzle pressure creates a high volume of the shot and a fairly substantial return";
        model = "\dz\gear\food\food_can.p3d";
        itemSize[] = { 2,2 };
        weight = 1000;
        absorbency = 0.80000001;
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\ammunition\data\srp_explosive_nitrocellulose_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
        class Resources
        {
            class SRP_Explosive_NitroCellulose_Open
            {
                value = 50;
                variable = "quantity";
            };
        };
    };
    class SRP_Explosive_NitroCellulose_Open : Inventory_Base
    {
        scope = 2;
        displayName = "Gunpowder Nitrocellulose";
        descriptionShort = "During combustion, in the chamber, an area with a pressure from 630 kgf / sq. Cm to 650 is formed, depending on the caliber. The combustion speed is 2.2 m / s. Bulk density when loaded - 0.510 kg / l. High muzzle pressure creates a high volume of the shot and a fairly significant recoil";
        model = "\dz\gear\food\food_can_open.p3d";
        weight = 30;
        itemSize[] = { 2,2 };
        canBeSplit = 1;
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        varQuantityDestroyOnMin = 1;
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\ammunition\data\srp_explosive_nitrocellulose_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Explosive_Pyroxylin : Box_Base
    {
        scope = 2;
        displayName = "Gunpowder Pyroxylin Smokeless";
        descriptionShort = "It is intended for the equipment of shot or bullet hunting cartridges, which are used for firing smooth-bore guns";
        model = "\dz\gear\food\food_can.p3d";
        itemSize[] = { 2,2 };
        weight = 1000;
        absorbency = 0.80000001;
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\ammunition\data\srp_explosive_pyroxylin_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
        class Resources
        {
            class SRP_Explosive_Pyroxylin_Open
            {
                value = 50;
                variable = "quantity";
            };
        };
    };
    class SRP_Explosive_Pyroxylin_Open : Inventory_Base
    {
        scope = 2;
        displayName = "Pyroxylin Powder Smokeless";
        descriptionShort = "It is intended for equipping shot or bullet hunting cartridges, which are used for shooting from smooth-bore guns";
        model = "\dz\gear\food\food_can_open.p3d";
        weight = 30;
        itemSize[] = { 2,2 };
        canBeSplit = 1;
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        varQuantityDestroyOnMin = 1;
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\ammunition\data\srp_explosive_pyroxylin_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Explosive_GunPowder : Box_Base
    {
        scope = 2;
        displayName = "Gun Powder";
        descriptionShort = "Jar of gunpowder, flammable!";
        model = "\dz\gear\food\food_can.p3d";
        itemSize[] = { 2,2 };
        weight = 1000;
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\ammunition\data\srp_explosive_gunpowder_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
        class Resources
        {
            class SRP_Explosive_GunPowder_Open
            {
                value = 50;
                variable = "quantity";
            };
        };
    };
    class SRP_Explosive_GunPowder_Open : Inventory_Base
    {
        scope = 2;
        displayName = "Gun Powder";
        descriptionShort = "Gunpowder can, flammable!";
        model = "\dz\gear\food\food_can_open.p3d";
        weight = 30;
        itemSize[] = { 2,2 };
        canBeSplit = 1;
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        varQuantityDestroyOnMin = 1;
        inventorySlot[] = { "SRP_AmmoGunpowder" };
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\ammunition\data\srp_explosive_gunpowder_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Explosive_Fraction : Box_Base
    {
        scope = 2;
        displayName = "Fraction";
        descriptionShort = "Jar with a fraction!";
        model = "\dz\gear\food\food_can.p3d";
        itemSize[] = { 2,2 };
        weight = 1000;
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\ammunition\data\srp_explosive_fraction_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
        class Resources
        {
            class SRP_Explosive_Fraction_Open
            {
                value = 50;
                variable = "quantity";
            };
        };
    };
    class SRP_Explosive_Fraction_Open : Inventory_Base
    {
        scope = 2;
        displayName = "Fraction";
        descriptionShort = "A can of fraction";
        model = "\dz\gear\food\food_can_open.p3d";
        itemSize[] = { 2,2 };
        weight = 30;
        canBeSplit = 1;
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        varQuantityDestroyOnMin = 1;
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\ammunition\data\srp_explosive_fraction_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    // Casing + powder = starter kit
    // starter kit + projectile = bullet kit
    // bullet kit + workbench = bullet

  //--------------------------- Pistol Bullet Crafting
    class SRP_BulletCrafting_Pistol60Count : Inventory_Base
    {
        scope = 0;
        displayName = "Base Bullet Crafting - Pistol";
        descriptionShort = "Base Bullet Kit Description";
        itemSize[] = { 1,1 };
        weight = 12;
        canBeSplit = 1;
        varQuantityInit = 10;
        varQuantityMin = 0;
        varQuantityMax = 60;
    };
    class SRP_BulletCrafting_Copper : SRP_BulletCrafting_Pistol60Count
    {
        scope = 2;
        displayName = "Generic Copper Bullet Tips";
        descriptionShort = "Forged bullet tips. Useful for crafting ammunition.";
        model = "Survivalists_RPWeapons\ammunition\bullet9mm.p3d";
        inventorySlot[] = { "SRP_AmmoBullets" };
    };
};