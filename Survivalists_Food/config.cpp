class CfgMods
{
    class Survivalists_Food
    {
        type = "mod";
        author = "ItsATreee | Mar";
        name = "Survivalists_Food";
        dir = "Survivalists_Food";
        dependencies[] = {};
    };
};
class CfgPatches
{
    class Survivalists_Food
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
          "DZ_Data",
          "DZ_Scripts",
          "DZ_Gear_Food",
          "DadaFoods_Configs_Food_Raw"
        };
    };
};
class CfgVehicles
{
    class BreadStageTransitions
    {
        class Raw
        {
            class ToBaked
            {
                transition_to = 2;
                cooking_method = 1;
            };
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 3;
            };
            class ToRotten
            {
                transition_to = 6;
                cooking_method = 4;
            };
        };
        class Rotten
        {
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 1;
            };
        };
        class Baked
        {
            class ToBaked
            {
                transition_to = 5;
                cooking_method = 1;
            };
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 3;
            };
            class ToRotten
            {
                transition_to = 6;
                cooking_method = 4;
            };
        };
        class Boiled
        {
        };
        class Dried
        {
        };
        class Burned
        {
        };
    };
    class StewStageTransitions
    {
        class Raw
        {
            class ToBaked
            {
                transition_to = 2;
                cooking_method = 1;
            };
            class ToBoiled
            {
                transition_to = 3;
                cooking_method = 2;
            };
            class ToDried
            {
                transition_to = 4;
                cooking_method = 3;
            };
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 1;
            };
            class ToRotten
            {
                transition_to = 6;
                cooking_method = 4;
            };
        };
        class Rotten
        {
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 1;
            };
        };
        class Baked
        {
            class ToBaked
            {
                transition_to = 5;
                cooking_method = 1;
            };
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 3;
            };
            class ToRotten
            {
                transition_to = 6;
                cooking_method = 4;
            };
        };
        class Boiled
        {
            class ToBoiled
            {
                transition_to = 3;
                cooking_method = 2;
            };
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 3;
            };
            class ToRotten
            {
                transition_to = 6;
                cooking_method = 4;
            };
        };
        class Dried
        {
            class ToBaked
            {
                transition_to = 5;
                cooking_method = 1;
            };
            class ToBoiled
            {
                transition_to = 3;
                cooking_method = 2;
            };
            class ToDried
            {
                transition_to = 5;
                cooking_method = 3;
            };
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 3;
            };
            class ToRotten
            {
                transition_to = 6;
                cooking_method = 4;
            };
        };
        class Burned
        {
        };
    };
    class FishStageTransitions
    {
        class Raw
        {
            class ToBaked
            {
                transition_to = 2;
                cooking_method = 1;
            };
            class ToBoiled
            {
                transition_to = 3;
                cooking_method = 2;
            };
            class ToDried
            {
                transition_to = 4;
                cooking_method = 3;
            };
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 1;
            };
            class ToRotten
            {
                transition_to = 6;
                cooking_method = 4;
            };
        };
        class Rotten
        {
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 1;
            };
        };
        class Baked
        {
            class ToBaked
            {
                transition_to = 5;
                cooking_method = 1;
            };
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 3;
            };
            class ToRotten
            {
                transition_to = 6;
                cooking_method = 4;
            };
        };
        class Boiled
        {
            class ToBoiled
            {
                transition_to = 3;
                cooking_method = 2;
            };
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 3;
            };
            class ToRotten
            {
                transition_to = 6;
                cooking_method = 4;
            };
        };
        class Dried
        {
            class ToBaked
            {
                transition_to = 5;
                cooking_method = 1;
            };
            class ToBoiled
            {
                transition_to = 3;
                cooking_method = 2;
            };
            class ToDried
            {
                transition_to = 5;
                cooking_method = 3;
            };
            class ToBurned
            {
                transition_to = 5;
                cooking_method = 3;
            };
            class ToRotten
            {
                transition_to = 6;
                cooking_method = 4;
            };
        };
        class Burned
        {
        };
    };

    class BaseFoodStageTransitions;
    class FoodAnimationSources;
    class MeatStageTransitions;
    class NotCookable;
    class Edible_Base;

    class Chips;
    class BoxCerealCrunchin;
    class Guts;
    //================================== BASE GAME OVERRIDES
    class PowderedMilk : Edible_Base
    {
        weight = 0.15;
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Rice : Edible_Base
    {
        canBeSplit = 1;
        weight = 0.12;
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Marmalade : Edible_Base
    {
        weight = 0.625;
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Honey : Edible_Base
    {
        weight = 0.625;
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Zagorky_ColorBase : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Snack_ColorBase : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class BakedBeansCan : Edible_Base
    {
        itemSize[] = { 1,2 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class BakedBeansCan_Opened : Edible_Base
    {
        itemSize[] = { 1,2 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class PeachesCan : Edible_Base
    {
        itemSize[] = { 1,2 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class PeachesCan_Opened : Edible_Base
    {
        itemSize[] = { 1,2 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class TacticalBaconCan : Edible_Base
    {
        itemSize[] = { 1,2 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class TacticalBaconCan_Opened : Edible_Base
    {
        itemSize[] = { 1,2 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class SpaghettiCan : Edible_Base
    {
        itemSize[] = { 1,2 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class SpaghettiCan_Opened : Edible_Base
    {
        itemSize[] = { 1,2 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class SardinesCan : Edible_Base
    {
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class SardinesCan_Opened : Edible_Base
    {
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class TunaCan : Edible_Base
    {
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class TunaCan_Opened : Edible_Base
    {
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class FoodCan_250g_ColorBase : Edible_Base
    {
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class FoodCan_250g_Opened_ColorBase : Edible_Base
    {
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class UnknownFoodCan : Edible_Base
    {
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class UnknownFoodCan_Opened : Edible_Base
    {
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class FoodCan_100g_ColorBase : Edible_Base
    {
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class FoodCan_100g_Opened_ColorBase : Edible_Base
    {
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Apple : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Plum : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Pear : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Banana : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Orange : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class SlicedPumpkin : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Potato : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Kiwi : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class SambucusBerry : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class CaninaBerry : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Lard : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class HumanSteakMeat : Edible_Base
    {
        scope = 2;
        displayName = "Steak";
        descriptionShort = "A weird smelling meat";
        model = "\dz\gear\food\meat_steak.p3d";
        weight = 0;
        interactionWeight = 1;
        quantityBar = 1;
        absorbency = 0.30000001;
        itemSize[] = { 1,2 };
        varQuantityInit = 150;
        varQuantityMin = 0;
        varQuantityMax = 150;
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class GoatSteakMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class MouflonSteakMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class BoarSteakMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class PigSteakMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class DeerSteakMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class WolfSteakMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class BearSteakMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class CowSteakMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class SheepSteakMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class FoxSteakMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class ChickenBreastMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class RabbitLegMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class CarpFilletMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class MackerelFilletMeat : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8"
        };
    };
    class Tomato : Edible_Base
    {
        containsSeedsQuantity = "0";
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class GreenBellPepper : Edible_Base
    {
        containsSeedsQuantity = "0";
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Zucchini : Edible_Base
    {
        containsSeedsQuantity = "0";
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Pumpkin : Edible_Base
    {
        containsSeedsQuantity = "0";
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Worm : Edible_Base
    {
        canBeSplit = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 99;
        varQuantityDestroyOnMin = 1;
        varStackMax = 1;
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
        class AnimationSources : FoodAnimationSources
        {
        };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 2.5,1,1,1,0 };
                    cooking_properties[] = { 0,0 };
                };
            };
            class FoodStageTransitions : NotCookable
            {
            };
        };
    };
    class Bitterlings : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Carp : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Sardines : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class Mackerel : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class DeadChicken_ColorBase : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class DeadRabbit : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };
    class MushroomBase : Edible_Base
    {
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
        };
    };

    //================================== CUSTOM STUFF
    class SRP_CandyCane : Worm
    {
        scope = 2;
        displayName = "Candy Cane";
        descriptionShort = "A single candy cane";
        model = "Survivalists_Food\food\candycane.p3d";
        rotationFlags = 1;
        weight = 0;
        itemSize[] = { 1,3 };
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\candycane_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_Food\food\data\candycane.rvmat"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 150;
            water = 50;
            nutritionalIndex = 1;
            toxicity = 0;
        };
        class Food {};
    };
    class SRP_CandyCane1 : SRP_CandyCane
    {
        scope = 2;
        displayName = "Candy Cane";
        descriptionShort = "A single candy cane. Made from sugar.";
        model = "Survivalists_Food\food\candycane1.p3d";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\candycane1_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_Food\food\data\candycane1.rvmat"
        };
    };
    class srpChickenleg : Edible_Base
    {
        scope = 2;
        displayName = "Chicken leg";
        descriptionShort = "It's a leg from a chicken.";
        model = "Survivalists_Food\food\chickenleg.p3d";
        rotationFlags = 17;
        weight = 0;
        interactionWeight = 1;
        quantityBar = 1;
        varQuantityInit = 110;
        varQuantityMin = 0;
        varQuantityMax = 110;
        itemSize[] = { 2,1 };
        inventorySlot[] = { "Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD", "Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8" };
        isMeleeWeapon = 1;
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeFist";
                range = 1;
            };
            class Heavy
            {
                ammo = "MeleeFist_Heavy";
                range = 1;
            };
            class Sprint
            {
                ammo = "MeleeFist_Heavy";
                range = 2.8;
            };
        };
        hiddenSelections[] = { "cs_raw" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\chicken_raw_co.paa","Survivalists_Food\food\data\chicken_rotten_co.paa","Survivalists_Food\food\data\chicken_baked_co.paa","Survivalists_Food\food\data\chicken_boiled_co.paa","Survivalists_Food\food\data\chicken_boiled_co.paa","Survivalists_Food\food\data\chicken_burnt_co.paa" };
        hiddenSelectionsMaterials[] = { "Survivalists_Food\food\data\chicken.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = { {1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}} };
                };
            };
        };
        class AnimationSources : FoodAnimationSources {};
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 5,50,50,1,0,4 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] =
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,300,50,1,0 };
                    cooking_properties[] = { 70,45 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,250,100,1,0 };
                    cooking_properties[] = { 70,55 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,250,0,1,0 };
                    cooking_properties[] = { 70,120,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 5,50,0,1,0,16 };
                    cooking_properties[] = { 100,30 };
                };
            };
            class FoodStageTransitions : MeatStageTransitions
            {
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };
    class SRPdonut : Edible_Base
    {
        scope = 2;
        displayName = "Donut";
        descriptionShort = "It's a donut. How is this thing not stale yet? Oh well.";
        model = "Survivalists_Food\food\donut.p3d";
        itemSize[] = { 2,2 };
        inventorySlot[] += {"Ingredient1", "Ingredient2", "Ingredient3", "Ingredient4", "Ingredient5", "Ingredient6", "Ingredient7", "Ingredient8"};
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        class Nutrition
        {
            fullnessIndex = 1;
            energy = 100;
            water = 10;
            nutritionalIndex = 1;
            toxicity = 0;
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class pickUpItem
                {
                    soundSet = "Zucchini_pickup_SoundSet";
                    id = 797;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };
    class srpBreadFlatDough : Edible_Base
    {
        scope = 2;
        displayName = "Simple Round Dough";
        descriptionShort = "A round, plain dough. Should be baked before consuming... but I guess no one can stop you if you don't.";
        model = "Survivalists_Food\food\flatbread.p3d";
        interactionWeight = 1;
        quantityBar = 1;
        canBeSplit = 1;
        varQuantityInit = 200;
        varQuantityMin = 0;
        varQuantityMax = 200;
        itemSize[] = { 2,3 };
        inventorySlot[] = { "Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8" };
        hiddenSelections[] = { "cs_raw" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\flatbread_raw_co.paa","Survivalists_Food\food\data\flatbread_baked_co.paa","Survivalists_Food\food\data\flatbread_burnt_co.paa" };
        hiddenSelectionsMaterials[] = { "Survivalists_Food\food\data\flatbread.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = { {1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}} };
                };
            };
        };
        class AnimationSources : FoodAnimationSources {};
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 2.5,160,70,1,0,"4 +     16" };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { 0,3,-1 };
                    nutrition_properties[] = { 2,120,35,1,0,"4 +     16" };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,-1 };
                    nutrition_properties[] = { 1.75,280,52.5,1,0 };
                    cooking_properties[] = { 70,300 };
                };
                class Burned
                {
                    visual_properties[] = { 0,2,-1 };
                    nutrition_properties[] = { 2,100,17.5,1,0,16 };
                    cooking_properties[] = { 100,360 };
                };
            };
            class FoodStageTransitions : BreadStageTransitions {};
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class pickUpItem
                {
                    soundSet = "pickUpBloodBag_SoundSet";
                    id = 797;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
                class drop
                {
                    soundset = "bloodbag_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class srpBreadLoaf : Edible_Base
    {
        scope = 2;
        displayName = "Simple Bread Loaf";
        descriptionShort = "A loaf of white bread. Should be baked before consuming... but I guess no one can stop you if you don't.";
        model = "Survivalists_Food\food\loafbread.p3d";
        rotationFlags = 17;
        weight = 0;
        interactionWeight = 1;
        quantityBar = 1;
        canBeSplit = 1;
        varQuantityInit = 200;
        varQuantityMin = 0;
        varQuantityMax = 200;
        itemSize[] = { 2,3 };
        inventorySlot[] = { "Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8" };
        hiddenSelections[] = { "cs_raw" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\loafbread_raw_co.paa","Survivalists_Food\food\data\loafbread_baked_co.paa","Survivalists_Food\food\data\loafbread_burnt_co.paa" };
        hiddenSelectionsMaterials[] = { "Survivalists_Food\food\data\loafbread.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = { {1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}} };
                };
            };
        };
        class AnimationSources : FoodAnimationSources {};
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 2.5,160,70,1,0,"4 +     16" };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { 0,3,-1 };
                    nutrition_properties[] = { 2,120,35,1,0,"4 +     16" };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,-1 };
                    nutrition_properties[] = { 1.75,280,52.5,1,0 };
                    cooking_properties[] = { 70,300 };
                };
                class Burned
                {
                    visual_properties[] = { 0,2,-1 };
                    nutrition_properties[] = { 2,100,17.5,1,0,16 };
                    cooking_properties[] = { 100,360 };
                };
            };
            class FoodStageTransitions : BreadStageTransitions {};
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class pickUpItem
                {
                    soundSet = "pickUpBloodBag_SoundSet";
                    id = 797;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
                class drop
                {
                    soundset = "bloodbag_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class srpBreadRoundDough : Edible_Base
    {
        scope = 2;
        displayName = "Simple Round Dough";
        descriptionShort = "A round, plain dough. Should be baked before consuming... but I guess no one can stop you if you don't.";
        model = "Survivalists_Food\food\rounddough.p3d";
        rotationFlags = 17;
        weight = 0;
        interactionWeight = 1;
        quantityBar = 1;
        canBeSplit = 1;
        varQuantityInit = 200;
        varQuantityMin = 0;
        varQuantityMax = 200;
        itemSize[] = { 2,3 };
        inventorySlot[] = { "Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8" };
        hiddenSelections[] = { "cs_raw" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\rounddough_raw_co.paa","Survivalists_Food\food\data\rounddough_baked_co.paa","Survivalists_Food\food\data\rounddough_burnt_co.paa","Survivalists_Food\food\data\rounddough_rotten_co.paa" };
        hiddenSelectionsMaterials[] = { "Survivalists_Food\food\data\rounddough.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = { {1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}} };
                };
            };
        };
        class AnimationSources : FoodAnimationSources {};
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 2.5,160,70,1,0,"4 +     16" };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,3,-1 };
                    nutrition_properties[] = { 2,120,35,1,0,"4 +     16" };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,-1 };
                    nutrition_properties[] = { 1.75,280,52.5,1,0 };
                    cooking_properties[] = { 70,300 };
                };
                class Burned
                {
                    visual_properties[] = { 0,2,-1 };
                    nutrition_properties[] = { 2,100,17.5,1,0,16 };
                    cooking_properties[] = { 100,360 };
                };
            };
            class FoodStageTransitions : BreadStageTransitions {};
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class pickUpItem
                {
                    soundSet = "pickUpBloodBag_SoundSet";
                    id = 797;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
                class drop
                {
                    soundset = "bloodbag_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class srpHotdog : Edible_Base
    {
        scope = 2;
        displayName = "Hotdog";
        descriptionShort = "Homemade hotdog.";
        model = "Survivalists_Food\food\hotdog.p3d";
        rotationFlags = 17;
        weight = 0;
        interactionWeight = 1;
        quantityBar = 1;
        varQuantityInit = 200;
        varQuantityMin = 0;
        varQuantityMax = 200;
        itemSize[] = { 2,1 };
        inventorySlot[] += {"Ingredient1", "Ingredient2", "Ingredient3", "Ingredient4", "Ingredient5", "Ingredient6", "Ingredient7", "Ingredient8"};
        isMeleeWeapon = 1;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\SRPHotdog_co.paa" };
        hiddenSelectionsMaterials[] = { "Survivalists_Food\food\data\srphotdog.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = { {1,{"Survivalists_Food\food\data\srphotdog.rvmat"}},{0.7,{"Survivalists_Food\food\data\srphotdog.rvmat"}},{0.5,{"Survivalists_Food\food\data\srphotdog.rvmat"}},{0.3,{"Survivalists_Food\food\data\srphotdog.rvmat"}},{0,{"Survivalists_Food\food\data\srphotdog.rvmat"}} };
                };
            };
        };
        class AnimationSources : FoodAnimationSources {};
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 5,50,50,1,0,4 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] =
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,300,50,1,0 };
                    cooking_properties[] = { 70,45 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,250,100,1,0 };
                    cooking_properties[] = { 70,55 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,250,0,1,0 };
                    cooking_properties[] = { 70,120,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 5,50,0,1,0,16 };
                    cooking_properties[] = { 100,30 };
                };
            };
            class FoodStageTransitions : MeatStageTransitions
            {
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };
    class srpSausage : Edible_Base
    {
        scope = 2;
        displayName = "Homemade Sausage";
        descriptionShort = "Ground meat inside animal casing. What meats are inside?";
        model = "Survivalists_Food\food\sausage.p3d";
        rotationFlags = 17;
        weight = 0;
        interactionWeight = 1;
        quantityBar = 1;
        varQuantityInit = 110;
        varQuantityMin = 0;
        varQuantityMax = 110;
        itemSize[] = { 2,1 };
        inventorySlot[] = { "Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8" };
        hiddenSelections[] = { "cs_raw" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\sausage_raw_co.paa","Survivalists_Food\food\data\sausage_baked_co.paa","Survivalists_Food\food\data\sausage_boiled_co.paa","Survivalists_Food\food\data\sausage_dried_co.paa","Survivalists_Food\food\data\sausage_burnt_co.paa","Survivalists_Food\food\data\sausage_rotten_co.paa" };
        hiddenSelectionsMaterials[] = { "Survivalists_Food\food\data\sausage.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = { {1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}} };
                };
            };
        };
        class AnimationSources : FoodAnimationSources {};
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 5,50,50,1,0,4 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] =
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,300,50,1,0 };
                    cooking_properties[] = { 70,45 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,250,100,1,0 };
                    cooking_properties[] = { 70,55 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,250,0,1,0 };
                    cooking_properties[] = { 70,120,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 5,50,0,1,0,16 };
                    cooking_properties[] = { 100,30 };
                };
            };
            class FoodStageTransitions : MeatStageTransitions
            {
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };
    class srpSausage_Human : Edible_Base
    {
        scope = 2;
        displayName = "Homemade Sausage";
        descriptionShort = "Ground meat inside animal casing. What meats are inside? Smells funny.";
        model = "Survivalists_Food\food\sausage.p3d";
        rotationFlags = 17;
        weight = 0;
        interactionWeight = 1;
        quantityBar = 1;
        varQuantityInit = 110;
        varQuantityMin = 0;
        varQuantityMax = 110;
        itemSize[] = { 2,1 };
        inventorySlot[] = { "Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8" };
        isMeleeWeapon = 1;
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeFist";
                range = 1;
            };
            class Heavy
            {
                ammo = "MeleeFist_Heavy";
                range = 1;
            };
            class Sprint
            {
                ammo = "MeleeFist_Heavy";
                range = 2.8;
            };
        };
        hiddenSelections[] = { "cs_raw" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\sausage_raw_co.paa","Survivalists_Food\food\data\sausage_baked_co.paa","Survivalists_Food\food\data\sausage_boiled_co.paa","Survivalists_Food\food\data\sausage_dried_co.paa","Survivalists_Food\food\data\sausage_burnt_co.paa","Survivalists_Food\food\data\sausage_rotten_co.paa" };
        hiddenSelectionsMaterials[] = { "Survivalists_Food\food\data\sausage.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = { {1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}} };
                };
            };
        };
        class AnimationSources : FoodAnimationSources {};
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 7,50,50,1,0,4 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] =
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 4,200,50,1,0 };
                    cooking_properties[] = { 70,45 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 4,150,150,1,0 };
                    cooking_properties[] = { 70,55 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 5,150,0,1,0 };
                    cooking_properties[] = { 70,120,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 7,50,0,1,0,16 };
                    cooking_properties[] = { 100,30 };
                };
            };
            class FoodStageTransitions : MeatStageTransitions
            {
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };
    class SRP_Brain : Guts
    {
        scope = 2;
        displayName = "Brain";
        descriptionShort = "A full sized brain.";
        model = "Survivalists_Food\food\srpbrain.p3d";
        rotationFlags = 1;
        weight = 0;
        itemSize[] = { 2,2 };
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
    };
    class SRP_BrainPiece : Worm
    {
        scope = 2;
        displayName = "A piece of brain";
        descriptionShort = "A small chunk of a brain";
        model = "Survivalists_Food\food\srpbrainchunk.p3d";
        rotationFlags = 1;
        weight = 0;
        itemSize[] = { 1,1 };
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
    };
    class srpStew_Base : Edible_Base
    {
        scope = 0;
        model = "Survivalists_Food\food\SrpStewBowl.p3d";
        weight = 0;
        weightPerQuantityUnit = "2.5";
        canBeSplit = 1;
        interactionWeight = 1;
        quantityBar = 0;
        varQuantityInit = 275;
        varQuantityMin = 0;
        varQuantityMax = 300;
        itemSize[] = { 2,3 };
        inventorySlot[] = { "Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8" };
        hiddenSelections[] = { "bowl","zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\stewbowloutside_co.paa","Survivalists_Food\food\data\srpStewMeat_co.paa" };
        class AnimationSources : FoodAnimationSources {};
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 5,50,50,1,0,4 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] =
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,300,50,1,0 };
                    cooking_properties[] = { 70,45 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,250,100,1,0 };
                    cooking_properties[] = { 70,55 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,250,0,1,0 };
                    cooking_properties[] = { 70,120,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 5,50,0,1,0,16 };
                    cooking_properties[] = { 100,30 };
                };
            };
            class FoodStageTransitions : MeatStageTransitions
            {
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = { {1,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0,{""}} };
                };
            };
        };
        class NoiseImpact
        {
            strength = 600;
            type = "sound";
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };
    class SRPsushi : Edible_Base
    {
        scope = 2;
        displayName = "Sushi";
        descriptionShort = "Homemade sushi. It looks and smells exactly how you think it does.";
        model = "Survivalists_Food\food\sushi.p3d";
        rotationFlags = 17;
        weight = 0;
        interactionWeight = 1;
        varQuantityInit = 75;
        varQuantityMin = 0;
        varQuantityMax = 75;
        itemSize[] = { 2,1 };
        inventorySlot[] = { "Ingredient","DirectCookingA","DirectCookingB","DirectCookingC","SmokingA","SmokingB","SmokingC","SmokingD","Ingredient1","Ingredient2","Ingredient3","Ingredient4","Ingredient5","Ingredient6","Ingredient7","Ingredient8" };
        isMeleeWeapon = 1;
        hiddenSelections[] = { "cs_raw" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\sushi_raw_co.paa","Survivalists_Food\food\data\sushi_burnt_co.paa","Survivalists_Food\food\data\sushi_burnt_co.paa","Survivalists_Food\food\data\sushi_raw_co.paa","Survivalists_Food\food\data\sushi_burnt_co.paa","Survivalists_Food\food\data\sushi_burnt_co.paa" };
        hiddenSelectionsMaterials[] = { "Survivalists_Food\food\data\sushi.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = { {1,{"Survivalists_Food\food\data\sushi.rvmat"}},{0.7,{"Survivalists_Food\food\data\sushi.rvmat"}},{0.5,{"Survivalists_Food\food\data\sushi.rvmat"}},{0.3,{"Survivalists_Food\food\data\sushi.rvmat"}},{0,{"Survivalists_Food\food\data\sushi.rvmat"}} };
                };
            };
        };
        class AnimationSources : FoodAnimationSources {};
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 2.5,110,70,1,0,"4 +     16" };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { 0,5,-1 };
                    nutrition_properties[] = { 2,120,35,1,0,"4 +     16" };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,-1 };
                    nutrition_properties[] = { 3.5,190,52.5,1,"4 +     16" };
                    cooking_properties[] = { 70,45 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,-1 };
                    nutrition_properties[] = { 3,137,75,1,"4 +     16" };
                    cooking_properties[] = { 70,55 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,-1 };
                    nutrition_properties[] = { 0.75,160,7,1,"4 +     16" };
                    cooking_properties[] = { 70,45,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,-1 };
                    nutrition_properties[] = { 2,100,17.5,1,0,"4 +     16" };
                    cooking_properties[] = { 100,60 };
                };
            };
            class FoodStageTransitions : FishStageTransitions {};
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };

    //================================== Brewing Food
    class BoxCerealCrunchin_Coffee : BoxCerealCrunchin
    {
        scope = 2;
        displayName = "Coffee";
        descriptionShort = "Generic Ground Coffee";
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\cereal_box_coffee_co.paa" };
        class Nutrition
        {
            fullnessIndex = 2.5;
            energy = 20;
            water = 10;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BoxCerealCrunchin_Hops : BoxCerealCrunchin
    {
        scope = 2;
        displayName = "Hops";
        descriptionShort = "Generic Dried Hops";
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\cereal_box_hops_co.paa" };
        class Nutrition
        {
            fullnessIndex = 2.5;
            energy = 50;
            water = -20;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BoxCerealCrunchin_Barley : BoxCerealCrunchin
    {
        scope = 2;
        displayName = "Barley";
        descriptionShort = "Generic Dried Barley";
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\cereal_box_barley_co.paa" };
        class Nutrition
        {
            fullnessIndex = 2.5;
            energy = 50;
            water = -20;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };

    //================================== Raw Cookable Cans
    class SRP_FoodCanRaw_Colorbase : Edible_Base
    {
        scope = 0;
        displayName = "Raw Canned Food";
        descriptionShort = "A can of food that is yet to be preserved from spoiling. Raw.";
        model = "\dz\gear\food\food_can_open.p3d";
        rotationFlags = 63;
        itemSize[] = { 1,2 };
        weight = 4;
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 400;
        canBeSplit = 1;
        isMeleeWeapon = 1;
        inventorySlot[] =
        {
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD"
        };
        class AnimationSources : FoodAnimationSources
        {
        };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 5,50,50,1,0,4 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] =
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,300,50,1,0 };
                    cooking_properties[] = { 70,45 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,250,100,1,0 };
                    cooking_properties[] = { 70,55 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,250,0,1,0 };
                    cooking_properties[] = { 70,120,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 5,50,0,1,0,16 };
                    cooking_properties[] = { 100,30 };
                };
            };
            class FoodStageTransitions : MeatStageTransitions
            {
            };
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
                        {1,	{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999, {"DZ\gear\food\data\food_can.rvmat"}},
            {0.5, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,	{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };
    class SRP_FoodCanRaw_Veggies : SRP_FoodCanRaw_Colorbase
    {
        scope = 2;
        color = "Veggies";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {

            "Survivalists_Food\food\data\emptycan_veggies_co.paa"
        };
    };
    class SRP_FoodCanRaw_Meat : SRP_FoodCanRaw_Colorbase
    {
        scope = 2;
        color = "Meat";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "dz\gear\food\data\UnknownFoodCan_co.paa"
        };
    };
    class SRP_FoodCanRaw_HumanMeat : SRP_FoodCanRaw_Colorbase
    {
        scope = 2;
        color = "HumanMeat";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "dz\gear\food\data\UnknownFoodCan_co.paa"
        };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 7,50,50,1,0,4 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] =
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 4,200,50,1,0 };
                    cooking_properties[] = { 70,45 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 4,150,150,1,0 };
                    cooking_properties[] = { 70,55 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 5,150,0,1,0 };
                    cooking_properties[] = { 70,120,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 7,50,0,1,0,16 };
                    cooking_properties[] = { 100,30 };
                };
            };
            class FoodStageTransitions : MeatStageTransitions
            {
            };
        };
    };
    class SRP_FoodCanRaw_VeggieMeatCombo : SRP_FoodCanRaw_Colorbase
    {
        scope = 2;
        color = "VeggieMeatCombo";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\emptycan_veggiesmeatcombo_co.paa"
        };
    };
    class SRP_FoodCanRaw_VeggieHumanMeatCombo : SRP_FoodCanRaw_Colorbase
    {
        scope = 2;
        color = "VeggieHumanMeatCombo";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\emptycan_veggiesmeatcombo_co.paa"
        };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 5,50,50,1,0,4 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] =
                    {
                        10,
                        25,
                        25,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,300,50,1,0 };
                    cooking_properties[] = { 70,45 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,250,100,1,0 };
                    cooking_properties[] = { 70,55 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,250,0,1,0 };
                    cooking_properties[] = { 70,120,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 5,50,0,1,0,16 };
                    cooking_properties[] = { 100,30 };
                };
            };
            class FoodStageTransitions : MeatStageTransitions
            {
            };
        };
    };
    //================================== Sealed Cans
    class SRP_FoodCanPreserved_Colorbase : Edible_Base
    {
        displayName = "Preserved Canned Food";
        descriptionShort = "A can of food that is preserved from spoiling.";
        model = "\dz\gear\food\food_can.p3d";
        rotationFlags = 63;
        itemSize[] = { 1,2 };
        weight = 4;
        varQuantityInit = 0;
        varQuantityMin = 0;
        varQuantityMax = 400;
        isMeleeWeapon = 1;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,	{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999, {"DZ\gear\food\data\food_can.rvmat"}},
            {0.5, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,	{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };
    class SRP_FoodCanPreserved_Veggies : SRP_FoodCanPreserved_Colorbase
    {
        scope = 2;
        color = "Veggies";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\emptycan_veggies_co.paa"
        };
    };
    class SRP_FoodCanPreserved_Meat : SRP_FoodCanPreserved_Colorbase
    {
        scope = 2;
        color = "Meat";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "dz\gear\food\data\UnknownFoodCan_co.paa"
        };
    };
    class SRP_FoodCanPreserved_HumanMeat : SRP_FoodCanPreserved_Colorbase
    {
        scope = 2;
        color = "HumanMeat";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "dz\gear\food\data\UnknownFoodCan_co.paa"
        };
    };
    class SRP_FoodCanPreserved_VeggieMeatCombo : SRP_FoodCanPreserved_Colorbase
    {
        scope = 2;
        color = "VeggieMeatCombo";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\emptycan_veggiesmeatcombo_co.paa"
        };
    };
    class SRP_FoodCanPreserved_VeggieHumanMeatCombo : SRP_FoodCanPreserved_Colorbase
    {
        scope = 2;
        color = "VeggieHumanMeatCombo";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\emptycan_veggiesmeatcombo_co.paa"
        };
    };
    //================================== Opened Cans
    class SRP_FoodCanPreserved_Opened : Edible_Base
    {
        displayName = "Preserved Canned Food Open";
        descriptionShort = "An opened can of preserved food. Who knows how long it has been in there.";
        model = "\dz\gear\food\food_can_open.p3d";
        itemSize[] = { 1,2 };
        weight = 4;
        varQuantityInit = 0;
        varQuantityMin = 0;
        varQuantityMax = 400;
        isMeleeWeapon = 1;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,	{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999, {"DZ\gear\food\data\food_can.rvmat"}},
            {0.5, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001, {"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,	{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };
    class SRP_FoodCanPreserved_Veggies_Opened : SRP_FoodCanPreserved_Opened
    {
        scope = 2;
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\emptycan_veggies_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 200;
            water = 350;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class SRP_FoodCanPreserved_Meat_Opened : SRP_FoodCanPreserved_Opened
    {
        scope = 2;
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "dz\gear\food\data\UnknownFoodCan_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 450;
            water = 150;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class SRP_FoodCanPreserved_HumanMeat_Opened : SRP_FoodCanPreserved_Opened
    {
        scope = 2;
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "dz\gear\food\data\UnknownFoodCan_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 450;
            water = 150;
            nutritionalIndex = 1;
            toxicity = 0;
            digestibility = 2;
            agents = 8;
        };
    };
    class SRP_FoodCanPreserved_VeggieMeatCombo_Opened : SRP_FoodCanPreserved_Opened
    {
        scope = 2;
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\emptycan_veggiesmeatcombo_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 150;
            water = 150;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class SRP_FoodCanPreserved_VeggieHumanMeatCombo_Opened : SRP_FoodCanPreserved_Opened
    {
        scope = 2;
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\emptycan_veggiesmeatcombo_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 150;
            water = 150;
            nutritionalIndex = 1;
            toxicity = 0;
            digestibility = 2;
            agents = 8;
        };
    };
    //================================== CULTIVATION PLANTS
    class Cannabis : Edible_Base
    {
        displayName = "Cannabis";
        descriptionShort = "Cannabis harvested from a cannabis plant.";
        inventorySlot[] +=
        {
            "Ingredient1",
                "Ingredient2",
                "Ingredient3",
                "Ingredient4",
                "Ingredient5",
                "Ingredient6",
                "Ingredient7",
                "Ingredient8",
                "DirectCookingA",
                "DirectCookingB",
                "DirectCookingC",
                "SmokingA",
                "SmokingB",
                "SmokingC",
                "SmokingD"
        };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 1,284,293,30,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 1,100,293,10,1,16 };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,35 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,45 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,150,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 1,20,40,10,1 };
                    cooking_properties[] = { 100,20 };
                };
            };
            class FoodStageTransitions : BaseFoodStageTransitions
            {
            };
        };
    };
    class SRP_PlantHerbEdible_Colorbase : Edible_Base
    {
        scope = 0;
        displayName = "Edible Plant Material";
        descriptionShort = "Harvested material from a plant.";
        model = "\dz\gear\cultivation\plant_material.p3d";
        color = "base";
        rotationFlags = 16;
        weight = 0;
        itemSize[] = { 2,2 };
        stackedUnit = "g";
        absorbency = 0.2;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 10;
        quantityBar = 1;
        canBeSplit = 1;
        inventorySlot[] =
        {
            "Ingredient",
            "Ingredient1",
            "Ingredient2",
            "Ingredient3",
            "Ingredient4",
            "Ingredient5",
            "Ingredient6",
            "Ingredient7",
            "Ingredient8",
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC",
            "SmokingA",
            "SmokingB",
            "SmokingC",
      "SmokingD",
      "SRP_Flower1",
        };
        containsSeedsType = "";
        containsSeedsQuantity = "0";
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
            {	1,{}},
            {	0.69999999,{}},
            {	0.5,{}},
            {	0.30000001,{}},
            {	0,{}}
                    };
                };
            };
        };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 1,284,293,30,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 1,100,293,10,1,16 };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,35 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,45 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,150,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 1,20,40,10,1 };
                    cooking_properties[] = { 100,20 };
                };
            };
            class FoodStageTransitions : BaseFoodStageTransitions
            {
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class pickUpItem
                {
                    soundSet = "Zucchini_pickup_SoundSet";
                    id = 797;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };
    class Tobacco : SRP_PlantHerbEdible_Colorbase
    {
        scope = 2;
        displayName = "Tobacco";
        descriptionShort = "Tobacco harvested from a tobacco plant.";
        model = "\dz\gear\food\cannabis_seedman.p3d";
        color = "tobacco";
        itemSize[] = { 1,1 };
        hiddenSelections[] =
        {
            "cs_raw"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\cultivation\data\tobacco_seedman_raw_co.paa",
            "Survivalists_Mods\gear\cultivation\data\tobacco_seedman_baked_co.paa",
            "Survivalists_Mods\gear\cultivation\data\tobacco_seedman_raw_co.paa",
            "Survivalists_Mods\gear\cultivation\data\tobacco_seedman_raw_co.paa",
            "Survivalists_Mods\gear\cultivation\data\tobacco_seedman_baked_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\food\data\cannabis_seedman_raw.rvmat",
            "dz\gear\food\data\cannabis_seedman_baked.rvmat",
            "dz\gear\food\data\cannabis_seedman_raw.rvmat",
            "dz\gear\food\data\cannabis_seedman_dried.rvmat",
            "dz\gear\food\data\cannabis_seedman_burnt.rvmat",
            "dz\gear\food\data\cannabis_seedman_rotten.rvmat"
        };
    };
    class Cocaine : SRP_PlantHerbEdible_Colorbase
    {
        scope = 2;
        itemSize[] = { 2,1 };
        inventorySlot[] +=
        {
            "PlantMaterial1",
                "PlantMaterial2",
                "PlantMaterial3",
                "PlantMaterial4",
                "PlantMaterial5",
                "PlantMaterial6",
                "PlantMaterial7",
                "PlantMaterial8",
                "PlantMaterial9",
                "PlantMaterial10",
        };
        displayName = "Cocaine Plant Material";
        descriptionShort = "A harvested branch from the cocaine bush.";
        color = "cocaine";
    };
    class Brookmint : SRP_PlantHerbEdible_Colorbase
    {
        scope = 2;
        displayName = "Brookmint Plant Material";
        descriptionShort = "A harvested branch from the brookmint herb.";
        model = "Survivalists_Food\food\food_brookmint.p3d";
        color = "brookmint";
        itemSize[] = { 1,1 };
        rotationFlags = 64;
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 1,284,293,30,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 1,100,293,10,1,16 };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,35 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,45 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,125,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 1,20,40,10,1 };
                    cooking_properties[] = { 100,20 };
                };
            };
            class FoodStageTransitions : BaseFoodStageTransitions
            {
            };
        };
    };
    class Dock : SRP_PlantHerbEdible_Colorbase
    {
        scope = 2;
        displayName = "Dock Plant Material";
        descriptionShort = "A harvested branch from the dock herb.";
        model = "Survivalists_Food\food\food_dock.p3d";
        color = "dock";
        itemSize[] = { 1,2 };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 1,284,293,30,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 1,100,293,10,1,16 };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,35 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,45 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,145,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 1,20,40,10,1 };
                    cooking_properties[] = { 100,20 };
                };
            };
            class FoodStageTransitions : BaseFoodStageTransitions
            {
            };
        };
    };
    class Valerian : SRP_PlantHerbEdible_Colorbase
    {
        scope = 2;
        displayName = "Valerian Plant Material";
        descriptionShort = "A harvested branch from the valerian herb.";
        model = "Survivalists_Food\food\food_valerian.p3d";
        color = "valerian";
        itemSize[] = { 1,1 };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 1,284,293,30,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 1,100,293,10,1,16 };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,35 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,45 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,175,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 1,20,40,10,1 };
                    cooking_properties[] = { 100,20 };
                };
            };
            class FoodStageTransitions : BaseFoodStageTransitions
            {
            };
        };
    };
    class Ribwort : SRP_PlantHerbEdible_Colorbase
    {
        scope = 2;
        displayName = "Ribwort Plant Material";
        descriptionShort = "A harvested branch from the ribwort herb.";
        model = "Survivalists_Food\food\food_ribwort.p3d";
        color = "ribwort";
        itemSize[] = { 1,2 };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 1,284,293,30,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 1,100,293,10,1,16 };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,35 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,45 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,100,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 1,20,40,10,1 };
                    cooking_properties[] = { 100,20 };
                };
            };
            class FoodStageTransitions : BaseFoodStageTransitions
            {
            };
        };
    };
    class Rosemary : SRP_PlantHerbEdible_Colorbase
    {
        scope = 2;
        displayName = "Rosemary Plant Material";
        descriptionShort = "A harvested branch from the rosemary herb.";
        model = "Survivalists_Food\food\food_rosemary.p3d";
        color = "rosemary";
        itemSize[] = { 1,2 };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 1,284,293,30,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 1,100,293,10,1,16 };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,35 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,45 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,150,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 1,20,40,10,1 };
                    cooking_properties[] = { 100,20 };
                };
            };
            class FoodStageTransitions : BaseFoodStageTransitions
            {
            };
        };
    };
    class GreenAmanita : SRP_PlantHerbEdible_Colorbase
    {
        scope = 2;
        displayName = "Green Amanita Plant Material";
        descriptionShort = "A harvested cap from the Green Amanita mushroom.";
        model = "Survivalists_Food\food\food_greenamanita.p3d";
        color = "greenamanita";
        rotationFlags = 64;
        itemSize[] = { 2,1 };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 1,284,293,30,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 1,100,293,10,1,16 };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,35 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,45 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,115,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 1,20,40,10,1 };
                    cooking_properties[] = { 100,20 };
                };
            };
            class FoodStageTransitions : BaseFoodStageTransitions
            {
            };
        };
    };
    class Yarrow : SRP_PlantHerbEdible_Colorbase
    {
        scope = 2;
        displayName = "Yarrow Plant Material";
        descriptionShort = "A harvested branch from the Yarrow herb.";
        model = "Survivalists_Food\food\food_yarrow.p3d";
        color = "yarrow";
        itemSize[] = { 2,1 };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 1,284,293,30,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 1,100,293,10,1,16 };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,35 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,45 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,135,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 1,20,40,10,1 };
                    cooking_properties[] = { 100,20 };
                };
            };
            class FoodStageTransitions : BaseFoodStageTransitions
            {
            };
        };
    };
    class Mint : SRP_PlantHerbEdible_Colorbase
    {
        scope = 2;
        displayName = "Mint Plant Material";
        descriptionShort = "A harvested branch from the Mint herb.";
        model = "Survivalists_Food\food\food_mint.p3d";
        color = "mint";
        itemSize[] = { 1,1 };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 1,284,293,30,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 1,100,293,10,1,16 };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,35 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,45 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 70,190,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 1,20,40,10,1 };
                    cooking_properties[] = { 100,20 };
                };
            };
            class FoodStageTransitions : BaseFoodStageTransitions
            {
            };
        };
    };
    class SRP_PlantPulp : SRP_PlantHerbEdible_Colorbase
    {
        scope = 2;
        displayName = "Plant Pulp";
        descriptionShort = "Raw pulp from plant material with most impurities boiled away.";
        model = "\dz\gear\cultivation\plant_material.p3d";
        inventorySlot[] =
        {
            "SmokingA",
            "SmokingB",
            "SmokingC",
            "SmokingD",
            "SRP_Flower1",
        };
        color = "SRP_PlantPulp";
        itemSize[] = { 2,1 };
        rotationFlags = 34;
        weight = 0;
        weightPerQuantityUnit = 9.5;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\srp_plant_material_pulp_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\cultivation\data\plant_material.rvmat"}},
                        {0.69999999,{"DZ\gear\cultivation\data\plant_material.rvmat"}},
                        {0.5,{"DZ\gear\cultivation\data\plant_material_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\cultivation\data\plant_material_damage.rvmat"}},
                        {0,{"DZ\gear\cultivation\data\plant_material_destruct.rvmat"}}
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
                    soundSet = "pickUpPlantMaterialLight_SoundSet";
                    id = 796;
                };
                class pickUpItem
                {
                    soundSet = "pickUpPlantMaterial_SoundSet";
                    id = 797;
                };
            };
        };
        class Food
        {
            class FoodStages
            {
                class Raw
                {
                    visual_properties[] = { 0,0,0 };
                    nutrition_properties[] = { 1,1,50,30,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 1,1,0,50,50,16 };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,1,1,5,1 };
                    cooking_properties[] = { 70,35 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,5,1,70,1 };
                    cooking_properties[] = { 70,45 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 1,1,1,70,1 };
                    cooking_properties[] = { 70,190,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 1,1,1,50,1 };
                    cooking_properties[] = { 100,20 };
                };
            };
            class FoodStageTransitions : BaseFoodStageTransitions
            {
            };
        };
    };
    //================================== FUNCTIONAL RETEXTURES
    class BoxCerealCrunchin_FlakedCorn : BoxCerealCrunchin
    {
        scope = 2;
        displayName = "Flaked Corn";
        descriptionShort = "Flaked corn - used in brewing of alcohol. Adds fermentable sugars without adding color, body or malt flavors.";
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\cereal_box_flakedcorn_co.paa" };
        class Nutrition
        {
            fullnessIndex = 2.5;
            energy = 365;
            water = 1;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BoxCerealCrunchin_Flour : BoxCerealCrunchin
    {
        scope = 2;
        displayName = "Flour";
        descriptionShort = "All Purpose Flour. Used for baking. Flour doesn't expire... does it? eh... probably still good.";
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\cereal_box_flour_co.paa" };
        class Nutrition
        {
            fullnessIndex = 2.5;
            energy = 100;
            water = -200;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class Honey_Yeast : Honey
    {
        scope = 2;
        displayName = "Yeast";
        descriptionShort = "Yeast. Used for baking and stuff.";
        itemSize[] = { 2,2 };
        class Nutrition
        {
            fullnessIndex = 1;
            energy = 50;
            water = 10;
            nutritionalIndex = 1;
            toxicity = 0;
        };
        hiddenSelections[] = { "camoGround","zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\yeast_co.paa","Survivalists_Food\food\data\yeast_co.paa","Survivalists_Food\food\data\yeast_co.paa" };
    };
    class Honey_Gluttony : Honey
    {
        scope = 2;
        displayName = "Gluttony Bio Jam";
        descriptionShort = "The jar glows softly. It seems to be generating a significant amount of heat.";
        hiddenSelections[] = { "zbytek","camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\honey_Gluttony_Bio_Jam_ca.paa","Survivalists_Food\food\data\honey_Gluttony_Bio_Jam_ca.paa" };
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        class Nutrition
        {
            fullnessIndex = 5;
            energy = 500;
            water = 500;
            nutritionalIndex = 1;
            toxicity = 0;
            agents = 0;
        };
    };
    class Honey_PigletPudding : Honey
    {
        scope = 2;
        displayName = "Piglet Pudding";
        descriptionShort = "The jar glows softly. It seems to be generating a significant amount of heat.";
        hiddenSelections[] = { "zbytek","camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\honey_pigletpudding_ca.paa","Survivalists_Food\food\data\honey_pigletpudding_ca.paa" };
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        class Nutrition
        {
            fullnessIndex = 5;
            energy = 500;
            water = 500;
            nutritionalIndex = 1;
            toxicity = 0;
            agents = 0;
        };
    };
    class Snack_DonutPack : Snack_ColorBase
    {
        scope = 2;
        model = "\DZ\gear\food\salty_chips.p3d";
        displayName = "Packaged donuts.";
        descriptionShort = "A pack of sugary sweet donuts. This one seems to have pink frosting.";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\snacks_donuts_co.paa"
        };
    };
    class SRP_Guts_PigletCookiesAcid : Guts
    {
        scope = 2;
        displayName = "Piglets Cookies";
        descriptionShort = "Chunks of rotten apples, frosted flakes and chunks of seaweed all mushed up in bread. There is a smell of sulfur and rotten eggs seaping from this cookie.";
        hiddenSelections[] = { "camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\animal_guts_PigletsCookie_co.paa" };
        class Nutrition
        {
            fullnessIndex = 1;
            energy = 5000;
            water = 5000;
            nutritionalIndex = 1;
            toxicity = 0;
            agents = 0;
        };
    };
    class SRP_Guts_PigletCookiesMetal : Guts
    {
        scope = 2;
        displayName = "Piglets Cookies";
        descriptionShort = "Shavings of scrap metal and steel cut oats sprinkled throughout a heavy mash of potato. A strong smell of gasoline and salt seaps from this cookie.";
        hiddenSelections[] = { "camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\animal_guts_PigletsCookiev2_co.paa" };
        class Nutrition
        {
            fullnessIndex = 1;
            energy = 5000;
            water = 5000;
            nutritionalIndex = 1;
            toxicity = 0;
            agents = 0;
        };
    };
    class SRP_Guts_PigletCookiesBrains : Guts
    {
        scope = 2;
        displayName = "Piglets Mac and Cheese Cookies";
        descriptionShort = "Large chunks of brain, scraps of orange armbands, clumps of rancid cheese and uncooked rice clumped together in a putrid sulfuric stench.";
        hiddenSelections[] = { "camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\animal_guts_PigletsCookiev3_co.paa" };
        class Nutrition
        {
            fullnessIndex = 1;
            energy = 5000;
            water = 5000;
            nutritionalIndex = 1;
            toxicity = 0;
            agents = 0;
        };
    };
    class SRP_Guts_PigletCookiesBlueStim : Guts
    {
        scope = 2;
        displayName = "PiG's Stim-Pug Blue Cookie";
        descriptionShort = "Shreds of rubber tire, marshmellow fluff and lockpicks are mixed with blue mutant fish flesh, blue vitamins and butane. Eat at your own risk.";
        hiddenSelections[] = { "camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\animal_guts_PigletsCookiev4_co.paa" };
        class Nutrition
        {
            fullnessIndex = 1;
            energy = 5000;
            water = 5000;
            nutritionalIndex = 1;
            toxicity = 0;
            agents = 0;
        };
    };
    class SRP_Guts_PigletCookiesNailedIt : Guts
    {
        scope = 2;
        displayName = "PiG's Nailed It Sprinkle Cookie";
        descriptionShort = "Nails, Sprinkles, Worms, Glowstick Fluid and some Battery acid whipped up with a bit of stale corn flakes.";
        hiddenSelections[] = { "camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\animal_guts_PigletsCookiev5_co.paa" };
        class Nutrition
        {
            fullnessIndex = 1;
            energy = 5000;
            water = 5000;
            nutritionalIndex = 1;
            toxicity = 0;
            agents = 0;
        };
    };
    class SRP_Haggis : Guts
    {
        scope = 2;
        displayName = "Haggis";
        descriptionShort = "Sheep;s stomach, stuffed with meat and barley.";
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 50;
            water = 50;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    //================================== PURE RETEXUTRES
    class Zagorky_Snickers : Zagorky_ColorBase
    {
        scope = 2;
        displayName = "Snicker Bar";
        descriptionShort = "Good old fashioned snicker bar, get some nuts!";
        hiddenSelections[] = { "camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\zagorky_snickers_ca.paa" };
        class Nutrition
        {
            fullnessIndex = 0;
            energy = 200;
            water = 0;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class Zagorky_Wonderbar : Zagorky_ColorBase
    {
        scope = 2;
        displayName = "Oldies Wonderbar";
        descriptionShort = "Old chocolate bar, expriry reads 'Best Before 1964'. You probably shouldn't eat it, but we all know you're going to.";
        hiddenSelections[] = { "camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\zagorky_wonderbar_ca.paa" };
        class Nutrition
        {
            fullnessIndex = 0;
            energy = 200;
            water = 0;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class Zagorky_Twix : Zagorky_ColorBase
    {
        scope = 2;
        displayName = "Twix Chocolate";
        descriptionShort = "It's rather old but still preserved and delicious.";
        hiddenSelections[] = { "camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\zagorky_twix_ca.paa" };
        class Nutrition
        {
            fullnessIndex = 0;
            energy = 200;
            water = 0;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class Zagorky_Reeces : Zagorky_ColorBase
    {
        scope = 2;
        displayName = "Reece's Cups";
        descriptionShort = "2 peanut-butter chocolate covered cups, rather high in sugar but also high in deliciousness.";
        hiddenSelections[] = { "camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\zagorky_reeces_ca.paa" };
        class Nutrition
        {
            fullnessIndex = 0;
            energy = 200;
            water = 0;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class Zagorky_Unknown : Zagorky_ColorBase
    {
        scope = 2;
        displayName = "Unknown Snack Bar";
        descriptionShort = "The wrapper has been worn, you can't read it at all, no idea what it is.";
        hiddenSelections[] = { "camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\zagorky_unknown_ca.paa" };
        class Nutrition
        {
            fullnessIndex = 0;
            energy = 200;
            water = 0;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class Zagorky_RiceCrispy : Zagorky_ColorBase
    {
        scope = 2;
        displayName = "Rice Crispy";
        descriptionShort = "Oooey gooey rice crispies made with mashmallow and rice crisps.";
        hiddenSelections[] =
        {
      "camoground"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\tuna_ricecrispy_co.paa"
        };
    };
    class Chips_Potato : Chips
    {
        scope = 2;
        displayName = "Potato Chips";
        descriptionShort = "Some very bland, and somewhat stale potato chips.";
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\potato_chips_co.paa" };
        class Nutrition
        {
            fullnessIndex = 0;
            energy = 100;
            water = 0;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class Chips_SpicyPopcorn : Chips
    {
        scope = 2;
        displayName = "Spicy Popcorn";
        descriptionShort = "Overly spicy, they are almost as hot as your mom.";
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\popcorn_spicy_co.paa" };
        class Nutrition
        {
            fullnessIndex = 0;
            energy = 150;
            water = 0;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class Chips_Jerky : Chips
    {
        scope = 2;
        displayName = "Beef Jerky";
        descriptionShort = "Perfectly spiced and cooked beef jerky, best served with a nice can of soda.";
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\beef_jerky_co.paa" };
        class Nutrition
        {
            fullnessIndex = 0;
            energy = 150;
            water = 0;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class Honey_Marshmellow : Honey
    {
        scope = 2;
        displayName = "Marshmellow Fluff";
        descriptionShort = "Just a jar of marshmellow fluff, very good with your favourite chocolate.";
        hiddenSelections[] = { "zbytek","camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\marshmellow_fluff_ca.paa","Survivalists_Food\food\data\marshmellow_fluff_ca.paa" };
        class Nutrition
        {
            fullnessIndex = 0;
            energy = 400;
            water = 100;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class Honey_Marmite : Honey
    {
        scope = 2;
        displayName = "Marmite";
        descriptionShort = "Uck";
        hiddenSelections[] = { "zbytek","camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\jar_marmite_ca.paa","Survivalists_Food\food\data\jar_marmite_ca.paa" };
    };
    class Honey_PeanutButter : Honey
    {
        scope = 2;
        displayName = "Peanut-Butter";
        descriptionShort = "Smooth peanut-butter, use some jam for a great snack.";
        hiddenSelections[] = { "zbytek","camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\jar_peanutbutter_ca.paa","Survivalists_Food\food\data\jar_peanutbutter_ca.paa" };
    };
    class Honey_AppleSauce : Honey
    {
        scope = 2;
        displayName = "Apple Sauce";
        descriptionShort = "Grandma's own brand apple sauce.";
        hiddenSelections[] = { "zbytek","camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\jar_applesauce_ca.paa","Survivalists_Food\food\data\jar_applesauce_ca.paa" };
    };
    class Honey_Pickles : Honey
    {
        scope = 2;
        displayName = "Jar of Pickles";
        descriptionShort = "A jar of unopened pickles.";
        hiddenSelections[] = { "zbytek","camoground" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\marmalade_pickles_ca.paa","Survivalists_Food\food\data\marmalade_pickles_ca.paa" };
        class Nutrition
        {
            fullnessIndex = 0;
            energy = 400;
            water = 100;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BoxCerealCrunchin_Frosties : BoxCerealCrunchin
    {
        scope = 2;
        displayName = "Frosted Flakes";
        descriptionShort = "They're Great!";
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\cerealbox_frosties_co.paa" };
    };
    class BoxCerealCrunchin_Crisps : BoxCerealCrunchin
    {
        scope = 2;
        displayName = "Bland Cereal Crips";
        descriptionShort = "A box filled with stale and bland breakfast cereal";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "\dz\gear\food\Data\CerealBox_01_CO.paa"
        };
    };
    class BoxCerealCrunchin_Kids : BoxCerealCrunchin
    {
        scope = 2;
        displayName = "Kids Cereal";
        descriptionShort = "A box filled with chocolate flavoured breakfast cereal";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\cerealbox_kids_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 330;
            water = -350;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BoxCerealCrunchin_Monstar : BoxCerealCrunchin
    {
        scope = 2;
        displayName = "KosmoStar Cereal";
        descriptionShort = "A box filled with kosmostar breakfast cereal";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\cerealbox_monstar_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 330;
            water = -250;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class Boyaredeez : BakedBeansCan
    {
        displayName = "Canned Pasta and Meatballs";
        descriptionShort = "A can of pasta and meatballs. Just like grandma used to make.";
        scope = 2;
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\Boyaredeez_co.paa" };
    };
    class Boyaredeez_Opened : BakedBeansCan_Opened
    {
        displayName = "Canned Pasta and Meatballs";
        descriptionShort = "A can of pasta and meatballs. Just like grandma used to make.";
        scope = 2;
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\Boyaredeez_co.paa" };
    };
    class NinjaCan : BakedBeansCan
    {
        displayName = "Canned Spaghetti - Ninja Turtles";
        descriptionShort = "It's like normal spaghetti in a can but way waaayy cooler.";
        scope = 2;
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\Ninja_co.paa" };
    };
    class NinjaCan_Opened : BakedBeansCan_Opened
    {
        displayName = "Canned Spaghetti - Ninja Turtles";
        descriptionShort = "It's like normal spaghetti in a can but way waaayy cooler.";
        scope = 2;
        hiddenSelections[] = { "camoGround" };
        hiddenSelectionsTextures[] = { "Survivalists_Food\food\data\Ninja_co.paa" };
    };
    class BakedBeansCanPeas : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Peas";
        descriptionShort = "A can filled with peas";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_peas_co.paa"
        };
    };
    class BakedBeansCanPeas_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Peas";
        descriptionShort = "A can filled with peas";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_peas_co.paa"
        };
    };
    class BakedBeansCanMushrooms : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Mushrooms";
        descriptionShort = "A can filled with mushrooms";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_mushrooms_co.paa"
        };
    };
    class BakedBeansCanMushrooms_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Mushrooms";
        descriptionShort = "A can full of mushrooms";
        model = "\dz\gear\food\food_can_open.p3d";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_mushrooms_co.paa"
        };
    };
    class BakedBeansCanFishEggs : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Caviar";
        descriptionShort = "A can of cheap smelling caviar";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_caviar_co.paa"
        };
    };
    class BakedBeansCanFishEggs_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Caviar";
        descriptionShort = "A can of cheap smelling caviar";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_caviar_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 298;
            water = 43.5;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BakedBeansCanOats : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Oats";
        descriptionShort = "A can of ready to eat porridge oats";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_oats_co.paa"
        };
    };
    class BakedBeansCanOats_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Oats";
        descriptionShort = "A can of ready to eat porridge oats";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_oats_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 558;
            water = 23.5;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BakedBeansCanCondensedMilk : BakedBeansCan
    {
        scope = 2;
        displayName = "Condensed Milk";
        descriptionShort = "A can of condensed milk";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_milk_co.paa"
        };
    };
    class BakedBeansCanCondensedMilk_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Condensed Milk";
        descriptionShort = "A can of condensed milk";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_milk_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 300;
            water = 100;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BakedBeansCanBeef : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef1_co.paa"
        };
    };
    class BakedBeansCanBeef_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef1_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 1000;
            water = 50.5;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BakedBeansCanBeef1 : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef2_co.paa"
        };
    };
    class BakedBeansCanBeef1_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef2_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 800;
            water = 50;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BakedBeansCanBeef2 : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of Beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef3_co.paa"
        };
    };
    class BakedBeansCanBeef2_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of Beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef3_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 1200;
            water = -43.5;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BakedBeansCanBeef3 : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of Beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef4_co.paa"
        };
    };
    class BakedBeansCanBeef3_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of Beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef4_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 400;
            water = 300;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BakedBeansCanBeef4 : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of Beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef5_co.paa"
        };
    };
    class BakedBeansCanBeef4_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of Beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef5_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 618;
            water = 23.5;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BakedBeansCanBeef5 : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of Beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef6_co.paa"
        };
    };
    class BakedBeansCanBeef5_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Beef";
        descriptionShort = "A can of Beef";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_beef6_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 518;
            water = 43.5;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BakedBeansCanSweetCorn : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Sweetcorn";
        descriptionShort = "A can of sweetcorn";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_corn_co.paa"
        };
    };
    class BakedBeansCanSweetCorn_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Sweetcorn";
        descriptionShort = "A can of sweetcorn";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_corn_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 348;
            water = 33.5;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class BakedBeansCanRagu : BakedBeansCan
    {
        scope = 2;
        displayName = "Canned Ragu";
        descriptionShort = "A can of ragu";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_ragu_co.paa"
        };
    };
    class BakedBeansCanRagu_Opened : BakedBeansCan_Opened
    {
        scope = 2;
        displayName = "Canned Ragu";
        descriptionShort = "A can of ragu";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\canned_ragu_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 348;
            water = 33.5;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class TunaCanCaviar : TunaCan
    {
        scope = 2;
        displayName = "Caviar";
        descriptionShort = "Unopened unfertilized fish eggs.";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\tunacan_caviar_co.paa"
        };
    };
    class TunaCanCaviar_Opened : TunaCan_Opened
    {
        scope = 2;
        displayName = "Caviar";
        descriptionShort = "Opened unfertilized fish eggs";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\tunacan_caviar_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 150;
            water = 100;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class TunaCanDuck : TunaCan
    {
        scope = 2;
        displayName = "Duck";
        descriptionShort = "Unopened unfertilized fish eggs.";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\tunacan_duck_co.paa"
        };
    };
    class TunaCanDuck_Opened : TunaCan_Opened
    {
        scope = 2;
        displayName = "Duck";
        descriptionShort = "Opened unfertilized fish eggs";
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\tunacan_duck_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = 150;
            water = 100;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class PowderedMilk_DriedNoodles : PowderedMilk
    {
        scope = 2;
        displayName = "Dried Noodles";
        descriptionShort = "A packet of instant noodles.";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\powederedmilk_chickennoodles_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 1.5;
            energy = 192;
            water = -400;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class PowderedMilk_DriedNoodles1 : PowderedMilk
    {
        scope = 2;
        displayName = "Dried Noodles";
        descriptionShort = "A packet of instant noodles.";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\powederedmilk_beefnoodles_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 1.5;
            energy = 192;
            water = -400;
            nutritionalIndex = 1;
            toxicity = 0;
        };
    };
    class PowderedMilk_SpiceyPeppers : PowderedMilk
    {
        scope = 2;
        displayName = "Spicey Peppers";
        descriptionShort = "A packet of deadly peppers. The warning label on the back reads 'Not for consumption'";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\powederedmilk_spicypeppers_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = -1000;
            water = -3000;
            blood = -1500;
            nutritionalIndex = 2;
            toxicity = 1200;
        };
    };
    class PowderedMilk_SpiceyPeppers1 : PowderedMilk
    {
        scope = 2;
        displayName = "Spicey Peppers";
        descriptionShort = "A packet of deadly peppers. The warning label on the back reads 'Not for consumption'";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Food\food\data\powederedmilk_spicypeppers1_co.paa"
        };
        class Nutrition
        {
            fullnessIndex = 2;
            energy = -1000;
            water = -3000;
            blood = -1500;
            nutritionalIndex = 2;
            toxicity = 1200;
        };
    };
};
