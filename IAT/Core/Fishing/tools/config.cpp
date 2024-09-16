class CfgPatches
{
    class IAT_Core_Fishing_Tools
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Gear_Tools"
        };
    };
};
class CfgVehicles
{
    class Inventory_Base;
    class FishingRod_Base_New;
    //======================================= VANILLA OVERRIDE
    class ImprovisedFishingRod : FishingRod_Base_New
    {
        attachments[] += {"IAT_FishingLure"};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\crafting\data\wooden_stick.rvmat"}},
                        {0.69999999,{"DZ\gear\crafting\data\wooden_stick.rvmat"}},
                        {0.5,{"DZ\gear\crafting\data\wooden_stick_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\crafting\data\wooden_stick_damage.rvmat"}},
                        {0,{"DZ\gear\crafting\data\wooden_stick_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class ObsoleteFishingRod : FishingRod_Base_New
    {
        attachments[] += {"IAT_FishingLure"};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\crafting\data\wooden_stick.rvmat"}},
                        {0.69999999,{"DZ\gear\crafting\data\wooden_stick.rvmat"}},
                        {0.5,{"DZ\gear\crafting\data\wooden_stick_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\crafting\data\wooden_stick_damage.rvmat"}},
                        {0,{"DZ\gear\crafting\data\wooden_stick_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class FishingRod : FishingRod_Base_New
    {
        attachments[] += {"IAT_FishingLure"};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 750;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\tools\data\fishing_rod.rvmat"}},
                        {0.69999999,{"DZ\gear\tools\data\fishing_rod.rvmat"}},
                        {0.5,{"DZ\gear\tools\data\fishing_rod_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\tools\data\fishing_rod_damage.rvmat"}},
                        {0,{"DZ\gear\tools\data\fishing_rod_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    //======================================= FISHING RODS
    class IAT_Fishing_WoodenRod_Kit : Inventory_Base
    {
        scope = 2;
        displayName = "Wooden Fishing Rod Kit";
        descriptionShort = "This long wooden stick is prepared to be turned into a handmade rod with pliers.";
        model = "\dz\gear\crafting\Wooden_stick_blunt.p3d";
        rotationFlags = 17;
        absorbency = 0.89999998;
        weight = 670;
        itemSize[] = { 2,8 };
        itemBehaviour = 1;
        soundImpactType = "wood";
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\crafting\data\Wooden_stick.rvmat"}},
                        {0.69999999,{"DZ\gear\crafting\data\Wooden_stick.rvmat"}},
                        {0.5,{"DZ\gear\crafting\data\Wooden_stick_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\crafting\data\Wooden_stick_damage.rvmat"}},
                        {0,{"DZ\gear\crafting\data\Wooden_stick_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeBluntStick";
                range = 1.2;
            };
            class Heavy
            {
                ammo = "MeleeBluntStick_Heavy";
                range = 1.2;
            };
            class Sprint
            {
                ammo = "MeleeBluntStick_Heavy";
                range = 3.3;
            };
        };
    };
    class IAT_Fishing_WoodenRod_ColorBase : FishingRod_Base_New
    {
        scope = 2;
        displayName = "Hand Made Fishing Rod";
        descriptionShort = "A fishing rod made by hand from various materials.";
        model = "IAT\Core\Fishing\tools\iat_handmadefishingrod.p3d";
        debug_ItemCategory = 2;
        rotationFlags = 17;
        weight = 670;
        itemSize[] = { 1,9 };
        itemBehaviour = 2;
        absorbency = 0.80000001;
        lootCategory = "Crafted";
        attachments[] += {"IAT_FishingLure"};
        energyResources[] =
        {
            {
                "power",
                0.1
            }
        };
        inventorySlot[] =
        {
            "Shoulder",
            "Melee"
        };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\Fishing\tools\data\iat_handmadefishingrod_co.paa" };
        hiddenSelectionsMaterials[] = { "IAT\Core\Fishing\tools\data\iat_handmadefishingrod.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                    healthLevels[] =
                    {
                        {1.0,{"IAT\Core\Fishing\tools\data\iat_handmadefishingrod.rvmat"}},
                        {0.69999999,{"IAT\Core\Fishing\tools\data\iat_handmadefishingrod.rvmat"}},
                        {0.5,{"IAT\Core\Fishing\tools\data\iat_handmadefishingrod.rvmat"}},
                        {0.30000001,{"IAT\Core\Fishing\tools\data\iat_handmadefishingrod.rvmat"}},
                        {0.0,{"IAT\Core\Fishing\tools\data\iat_handmadefishingrod.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Fishing_puddle_SoundSet
                {
                    soundSet = "Fishing_puddle_SoundSet";
                    id = 206;
                };
                class Fishing_splash_SoundSet
                {
                    soundSet = "Fishing_splash_SoundSet";
                    id = 207;
                };
                class Fishing_splash_small_SoundSet
                {
                    soundSet = "Fishing_splash_small_SoundSet";
                    id = 208;
                };
                class Fish_struggling_SoundSet
                {
                    soundSet = "Fish_struggling_SoundSet";
                    id = 209;
                };
            };
        };
        class AnimationSources
        {
            class AnimateRod
            {
                source = "user";
                initPhase = 0;
                animPeriod = 2.5;
            };
        };
    };
    class IAT_Fishing_WoodenRod_Blue : IAT_Fishing_WoodenRod_ColorBase
    {
        scope = 2;
        color = "blue";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\Fishing\tools\data\iat_handmadefishingrod_blue_co.paa" };
        hiddenSelectionsMaterials[] = { "IAT\Core\Fishing\tools\data\iat_handmadefishingrod.rvmat" };
    };
    class IAT_Fishing_WoodenRod_Purple : IAT_Fishing_WoodenRod_ColorBase
    {
        scope = 2;
        color = "purple";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\Fishing\tools\data\iat_handmadefishingrod_purple_co.paa" };
        hiddenSelectionsMaterials[] = { "IAT\Core\Fishing\tools\data\iat_handmadefishingrod.rvmat" };
    };
    class IAT_Fishing_WoodenRod_Red : IAT_Fishing_WoodenRod_ColorBase
    {
        scope = 2;
        color = "red";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\Fishing\tools\data\iat_handmadefishingrod_red_co.paa" };
        hiddenSelectionsMaterials[] = { "IAT\Core\Fishing\tools\data\iat_handmadefishingrod.rvmat" };
    };
    //======================================= END
};