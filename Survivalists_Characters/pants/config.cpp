class CfgPatches
{
    class Survivalists_Characters_Pants
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Characters",
            "DZ_Characters_Pants",
            "Alv_Tac_Gear_Pants",
            "Kneepads_Jeans",
            "Galife_Pants",
            "Alv_Tac_Gear_Pants",
            "SRP_Core_Characters_Pants"
        };
    };
};
class CfgVehicles
{
    // class Pants_Base;
    class Clothing;
    //-------------------------------------ALEVARIC OVERRIDE
    class ALV_MV_CryeG3_Pants_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_CryeG3_Pants";
        colorVariants[] =
        {
          "Black",
          "Green",
          "Tan",
          "Brown",
          "Cadpat",
          "ChocoChip",
          "ERDL",
          "M05",
          "Marpat",
          "MC_Black",
          "TigerStripe",
        };
    };
    class ALV_MV_SurvivorPants_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_SurvivorPants";
        colorVariants[] =
        {
          "Black",
          "Green",
          "Tan",
        };
    };
    class ALV_MV_ScoutingPants_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_ScoutingPants";
        colorVariants[] =
        {
          "Black",
          "Blue",
          "Green",
          "Tan",
          "Urban",
          "Brown",
          "Cadpat",
          "ChocoChip",
          "ERDL",
          "M05",
          "Marpat",
          "MC_Black",
          "TigerStripe",
        };
    };
    class ALV_MV_DemiPants_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_DemiPants";
        colorVariants[] =
        {
          "Black",
          "Tan",
          "Green",
        };
    };

    //-------------------------------------MODDED OVERRIDE
    class Skinny_Jeans_ColorBase : Clothing
    {
        rootClassName = "Skinny_Jeans";
        colorVariants[] =
        {
          "Black",
          "Blue",
          "Chocolate",
          "Coal",
          "HeartBunnyPetal",
          "HeartBunnySky",
          "HeartPink",
          "Lime",
          "PurpleDark",
          "RedBunny",
          "TealBunny",
          "YellowBunny"
        };
    };
    class Galife_Pants_ColorBase : Clothing
    {
        rootClassName = "Galife_Pants";
        colorVariants[] =
        {
          "Olive",
          "Navy",
          "Blue",
          "Coal",
          "Green",
          "Pink",
          "Wool"
        };
    };
    class Leggings_Colorbase : Clothing
    {
        rootClassName = "Leggings";
        colorVariants[] =
        {
          "Blue",
          "Blue1",
          "Adidas",
          "adidasKitty",
          "AdidasPink",
          "Red",
          "Purple",
          "Grey",
          "Black",
          "White",
        };
    };
    //======================================= CUSTOM CLOTHING
    class SRP_ESPG3_TacPants_Colorbase : Clothing
    {
        scope = 0;
        displayName = "ESP-G3 Combat Pants";
        descriptionShort = "The ESP-G3 Combat Pants were designed and manufactured in mass quantities in the 2001. Whilst not commonly used by the US military, due to their extortionate cost, they did become favourable amongst military enthusiasts and private military companies";
        model = "Survivalists_characters\pants\SRP_ESP_G3_TacPants_g.p3d";
        inventorySlot[] =
        {
          "Legs"
        };
        itemSize[] = { 4,3 };
        itemsCargoSize[] = { 6,4 };
        weight = 530;
        ragQuantity = 3;
        varWetMax = 1;
        heatIsolation = 0.80000001;
        repairableWithKits[] = { 5,2 };
        repairCosts[] = { 30,25 };
        quickBarBonus = 2;
        hiddenSelections[] =
        {
          "zbytek",
          "personality"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_characters\pants\Data\ESP_G3_TacPants_CO.paa"
        };
        class ClothingTypes
        {
            male = "Survivalists_characters\pants\SRP_ESP_G3_TacPants_m.p3d";
            female = "Survivalists_characters\pants\SRP_ESP_G3_TacPants_f.p3d";
        };
        rootClassName = "SRP_ESPG3_TacPants";
        colorVariants[] =
        {
          "Black",
          "Tan",
          "Green",
          "MC_Black",
          "CAD",
          "M05",
          "ChocChip",
          "ERDL",
          "MARPAT_Wood",
          "GreyHex",
          "HelloKitty",
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
                      {1,{"Survivalists_characters\pants\Data\ESP_G3_TacPants.rvmat"}},
                      {0.69999999,{"Survivalists_characters\pants\Data\ESP_G3_TacPants.rvmat"}},
                      {0.5,{"Survivalists_characters\pants\Data\ESP_G3_TacPants_damage.rvmat"}},
                      {0.30000001,{"Survivalists_characters\pants\Data\ESP_G3_TacPants_damage.rvmat"}},
                      {0,{"Survivalists_characters\pants\Data\ESP_G3_TacPants_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Melee
                {
                    class Health
                    {
                        damage = 0.89999998;
                    };
                    class Blood
                    {
                        damage = 0.89999998;
                    };
                    class Shock
                    {
                        damage = 0.89999998;
                    };
                };
                class Infected
                {
                    class Health
                    {
                        damage = 0.89999998;
                    };
                    class Blood
                    {
                        damage = 0.89999998;
                    };
                    class Shock
                    {
                        damage = 0.89999998;
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
                    soundSet = "Shirt_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "Shirt_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    //-------------------------------------END
};