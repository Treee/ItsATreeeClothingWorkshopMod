class CfgPatches
{
    class SRP_Core_Metallurgy_Gear_Consumables
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Gear_Consumables",
        };
    };
};
class CfgVehicles
{
    class Inventory_Base;

    //===================================== BUCKETS
    class SRP_MetalBucket_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Bucket";
        descriptionShort = "Holds stuff inside if oriented upright.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_bucket.p3d";
        weight = 250;
        itemSize[] = { 3,3 };
        absorbency = 0;
        varWetMax = 0;
        varTemperatureMax = 1500;
        physLayer = "item_small";
        color = "base";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_bucket_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{	"SRP\Core\Metallurgy\gear\consumables\data\srp_bucket.rvmat"}},
                        {0.69999999,	{	"SRP\Core\Metallurgy\gear\consumables\data\srp_bucket.rvmat"}},
                        {0.5,	{	"SRP\Core\Metallurgy\gear\consumables\data\srp_bucket_damage.rvmat"}},
                        {0.30000001,	{	"SRP\Core\Metallurgy\gear\consumables\data\srp_bucket_damage.rvmat"}},
                        {0.0,	{	"SRP\Core\Metallurgy\gear\consumables\data\srp_bucket_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_MetalBucket_Default : SRP_MetalBucket_ColorBase
    {
        scope = 2;
        displayName = "Metal Bucket";
        descriptionShort = "Holds stuff inside if you hold it upright.";
        color = "default";
    };
    class SRP_MetalBucket_Lime : SRP_MetalBucket_ColorBase
    {
        scope = 2;
        displayName = "Bucket Covered With Lime";
        descriptionShort = "Needs some mortar to seal in the greatness.";
        itemsCargoSize[] = { 0,0 };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_bucket_lime_co.paa" };
    };
    class SRP_MetalBucket_Mortar : SRP_MetalBucket_ColorBase
    {
        scope = 2;
        displayName = "Bucket Covered With Mortar";
        descriptionShort = "Needs some heat to seal in the greatness.";
        itemsCargoSize[] = { 0,0 };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_bucket_mortar_co.paa" };
    };

    //===================================== CRUCIBLES
    class SRP_ForgeCrucible_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Forge Crucible";
        descriptionShort = "Able to withstand intense temperature.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_forge_crucible.p3d";
        weight = 440;
        itemSize[] = { 4,3 };
        color = "base";
        inventorySlot[] = { "SRP_Crucible" };
        itemsCargoSize[] = { 0,0 };
        attachments[] = {};
        canBeDigged = 0;
        allowOwnedCargoManipulation = 1;
        destroyOnEmpty = 0;
        varQuantityDestroyOnMin = 0;
        varQuantityInit = 0;
        varQuantityMin = 0;
        varQuantityMax = 0;
        absorbency = 0;
        varWetMax = 0;
        varTemperatureMax = 1500;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{	"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible.rvmat"}},
                        {0.69999999,	{	"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible.rvmat"}},
                        {0.5,	{	"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_damage.rvmat"}},
                        {0.30000001,	{	"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_damage.rvmat"}},
                        {0.0,	{	"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimationSources
        {
            class handleRotate
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUpPotLight
                {
                    soundSet = "pickUpPotLight_SoundSet";
                    id = 796;
                };
                class pickUpPot
                {
                    soundSet = "pickUpPot_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "pot_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class SRP_ForgeCrucible_Empty : SRP_ForgeCrucible_ColorBase
    {
        scope = 2;
        model = "SRP\Core\Metallurgy\gear\consumables\srp_forge_crucible_empty.p3d";
        displayName = "Empty Forge Crucible - Empty";
        descriptionShort = "Use this to melt down raw ore.";
        color = "empty";
        attachments[] =
        {
          "SRP_RawOre1",
          "SRP_RawOre2"
        };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_bucket_crucible_co.paa" };
    };
    class SRP_ForgeCrucible_Copper : SRP_ForgeCrucible_ColorBase
    {
        scope = 2;
        displayName = "Molten Metal - Copper";
        descriptionShort = "Very hot molten metal.";
        color = "copper";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_copper_co.paa" };
    };
    class SRP_ForgeCrucible_Tin : SRP_ForgeCrucible_ColorBase
    {
        scope = 2;
        displayName = "Molten Metal - Tin";
        descriptionShort = "Very hot molten metal.";
        color = "tin";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_tin_co.paa" };
    };
    class SRP_ForgeCrucible_Bronze : SRP_ForgeCrucible_ColorBase
    {
        scope = 2;
        displayName = "Molten Metal - Bronze";
        descriptionShort = "Very hot molten metal.";
        color = "bronze";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_bronze_co.paa" };
    };
    class SRP_ForgeCrucible_Iron : SRP_ForgeCrucible_ColorBase
    {
        scope = 2;
        displayName = "Molten Metal - Iron";
        descriptionShort = "Very hot molten metal.";
        color = "iron";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_iron_co.paa" };
    };
    class SRP_ForgeCrucible_Gold : SRP_ForgeCrucible_ColorBase
    {
        scope = 2;
        displayName = "Molten Metal - Gold";
        descriptionShort = "Very hot molten metal.";
        color = "gold";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_gold_co.paa" };
    };
    class SRP_ForgeCrucible_Platinum : SRP_ForgeCrucible_ColorBase
    {
        scope = 2;
        displayName = "Molten Metal - Platinum";
        descriptionShort = "Very hot molten metal.";
        color = "platinum";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_platinum_co.paa" };
    };
    class SRP_ForgeCrucible_Silver : SRP_ForgeCrucible_ColorBase
    {
        scope = 2;
        displayName = "Molten Metal - Silver";
        descriptionShort = "Very hot molten metal.";
        color = "silver";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_silver_co.paa" };
    };
    class SRP_ForgeCrucible_Zinc : SRP_ForgeCrucible_ColorBase
    {
        scope = 2;
        displayName = "Molten Metal - Zinc";
        descriptionShort = "Very hot molten metal.";
        color = "zinc";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_zinc_co.paa" };
    };
    class SRP_ForgeCrucible_Brass : SRP_ForgeCrucible_ColorBase
    {
        scope = 2;
        displayName = "Molten Metal - Brass";
        descriptionShort = "Very hot molten metal.";
        color = "brass";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_brass_co.paa" };
    };

    //===================================== INGOT MOLDS
    class SRP_ForgeIngotMold_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Ingot Mold";
        descriptionShort = "A mold suitable for cooling molten metal into ingots.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_forge_ingotmold.p3d";
        animClass = "NoFireClass";
        physLayer = "item_small";
        color = "base";
        weight = 500;
        itemSize[] = { 3,1 };
        itemsCargoSize[] = { 0,0 };
        inventorySlot[] = { "SRP_IngotMold" };
        canBeDigged = 0;
        allowOwnedCargoManipulation = 1;
        destroyOnEmpty = 0;
        varQuantityDestroyOnMin = 0;
        varQuantityInit = 0;
        varQuantityMin = 0;
        varQuantityMax = 0;
        absorbency = 0;
        varWetMax = 0;
        varTemperatureMax = 1500;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible.rvmat"}},
                        {0.69999999,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible.rvmat"}},
                        {0.5,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_ForgeIngotMold_MetalEmpty : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Metal Starter";
        descriptionShort = "A mold hammered from some metal.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_forge_ingotmold_empty.p3d";
        color = "metalempty";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_bucket_co.paa" };
    };
    class SRP_ForgeIngotMold_Lime : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Lime Covered";
        descriptionShort = "A mold covered with lime. Apply something hard to make solid.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_forge_ingotmold_empty.p3d";
        color = "lime";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_bucket_lime_co.paa" };
    };
    class SRP_ForgeIngotMold_Mortar : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Mortar Covered";
        descriptionShort = "A mold covered with mortar. Apply heat to harden.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_forge_ingotmold_empty.p3d";
        color = "mortar";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_bucket_mortar_co.paa" };
    };
    class SRP_ForgeIngotMold_Empty : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Empty";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_forge_ingotmold_empty.p3d";
        color = "empty";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_empty_co.paa" };
    };
    class SRP_ForgeIngotMold_Copper : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Copper";
        color = "copper";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_copper_co.paa" };
    };
    class SRP_ForgeIngotMold_Tin : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Tin";
        color = "tin";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_tin_co.paa" };
    };
    class SRP_ForgeIngotMold_Bronze : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Bronze";
        color = "bronze";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_bronze_co.paa" };
    };
    class SRP_ForgeIngotMold_Iron : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Iron";
        color = "iron";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_iron_co.paa" };
    };
    class SRP_ForgeIngotMold_Gold : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Gold";
        color = "gold";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_gold_co.paa" };
    };
    class SRP_ForgeIngotMold_Platinum : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Platinum";
        color = "platinum";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_platinum_co.paa" };
    };
    class SRP_ForgeIngotMold_Silver : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Silver";
        color = "silver";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_silver_co.paa" };
    };
    class SRP_ForgeIngotMold_Zinc : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Zinc";
        color = "zinc";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_zinc_co.paa" };
    };
    class SRP_ForgeIngotMold_Brass : SRP_ForgeIngotMold_ColorBase
    {
        scope = 2;
        displayName = "Ingot Mold - Brass";
        color = "brass";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_crucible_brass_co.paa" };
    };

    //===================================== INGOTS
    class SRP_ForgeIngot_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Metal Ingot";
        descriptionShort = "A metal ingot that has been cooled into the shape of a bar.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_forge_ingot.p3d";
        animClass = "NoFireClass";
        physLayer = "item_small";
        color = "base";
        weight = 500;
        rotationFlags = 16;
        itemSize[] = { 3,1 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 10;
        varStackMax = 10;
        varTemperatureMax = 500;
        absorbency = 0;
        varWetMax = 0;
        inventorySlot[] = { "SRP_Ingot" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
                        {0.69999999,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
                        {0.5,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_ForgeIngot_Copper : SRP_ForgeIngot_ColorBase
    {
        scope = 2;
        displayName = "Metal Ingot - Copper";
        color = "copper";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa" };
    };
    class SRP_ForgeIngot_Tin : SRP_ForgeIngot_ColorBase
    {
        scope = 2;
        displayName = "Metal Ingot - Tin";
        color = "tin";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_tin_co.paa" };
    };
    class SRP_ForgeIngot_Bronze : SRP_ForgeIngot_ColorBase
    {
        scope = 2;
        displayName = "Metal Ingot - Bronze";
        color = "bronze";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa" };
    };
    class SRP_ForgeIngot_Iron : SRP_ForgeIngot_ColorBase
    {
        scope = 2;
        displayName = "Metal Ingot - Iron";
        color = "iron";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_iron_co.paa" };
    };
    class SRP_ForgeIngot_Gold : SRP_ForgeIngot_ColorBase
    {
        scope = 2;
        displayName = "Metal Ingot - Gold";
        color = "gold";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_gold_co.paa" };
    };
    class SRP_ForgeIngot_Platinum : SRP_ForgeIngot_ColorBase
    {
        scope = 2;
        displayName = "Metal Ingot - Platinum";
        color = "platinum";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_platinum_co.paa" };
    };

    class SRP_ForgeIngot_Silver : SRP_ForgeIngot_ColorBase
    {
        scope = 2;
        displayName = "Metal Ingot - Silver";
        color = "silver";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_silver_co.paa" };
    };
    class SRP_ForgeIngot_Zinc : SRP_ForgeIngot_ColorBase
    {
        scope = 2;
        displayName = "Metal Ingot - Zinc";
        color = "zinc";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_zinc_co.paa" };
    };
    class SRP_ForgeIngot_Brass : SRP_ForgeIngot_ColorBase
    {
        scope = 2;
        displayName = "Metal Ingot - Brass";
        color = "brass";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_brass_co.paa" };
    };

    //===================================== PLATES
    class SRP_ForgeIngotPlate_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Metal Plate";
        descriptionShort = "A metal ingot that has been shaped into a metal plate.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_forge_ingotplate.p3d";
        animClass = "NoFireClass";
        physLayer = "item_small";
        color = "base";
        weight = 500;
        itemSize[] = { 2,3 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 20;
        varStackMax = 10;
        varTemperatureMax = 500;
        absorbency = 0;
        varWetMax = 0;
        inventorySlot[] =
        {
          "SRP_MetalPlate1",
          "SRP_MetalPlate2",
          "SRP_MetalPlate3",
          "SRP_MetalPlate4",
          "SRP_MetalPlate5",
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
                        {1.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
                        {0.69999999,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
                        {0.5,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_ForgeIngotPlate_Copper : SRP_ForgeIngotPlate_ColorBase
    {
        scope = 2;
        displayName = "Metal Plate - Copper";
        color = "copper";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa" };
    };
    class SRP_ForgeIngotPlate_Tin : SRP_ForgeIngotPlate_ColorBase
    {
        scope = 2;
        displayName = "Metal Plate - Tin";
        color = "tin";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_tin_co.paa" };
    };
    class SRP_ForgeIngotPlate_Bronze : SRP_ForgeIngotPlate_ColorBase
    {
        scope = 2;
        displayName = "Metal Plate - Bronze";
        color = "bronze";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa" };
    };
    class SRP_ForgeIngotPlate_Iron : SRP_ForgeIngotPlate_ColorBase
    {
        scope = 2;
        displayName = "Metal Plate - Iron";
        color = "iron";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_iron_co.paa" };
    };
    class SRP_ForgeIngotPlate_Gold : SRP_ForgeIngotPlate_ColorBase
    {
        scope = 2;
        displayName = "Metal Plate - Gold";
        color = "gold";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_gold_co.paa" };
    };
    class SRP_ForgeIngotPlate_Platinum : SRP_ForgeIngotPlate_ColorBase
    {
        scope = 2;
        displayName = "Metal Plate - Platinum";
        color = "platinum";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_platinum_co.paa" };
    };

    class SRP_ForgeIngotPlate_Silver : SRP_ForgeIngotPlate_ColorBase
    {
        scope = 2;
        displayName = "Metal Plate - Silver";
        color = "silver";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_silver_co.paa" };
    };
    class SRP_ForgeIngotPlate_Zinc : SRP_ForgeIngotPlate_ColorBase
    {
        scope = 2;
        displayName = "Metal Plate - Zinc";
        color = "zinc";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_zinc_co.paa" };
    };
    class SRP_ForgeIngotPlate_Brass : SRP_ForgeIngotPlate_ColorBase
    {
        scope = 2;
        displayName = "Metal Plate - Brass";
        color = "brass";
        inventorySlot[] += {"SRP_AmmoCasings"};
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_brass_co.paa" };
    };

    //===================================== RODS
    class SRP_ForgeIngotRod_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Metal Rod";
        descriptionShort = "A metal ingot that has been shaped into a metal rod.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_forge_ingotrod.p3d";
        animClass = "NoFireClass";
        physLayer = "item_small";
        color = "base";
        weight = 500;
        itemSize[] = { 5,1 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 10;
        varStackMax = 5;
        varTemperatureMax = 500;
        absorbency = 0;
        varWetMax = 0;
        inventorySlot[] =
        {
          "SRP_MetalRod1",
          "SRP_MetalRod2",
          "SRP_MetalRod3",
          "SRP_MetalRod4",
          "SRP_MetalRod5",
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
                        {1.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
                        {0.69999999,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
                        {0.5,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_ForgeIngotRod_Copper : SRP_ForgeIngotRod_ColorBase
    {
        scope = 2;
        displayName = "Metal Rod - Copper";
        color = "copper";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa" };
    };
    class SRP_ForgeIngotRod_Tin : SRP_ForgeIngotRod_ColorBase
    {
        scope = 2;
        displayName = "Metal Rod - Tin";
        color = "tin";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_tin_co.paa" };
    };
    class SRP_ForgeIngotRod_Bronze : SRP_ForgeIngotRod_ColorBase
    {
        scope = 2;
        displayName = "Metal Rod - Bronze";
        color = "bronze";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa" };
    };
    class SRP_ForgeIngotRod_Iron : SRP_ForgeIngotRod_ColorBase
    {
        scope = 2;
        displayName = "Metal Rod - Iron";
        color = "iron";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_iron_co.paa" };
    };
    class SRP_ForgeIngotRod_Gold : SRP_ForgeIngotRod_ColorBase
    {
        scope = 2;
        displayName = "Metal Rod - Gold";
        color = "gold";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_gold_co.paa" };
    };
    class SRP_ForgeIngotRod_Platinum : SRP_ForgeIngotRod_ColorBase
    {
        scope = 2;
        displayName = "Metal Rod - Platinum";
        color = "platinum";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_platinum_co.paa" };
    };
    class SRP_ForgeIngotRod_Silver : SRP_ForgeIngotRod_ColorBase
    {
        scope = 2;
        displayName = "Metal Rod - Silver";
        color = "silver";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_silver_co.paa" };
    };
    class SRP_ForgeIngotRod_Zinc : SRP_ForgeIngotRod_ColorBase
    {
        scope = 2;
        displayName = "Metal Rod - Zinc";
        color = "zinc";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_zinc_co.paa" };
    };
    class SRP_ForgeIngotRod_Brass : SRP_ForgeIngotRod_ColorBase
    {
        scope = 2;
        displayName = "Metal Rod - Brass";
        color = "brass";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_forge_ingot_brass_co.paa" };
    };

    //===================================== COINS
    class SRP_Coinage_Blank1_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Phoenix Coin";
        descriptionShort = "A metal coin minted from forged metal.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_coinage_blank1.p3d";
        animClass = "NoFireClass";
        physLayer = "item_small";
        color = "base";
        weight = 500;
        itemSize[] = { 1,1 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varStackMax = 100;
        absorbency = 0;
        varWetMax = 0;
        varTemperatureMax = 500;
        varQuantityMax = 500;
        inventorySlot[] = {};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.69999999,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.5,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Coinage_Blank2_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Worn Dragoon Coin";
        descriptionShort = "A metal coin minted from forged metal.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_coinage_blank2.p3d";
        animClass = "NoFireClass";
        physLayer = "item_small";
        color = "base";
        weight = 500;
        itemSize[] = { 1,1 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varStackMax = 100;
        absorbency = 0;
        varWetMax = 0;
        varTemperatureMax = 500;
        varQuantityMax = 500;
        inventorySlot[] = {};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.69999999,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.5,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Coinage_Blank3_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Celtic Coin";
        descriptionShort = "A metal coin minted from forged metal.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_coinage_blank3.p3d";
        animClass = "NoFireClass";
        physLayer = "item_small";
        color = "base";
        weight = 500;
        itemSize[] = { 1,1 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varStackMax = 100;
        absorbency = 0;
        varWetMax = 0;
        varTemperatureMax = 500;
        varQuantityMax = 500;
        inventorySlot[] = {};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.69999999,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.5,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Coinage_Celtic_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Worn Celtic Coin";
        descriptionShort = "A metal coin minted from forged metal.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_coinage_celtic.p3d";
        animClass = "NoFireClass";
        physLayer = "item_small";
        color = "base";
        weight = 500;
        itemSize[] = { 1,1 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varStackMax = 100;
        absorbency = 0;
        varWetMax = 0;
        varTemperatureMax = 500;
        varQuantityMax = 500;
        inventorySlot[] = {};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.69999999,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.5,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Coinage_Dragoon_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Dragoon Coin";
        descriptionShort = "A metal coin minted from forged metal.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_coinage_dragoon.p3d";
        animClass = "NoFireClass";
        physLayer = "item_small";
        color = "base";
        weight = 500;
        itemSize[] = { 1,1 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varStackMax = 100;
        absorbency = 0;
        varWetMax = 0;
        varTemperatureMax = 500;
        varQuantityMax = 500;
        inventorySlot[] = {};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.69999999,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.5,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Coinage_Phoenix_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Worn Phoenix Coin";
        descriptionShort = "A metal coin minted from forged metal.";
        model = "SRP\Core\Metallurgy\gear\consumables\srp_coinage_phoenix.p3d";
        animClass = "NoFireClass";
        physLayer = "item_small";
        color = "base";
        weight = 500;
        itemSize[] = { 1,1 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varStackMax = 100;
        absorbency = 0;
        varWetMax = 0;
        varTemperatureMax = 500;
        varQuantityMax = 500;
        inventorySlot[] = {};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.69999999,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage.rvmat"}},
                        {0.5,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_destruct.rvmat"}}
                    };
                };
            };
        };
    };



    class SRP_Coinage_Blank1_Default : SRP_Coinage_Blank1_ColorBase
    {
        scope = 2;
        color = "default";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_co.paa" };
    };
    class SRP_Coinage_Blank2_Default : SRP_Coinage_Blank2_ColorBase
    {
        scope = 2;
        color = "default";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_co.paa" };
    };
    class SRP_Coinage_Blank3_Default : SRP_Coinage_Blank3_ColorBase
    {
        scope = 2;
        color = "default";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_co.paa" };
    };
    class SRP_Coinage_Celtic_Default : SRP_Coinage_Celtic_ColorBase
    {
        scope = 2;
        color = "default";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_co.paa" };
    };
    class SRP_Coinage_Dragoon_Default : SRP_Coinage_Dragoon_ColorBase
    {
        scope = 2;
        color = "default";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_co.paa" };
    };
    class SRP_Coinage_Phoenix_Default : SRP_Coinage_Phoenix_ColorBase
    {
        scope = 2;
        color = "default";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Metallurgy\gear\consumables\data\srp_coinage_co.paa" };
    };
};