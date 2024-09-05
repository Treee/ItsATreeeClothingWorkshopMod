class CfgPatches
{
    class Survivalists_Fishing_Fish_SaltWater
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
          "DZ_Gear_Food",
          "Survivalists_Fishing"
        };
    };
};
class CfgVehicles
{
    class Edible_Base;
    class FoodAnimationSources;
    class MeatStageTransitions;
    class NotCookable;

    class Mackerel;
    class Sardines;
    //======================================================== VANILLA FISH
    class Mackerel_Small : Mackerel
    {
        scope = 2;
        itemSize[] = { 3,1 };
        weight = 1000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        weightPerQuantityUnit = 0.5;
    };
    class Mackerel_Medium : Mackerel
    {
        scope = 2;
        itemSize[] = { 4,2 };
        weight = 1000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        weightPerQuantityUnit = 1;
    };
    class Mackerel_Large : Mackerel
    {
        scope = 2;
        itemSize[] = { 5,2 };
        weight = 2000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        weightPerQuantityUnit = 1.34;
    };
    class Mackerel_Epic : Mackerel
    {
        scope = 2;
        itemSize[] = { 5,3 };
        weight = 4000;
        varQuantityInit = 2000;
        varQuantityMax = 2000;
        weightPerQuantityUnit = 2;
    };

    class Sardines_Small : Sardines
    {
        scope = 2;
        itemSize[] = { 1,1 };
        weight = 100;
        varQuantityInit = 200;
        varQuantityMax = 200;
        weightPerQuantityUnit = 0.5;
    };
    class Sardines_Medium : Sardines
    {
        scope = 2;
        itemSize[] = { 2,1 };
        weight = 200;
        varQuantityInit = 400;
        varQuantityMax = 400;
        weightPerQuantityUnit = 0.5;
    };
    class Sardines_Large : Sardines
    {
        scope = 2;
        itemSize[] = { 2,2 };
        weight = 300;
        varQuantityInit = 600;
        varQuantityMax = 600;
        weightPerQuantityUnit = 0.5;
    };
    class Sardines_Epic : Sardines
    {
        scope = 2;
        itemSize[] = { 2,3 };
        weight = 400;
        varQuantityInit = 800;
        varQuantityMax = 800;
        weightPerQuantityUnit = 0.5;
    };

