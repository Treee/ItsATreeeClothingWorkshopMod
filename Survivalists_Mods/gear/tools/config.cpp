class CfgPatches
{
    class Survivalists_Mods_Gear_Tools
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Gear_Tools",
            "DZ_Weapons_Melee_Blade", // hatchet
            "DZ_Gear_Navigation",
            "Survivalists_Mods_Gear_Crafting"
        };
    };
};
class CfgVehicles
{
    class Inventory_Base;
    class Compass;
    class Hacksaw;
    class FishingRod_Base_New;

    class SRP_KitBase;

    // ---------------------------- BASE GAME OVERRIDE
    class RemoteDetonator : Inventory_Base
    {
        scope = 0;
    };
    class RemoteDetonatorReceiver : RemoteDetonator
    {
        scope = 0;
    };
    class RemoteDetonatorTrigger : RemoteDetonator
    {
        scope = 0;
    };
    class Heatpack : Inventory_Base
    {
        itemSize[] = { 1,1 };
        varTemperatureMax = 100;
    };

    class FieldShovel : Inventory_Base
    {
        inventorySlot[] +=
        {
            "no",
                "FShovel",
                "SRP_ToolKit_Shovel"
        };
    };

    class Hammer : Inventory_Base
    {
        scope = 2;
        repairableWithKits[] = { 6 }; // tire repair kit
        repairCosts[] = { 30 };
        inventorySlot[] +=
        {
            "SRP_Tool1",
                "SRP_Tool2",
                "SRP_Tool3",
                "SRP_ToolKit_Hammer"
        };
    };

    class FireExtinguisher : Inventory_Base
    {
        scope = 2;
        inventorySlot[] +=
        {
            "Shoulder",
                "Melee",
                "no"
        };
    };

