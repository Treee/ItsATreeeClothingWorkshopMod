class CfgPatches
{
    class Survivalists_Building_Structures_Specific
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Structures_Specific",
        };
    };
};
class CfgVehicles
{
    class HouseNoDestruct;
    class Inventory_Base;
    class Land_Building_Specific_PileOfGold : HouseNoDestruct
    {
        scope = 1;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Building\structures\specific\data\srp_treasurepile_gold_co.paa" };
        model = "Survivalists_Building\structures\specific\srp_treasurepile_gold.p3d";
    };
    class Land_Building_Specific_BearStatue_UniqueItem_Tyler : HouseNoDestruct
    {
        scope = 1;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Building\structures\specific\data\srp_bearstatue_tyler_co.paa" };
        model = "Survivalists_Building\structures\specific\srp_bearstatue.p3d";
    };

    class Land_Building_Specific_Hint_MiningLocations : HouseNoDestruct
    {
        scope = 1;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Building\structures\specific\data\loot_paper_mining_co.paa" };
        model = "\dz\gear\consumables\Paper.p3d";
    };
    class Land_Building_Specific_Hint_FishingLocations : HouseNoDestruct
    {
        scope = 1;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Building\structures\specific\data\loot_paper_fishing_co.paa" };
        model = "\dz\gear\consumables\Paper.p3d";
    };
    class Land_Building_Specific_Hint_BrewingStuff : HouseNoDestruct
    {
        scope = 1;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Building\structures\specific\data\loot_paper_brewing_co.paa" };
        model = "\dz\gear\consumables\Paper.p3d";
    };
    class Land_Building_Specific_Hint_CDCForm1 : HouseNoDestruct
    {
        scope = 1;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Building\structures\specific\data\loot_paper_cdcforminfo_co.paa" };
        model = "\dz\gear\consumables\Paper.p3d";
    };
    class Land_Building_Specific_Hint_CDCForm2 : HouseNoDestruct
    {
        scope = 1;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Building\structures\specific\data\loot_paper_cdcformsurgury_co.paa" };
        model = "\dz\gear\consumables\Paper.p3d";
    };
    class Land_Building_Specific_Hint_CDCForm3 : HouseNoDestruct
    {
        scope = 1;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Building\structures\specific\data\loot_paper_cdcformrecord_co.paa" };
        model = "\dz\gear\consumables\Paper.p3d";
    };

    class SRP_StoneAltar_UniqueItem_Snowblind : Inventory_Base
    {
        scope = 1;
        displayName = "Altar";
        descriptionShort = "A crude stone altar worn from use.";
        model = "Survivalists_Building\structures\specific\srp_stonealtar.p3d";
        carveNavmesh = 1;
        weight = 500;
        itemSize[] = { 2,2 };
        itemsCargoSize[] = { 0,0 };
        physLayer = "item_large";
        minPlacingDist = 5;
        slopeTolerance = 0.2;
        alignHologramToTerain = 1;
        attachments[] =
        {
            "Mask",
            "Chemlight"
        };
        hiddenSelections[] = { "zbytek", "fabric" };
        hiddenSelectionsTextures[] = { "Survivalists_Building\structures\specific\data\srp_stonealtar_co.paa" };
    };
};