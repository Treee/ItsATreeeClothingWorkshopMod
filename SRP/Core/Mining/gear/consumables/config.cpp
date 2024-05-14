class CfgPatches
{
    class SRP_Core_Mining_Gear_Consumables
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Gear_Consumables"
        };
    };
};
class CfgVehicles
{
    class Inventory_Base;

    //==================================== STONE CHUNK WITH ORE
    class SRP_Mining_StoneChunk_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Base Stone Do Not Spawn";
        descriptionShort = "Base Stone Do Not Spawn";
        model = "\dz\gear\consumables\Stone.p3d";
        animClass = "NoFireClass";
        color = "base";
        weight = 1500;
        itemSize[] = { 3,3 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 12;
        varTemperatureMax = 1500;
        absorbency = 0;
        varWetMax = 0;
        inventorySlot[] = {};
        isMeleeWeapon = 1;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 200;
                    healthLevels[] =
                    {
                        {1.0,	{"SRP\Core\Mining\gear\consumables\data\stone.rvmat"}},
                        {0.69999999,	{"SRP\Core\Mining\gear\consumables\data\stone.rvmat"}},
                        {0.5,	{"SRP\Core\Mining\gear\consumables\data\stone_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Mining\gear\consumables\data\stone_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Mining\gear\consumables\data\stone_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Mining_StoneChunk_Copper : SRP_Mining_StoneChunk_ColorBase
    {
        scope = 2;
        displayName = "Copper Ore";
        descriptionShort = "Stone with chunks of raw copper ore.";
        color = "copper";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_copper_co.paa" };
    };
    class SRP_Mining_StoneChunk_Iron : SRP_Mining_StoneChunk_ColorBase
    {
        scope = 2;
        displayName = "Iron Ore";
        descriptionShort = "Stone with chunks of raw iron ore.";
        color = "iron";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_iron_co.paa" };
    };
    class SRP_Mining_StoneChunk_Tin : SRP_Mining_StoneChunk_ColorBase
    {
        scope = 2;
        displayName = "Tin Ore";
        descriptionShort = "Stone with chunks of raw tin ore.";
        color = "tin";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_tin_co.paa" };
    };
    class SRP_Mining_StoneChunk_Gold : SRP_Mining_StoneChunk_ColorBase
    {
        scope = 2;
        displayName = "Gold Ore";
        descriptionShort = "Stone with chunks of raw gold ore.";
        color = "gold";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_gold_co.paa" };
    };
    class SRP_Mining_StoneChunk_Platinum : SRP_Mining_StoneChunk_ColorBase
    {
        scope = 2;
        displayName = "Platinum Ore";
        descriptionShort = "Stone with chunks of raw platinum ore.";
        color = "platinum";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_platinum_co.paa" };
    };
    class SRP_Mining_StoneChunk_Silver : SRP_Mining_StoneChunk_ColorBase
    {
        scope = 2;
        displayName = "Silver Ore";
        descriptionShort = "Stone with chunks of raw silver ore.";
        color = "silver";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_silver_co.paa" };
    };
    class SRP_Mining_StoneChunk_Zinc : SRP_Mining_StoneChunk_ColorBase
    {
        scope = 2;
        displayName = "Zinc Ore";
        descriptionShort = "Stone with chunks of raw zinc ore.";
        color = "zinc";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_zinc_co.paa" };
    };
    class SRP_Mining_StoneChunk_Clay : SRP_Mining_StoneChunk_ColorBase
    {
        scope = 2;
        displayName = "Clay Chunk";
        descriptionShort = "Chunk of clay";
        color = "clay";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_clay_co.paa" };
    };
    class SRP_Mining_StoneChunk_Coke : SRP_Mining_StoneChunk_ColorBase
    {
        scope = 2;
        displayName = "Chunk of Coke";
        descriptionShort = "Chunk of Coke";
        color = "coke";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_coke_co.paa" };
    };
    class SRP_Mining_StoneChunk_Tar : SRP_Mining_StoneChunk_ColorBase
    {
        scope = 2;
        displayName = "Chunk of Oily Tar";
        descriptionShort = "Chunk of Oily Tar";
        color = "tar";
        inventorySlot[] = { "SRP_RawTar" };
        varQuantityMax = 100;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_tar_co.paa" };
    };
    class SRP_Mining_StoneChunk_Gemstone : SRP_Mining_StoneChunk_ColorBase
    {
        scope = 2;
        displayName = "Shimmering Chunk of Stone";
        descriptionShort = "This stone shimmers when light strikes it. Something shiney is inside.";
        color = "gemstone";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_silver_co.paa" };
    };

    //==================================== CHRUSHED STONE AKA PURE ORE
    class SRP_Mining_RawOre_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Base Raw Ore Do Not Spawn";
        descriptionShort = "Base Raw Ore Do Not Spawn";
        model = "\dz\gear\consumables\SmallStone.p3d";
        animClass = "NoFireClass";
        color = "base";
        weight = 500;
        itemSize[] = { 1,1 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 24;
        varStackMax = 24;
        absorbency = 0;
        varWetMax = 0;
        inventorySlot[] =
        {
          "SRP_RawOre1",
          "SRP_RawOre2"
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
                        {1.0,	{"SRP\Core\Mining\gear\consumables\data\stone.rvmat"}},
                        {0.69999999,	{"SRP\Core\Mining\gear\consumables\data\stone.rvmat"}},
                        {0.5,	{"SRP\Core\Mining\gear\consumables\data\stone_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Mining\gear\consumables\data\stone_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Mining\gear\consumables\data\stone_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Mining_RawOre_Copper : SRP_Mining_RawOre_ColorBase
    {
        scope = 2;
        displayName = "Raw Copper Ore";
        descriptionShort = "Raw copper ore. Excess rock has been removed.";
        color = "copper";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_copper_raw_co.paa" };
    };
    class SRP_Mining_RawOre_Iron : SRP_Mining_RawOre_ColorBase
    {
        scope = 2;
        displayName = "Raw Iron Ore";
        descriptionShort = "Raw iron ore. Excess rock has been removed.";
        color = "iron";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_iron_raw_co.paa" };
    };
    class SRP_Mining_RawOre_Tin : SRP_Mining_RawOre_ColorBase
    {
        scope = 2;
        displayName = "Raw Tin Ore";
        descriptionShort = "Raw tin ore. Excess rock has been removed.";
        color = "tin";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_tin_raw_co.paa" };
    };
    class SRP_Mining_RawOre_Gold : SRP_Mining_RawOre_ColorBase
    {
        scope = 2;
        displayName = "Raw Gold Ore";
        descriptionShort = "Raw gold ore. Excess rock has been removed.";
        color = "gold";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_gold_raw_co.paa" };
    };
    class SRP_Mining_RawOre_Platinum : SRP_Mining_RawOre_ColorBase
    {
        scope = 2;
        displayName = "Raw Platinum Ore";
        descriptionShort = "Raw platinum ore. Excess rock has been removed.";
        color = "platinum";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_platinum_raw_co.paa" };
    };
    class SRP_Mining_RawOre_Silver : SRP_Mining_RawOre_ColorBase
    {
        scope = 2;
        displayName = "Raw Silver Ore";
        descriptionShort = "Raw silver ore. Excess rock has been removed.";
        color = "silver";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_silver_co.paa" };
    };
    class SRP_Mining_RawOre_Zinc : SRP_Mining_RawOre_ColorBase
    {
        scope = 2;
        displayName = "Raw Zinc Ore";
        descriptionShort = "Raw zinc ore. Excess rock has been removed.";
        color = "zinc";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_zinc_co.paa" };
    };
    class SRP_Mining_RawOre_Coal : SRP_Mining_RawOre_ColorBase
    {
        scope = 2;
        displayName = "Raw Coal Ore";
        descriptionShort = "Raw coal. Ready to be burned.";
        color = "zinc";
        inventorySlot[] = { "SRP_FuelCoal" };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\stone_coal_co.paa" };
    };

    //==================================== GEMS RAW
    class SRP_Mining_RawGem_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Base Raw Gem Do Not Spawn";
        descriptionShort = "Base Raw Gem Do Not Spawn";
        model = "\dz\gear\consumables\SmallStone.p3d";
        animClass = "NoFireClass";
        color = "base";
        weight = 500;
        itemSize[] = { 1,1 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 12;
        varStackMax = 12;
        absorbency = 0;
        varWetMax = 0;
        inventorySlot[] =
        {
          "SRP_RawOre1",
          "SRP_RawOre2"
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
                        {1.0,	{"SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat"}},
                        {0.69999999,	{"SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat"}},
                        {0.5,	{"SRP\Core\Mining\gear\consumables\data\srp_rawgem_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Mining\gear\consumables\data\srp_rawgem_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Mining\gear\consumables\data\srp_rawgem_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Mining_RawGem_Ruby : SRP_Mining_RawGem_ColorBase
    {
        scope = 2;
        color = "ruby";
        displayName = "Raw Gem - Ruby";
        descriptionShort = "A raw gem extracted from the depths of the earth.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem_ruby_ca.paa" };
        hiddenSelectionsMaterials[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat" };
    };
    class SRP_Mining_RawGem_Sapphire : SRP_Mining_RawGem_ColorBase
    {
        scope = 2;
        color = "sapphire";
        displayName = "Raw Gem - Sapphire";
        descriptionShort = "A raw gem extracted from the depths of the earth.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem_sapphire_ca.paa" };
        hiddenSelectionsMaterials[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat" };
    };
    class SRP_Mining_RawGem_Jade : SRP_Mining_RawGem_ColorBase
    {
        scope = 2;
        color = "jade";
        displayName = "Raw Gem - Jade";
        descriptionShort = "A raw gem extracted from the depths of the earth.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem_jade_ca.paa" };
        hiddenSelectionsMaterials[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat" };
    };
    class SRP_Mining_RawGem_Amethyst : SRP_Mining_RawGem_ColorBase
    {
        scope = 2;
        color = "amethyst";
        displayName = "Raw Gem - Amethyst";
        descriptionShort = "A raw gem extracted from the depths of the earth.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem_amethyst_ca.paa" };
        hiddenSelectionsMaterials[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat" };
    };
    class SRP_Mining_RawGem_Aquamarine : SRP_Mining_RawGem_ColorBase
    {
        scope = 2;
        color = "aquamarine";
        displayName = "Raw Gem - Aquamarine";
        descriptionShort = "A raw gem extracted from the depths of the earth.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem_aqua_ca.paa" };
        hiddenSelectionsMaterials[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat" };
    };
    class SRP_Mining_RawGem_Citrine : SRP_Mining_RawGem_ColorBase
    {
        scope = 2;
        color = "citrine";
        displayName = "Raw Gem - Citrine";
        descriptionShort = "A raw gem extracted from the depths of the earth.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem_citrine_ca.paa" };
        hiddenSelectionsMaterials[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat" };
    };
    class SRP_Mining_RawGem_Diamond : SRP_Mining_RawGem_ColorBase
    {
        scope = 2;
        color = "diamond";
        displayName = "Raw Gem - Diamond";
        descriptionShort = "A raw gem extracted from the depths of the earth.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem_diamond_ca.paa" };
        hiddenSelectionsMaterials[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat" };
    };
    class SRP_Mining_RawGem_Topaz : SRP_Mining_RawGem_ColorBase
    {
        scope = 2;
        color = "topaz";
        displayName = "Raw Gem - Topaz";
        descriptionShort = "A raw gem extracted from the depths of the earth.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem_topaz_ca.paa" };
        hiddenSelectionsMaterials[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat" };
    };
    class SRP_Mining_RawGem_Quartz : SRP_Mining_RawGem_ColorBase
    {
        scope = 2;
        color = "quartz";
        displayName = "Raw Gem - Quartz";
        descriptionShort = "A raw gem extracted from the depths of the earth.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem_quartz_ca.paa" };
        hiddenSelectionsMaterials[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat" };
    };
    class SRP_Mining_RawGem_Opal : SRP_Mining_RawGem_ColorBase
    {
        scope = 2;
        color = "opal";
        displayName = "Raw Gem - Opal";
        descriptionShort = "A raw gem extracted from the depths of the earth.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem_opal_ca.paa" };
        hiddenSelectionsMaterials[] = { "SRP\Core\Mining\gear\consumables\data\srp_rawgem.rvmat" };
    };
    //==================================== GEM CUT
    class SRP_Mining_CutGem_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Base Cut Gem Do Not Spawn";
        descriptionShort = "Base Cut Gem Do Not Spawn";
        model = "SRP\Core\Mining\gear\consumables\srp_mining_gemcut.p3d";
        animClass = "NoFireClass";
        color = "base";
        physLayer = "item_small";
        weight = 500;
        itemSize[] = { 1,1 };
        canBeSplit = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 5;
        absorbency = 0;
        varWetMax = 0;
        inventorySlot[] =
        {
          "SRP_RawCrystal1",
          "SRP_RawCrystal2",
          "SRP_DisplayHook1",
          "SRP_DisplayHook2",
          "SRP_DisplayHook3",
          "SRP_DisplayHook4",
          "SRP_DisplayHook5",
          "SRP_DisplayHook6",
          "SRP_DisplayHook7",
          "SRP_DisplayHook8",
          "SRP_DisplayHook9",
          "SRP_DisplayHook10",
          "SRP_DisplayHook11",
          "SRP_DisplayHook12",
          "SRP_DisplayHook13",
          "SRP_DisplayHook14",
          "SRP_DisplayHook15",
          "SRP_DisplayHook16",
          "SRP_DisplayHook17",
          "SRP_DisplayHook18",
          "SRP_DisplayHook19",
          "SRP_DisplayHook20",
          "SRP_PreciousStone1",
          "SRP_PreciousStone2",
          "SRP_PreciousStone3",
          "SRP_PreciousStone4",
          "SRP_PreciousStone5",
        };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_clear_ca.paa" };
        hiddenSelectionsMaterials[] =
        {
          "SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut.rvmat"
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
                        {1.0,	{"SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
                        {0.69999999,	{"SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
                        {0.5,	{"SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_damage.rvmat"}},
                        {0.30000001,	{"SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_damage.rvmat"}},
                        {0.0,	{"SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Mining_CutGem_Ruby : SRP_Mining_CutGem_ColorBase
    {
        scope = 2;
        displayName = "Exquisite Cut Gem - Ruby";
        descriptionShort = "An exquisite gem refined from rough rock.";
        color = "ruby";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_red_ca.paa"
        };
    };
    class SRP_Mining_CutGem_Sapphire : SRP_Mining_CutGem_ColorBase
    {
        scope = 2;
        displayName = "Exquisite Cut Gem - Sapphire";
        descriptionShort = "An exquisite gem refined from rough rock.";
        color = "sapphire";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_blue_ca.paa"
        };
    };
    class SRP_Mining_CutGem_Jade : SRP_Mining_CutGem_ColorBase
    {
        scope = 2;
        displayName = "Exquisite Cut Gem - Jade";
        descriptionShort = "An exquisite gem refined from rough rock.";
        color = "jade";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_green_ca.paa"
        };
    };
    class SRP_Mining_CutGem_Amethyst : SRP_Mining_CutGem_ColorBase
    {
        scope = 2;
        displayName = "Exquisite Cut Gem - Amethyst";
        descriptionShort = "An exquisite gem refined from rough rock.";
        color = "amethyst";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_purple_ca.paa"
        };
    };
    class SRP_Mining_CutGem_Aquamarine : SRP_Mining_CutGem_ColorBase
    {
        scope = 2;
        displayName = "Exquisite Cut Gem - Aquamarine";
        descriptionShort = "An exquisite gem refined from rough rock.";
        color = "aquamarine";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_lightblue_ca.paa"
        };
    };
    class SRP_Mining_CutGem_Citrine : SRP_Mining_CutGem_ColorBase
    {
        scope = 2;
        displayName = "Exquisite Cut Gem - Citrine";
        descriptionShort = "An exquisite gem refined from rough rock.";
        color = "citrine";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_orange_ca.paa"
        };
    };
    class SRP_Mining_CutGem_Diamond : SRP_Mining_CutGem_ColorBase
    {
        scope = 2;
        displayName = "Exquisite Cut Gem - Diamond";
        descriptionShort = "An exquisite gem refined from rough rock.";
        color = "diamond";
    };
    class SRP_Mining_CutGem_Topaz : SRP_Mining_CutGem_ColorBase
    {
        scope = 2;
        displayName = "Exquisite Cut Gem - Topaz";
        descriptionShort = "An exquisite gem refined from rough rock.";
        color = "topaz";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_yellow_ca.paa"
        };
    };
    class SRP_Mining_CutGem_Quartz : SRP_Mining_CutGem_ColorBase
    {
        scope = 2;
        displayName = "Exquisite Cut Gem - Quartz";
        descriptionShort = "An exquisite gem refined from rough rock.";
        color = "quartz";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_pink_ca.paa"
        };
    };
    class SRP_Mining_CutGem_Opal : SRP_Mining_CutGem_ColorBase
    {
        scope = 2;
        displayName = "Exquisite Cut Gem - Opal";
        descriptionShort = "An exquisite gem refined from rough rock.";
        color = "opal";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "SRP\Core\Mining\gear\consumables\data\srp_miningcrystalcut_rainbow_ca.paa"
        };
    };
};