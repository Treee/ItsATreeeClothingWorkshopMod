class CfgPatches
{
    class SRP_Core_Metallurgy_Gear_Containers
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Gear_Containers",
            "DZ_Gear_Cooking", // fireplace
        };
    };
};
class CfgVehicles
{
    class FireplaceBase;
    class Inventory_Base;

    class SRP_MasonryMetallurgy_KitBase : Inventory_Base
    {
        scope = 0; //0 means cannot be directly spawned
        displayName = "Masonry & Metallurgy Kit";
        descriptionShort = "A wooden box that holds various items.";
        model = "\DZ\gear\camping\wooden_case.p3d";
        itemsCargoSize[] = { 0,0 };
        itemSize[] = { 7,5 };
        carveNavmesh = 1;
        canBeDigged = 0;
        simulation = "inventoryItem";
        physLayer = "item_small";
        rotationFlags = 2;
        heavyItem = 1;
        weight = 3000;
        itemBehaviour = 2;
        hiddenSelections[] = { "camoground" };
        hiddenSelectionsTextures[] = { "SRP\Metallurgy\gear\containers\data\srp_woodencase_kit_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
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
                class FragGrenade
                {
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
        };
    };
    class SRP_StoneForgeWorkbenchStarter_Kit : SRP_MasonryMetallurgy_KitBase
    {
        scope = 0;
        displayName = "Forge Starter Kit - Materials";
        descriptionShort = "Holds materials waiting for work to be done.";
        attachments[] =
        {
            "Stones",
            "Material_FPole_Stones",
            "Material_Mortar"
        };
    };
    class SRP_StoneForgeWorkbenchIntermediate_Kit : SRP_MasonryMetallurgy_KitBase
    {
        scope = 0;
        displayName = "Forge Starter Kit";
        descriptionShort = "A good amount of work done towards the stone forge.";
        inventorySlot[] = { "SRP_ForgeStarterKit" };
        itemBehaviour = 0;
        canBeSplit = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 10;
        varStackMax = 1;
    };
    class SRP_StoneForgeWorkbenchFinisher_Kit : SRP_MasonryMetallurgy_KitBase
    {
        scope = 0;
        displayName = "A Stone Forge Foundation Kit";
        descriptionShort = "Everything connects to this. Only one foundation is needed per forge. Combine with an oven to finish the forge.";
        attachments[] =
        {
            "SRP_ForgeStarterKit",
            "Stones",
            "Material_FPole_Stones",
            "Material_Mortar"
        };
    };

    //===================================== WORKBENCH