    class Lockpick : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_Tool1",
                "SRP_Tool2",
                "SRP_Tool3"
        };
    };
    class Screwdriver : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_Tool1",
                "SRP_Tool2",
                "SRP_Tool3",
                "SRP_ToolKit_Screwdriver"
        };
    };
    class Pliers : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_Tool1",
                "SRP_Tool2",
                "SRP_Tool3",
                "SRP_ToolKit_Pliers"
        };
    };

    class Shovel : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_LargeTool1",
                "SRP_LargeTool2",
                "SRP_LargeTool3",
                "SRP_ToolKit_Shovel"
        };
    };

    class Pickaxe : Inventory_Base
    {
        descriptionShort = "Useful for construction along with breaking larger rocks into smaller rocks. You remember from grade school that not all rocks are the same and you need 'building grade' stone from a nearby quarry.";
        inventorySlot[] +=
        {
            "SRP_LargeTool1",
                "SRP_LargeTool2",
                "SRP_LargeTool3",
        };
    };
    class WoodAxe : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_LargeTool1",
                "SRP_LargeTool2",
                "SRP_LargeTool3",
        };
    };

    class Crowbar : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_ToolKit_Crowbar"
        };
    };

    class Wrench : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_Tool1",
                "SRP_Tool2",
                "SRP_Tool3",
                "SRP_ToolKit_Wrench"
        };
    };

    class HandSaw : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_Tool1",
                "SRP_Tool2",
                "SRP_Tool3",
                "SRP_ToolKit_HandSaw"
        };
    };

    class WeaponCleaningKit : Inventory_Base
    {
        descriptionShort = "Useful tools for cleaning a weapon or salvaged part. Well oiled mechanisms are proven to reduce the chance of jamming.";
        canBeSplit = 1;
        itemSize[] = { 2,2 };
    };
    class LeatherSewingKit : Inventory_Base
    {
        canBeSplit = 1;
        itemSize[] = { 2,2 };
    };
    class SewingKit : Inventory_Base
    {
        canBeSplit = 1;
    };
    class Pen_ColorBase : Inventory_Base
    {
        inventorySlot[] +=
        {
            "Pen_slot"
        };
    };

    class ImprovisedFishingRod : FishingRod_Base_New
    {
        inventorySlot[] += {"Shoulder", "melee", "fishingRod"};
    };
    class ObsoleteFishingRod : FishingRod_Base_New
    {
        inventorySlot[] += {"Shoulder", "melee", "fishingRod"};
    };
    class FishingRod : FishingRod_Base_New
    {
        inventorySlot[] += {"Shoulder", "melee", "fishingRod"};
    };
    class Blowtorch : Inventory_Base
    {
        itemSize[] = { 2,2 };
    };

    class EpoxyPutty : Inventory_Base
    {
        canBeSplit = 1;
        varStackMax = 100;
        varQuantityMax = 5000;
        inventorySlot[] += {"SRP_Construction_Epoxy"};
    };
    class Pipe : Inventory_Base
    {
        canBeSplit = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 50;
        varQuantityDestroyOnMin = 0;
        varStackMax = 1;
        inventorySlot[] += {"SRP_Construction_Pipe"};
    };

    class FireworksLauncher : Inventory_Base
    {
        itemSize[] = { 2,2 };
    };

    // ---------------------------- Custom Stuff
    class SRP_Hacksaw_Espen : Hacksaw
    {
        scope = 2;
        displayName = "Reinforced Hacksaw - Espen";
        descriptionShort = "This tool has been manufactured to withstand more wear and tear along with cutting through metal faster.";
        repairableWithKits[] = {};
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\hacksaw_espen_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 250;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\tools\data\hacksaw.rvmat"}},
                        {0.69999999,{"DZ\gear\tools\data\hacksaw.rvmat"}},
                        {0.5,{"DZ\gear\tools\data\hacksaw_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\tools\data\hacksaw_damage.rvmat"}},
                        {0,{"DZ\gear\tools\data\hacksaw_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Hacksaw_Stag : Hacksaw
    {
        scope = 2;
        displayName = "Reinforced Hacksaw - STAG";
        descriptionShort = "This tool has been manufactured to withstand more wear and tear along with cutting through metal faster.";
        repairableWithKits[] = {};
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\hacksaw_stag_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 400;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\tools\data\hacksaw.rvmat"}},
                        {0.69999999,{"DZ\gear\tools\data\hacksaw.rvmat"}},
                        {0.5,{"DZ\gear\tools\data\hacksaw_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\tools\data\hacksaw_damage.rvmat"}},
                        {0,{"DZ\gear\tools\data\hacksaw_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Hacksaw_LocknSons : Hacksaw
    {
        scope = 2;
        displayName = "Reinforced Hacksaw - Lock & Sons";
        descriptionShort = "This tool has been manufactured to withstand more wear and tear along with cutting through metal faster.";
        repairableWithKits[] = {};
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\hacksaw_locknsons_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 700;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\tools\data\hacksaw.rvmat"}},
                        {0.69999999,{"DZ\gear\tools\data\hacksaw.rvmat"}},
                        {0.5,{"DZ\gear\tools\data\hacksaw_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\tools\data\hacksaw_damage.rvmat"}},
                        {0,{"DZ\gear\tools\data\hacksaw_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Shovel : Shovel
    {
        scope = 2;
        model = "Survivalists_Mods\gear\tools\srp_shovel.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\srp_shovel_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 200;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_Mods\gear\tools\data\srp_shovel.rvmat"}},
                        {0.69999999,{"Survivalists_Mods\gear\tools\data\srp_shovel.rvmat"}},
                        {0.5,{"Survivalists_Mods\gear\tools\data\srp_shovel_damage.rvmat"}},
                        {0.30000001,{"Survivalists_Mods\gear\tools\data\srp_shovel_damage.rvmat"}},
                        {0,{"Survivalists_Mods\gear\tools\data\srp_shovel_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Shovel_Durka : SRP_Shovel
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\srp_shovel_durka_co.paa" };
    };

    class WeaponCleaningKit_JewlersKit : Inventory_Base
    {
        scope = 2;
        displayName = "Jewlers Kit";
        descriptionShort = "A kit for assembling jewels on finely crafted settings.";
        model = "\dz\gear\tools\cleaning_kit_wood.p3d";
        itemsCargoSize[] = { 0,0 };
        debug_ItemCategory = 2;
        animClass = "Knife";
        rotationFlags = 17;
        stackedUnit = "percentage";
        quantityBar = 1;
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        weight = 780;
        itemSize[] = { 2,2 };
        fragility = 0.0099999998;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\cleaning_kit_jewling_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"DZ\gear\tools\data\cleaning_kit_wood.rvmat"}},
                        {0.69999999,{"DZ\gear\tools\data\cleaning_kit_wood.rvmat"}},
                        {0.5,{"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"}},
                        {0.0,{"DZ\gear\tools\data\cleaning_kit_wood_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeLightBlunt";
                range = 1;
            };
            class Heavy
            {
                ammo = "MeleeLightBlunt_Heavy";
                range = 1;
            };
            class Sprint
            {
                ammo = "MeleeLightBlunt_Heavy";
                range = 2.8;
            };
        };
    };
    class LeatherSewingKit_JewelCuttingTools : Inventory_Base
    {
        scope = 2;
        displayName = "Jewel Cutting Tools";
        descriptionShort = "A set of tools meant for finely cutting gems.";
        model = "\dz\gear\tools\leather_sewing_kit.p3d";
        debug_ItemCategory = 2;
        animClass = "Knife";
        rotationFlags = 1;
        stackedUnit = "percentage";
        quantityBar = 1;
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        weight = 1200;
        itemSize[] = { 2,2 };
        fragility = 0.0099999998;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\leather_sewing_kit_jewlcuttingtools_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"DZ\gear\tools\data\leather_sewing_kit.rvmat"}},
                        {0.69999999,{"DZ\gear\tools\data\leather_sewing_kit.rvmat"}},
                        {0.5,{"DZ\gear\tools\data\leather_sewing_kit_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\tools\data\leather_sewing_kit_damage.rvmat"}},
                        {0.0,{"DZ\gear\tools\data\leather_sewing_kit_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class Stitch
                {
                    soundSet = "StitchUpSelf_SoundSet";
                    id = 201;
                };
                class pickup
                {
                    soundSet = "sewingkit_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "sewingkit_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };

    class HammerMint_Emporium : Hammer
    {
        scope = 2;
        displayName = "Coin Minter - Emporium";
        descriptionShort = "This hammer smashes the imprint of a die onto a metal coin";
        color = "emporium";
    };
    class HammerMint_Bazaar : Hammer
    {
        scope = 2;
        displayName = "Coin Minter - Bazaar";
        descriptionShort = "This hammer smashes the imprint of a die onto a metal coin";
        color = "bazaar";
    };

    class HammerLabeler_ColorBase : Hammer
    {
        scope = 0;
        displayName = "Bottle Labeler - Base";
        descriptionShort = "This hammer smashes the imprint of a label onto a bottle";
        color = "base";
    };

    class HammerLabeler_IslandGeorge : HammerLabeler_ColorBase
    {
        scope = 2;
        displayName = "Bottle Labeler - Island George";
        descriptionShort = "This hammer smashes the imprint of a label onto a bottle";
        color = "IslandGeorge";
    };
    class HammerLabeler_ProfessionalsVodka : HammerLabeler_ColorBase
    {
        scope = 2;
        displayName = "Bottle Labeler - Professionals Vodka";
        color = "ProfessionalsVodka";
    };
    class HammerLabeler_ProfessionalsAle : HammerLabeler_ColorBase
    {
        scope = 2;
        displayName = "Bottle Labeler - Professionals Ale";
        color = "ProfessionalsAle";
    };
    class HammerLabeler_ProfessionalsWhiskey : HammerLabeler_ColorBase
    {
        scope = 2;
        displayName = "Bottle Labeler - Professionals Whiskey";
        color = "ProfessionalsWhiskey";
    };

    class SRP_Heatpack : Heatpack
    {
        scope = 2;
        displayName = "Advanced Heat Pack";
        descriptionShort = "This one gets hot hot hot.";
        varEnergyMax = 2000;
    };
    class SRP_Icepack : Heatpack
    {
        scope = 2;
        displayName = "Advanced Ice Pack";
        descriptionShort = "This one gets cold cold cold.";
        varTemperatureMax = 10;
        varEnergyMax = 1200;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\tools\data\ice_pack_co.paa"
        };
        class EnergyManager
        {
            energyAtSpawn = 1200;
            energyUsagePerSecond = 1;
            updateInterval = 20;
        };
    };

    // carpentry or weapon smithing
    class SRP_Handdrill : Inventory_Base
    {
        scope = 2;
        displayName = "Hand Powered Drill";
        descriptionShort = "A hand drill that runs off of human power.";
        model = "Survivalists_Mods\gear\tools\handdrill.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[] = { 2,3 };
        fragility = 0.001;
        openItemSpillRange[] = { 20,40 };
        inventorySlot[] =
        {
          "SRP_ToolKit_Handdrill"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\tools\data\handdrill.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\handdrill.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\handdrill_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\handdrill_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\handdrill_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeWrench";
                range = 1.6;
            };
            class Heavy
            {
                ammo = "MeleeWrench_Heavy";
                range = 1.6;
            };
            class Sprint
            {
                ammo = "MeleeWrench_Heavy";
                range = 4.0999999;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "wrench_drop_SoundSet";
                    id = 898;
                };
                class wrench_loop
                {
                    soundSet = "SledgeWoodHammer_loop_SoundSet";
                    id = 1117;
                };
                class wrench_end
                {
                    soundSet = "SledgeWoodHammer_end_SoundSet";
                    id = 1118;
                };
            };
        };
    };
    // carpentry or weapon smithing
    class SRP_Handdrill_Old : Inventory_Base
    {
        scope = 2;
        displayName = "Old Hand Powered Drill";
        descriptionShort = "An old hand drill that runs off of human power.";
        model = "Survivalists_Mods\gear\tools\handdrill_old.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[] = { 2,3 };
        fragility = 0.001;
        openItemSpillRange[] = { 20,40 };
        inventorySlot[] =
        {
          "SRP_ToolKit_Handdrill"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\tools\data\handdrill_old.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\handdrill_old.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\handdrill_old_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\handdrill_old_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\handdrill_old_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeWrench";
                range = 1.6;
            };
            class Heavy
            {
                ammo = "MeleeWrench_Heavy";
                range = 1.6;
            };
            class Sprint
            {
                ammo = "MeleeWrench_Heavy";
                range = 4.0999999;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "wrench_drop_SoundSet";
                    id = 898;
                };
                class wrench_loop
                {
                    soundSet = "SledgeWoodHammer_loop_SoundSet";
                    id = 1117;
                };
                class wrench_end
                {
                    soundSet = "SledgeWoodHammer_end_SoundSet";
                    id = 1118;
                };
            };
        };
    };

    class SRP_Clamp : Inventory_Base
    {
        scope = 2;
        displayName = "Clamp";
        descriptionShort = "Time to give someone the CLAMPS!";
        model = "Survivalists_Mods\gear\tools\clamp.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[] = { 2,3 };
        fragility = 0.001;
        physLayer = "item_small";
        openItemSpillRange[] = { 20,40 };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\tools\data\clamp.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\clamp.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\clamp_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\clamp_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\clamp_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeWrench";
                range = 1.6;
            };
            class Heavy
            {
                ammo = "MeleeWrench_Heavy";
                range = 1.6;
            };
            class Sprint
            {
                ammo = "MeleeWrench_Heavy";
                range = 4.0999999;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "wrench_drop_SoundSet";
                    id = 898;
                };
                class wrench_loop
                {
                    soundSet = "SledgeWoodHammer_loop_SoundSet";
                    id = 1117;
                };
                class wrench_end
                {
                    soundSet = "SledgeWoodHammer_end_SoundSet";
                    id = 1118;
                };
            };
        };
    };

    class SRP_Caliper : Inventory_Base
    {
        scope = 2;
        displayName = "Caliper";
        descriptionShort = "A hand held caliper";
        model = "Survivalists_Mods\gear\tools\caliper.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[] = { 2,3 };
        fragility = 0.001;
        physLayer = "item_small";
        openItemSpillRange[] = { 20,40 };
        inventorySlot[] =
        {
          "SRP_ToolKit_Caliper"
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\tools\data\caliper_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\tools\data\clamp.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\clamp.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\clamp_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\clamp_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\clamp_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeWrench";
                range = 1.6;
            };
            class Heavy
            {
                ammo = "MeleeWrench_Heavy";
                range = 1.6;
            };
            class Sprint
            {
                ammo = "MeleeWrench_Heavy";
                range = 4.0999999;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "wrench_drop_SoundSet";
                    id = 898;
                };
                class wrench_loop
                {
                    soundSet = "SledgeWoodHammer_loop_SoundSet";
                    id = 1117;
                };
                class wrench_end
                {
                    soundSet = "SledgeWoodHammer_end_SoundSet";
                    id = 1118;
                };
            };
        };
    };

    class SRP_HandPlane_Crude : Inventory_Base
    {
        scope = 2;
        displayName = "Crude Hand Plane";
        descriptionShort = "A crudly fashioned hand plane for wood working.";
        model = "Survivalists_Mods\gear\tools\srp_handplane_crude.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[] = { 2,3 };
        fragility = 0.001;
        physLayer = "item_small";
        openItemSpillRange[] = { 20,40 };
        inventorySlot[] = {};
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\tools\data\srp_handplane_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\tools\data\srp_handplane.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\srp_handplane.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\srp_handplane.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\srp_handplane.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\srp_handplane.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeWrench";
                range = 1.6;
            };
            class Heavy
            {
                ammo = "MeleeWrench_Heavy";
                range = 1.6;
            };
            class Sprint
            {
                ammo = "MeleeWrench_Heavy";
                range = 4.0999999;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "wrench_drop_SoundSet";
                    id = 898;
                };
                class wrench_loop
                {
                    soundSet = "SledgeWoodHammer_loop_SoundSet";
                    id = 1117;
                };
                class wrench_end
                {
                    soundSet = "SledgeWoodHammer_end_SoundSet";
                    id = 1118;
                };
            };
        };
    };
    class SRP_HandPlane_Metal : Inventory_Base
    {
        scope = 2;
        displayName = "Metal Hand Plane";
        descriptionShort = "A primitive hand plane made from pig iron and wood. Useful for working with wood.";
        model = "Survivalists_Mods\gear\tools\srp_handplane_metal.p3d";
        rotationFlags = 17;
        weight = 100;
        itemSize[] = { 2,3 };
        fragility = 0.001;
        physLayer = "item_small";
        openItemSpillRange[] = { 20,40 };
        inventorySlot[] = {};
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\tools\data\srp_handplane_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\tools\data\srp_handplane.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\srp_handplane.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\srp_handplane.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\srp_handplane.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\srp_handplane.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeWrench";
                range = 1.6;
            };
            class Heavy
            {
                ammo = "MeleeWrench_Heavy";
                range = 1.6;
            };
            class Sprint
            {
                ammo = "MeleeWrench_Heavy";
                range = 4.0999999;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "wrench_drop_SoundSet";
                    id = 898;
                };
                class wrench_loop
                {
                    soundSet = "SledgeWoodHammer_loop_SoundSet";
                    id = 1117;
                };
                class wrench_end
                {
                    soundSet = "SledgeWoodHammer_end_SoundSet";
                    id = 1118;
                };
            };
        };
    };

    // herbalism
    class SRP_MortarBowl : Inventory_Base
    {
        scope = 2;
        displayName = "Mortar Bowl";
        descriptionShort = "A mortar bowl used for pulverizing things into dust by using a pestle.";
        model = "Survivalists_Mods\gear\tools\srp_mortarbowl.p3d";
        weight = 50;
        itemSize[] = { 2,2 };
        itemsCargoSize[] = { 0,0 };
        fragility = 0.001;
        physLayer = "item_small";
        openItemSpillRange[] = { 20,40 };
        attachments[] =
        {
          "SRP_Pestle",
          "SRP_Flower1",
          "SRP_CrushedPowder1",
          "SRP_CrushedPowder2",
          "SRP_CrushedPowder3",
          "SRP_CrushedPowder4",
          "SRP_CrushedPowder5",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\tools\data\srp_mortarandpestle_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "pot_drop_SoundSet";
                    id = 898;
                };
                class wrench_loop
                {
                    soundSet = "SledgeWoodHammer_loop_SoundSet";
                    id = 1117;
                };
                class wrench_end
                {
                    soundSet = "SledgeWoodHammer_end_SoundSet";
                    id = 1118;
                };
            };
        };
    };

    class SRP_MortarPestle : Inventory_Base
    {
        scope = 2;
        displayName = "Mortar Pestle";
        descriptionShort = "A mortar pestle used for pulverizing things into dust. Best used with a mortar.";
        model = "Survivalists_Mods\gear\tools\srp_mortarpestle.p3d";
        weight = 50;
        rotationFlags = 16;
        itemSize[] = { 2,2 };
        itemsCargoSize[] = { 0,0 };
        fragility = 0.001;
        physLayer = "item_small";
        openItemSpillRange[] = { 20,40 };
        inventorySlot[] =
        {
            "SRP_Pestle"
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\tools\data\srp_mortarandpestle_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\srp_mortarandpestle_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "pot_drop_SoundSet";
                    id = 898;
                };
                class wrench_loop
                {
                    soundSet = "SledgeWoodHammer_loop_SoundSet";
                    id = 1117;
                };
                class wrench_end
                {
                    soundSet = "SledgeWoodHammer_end_SoundSet";
                    id = 1118;
                };
            };
        };
    };

    class SRP_WeaponRepairKit : Inventory_Base
    {
        scope = 2;
        displayName = "Weapon Repair Kit";
        descriptionShort = "A set of materials that can be used to repair a weapon when damaged. Lacks the proper tools to fully restore a weapon.";
        model = "\dz\gear\tools\cleaning_kit_wood.p3d";
        debug_ItemCategory = 2;
        animClass = "Knife";
        rotationFlags = 17;
        canBeSplit = 1;
        stackedUnit = "percentage";
        quantityBar = 1;
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        weight = 780;
        weightPerQuantityUnit = 0;
        itemSize[] = { 2,2 };
        fragility = 0.0099999998;
        repairKitType = 1;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\tools\data\cleaning_kit_wood.rvmat"}},
                        {0.69999999,{"DZ\gear\tools\data\cleaning_kit_wood.rvmat"}},
                        {0.5,{"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"}},
                        {0,{"DZ\gear\tools\data\cleaning_kit_wood_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeFistLight";
                range = 1;
            };
            class Heavy
            {
                ammo = "MeleeFistHeavy";
                range = 1;
            };
            class Sprint
            {
                ammo = "MeleeFistHeavy";
                range = 2.8;
            };
        };
        soundImpactType = "wood";
    };
    //============================================= ELECTRONIC Hardeners
    class TireRepairKit_ElectronicsKit_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Basic Hacking Protocol";
        descriptionShort = "A basic anti hacking tool. Easily removed";
        model = "\dz\vehicles\parts\Tire_Repair_Kit.p3d";
        weight = 1000;
        itemSize[] = { 2,3 };
        absorbency = 0;
        rotationFlags = 16;
        stackedUnit = "percentage";
        quantityBar = 1;
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        repairKitType = 7;
        inventorySlot[] =
        {
            "SRP_HackingKit1",
            "SRP_HackingKit2",
            "SRP_HackingKit3",
            "SRP_HackingKit4"
        };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\electronichacking_kit_green_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\vehicles\parts\data\Tire_Repair_Kit.rvmat"}},
                        {0.69999999,{"DZ\vehicles\parts\data\Tire_Repair_Kit.rvmat"}},
                        {0.5,{"DZ\vehicles\parts\data\Tire_Repair_Kit_damage.rvmat"}},
                        {0.30000001,{"DZ\vehicles\parts\data\Tire_Repair_Kit_damage.rvmat"}},
                        {0,{"DZ\vehicles\parts\data\Tire_Repair_Kit_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUpItem
                {
                    soundSet = "smallprotectorcase_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "smallprotectorcase_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class TireRepairKit_ElectronicsKit_Kit : TireRepairKit_ElectronicsKit_ColorBase
    {
        scope = 2;
        displayName = "Starter Hacking Kit";
        descriptionShort = "The beginnings of a hacking kit used to harden radio jammers.";
        color = "kit";
        hiddenSelections[] = { "zbytek" };
        attachments[] = { "TruckBattery", "SRP_Grenade1", "IEDExplosiveA", "SRP_CopperWire1", "SRP_StackedElectricalWire1","SRP_StackedElectricalWire2" };
        hiddenSelectionsTextures[] = { "DZ\vehicles\parts\data\tire_repair_kit_co.paa" };
    };

    class TireRepairKit_ElectronicsKit_Green : TireRepairKit_ElectronicsKit_ColorBase
    {
        scope = 2;
        displayName = "Basic Hacking Protocol";
        descriptionShort = "**REMOVE AT YOUR OWN RISK** A basic anti hacking tool that carries an additional current between 1 and 10k Volts to an internal explosive. The circuitry runs below 20C and requires shielding of 15C. A variable rate tolerance cipher rotates between 1, and 2 percent.";
        color = "green";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\electronichacking_kit_green_co.paa" };
    };
    class TireRepairKit_ElectronicsKit_Yellow : TireRepairKit_ElectronicsKit_ColorBase
    {
        scope = 2;
        displayName = "Advanced Hacking Protocol";
        descriptionShort = "**REMOVE AT YOUR OWN RISK** An anti hacking tool that carries an additional current between 1 and 100k Volts to an internal explosive. The circuitry runs below 20C and requires shielding of 15C. A variable rate tolerance cipher rotates between 1, and 2 percent.";
        color = "yellow";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\electronichacking_kit_yellow_co.paa" };
    };
    class TireRepairKit_ElectronicsKit_Red : TireRepairKit_ElectronicsKit_ColorBase
    {
        scope = 2;
        displayName = "Expert Hacking Protocol";
        descriptionShort = "**REMOVE AT YOUR OWN RISK** An expert anti hacking tool that carries an additional current between 100 and 100k Volts to an internal explosive. The circuitry runs between 25 and 50C. A variable rate tolerance cipher rotates between 1, and 2 percent.";
        color = "red";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\electronichacking_kit_red_co.paa" };
    };
    class TireRepairKit_ElectronicsKit_Blue : TireRepairKit_ElectronicsKit_ColorBase
    {
        scope = 2;
        displayName = "Master Hacking Protocol";
        descriptionShort = "**REMOVE AT YOUR OWN RISK** A master anti hacking tool that carries an additional current between 1k and 1M Volts to an internal explosive. The circuitry runs between 15 and 50C. A variable rate tolerance cipher rotates between 0.1, 0.25, and 0.5 percent.";
        color = "blue";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\electronichacking_kit_blue_co.paa" };
    };
    class TireRepairKit_ElectronicsKit_Purple : TireRepairKit_ElectronicsKit_ColorBase
    {
        scope = 2;
        displayName = "Supreme Hacking Protocol";
        descriptionShort = "**REMOVE AT YOUR OWN RISK** A supreme anti hacking tool that carries an additional current between 10k and 1M Volts to an internal explosive. The circuitry runs between 50 and 100C. A variable rate tolerance cipher rotates between 0.1, 0.25, and 0.5 percent.";
        color = "purple";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\electronichacking_kit_purple_co.paa" };
    };


    //==================================================== ELECTRONIC TOOLS
    class BatteryCharger_VoltMeter : Inventory_Base
    {
        scope = 2;
        displayName = "Makeshift Voltmeter";
        descriptionShort = "This makeshift volt meter is capable of reading current. Its accuracy is questionable.";
        model = "\dz\gear\camping\battery_charger.p3d";
        attachments[] =
        {
            "LargeBattery"
        };
        weight = 5000;
        itemSize[] = { 3,3 };
        itemBehaviour = 1;
        rotationFlags = 2;
        hiddenSelections[] =
        {
            "light_stand_by",
            "light_charging",
            "light_charged",
            "switch_on",
            "clips_detached",
            "clips_folded",
            "cord_plugged",
            "cord_folded",
            "placing"
        };
        hiddenSelectionsTextures[] =
        {
            "dz\gear\camping\data\battery_charger_co.paa",
            "dz\gear\camping\data\battery_charger_co.paa",
            "dz\gear\camping\data\battery_charger_co.paa",
            "dz\gear\camping\data\battery_charger_co.paa",
            "dz\gear\camping\data\battery_charger_co.paa",
            "dz\gear\camping\data\battery_charger_co.paa",
            "dz\gear\camping\data\battery_charger_co.paa",
            "dz\gear\camping\data\battery_charger_co.paa",
            "dz\gear\camping\data\battery_charger_co.paa",
            "dz\gear\camping\data\battery_charger_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\camping\data\battery_charger.rvmat",
            "dz\gear\camping\data\battery_charger.rvmat",
            "dz\gear\camping\data\battery_charger.rvmat",
            "dz\gear\camping\data\battery_charger.rvmat",
            "dz\gear\camping\data\battery_charger.rvmat",
            "dz\gear\camping\data\battery_charger.rvmat",
            "dz\gear\camping\data\battery_charger.rvmat",
            "dz\gear\camping\data\battery_charger.rvmat",
            "dz\gear\camping\data\battery_charger.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 90;
                    transferToAttachmentsCoef = 0.5;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\camping\data\battery_charger.rvmat"}},
                        {0.69999999,{"DZ\gear\camping\data\battery_charger.rvmat"}},
                        {0.5,{"DZ\gear\camping\data\battery_charger_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\camping\data\battery_charger_damage.rvmat"}},
                        {0,{"DZ\gear\camping\data\battery_charger_destruct.rvmat"}}
                    };
                };
            };
        };
        repairableWithKits[] = { 7 };
        repairCosts[] = { 25 };
        class AnimationSources
        {
            class cord_folded
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 0;
            };
            class cord_plugged
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
            class clips_detached
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
            class clips_folded
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 0;
            };
            class switch_on
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
            class switch_off
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 0;
            };
            class clips_car_battery
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
            class clips_truck_battery
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
            class light_stand_by
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 0;
            };
            class light_charging
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 0;
            };
            class light_charged
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 0;
            };
            class placing
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 0;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "batterycharger_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class PowerTool_ElectricHandDrill : Inventory_Base
    {
        scope = 2;
        displayName = "Power Drill";
        descriptionShort = "A motorized hand held drill that is used to dissasemble things quickly. Manufactured by Espen Industries";
        model = "Survivalists_Mods\gear\tools\srp_powerdrill_espen.p3d";
        rotationFlags = 17;
        weight = 940;
        itemSize[] = { 2,3 };
        fragility = 0.0080000004;
        openItemSpillRange[] = { 20,50 };
        inventorySlot[] = { "SRP_ToolKit_Hammer" };
        attachments[] = { "CarBattery","TruckBattery" };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\srp_powerdrill_espen_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\tools\data\srp_powerdrill_espen.rvmat"}},
                        {0.69999999,{"Survivalists_Mods\gear\tools\data\srp_powerdrill_espen.rvmat"}},
                        {0.5,{"Survivalists_Mods\gear\tools\data\srp_powerdrill_espen_damage.rvmat"}},
                        {0.30000001,{"Survivalists_Mods\gear\tools\data\srp_powerdrill_espen_damage.rvmat"}},
                        {0.0,{"Survivalists_Mods\gear\tools\data\srp_powerdrill_espen_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeHammer";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "MeleeHammer_Heavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "MeleeHammer_Heavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class WoodHammer_SoundSet
                {
                    soundSet = "WoodHammer_SoundSet";
                    id = 11161;
                };
            };
        };
    };
    class PowerTool_ElectricHandDrill_Stag : PowerTool_ElectricHandDrill
    {
        scope = 2;
        displayName = "Power Drill";
        descriptionShort = "A motorized hand held drill that is used to dissasemble things quickly. Manufactured by STAG Industries";
        model = "Survivalists_Mods\gear\tools\srp_powerdrill_stag.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\tools\data\srp_powerdrill_stag_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\tools\data\srp_powerdrill_stag.rvmat"}},
                        {0.69999999,{"Survivalists_Mods\gear\tools\data\srp_powerdrill_stag.rvmat"}},
                        {0.5,{"Survivalists_Mods\gear\tools\data\srp_powerdrill_stag_damage.rvmat"}},
                        {0.30000001,{"Survivalists_Mods\gear\tools\data\srp_powerdrill_stag_damage.rvmat"}},
                        {0.0,{"Survivalists_Mods\gear\tools\data\srp_powerdrill_stag_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    //==================================================== END
};
