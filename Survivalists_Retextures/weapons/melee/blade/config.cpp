class CfgPatches
{
    class Survivalists_Retextures_Weapons_Melee_Blade
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Weapons_Melee_Blade",
            "Survivalists_Retextures",
            "Survivalists_RPWeapons_Melee_Blade"
        };
    };
};
class CfgVehicles
{
    class Hatchet;
    class SRP_BerserkSword;
    class SRP_WitcherSword_ColorBase;

    class Hatchet_Flowers : Hatchet
    {
        scope = 2;
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Retextures\weapons\melee\blade\data\hatchet_flowers_co.paa"
        };
    };
    class Hatchet_Raccoon : Hatchet
    {
        scope = 2;
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Retextures\weapons\melee\blade\data\hatchet_Raccoon_co.paa"
        };
    };
    class Hatchet_Splat : Hatchet
    {
        scope = 2;
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Retextures\weapons\melee\blade\data\hatchet_Splat_co.paa"
        };
    };

    class SRP_BerserkSword_Illusive : SRP_BerserkSword
    {
        scope = 2;
        displayName = "The Dragon Slayer";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Retextures\weapons\melee\blade\data\srp_berserksword_illusive_co.paa"
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_2HSword_OneHitKill";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_2HSword_OneHitKillHeavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_2HSword_OneHitKillHeavy";
                range = 3.9;
            };
        };
    };

    class SRP_WitcherSword_Benji : SRP_WitcherSword_ColorBase
    {
        scope = 2;
        displayName = "Aerondight";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Retextures\weapons\melee\blade\data\srp_witchersword_benji_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
          "Survivalists_Retextures\weapons\melee\blade\data\srp_witchersword_benji.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 750;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_Retextures\weapons\melee\blade\data\srp_witchersword_benji.rvmat"}},
                        {0.69999999,	{	"Survivalists_Retextures\weapons\melee\blade\data\srp_witchersword_benji.rvmat"}},
                        {0.5,	{	"Survivalists_Retextures\weapons\melee\blade\data\srp_witchersword_benji.rvmat"}},
                        {0.30000001,	{	"Survivalists_Retextures\weapons\melee\blade\data\srp_witchersword_benji.rvmat"}},
                        {0.0,	{	"Survivalists_Retextures\weapons\melee\blade\data\srp_witchersword_benji.rvmat"}}
                    };
                };
            };
        };
    };
};