    class SRP_StoneForgeWorkbench_Kit : SRP_MasonryMetallurgy_KitBase
    {
        scope = 2;
        displayName = "A Stone Forge Kit";
        descriptionShort = "A kit for a stone forge.";
    };
    class SRP_StoneForgeWorkbench : FireplaceBase
    {
        scope = 2;
        displayName = "Stone Forge";
        descriptionShort = "A workbench with tools for manufacturing ammunition and repairing weaponry.";
        model = "SRP\Metallurgy\gear\containers\srp_forge_stonebasic.p3d";
        useEntityHierarchy = "true";
        destroyOnEmpty = 0;
        carveNavmesh = 0;
        canBeDigged = 0;
        heavyItem = 1;
        weight = 500;
        itemSize[] = { 15,15 };
        itemBehaviour = 0;
        quantityBar = 0;
        varQuantityInit = 0;
        varQuantityMin = 0;
        varQuantityMax = 0;
        varTemperatureMax = 1000;
        absorbency = 0;
        varWetMax = 0;
        stackedUnit = "";
        physLayer = "item_large";
        attachments[] =
        {
            "Firewood",
            "WoodenStick",
            "Rags",
            "MedicalBandage",
            "Paper",
            "Bark",
            "SRP_FuelCoal"
        };
        class Cargo
        {
            itemsCargoSize[] = { 10,10 };
            openable = 0;
            allowOwnedCargoManipulation = 1;
        };
        class GUIInventoryAttachmentsProps
        {
            class Fuel
            {
                name = "$STR_attachment_Fuel0";
                description = "";
                attachmentSlots[] =
                {
                    "Firewood",
                    "WoodenStick",
                    "SRP_FuelCoal"
                };
                icon = "set:dayz_inventory image:cat_fp_fuel";
            };
            class Kindling
            {
                name = "$STR_attachment_Kindling0";
                description = "";
                attachmentSlots[] =
                {
                    "Rags",
                    "MedicalBandage",
                    "Paper",
                    "Bark"
                };
                icon = "set:dayz_inventory image:cat_fp_kindling";
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 5000;
                    healthLevels[] =
                    {
                        {1.01,{"SRP\Metallurgy\gear\containers\data\srp_stoneforge.rvmat"}},
                        {0.69999999,{"SRP\Metallurgy\gear\containers\data\srp_stoneforge.rvmat"}},
                        {0.5,{"SRP\Metallurgy\gear\containers\data\srp_stoneforge.rvmat"}},
                        {0.30000001,{"SRP\Metallurgy\gear\containers\data\srp_stoneforge.rvmat"}},
                        {0.0099999998,{"SRP\Metallurgy\gear\containers\data\srp_stoneforge.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUpItem_Light
                {
                    soundSet = "pickUpBarrelLight_SoundSet";
                    id = 796;
                };
                class pickUpItem
                {
                    soundSet = "pickUpBarrel_SoundSet";
                    id = 797;
                };
            };
        };
    };
    class SRP_AdvancedStoneForgeWorkbench_Kit : SRP_MasonryMetallurgy_KitBase
    {
        scope = 2;
        displayName = "An Advanced Stone Forge Kit";
        descriptionShort = "A kit for an advanced stone forge.";
    };
    class SRP_AdvancedStoneForgeWorkbench : FireplaceBase
    {
        scope = 2;
        displayName = "Advanced Stone Forge";
        descriptionShort = "A workbench for advanced stone working.";
        model = "SRP\Metallurgy\gear\containers\srp_forge_stoneadvanced.p3d";
        useEntityHierarchy = "true";
        destroyOnEmpty = 0;
        carveNavmesh = 0;
        canBeDigged = 0;
        heavyItem = 1;
        weight = 500;
        itemSize[] = { 15,15 };
        itemBehaviour = 0;
        quantityBar = 0;
        varQuantityInit = 0;
        varQuantityMin = 0;
        varQuantityMax = 0;
        varTemperatureMax = 1000;
        absorbency = 0;
        varWetMax = 0;
        stackedUnit = "";
        physLayer = "item_large";
        attachments[] =
        {
            "SRP_ForgeBellows",
            "Firewood",
            "WoodenStick",
            "Rags",
            "MedicalBandage",
            "Paper",
            "Bark",
            "SRP_FuelCoal"
        };
        class Cargo
        {
            itemsCargoSize[] = { 10,10 };
            openable = 0;
            allowOwnedCargoManipulation = 1;
        };
        class GUIInventoryAttachmentsProps
        {
            class Tools
            {
                name = "Tools";
                description = "Tools";
                attachmentSlots[] =
                {
                    "SRP_ForgeBellows"
                };
                icon = "set:dayz_inventory image:cat_vehicle_engine";
            };
            class Fuel
            {
                name = "$STR_attachment_Fuel0";
                description = "";
                attachmentSlots[] =
                {
                    "Firewood",
                    "WoodenStick",
                    "SRP_FuelCoal"
                };
                icon = "set:dayz_inventory image:cat_fp_fuel";
            };
            class Kindling
            {
                name = "$STR_attachment_Kindling0";
                description = "";
                attachmentSlots[] =
                {
                    "Rags",
                    "MedicalBandage",
                    "Paper",
                    "Bark"
                };
                icon = "set:dayz_inventory image:cat_fp_kindling";
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50000;
                    healthLevels[] =
                    {
                        {1.01,{"SRP\Metallurgy\gear\containers\data\srp_forgeandbellows.rvmat"}},
                        {0.69999999,{"SRP\Metallurgy\gear\containers\data\srp_forgeandbellows.rvmat"}},
                        {0.5,{"SRP\Metallurgy\gear\containers\data\srp_forgeandbellows.rvmat"}},
                        {0.30000001,{"SRP\Metallurgy\gear\containers\data\srp_forgeandbellows.rvmat"}},
                        {0.0099999998,{"SRP\Metallurgy\gear\containers\data\srp_forgeandbellows.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUpItem_Light
                {
                    soundSet = "pickUpBarrelLight_SoundSet";
                    id = 796;
                };
                class pickUpItem
                {
                    soundSet = "pickUpBarrel_SoundSet";
                    id = 797;
                };
            };
        };
    };
    class SRP_AdvancedStoneForgeWorkbench_Bellows : Inventory_Base
    {
        scope = 2;
        displayName = "Forge Bellows";
        descriptionShort = "Bellows for an advanced forge. Helps improve airflow to the fire.";
        model = "SRP\Metallurgy\gear\containers\srp_forge_stoneadvancedbellows.p3d";
        inventorySlot[] = { "SRP_ForgeBellows" };
        heavyItem = 1;
        weight = 10000;
        itemSize[] = { 8,8 };
        itemBehaviour = 0;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1.01,{"SRP\Metallurgy\gear\containers\data\srp_forgeandbellows.rvmat"}},
                        {0.69999999,{"SRP\Metallurgy\gear\containers\data\srp_forgeandbellows.rvmat"}},
                        {0.5,{"SRP\Metallurgy\gear\containers\data\srp_forgeandbellows.rvmat"}},
                        {0.30000001,{"SRP\Metallurgy\gear\containers\data\srp_forgeandbellows.rvmat"}},
                        {0.0099999998,{"SRP\Metallurgy\gear\containers\data\srp_forgeandbellows.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUpItem_Light
                {
                    soundSet = "pickUpBarrelLight_SoundSet";
                    id = 796;
                };
                class pickUpItem
                {
                    soundSet = "pickUpBarrel_SoundSet";
                    id = 797;
                };
            };
        };
    };
};