    //======================================================== CUSTOM FISH
    class SRP_SaltWaterFish_Base : Edible_Base
    {
        scope = 0;
        displayName = "Salt Water Fish";
        descriptionShort = "A fish found in salt water.";
        color = "base";
        model = "\dz\gear\food\mackerel_live.p3d";
        debug_ItemCategory = 6;
        rotationFlags = 16;
        weight = 1000;
        itemSize[] = { 4,2 };
        stackedUnit = "g";
        quantityBar = 1;
        varQuantityInit = 1000;
        varQuantityMin = 0;
        varQuantityMax = 1000;
        weightPerQuantityUnit = 0.5;
        isMeleeWeapon = 1;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {

                        {
                            1,
                            {}
                        },

                        {
                            0.69999999,
                            {}
                        },

                        {
                            0.5,
                            {}
                        },

                        {
                            0.30000001,
                            {}
                        },

                        {
                            0,
                            {}
                        }
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeSoft";
                range = 1;
            };
            class Heavy
            {
                ammo = "MeleeSoft_Heavy";
                range = 1;
            };
            class Sprint
            {
                ammo = "MeleeSoft_Heavy";
                range = 2.8;
            };
        };
        inventorySlot[] =
        {
            "TrapPrey_1",
      "SRP_Fish_Small1",
      "SRP_Fish_Small2",
      "SRP_Fish_Small3",
      "SRP_Fish_Small4",
      "SRP_Fish_Small5",
      "SRP_Fish_Small6",
      "SRP_Fish_Small7",
      "SRP_Fish_Small8",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "dz\gear\food\data\mackerel_live_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\food\data\mackerel_live.rvmat"
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
                    nutrition_properties[] = { 1,69,172,70,1 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] = { 10,25,25,1,0 };
                    cooking_properties[] = { 0,0 };
                };
            };
            class FoodStageTransitions : NotCookable
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

    class SRP_SaltWaterFishFilletMeat_Base : Edible_Base
    {
        scope = 0;
        displayName = "Salt Water Fish Fillet";
        descriptionShort = "A fillet of a salt water fish.";
        model = "\dz\gear\food\mackerel_fillet.p3d";
        debug_ItemCategory = 6;
        rotationFlags = 34;
        weight = 0;
        weightPerQuantityUnit = 0.75;
        canBeSplit = 1;
        interactionWeight = 1;
        quantityBar = 1;
        itemSize[] = { 3,1 };
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityMax = 500;
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
      "SmokingD"
        };
        hiddenSelections[] =
        {
            "cs_raw"
        };
        hiddenSelectionsTextures[] =
        {
            "dz\gear\food\data\mackerel_fillet_raw_CO.paa",
            "dz\gear\food\data\mackerel_fillet_baked_CO.paa",
            "dz\gear\food\data\mackerel_fillet_boiled_CO.paa",
            "dz\gear\food\data\mackerel_fillet_dried_CO.paa",
            "dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\food\data\mackerel_fillet_raw.rvmat",
            "dz\gear\food\data\mackerel_fillet_baked.rvmat",
            "dz\gear\food\data\mackerel_fillet_boiled.rvmat",
            "dz\gear\food\data\mackerel_fillet_dried.rvmat",
            "dz\gear\food\data\mackerel_fillet_burnt.rvmat",
            "dz\gear\food\data\mackerel_fillet_rotten.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {

                        {
                            1,
                            {}
                        },

                        {
                            0.69999999,
                            {}
                        },

                        {
                            0.5,
                            {}
                        },

                        {
                            0.30000001,
                            {}
                        },

                        {
                            0,
                            {}
                        }
                    };
                };
            };
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
                    nutrition_properties[] = { 5,20,40,1,0,4 };
                    cooking_properties[] = { 0,0 };
                };
                class Rotten
                {
                    visual_properties[] = { -1,-1,5 };
                    nutrition_properties[] =
                    {
                        10,
                        10,
                        20,
                        1,
                        0,
                        "4 + 		  16"
                    };
                    cooking_properties[] = { 0,0 };
                };
                class Baked
                {
                    visual_properties[] = { 0,1,1 };
                    nutrition_properties[] = { 1,240,40,1,0 };
                    cooking_properties[] = { 70,45 };
                };
                class Boiled
                {
                    visual_properties[] = { 0,2,2 };
                    nutrition_properties[] = { 1,160,160,1,0 };
                    cooking_properties[] = { 70,55 };
                };
                class Dried
                {
                    visual_properties[] = { 0,3,3 };
                    nutrition_properties[] = { 2,120,0,1,0 };
                    cooking_properties[] = { 70,120,80 };
                };
                class Burned
                {
                    visual_properties[] = { 0,4,4 };
                    nutrition_properties[] = { 5,30,0,1,0,16 };
                    cooking_properties[] = { 100,30 };
                };
            };
            class FoodStageTransitions : MeatStageTransitions
            {
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

    //======================================= CORAL FISH
    class SRP_CoralFish_ColorBase : SRP_SaltWaterFish_Base
    {
        scope = 0;
        displayName = "Coral Fish";
        descriptionShort = "A colorful fish found in salt water.";
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {

                        {1,{"Survivalists_Fishing\fish\saltwater\data\coralfish.rvmat"}},
                        {0.69999999,{"Survivalists_Fishing\fish\saltwater\data\coralfish.rvmat"}},
                        {0.5,{"Survivalists_Fishing\fish\saltwater\data\coralfish.rvmat"}},
                        {0.30000001,{"Survivalists_Fishing\fish\saltwater\data\coralfish.rvmat"}},
                        {0,{"Survivalists_Fishing\fish\saltwater\data\coralfish.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_SaltWaterFishFilletMeat_CoralFish : SRP_SaltWaterFishFilletMeat_Base
    {
        scope = 2;
        displayName = "Coral Fish Fillet";
        descriptionShort = "A fillet of the coral salt water fish.";
    };

    // blue
    class SRP_CoralFish_Blue_Small : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 1,2 };
        weight = 250;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_co.paa"
        };
    };
    class SRP_CoralFish_Blue_Medium : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 2,2 };
        weight = 500;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_co.paa"
        };
    };
    class SRP_CoralFish_Blue_Large : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 2,3 };
        weight = 750;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_co.paa"
        };
    };
    class SRP_CoralFish_Blue_Epic : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 3,3 };
        weight = 1500;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_co.paa"
        };
    };

    // green
    class SRP_CoralFish_Green_Small : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 1,2 };
        weight = 250;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_green_co.paa"
        };
    };
    class SRP_CoralFish_Green_Medium : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 2,2 };
        weight = 500;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_green_co.paa"
        };
    };
    class SRP_CoralFish_Green_Large : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 2,3 };
        weight = 750;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_green_co.paa"
        };
    };
    class SRP_CoralFish_Green_Epic : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 3,3 };
        weight = 1500;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_green_co.paa"
        };
    };

    // purple
    class SRP_CoralFish_Purple_Small : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 1,2 };
        weight = 250;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_purple_co.paa"
        };
    };
    class SRP_CoralFish_Purple_Medium : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 2,2 };
        weight = 500;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_purple_co.paa"
        };
    };
    class SRP_CoralFish_Purple_Large : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 2,3 };
        weight = 750;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_purple_co.paa"
        };
    };
    class SRP_CoralFish_Purple_Epic : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 3,3 };
        weight = 1500;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_purple_co.paa"
        };
    };

    // red
    class SRP_CoralFish_Red_Small : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 1,2 };
        weight = 250;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_red_co.paa"
        };
    };
    class SRP_CoralFish_Red_Medium : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 2,2 };
        weight = 500;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_red_co.paa"
        };
    };
    class SRP_CoralFish_Red_Large : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 2,3 };
        weight = 750;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_red_co.paa"
        };
    };
    class SRP_CoralFish_Red_Epic : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 3,3 };
        weight = 1500;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_red_co.paa"
        };
    };
    // yellow
    class SRP_CoralFish_Yellow_Small : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 1,2 };
        weight = 250;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_yellow_co.paa"
        };
    };
    class SRP_CoralFish_Yellow_Medium : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 2,2 };
        weight = 500;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_yellow_co.paa"
        };
    };
    class SRP_CoralFish_Yellow_Large : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 2,3 };
        weight = 750;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_yellow_co.paa"
        };
    };
    class SRP_CoralFish_Yellow_Epic : SRP_CoralFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\coralfish.p3d";
        itemSize[] = { 3,3 };
        weight = 1500;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\coralfish_yellow_co.paa"
        };
    };


    //======================================= ANGEL FISH
    class SRP_AngelFish_ColorBase : SRP_SaltWaterFish_Base
    {
        scope = 0;
        displayName = "Angel Fish";
        descriptionShort = "A colorful fish found in salt water.";
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_blue_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_Fishing\fish\saltwater\data\angelfish.rvmat"}},
                        {0.69999999,{"Survivalists_Fishing\fish\saltwater\data\angelfish.rvmat"}},
                        {0.5,{"Survivalists_Fishing\fish\saltwater\data\angelfish.rvmat"}},
                        {0.30000001,{"Survivalists_Fishing\fish\saltwater\data\angelfish.rvmat"}},
                        {0,{"Survivalists_Fishing\fish\saltwater\data\angelfish.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_SaltWaterFishFilletMeat_AngelFish : SRP_SaltWaterFishFilletMeat_Base
    {
        scope = 2;
        displayName = "Angel Fish Fillet";
        descriptionShort = "A fillet of the angel salt water fish.";
    };

    // blue
    class SRP_AngelFish_Blue_Small : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 1,2 };
        weight = 250;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_blue_co.paa"
        };
    };
    class SRP_AngelFish_Blue_Medium : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 2,2 };
        weight = 500;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_blue_co.paa"
        };
    };
    class SRP_AngelFish_Blue_Large : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 2,3 };
        weight = 750;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_blue_co.paa"
        };
    };
    class SRP_AngelFish_Blue_Epic : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 3,3 };
        weight = 1500;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_blue_co.paa"
        };
    };

    // orange
    class SRP_AngelFish_Orange_Small : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 1,2 };
        weight = 250;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_orange_co.paa"
        };
    };
    class SRP_AngelFish_Orange_Medium : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 2,2 };
        weight = 500;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_orange_co.paa"
        };
    };
    class SRP_AngelFish_Orange_Large : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 2,3 };
        weight = 750;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_orange_co.paa"
        };
    };
    class SRP_AngelFish_Orange_Epic : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 3,3 };
        weight = 1500;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_orange_co.paa"
        };
    };

    // red
    class SRP_AngelFish_Red_Small : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 1,2 };
        weight = 250;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_red_co.paa"
        };
    };
    class SRP_AngelFish_Red_Medium : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 2,2 };
        weight = 500;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_red_co.paa"
        };
    };
    class SRP_AngelFish_Red_Large : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 2,3 };
        weight = 750;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_red_co.paa"
        };
    };
    class SRP_AngelFish_Red_Epic : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 3,3 };
        weight = 1500;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_red_co.paa"
        };
    };

    // yellow
    class SRP_AngelFish_Yellow_Small : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 1,2 };
        weight = 250;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_yellow_co.paa"
        };
    };
    class SRP_AngelFish_Yellow_Medium : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 2,2 };
        weight = 500;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_yellow_co.paa"
        };
    };
    class SRP_AngelFish_Yellow_Large : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 2,3 };
        weight = 750;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_yellow_co.paa"
        };
    };
    class SRP_AngelFish_Yellow_Epic : SRP_AngelFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\angelfish.p3d";
        itemSize[] = { 3,3 };
        weight = 1500;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\angelfish_yellow_co.paa"
        };
    };

    //======================================= SAILFISH
    class SRP_SailFish_ColorBase : SRP_SaltWaterFish_Base
    {
        scope = 0;
        displayName = "SailFish";
        descriptionShort = "A large and powerful fish found in salt water.";
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        hiddenSelections[] = { "zbytek" };
        // rotationFlags = 4;
        inventorySlot[] =
        {
            "TrapPrey_1",
      "SRP_Fish_Large1"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_Fishing\fish\saltwater\data\sailfish.rvmat"}},
                        {0.69999999,{"Survivalists_Fishing\fish\saltwater\data\sailfish.rvmat"}},
                        {0.5,{"Survivalists_Fishing\fish\saltwater\data\sailfish.rvmat"}},
                        {0.30000001,{"Survivalists_Fishing\fish\saltwater\data\sailfish.rvmat"}},
                        {0,{"Survivalists_Fishing\fish\saltwater\data\sailfish.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_SaltWaterFishFilletMeat_SailFish : SRP_SaltWaterFishFilletMeat_Base
    {
        scope = 2;
        displayName = "SailFish Fillet";
        descriptionShort = "A fillet of the salt water sailfish.";
    };

    // blue
    class SRP_SailFish_Blue_Small : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,5 };
        weight = 75000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_co.paa"
        };
    };
    class SRP_SailFish_Blue_Medium : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,6 };
        weight = 100000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_co.paa"
        };
    };
    class SRP_SailFish_Blue_Large : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,7 };
        weight = 125000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_co.paa"
        };
    };
    class SRP_SailFish_Blue_Epic : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 5,8 };
        weight = 200000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_co.paa"
        };
    };

    // green
    class SRP_SailFish_Green_Small : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,5 };
        weight = 75000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_green_co.paa"
        };
    };
    class SRP_SailFish_Green_Medium : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,6 };
        weight = 100000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_green_co.paa"
        };
    };
    class SRP_SailFish_Green_Large : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,7 };
        weight = 125000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_green_co.paa"
        };
    };
    class SRP_SailFish_Green_Epic : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 5,8 };
        weight = 200000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_green_co.paa"
        };
    };
    // red
    class SRP_SailFish_Red_Small : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,5 };
        weight = 75000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_red_co.paa"
        };
    };
    class SRP_SailFish_Red_Medium : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,6 };
        weight = 100000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_red_co.paa"
        };
    };
    class SRP_SailFish_Red_Large : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,7 };
        weight = 125000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_red_co.paa"
        };
    };
    class SRP_SailFish_Red_Epic : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 5,8 };
        weight = 200000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_red_co.paa"
        };
    };
    // yellow
    class SRP_SailFish_Yellow_Small : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,5 };
        weight = 75000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_yellow_co.paa"
        };
    };
    class SRP_SailFish_Yellow_Medium : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,6 };
        weight = 100000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_yellow_co.paa"
        };
    };
    class SRP_SailFish_Yellow_Large : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,7 };
        weight = 125000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_yellow_co.paa"
        };
    };
    class SRP_SailFish_Yellow_Epic : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 5,8 };
        weight = 200000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_yellow_co.paa"
        };
    };
    // silver
    class SRP_SailFish_Silver_Small : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,5 };
        weight = 75000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_silver_co.paa"
        };
    };
    class SRP_SailFish_Silver_Medium : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,6 };
        weight = 100000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_silver_co.paa"
        };
    };
    class SRP_SailFish_Silver_Large : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 4,7 };
        weight = 125000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_silver_co.paa"
        };
    };
    class SRP_SailFish_Silver_Epic : SRP_SailFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\sailfish.p3d";
        itemSize[] = { 5,8 };
        weight = 200000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\sailfish_silver_co.paa"
        };
    };

    //======================================= ANGLER FISH
    class SRP_AnglerFish_ColorBase : SRP_SaltWaterFish_Base
    {
        scope = 0;
        displayName = "Angler Fish";
        descriptionShort = "A deep water fish found in salt water.";
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_Fishing\fish\saltwater\data\anglerfish.rvmat"}},
                        {0.69999999,{"Survivalists_Fishing\fish\saltwater\data\anglerfish.rvmat"}},
                        {0.5,{"Survivalists_Fishing\fish\saltwater\data\anglerfish.rvmat"}},
                        {0.30000001,{"Survivalists_Fishing\fish\saltwater\data\anglerfish.rvmat"}},
                        {0,{"Survivalists_Fishing\fish\saltwater\data\anglerfish.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_SaltWaterFishFilletMeat_AnglerFish : SRP_SaltWaterFishFilletMeat_Base
    {
        scope = 2;
        displayName = "Angler Fish Fillet";
        descriptionShort = "A fillet of the salt water angler fish.";
    };

    // blue
    class SRP_AnglerFish_Blue_Small : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 2,3 };
        weight = 20000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_co.paa"
        };
    };
    class SRP_AnglerFish_Blue_Medium : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 3,3 };
        weight = 37000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_co.paa"
        };
    };
    class SRP_AnglerFish_Blue_Large : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 3,4 };
        weight = 45000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_co.paa"
        };
    };
    class SRP_AnglerFish_Blue_Epic : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 3,5 };
        weight = 58000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_co.paa"
        };
    };
    // Purple
    class SRP_AnglerFish_Purple_Small : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 2,3 };
        weight = 20000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_purple_co.paa"
        };
    };
    class SRP_AnglerFish_Purple_Medium : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 3,3 };
        weight = 37000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_purple_co.paa"
        };
    };
    class SRP_AnglerFish_Purple_Large : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 3,4 };
        weight = 45000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_purple_co.paa"
        };
    };
    class SRP_AnglerFish_Purple_Epic : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 3,5 };
        weight = 58000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_purple_co.paa"
        };
    };
    // Silver
    class SRP_AnglerFish_Silver_Small : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 2,3 };
        weight = 20000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_silver_co.paa"
        };
    };
    class SRP_AnglerFish_Silver_Medium : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 3,3 };
        weight = 37000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_silver_co.paa"
        };
    };
    class SRP_AnglerFish_Silver_Large : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 3,4 };
        weight = 45000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_silver_co.paa"
        };
    };
    class SRP_AnglerFish_Silver_Epic : SRP_AnglerFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\anglerfish.p3d";
        itemSize[] = { 3,5 };
        weight = 58000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\anglerfish_silver_co.paa"
        };
    };

    //======================================= HAMMERHEAD SHARK
    class SRP_HammerHeadFish_ColorBase : SRP_SaltWaterFish_Base
    {
        scope = 0;
        displayName = "Hammer Head Shark";
        descriptionShort = "A deep water shark found in salt water.";
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        // rotationFlags = 64;
        inventorySlot[] =
        {
            "TrapPrey_1",
      "SRP_Fish_Large1"
        };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {

                        {1,{"Survivalists_Fishing\fish\saltwater\data\hammerheadshark.rvmat"}},
                        {0.69999999,{"Survivalists_Fishing\fish\saltwater\data\hammerheadshark.rvmat"}},
                        {0.5,{"Survivalists_Fishing\fish\saltwater\data\hammerheadshark.rvmat"}},
                        {0.30000001,{"Survivalists_Fishing\fish\saltwater\data\hammerheadshark.rvmat"}},
                        {0,{"Survivalists_Fishing\fish\saltwater\data\hammerheadshark.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_SaltWaterFishFilletMeat_HammerHeadFish : SRP_SaltWaterFishFilletMeat_Base
    {
        scope = 2;
        displayName = "Hammer Head Shark Fillet";
        descriptionShort = "A fillet of the salt water hammerhead shark.";
    };

    // blue
    class SRP_HammerHeadFish_Blue_Small : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 4,5 };
        weight = 125000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_co.paa"
        };
    };
    class SRP_HammerHeadFish_Blue_Medium : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 4,6 };
        weight = 180000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_co.paa"
        };
    };
    class SRP_HammerHeadFish_Blue_Large : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 5,6 };
        weight = 230000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_co.paa"
        };
    };
    class SRP_HammerHeadFish_Blue_Epic : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 6,7 };
        weight = 450000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_co.paa"
        };
    };
    // Red
    class SRP_HammerHeadFish_Red_Small : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 4,5 };
        weight = 125000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_red_co.paa"
        };
    };
    class SRP_HammerHeadFish_Red_Medium : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 4,6 };
        weight = 180000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_red_co.paa"
        };
    };
    class SRP_HammerHeadFish_Red_Large : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 5,6 };
        weight = 230000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_red_co.paa"
        };
    };
    class SRP_HammerHeadFish_Red_Epic : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 6,7 };
        weight = 450000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_red_co.paa"
        };
    };
    // Silver
    class SRP_HammerHeadFish_Silver_Small : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 4,5 };
        weight = 125000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_silver_co.paa"
        };
    };
    class SRP_HammerHeadFish_Silver_Medium : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 4,6 };
        weight = 180000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_silver_co.paa"
        };
    };
    class SRP_HammerHeadFish_Silver_Large : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 5,6 };
        weight = 230000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_silver_co.paa"
        };
    };
    class SRP_HammerHeadFish_Silver_Epic : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 6,7 };
        weight = 450000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_silver_co.paa"
        };
    };
    // Yellow
    class SRP_HammerHeadFish_Yellow_Small : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 4,5 };
        weight = 125000;
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_yellow_co.paa"
        };
    };
    class SRP_HammerHeadFish_Yellow_Medium : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 4,6 };
        weight = 180000;
        varQuantityInit = 750;
        varQuantityMax = 750;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_yellow_co.paa"
        };
    };
    class SRP_HammerHeadFish_Yellow_Large : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 5,6 };
        weight = 230000;
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_yellow_co.paa"
        };
    };
    class SRP_HammerHeadFish_Yellow_Epic : SRP_HammerHeadFish_ColorBase
    {
        scope = 2;
        model = "Survivalists_Fishing\fish\saltwater\hammerheadshark.p3d";
        itemSize[] = { 6,7 };
        weight = 450000;
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Fishing\fish\saltwater\data\hammerheadshark_yellow_co.paa"
        };
    };

};