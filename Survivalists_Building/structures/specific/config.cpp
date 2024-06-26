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

    class SRP_SteamGenerator_UniqueItem_Pandagodmystic : Inventory_Base
    {
        scope = 1;
        displayName = "Steam Generator";
        descriptionShort = "A crude stone altar worn from use.";
        model = "Survivalists_Building\structures\specific\srp_steamgenerator.p3d";
        carveNavmesh = 1;
        weight = 500;
        itemSize[] = { 10,10 };
        itemsCargoSize[] = { 0,0 };
        physLayer = "item_large";
        minPlacingDist = 5;
        slopeTolerance = 0.2;
        alignHologramToTerain = 1;
        hiddenSelections[] = { "cement", "metal", "leather" };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Building\structures\specific\data\srp_steamgenerator_co.paa",
            "Survivalists_Building\structures\specific\data\srp_steamgenerator_co.paa",
            "Survivalists_Building\structures\specific\data\srp_steamgenerator_co.paa"
        };
    };

    class SRP_GypsyWagon_UniqueItem_Default : HouseNoDestruct
    {
        scope = 1;
        displayName = "Gypsy Wagon";
        descriptionShort = "A large wagon with room at the front to sit.";
        model = "Survivalists_Building\structures\specific\srp_gypsywagon.p3d";
        carveNavmesh = 1;
        weight = 500;
        itemSize[] = { 10,10 };
        itemsCargoSize[] = { 0,0 };
        physLayer = "item_large";
        minPlacingDist = 5;
        slopeTolerance = 0.2;
        alignHologramToTerain = 1;
        hiddenSelections[] = { "door", "door1", "planks", "roof", "seat", "wheel", "windows" };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_seat_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_seat_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_planks_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_roof_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_seat_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_wheel_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_windows_co.paa"
        };
        class Doors
        {
            class Door1
            {
                displayName = "door 1";
                component = "door1";
                soundPos = "door1_action";
                animPeriod = 1;
                initPhase = 0;
                initOpened = 0.5;
                soundOpen = "doorWoodSmallOpen";
                soundClose = "doorWoodSmallClose";
                soundLocked = "doorWoodSmallRattle";
                soundOpenABit = "doorWoodSmallOpenABit";
            };
            class Door2
            {
                displayName = "door 2";
                component = "door2";
                soundPos = "door2_action";
                animPeriod = 1;
                initPhase = 0;
                initOpened = 0.5;
                soundOpen = "doorWoodSmallOpen";
                soundClose = "doorWoodSmallClose";
                soundLocked = "doorWoodSmallRattle";
                soundOpenABit = "doorWoodSmallOpenABit";
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class Melee
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
            };
            class DamageZones
            {
                class Door1
                {
                    class Health
                    {
                        hitpoints = 1000;
                        transferToGlobalCoef = 0;
                    };
                    componentNames[] = { "door1" };
                    fatalInjuryCoef = -1;
                    class ArmorType
                    {
                        class Projectile
                        {
                            class Health { damage = 2; };
                            class Blood { damage = 0; };
                            class Shock { damage = 0; };
                        };
                        class Melee
                        {
                            class Health { damage = 2.5; };
                            class Blood { damage = 0; };
                            class Shock { damage = 0; };
                        };
                    };
                };
                class Door2
                {
                    class Health
                    {
                        hitpoints = 1000;
                        transferToGlobalCoef = 0;
                    };
                    componentNames[] = { "door2" };
                    fatalInjuryCoef = -1;
                    class ArmorType
                    {
                        class Projectile
                        {
                            class Health { damage = 2; };
                            class Blood { damage = 0; };
                            class Shock { damage = 0; };
                        };
                        class Melee
                        {
                            class Health { damage = 2.5; };
                            class Blood { damage = 0; };
                            class Shock { damage = 0; };
                        };
                    };
                };
            };
        };
    };
    class SRP_GypsyWagon_UniqueItem_essesentiendum : HouseNoDestruct
    {
        scope = 1;
        displayName = "Gypsy Wagon";
        descriptionShort = "A large wagon with room at the front to sit.";
        model = "Survivalists_Building\structures\specific\srp_gypsywagon.p3d";
        carveNavmesh = 1;
        weight = 500;
        itemSize[] = { 10,10 };
        itemsCargoSize[] = { 0,0 };
        physLayer = "item_large";
        minPlacingDist = 5;
        slopeTolerance = 0.2;
        alignHologramToTerain = 1;
        hiddenSelections[] = { "door", "door1", "planks", "roof", "seat", "wheel", "windows" };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_seat_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_seat_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_planks_gypsy_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_roof_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_seat_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_wheel_co.paa",
            "Survivalists_Building\structures\specific\data\srp_gypsywagon_windows_co.paa"
        };
        class Doors
        {
            class Door1
            {
                displayName = "door 1";
                component = "door1";
                soundPos = "door1_action";
                animPeriod = 1;
                initPhase = 0;
                initOpened = 0.5;
                soundOpen = "doorWoodSmallOpen";
                soundClose = "doorWoodSmallClose";
                soundLocked = "doorWoodSmallRattle";
                soundOpenABit = "doorWoodSmallOpenABit";
            };
            class Door2
            {
                displayName = "door 2";
                component = "door2";
                soundPos = "door2_action";
                animPeriod = 1;
                initPhase = 0;
                initOpened = 0.5;
                soundOpen = "doorWoodSmallOpen";
                soundClose = "doorWoodSmallClose";
                soundLocked = "doorWoodSmallRattle";
                soundOpenABit = "doorWoodSmallOpenABit";
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class Melee
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
            };
            class DamageZones
            {
                class Door1
                {
                    class Health
                    {
                        hitpoints = 1000;
                        transferToGlobalCoef = 0;
                    };
                    componentNames[] = { "door1" };
                    fatalInjuryCoef = -1;
                    class ArmorType
                    {
                        class Projectile
                        {
                            class Health { damage = 2; };
                            class Blood { damage = 0; };
                            class Shock { damage = 0; };
                        };
                        class Melee
                        {
                            class Health { damage = 2.5; };
                            class Blood { damage = 0; };
                            class Shock { damage = 0; };
                        };
                    };
                };
                class Door2
                {
                    class Health
                    {
                        hitpoints = 1000;
                        transferToGlobalCoef = 0;
                    };
                    componentNames[] = { "door2" };
                    fatalInjuryCoef = -1;
                    class ArmorType
                    {
                        class Projectile
                        {
                            class Health { damage = 2; };
                            class Blood { damage = 0; };
                            class Shock { damage = 0; };
                        };
                        class Melee
                        {
                            class Health { damage = 2.5; };
                            class Blood { damage = 0; };
                            class Shock { damage = 0; };
                        };
                    };
                };
            };
        };
    };
};