class CfgPatches
{
    class Survivalists_Characters_Tops
    {
        units[] = {	};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Characters",
            "DZ_Characters_Tops",
            "Survivalists_Armbands_Flag",
            "Winter_Parka",
            "Leather_cloak",
            "Military_Sweater",
            "jmc_deerisle_misc",
            "Dressupbox",
            "Alv_Tac_Gear_Tops",
            "SRP_Core_Characters_Tops"
        };
    };
};
class CfgVehicles
{
    // class Top_Base;
    class Clothing;
    // Remove eventually once Lore dictates
    class SaltyCougar_Armband;
    class Skylar_BioZone_Protection : SaltyCougar_Armband
    {
        scope = 2;
        displayName = "The Queen's Shawl";
        descriptionShort = "Ignore biohzard effects";
        class Protection
        {
            biological = 6;
        };
    };
    //-------------------------------------MOD OVERRIDE
    class Winter_Parka_Base : Clothing
    {
        rootClassName = "Winter_Parka";
        colorVariants[] =
        {
          "White",
          "Green",
          "Black",
          "PinkWhite",
          "PinkBlack",
          "BlueWhite",
          "BlueBlack"
        };
    };
    class WindstridePoncho : Clothing
    {
        rootClassName = "Poncho";
        colorVariants[] =
        {
          "Red_Checkered",
          "Blue_Checkered",
          "Yellow_Checkered",
          "White",
          "Brown",
          "Green",
          "Red",
          "Black",
          "BlackAndWhite",
          "BlackAndWhite2",
        };
    };
    class Military_Sweater : Clothing
    {
        rootClassName = "Military_Sweater";
        colorVariants[] =
        {
          "Red",
          "Blue",
          "Green",
          "White",
          "Black",
        };
    };
    class DUB_WoolCoat : Clothing
    {
        rootClassName = "DUB_WoolCoat";
        colorVariants[] =
        {
          "Red",
          "Green",
          "Brown",
          "Purple",
        };
    };
    class DUB_FurCoat : Clothing
    {
        inventorySlot[] += {"Back"};
        heatIsolation = 27;
    };
    class DUB_Poncho : Clothing
    {
        rootClassName = "DUB_Poncho";
        colorVariants[] =
        {
          "Blue",
          "Flake",
          "Pink",
          "Flowers",
          "PinkFlowers",
          "PurpleFlowers",
          "PinkPurple",
          "PurpleBlue",
          "Rose",
          "YellowRed",
        };
    };
    class DUB_Monkrobe : Clothing
    {
        rootClassName = "DUB_Monkrobe";
        colorVariants[] =
        {
          "Blue",
          "Burg",
          "Coal",
          "Forest",
          "Lav",
          "Olive",
          "Pink",
          "Purp",
          "Red",
          "Salmon",
          "Snow",
          "Teal",
          "Toast",
          "Purp",
        };
    };
    class DUB_Duster : Clothing
    {
        rootClassName = "DUB_Duster";
        colorVariants[] =
        {
          "Black",
          "Cow",
          "Python",
          "OD",
          "Pink",
          "Pink1",
          "Chocolate",
          "Forest",
          "Lavender",
          "Navy",
          "Red",
        };
    };
    class Leather_Cloak_ColorBase : Clothing
    {
        rootClassName = "Leather_Cloak_down";
        colorVariants[] =
        {
          "Blue",
          "Coffee",
          "Green",
          "Grey",
          "HeartsBlue",
          "HeartsPink",
          "Orange",
          "Pink",
          "Purple",
          "Red",
          "Snow",
          "Teal",
          "Yellow",
        };
    };
    class jmc_BearPeltGhillieWhite : Clothing
    {
        displayName = "White Bear Ghillie";
        descriptionShort = "Cosmetic Only, does not protect against extreme cold.";
    };
    //------------------------------------ ALEVARIC OVERRIDE
    class ALV_MV_CryeG3_Top_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_CryeG3_Top";
        actionVariant = "ALV_MV_CryeG3LongSleeve_Top";
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
    class ALV_MV_CryeG3LongSleeve_Top_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_CryeG3LongSleeve_Top";
        actionVariant = "ALV_MV_CryeG3_Top";
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

    class ALV_MV_CryeG3_Top_Black : ALV_MV_CryeG3_Top_Colorbase
    {
        color = "Black";
    };
    class ALV_MV_CryeG3LongSleeve_Top_Black : ALV_MV_CryeG3LongSleeve_Top_Colorbase
    {
        color = "Black";
    };
    class ALV_MV_CryeG3_Top_Green : ALV_MV_CryeG3_Top_Colorbase
    {
        color = "Green";
    };
    class ALV_MV_CryeG3LongSleeve_Top_Green : ALV_MV_CryeG3LongSleeve_Top_Colorbase
    {
        color = "Green";
    };
    class ALV_MV_CryeG3_Top_Tan : ALV_MV_CryeG3_Top_Colorbase
    {
        color = "Tan";
    };
    class ALV_MV_CryeG3LongSleeve_Top_Tan : ALV_MV_CryeG3LongSleeve_Top_Colorbase
    {
        color = "Tan";
    };
    class ALV_MV_CryeG3_Top_Brown : ALV_MV_CryeG3_Top_Colorbase
    {
        color = "Brown";
    };
    class ALV_MV_CryeG3LongSleeve_Top_Brown : ALV_MV_CryeG3LongSleeve_Top_Colorbase
    {
        color = "Brown";
    };

    class ALV_MV_Hoodie_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_Hoodie";
        actionVariant = "ALV_MV_HoodieRolled";
        colorVariants[] =
        {
          "Grey",
          "Tan",
          "Red",
          "Pink",
          "Green",
          "Black",
          "ColorBlock",
          "BrownStripe",
          "RedStripe",
          "Maine",
          "Flowers",
          "Portland",
          "Stonington"
        };
    };
    class ALV_MV_HoodieRolled_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_HoodieRolled";
        actionVariant = "ALV_MV_Hoodie";
        colorVariants[] =
        {
          "Grey",
          "Tan",
          "Red",
          "Pink",
          "Green",
          "Black",
          "ColorBlock",
          "BrownStripe",
          "RedStripe",
          "Maine",
          "Flowers",
          "Portland",
          "Stonington"
        };
    };
    class ALV_MV_Hoodie_Grey : ALV_MV_Hoodie_Colorbase
    {
        color = "Grey";
    };
    class ALV_MV_HoodieRolled_Grey : ALV_MV_HoodieRolled_Colorbase
    {
        color = "Grey";
    };
    class ALV_MV_Hoodie_Tan : ALV_MV_Hoodie_Colorbase
    {
        color = "Tan";
    };
    class ALV_MV_HoodieRolled_Tan : ALV_MV_HoodieRolled_Colorbase
    {
        color = "Tan";
    };
    class ALV_MV_Hoodie_Red : ALV_MV_Hoodie_Colorbase
    {
        color = "Red";
    };
    class ALV_MV_HoodieRolled_Red : ALV_MV_HoodieRolled_Colorbase
    {
        color = "Red";
    };
    class ALV_MV_Hoodie_Pink : ALV_MV_Hoodie_Colorbase
    {
        color = "Pink";
    };
    class ALV_MV_HoodieRolled_Pink : ALV_MV_HoodieRolled_Colorbase
    {
        color = "Pink";
    };
    class ALV_MV_Hoodie_Green : ALV_MV_Hoodie_Colorbase
    {
        color = "Green";
    };
    class ALV_MV_HoodieRolled_Green : ALV_MV_HoodieRolled_Colorbase
    {
        color = "Green";
    };
    class ALV_MV_Hoodie_Black : ALV_MV_Hoodie_Colorbase
    {
        color = "Black";
    };
    class ALV_MV_HoodieRolled_Black : ALV_MV_HoodieRolled_Colorbase
    {
        color = "Black";
    };

    class ALV_MV_FlannelShirt_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_FlannelShirt";
        colorVariants[] =
        {
          "Red",
          "Black",
          "White",
        };
    };
    class ALV_MV_TacticalCoat_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_TacticalCoat";
        colorVariants[] =
        {
          "Black",
          "Patterned",
        };
    };
    class ALV_MV_ScoutingHoodie_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_ScoutingHoodie";
        colorVariants[] =
        {
          "Tan",
          "Black",
          "Green",
          "Urban",
          "Cadpat",
          "ChocoChip",
          "ERDL",
          "M05",
          "MArpat",
          "MC_Black",
          "TigerStripe",
        };
    };
    class ALV_MV_PullOver_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_PullOver";
        colorVariants[] =
        {
          "Black",
        };
    };
    class ALV_MV_Robe_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_Robe";
        colorVariants[] = {};
    };
    class ALV_MV_VestShirt_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_VestShirt";
        colorVariants[] =
        {
          "Blue",
          "White",
          "Brown",
          "Governer",
          "Grey",
          "Burdundy",
          "RoyalPurple",
          "Beige"
        };
    };
    class ALV_MV_SmartShirt_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_SmartShirt";
        colorVariants[] =
        {
          "Blue",
          "White",
          "Brown",
          "Governer"
        };
    };
    class ALV_MV_Parka_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_Parka";
        colorVariants[] =
        {
          "Black",
        };
    };
    class ALV_MV_DemiJacket_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_DemiJacket";
        colorVariants[] =
        {
          "Black",
          "Tan",
          "Green",
        };
    };
    //===================== CUSTOM SHIRTS
    class SRP_Bowtie_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Bow Tie";
        descriptionShort = "A tie for any formal occasion.";
        model = "Survivalists_Characters\tops\srp_bowtie_g.p3d";
        inventorySlot[] =
        {
            "Armband",
      "Extra",
      "Wig"
        };
        rootClassName = "SRP_Bowtie";
        colorVariants[] =
        {
          "BlackWhiteDot",
          "Black",
          "Blue",
          "Gold",
          "Purple",
          "Red",
          "Yellow",
        };
        rotationFlags = 34;
        weight = 80;
        itemSize[] = { 2,1 };
        ragQuantity = 1;
        varWetMax = 1;
        absorbency = 0.80000001;
        repairableWithKits[] = { 2,3,5 };
        repairCosts[] = { 20,20,25 };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] = { "Survivalists_Characters\tops\data\srp_bowtie_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_Characters\tops\data\srp_bowtie.rvmat"}},
                        {0.69999999,{"Survivalists_Characters\tops\data\srp_bowtie.rvmat"}},
                        {0.5,{"Survivalists_Characters\tops\data\srp_bowtie.rvmat"}},
                        {0.30000001,{"Survivalists_Characters\tops\data\srp_bowtie.rvmat"}},
                        {0,{"Survivalists_Characters\tops\data\srp_bowtie.rvmat"}}
                    };
                };
            };
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\tops\srp_bowtie_m.p3d";
            female = "Survivalists_Characters\tops\srp_bowtie_f.p3d";
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
    class SRP_PlatHoodie : Clothing
    {
        scope = 2;
        displayName = "Hoodie";
        descriptionShort = "Espen Industries. A nicely sewed hoody with plenty of room inside.";
        model = "Survivalists_Characters\tops\srp_plathoodie_g.p3d";
        inventorySlot[] =
        {
            "Body"
        };
        weight = 850;
        itemSize[] = { 3,3 };
        itemsCargoSize[] = { 5,4 };
        quickBarBonus = 1;
        varWetMax = 1;
        heatIsolation = 0.8;
        ragQuantity = 4;
        repairableWithKits[] = { 2,3,5 };
        repairCosts[] = { 20,20,25 };
        soundAttType = "WoolShirt";
        headSelectionsToHide[] =
        {
            "Clipping_BandanaHead",
            "Clipping_BandanaFace"
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\tops\data\srp_plathoodie_co.paa"
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
                        {1.0, {"Survivalists_Characters\tops\data\srp_plathoodie.rvmat"}},
            {0.69999999, {"Survivalists_Characters\tops\data\srp_plathoodie.rvmat"}},
            {0.5, {"Survivalists_Characters\tops\data\srp_plathoodie_damage.rvmat"}},
            {0.30000001, {"Survivalists_Characters\tops\data\srp_plathoodie_damage.rvmat"}},
            {0.0, {"Survivalists_Characters\tops\data\srp_plathoodie_destruct.rvmat"}}
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
        class ClothingTypes
        {
            male = "Survivalists_Characters\tops\srp_plathoodie_m.p3d";
            female = "Survivalists_Characters\tops\srp_plathoodie_f.p3d";
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
    class SRP_PlatHoodie_Wolfbeard : SRP_PlatHoodie
    {
        scope = 2;
    };
    class SRP_Sweater_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Turtleneck Sweater";
        descriptionShort = "A loose fitting turtleneck sweater";
        model = "Survivalists_Characters\tops\SRP_Sweater_g.p3d";
        inventorySlot[] =
        {
            "Body"
        };
        rotationFlags = 64;
        weight = 2000;
        itemSize[] = { 4,4 };
        itemsCargoSize[] = { 6,5 };
        quickBarBonus = 2;
        varWetMax = 0.39;
        heatIsolation = 0.90;
        repairableWithKits[] = { 2,3,5 };
        repairCosts[] = { 20,20,25 };
        soundAttType = "LeatherJacket";
        hiddenSelections[] =
        {
            "zbytek",
            "personality"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\tops\data\srp_Sweater_CO.paa"
        };
        rootClassName = "SRP_Sweater";
        colorVariants[] =
        {
          "Orange",
          "Mustard",
          "Blue",
          "Grey",
          "Green",
          "Cream",
          "Burgundy"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 130;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Characters\tops\data\srp_sweater.rvmat"}},
                        {0.7,{"Survivalists_Characters\tops\data\srp_sweater.rvmat"}},
                        {0.5,{"Survivalists_Characters\tops\data\srp_sweater_damage.rvmat"}},
                        {0.3,{"Survivalists_Characters\tops\data\srp_sweater_damage.rvmat"}},
                        {0.0,{"Survivalists_Characters\tops\data\srp_sweater_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Melee
                {
                    class Health
                    {
                        damage = 0.69;
                    };
                    class Blood
                    {
                        damage = 0.69;
                    };
                    class Shock
                    {
                        damage = 0.85;
                    };
                };
                class Infected
                {
                    class Health
                    {
                        damage = 0.71;
                    };
                    class Blood
                    {
                        damage = 0.71;
                    };
                    class Shock
                    {
                        damage = 0.85;
                    };
                };
            };
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\tops\SRP_Sweater_m.p3d";
            female = "Survivalists_Characters\tops\SRP_Sweater_f.p3d";
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
    class SRP_Rolled_Shirt_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Rolled up shirt";
        descriptionShort = "An unbuttoned shirt with rolled up sleeves.";
        model = "Survivalists_Characters\tops\SRP_Rolled_Shirt_g.p3d";
        inventorySlot[] =
        {
            "Body"
        };
        rotationFlags = 64;
        weight = 2000;
        itemSize[] = { 3,3 };
        itemsCargoSize[] = { 6,5 };
        quickBarBonus = 2;
        varWetMax = 0.38999999;
        heatIsolation = 0.75;
        repairableWithKits[] = { 2,3,5 };
        repairCosts[] = { 20,20,25 };
        soundAttType = "LeatherJacket";
        hiddenSelections[] =
        {
            "zbytek",
            "personality"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\tops\data\SRP_Rolled_Shirt_co.paa"
        };
        rootClassName = "SRP_Rolled_Shirt";
        colorVariants[] =
        {
          "Gray_Plaid",
          "Green_Plaid",
          "Red_Plaid",
          "Pink_Plaid",
          "Tan",
          "Pink",
          "Green",
          "Blue"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 130;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Characters\tops\data\srp_rolled_shirt.rvmat"}},
                        {0.69999999,{"Survivalists_Characters\tops\data\srp_rolled_shirt.rvmat"}},
                        {0.5,{"Survivalists_Characters\tops\data\srp_rolled_shirt_damage.rvmat"}},
                        {0.30000001,{"Survivalists_Characters\tops\data\srp_rolled_shirt_damage.rvmat"}},
                        {0.0,{"Survivalists_Characters\tops\data\srp_rolled_shirt_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Melee
                {
                    class Health
                    {
                        damage = 0.69;
                    };
                    class Blood
                    {
                        damage = 0.69;
                    };
                    class Shock
                    {
                        damage = 0.85000002;
                    };
                };
                class Infected
                {
                    class Health
                    {
                        damage = 0.70999998;
                    };
                    class Blood
                    {
                        damage = 0.70999998;
                    };
                    class Shock
                    {
                        damage = 0.85000002;
                    };
                };
            };
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\tops\SRP_Rolled_Shirt_m.p3d";
            female = "Survivalists_Characters\tops\SRP_Rolled_Shirt_f.p3d";
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
    class SRP_ESPG3_TacShirt_Colorbase : Clothing
    {
        scope = 0;
        displayName = "ESP-G3 Combat Shirt";
        descriptionShort = "The ESP-G3 Combat Shirt weas designed and manufactured in mass quantities in the 2001. Whilst not commonly used by the US military, due to it's extortionate cost, it did become favourable amongst military enthusiasts and private military companies";
        model = "Survivalists_characters\tops\SRP_ESP_G3_TacShirt_g.p3d";
        inventorySlot[] =
        {
          "Body"
        };
        rotationFlags = 64;
        weight = 2000;
        itemSize[] = { 3,3 };
        itemsCargoSize[] = { 6,5 };
        attachments[] =
        {
          "SRP_Patch"
        };
        quickBarBonus = 2;
        varWetMax = 0.38999999;
        heatIsolation = 0.75;
        repairableWithKits[] = { 2,3,5 };
        repairCosts[] = { 20,20,25 };
        soundAttType = "LeatherJacket";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_characters\tops\data\ESP_G3_TacShirt_CO.paa"
        };
        rootClassName = "SRP_ESPG3_TacShirt";
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
          "HelloKitty"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 130;
                    healthLevels[] =
                    {
                      {1,{"Survivalists_characters\tops\data\ESP_G3_TacShirt.rvmat"}},
                      {0.69999999,{"Survivalists_characters\tops\data\ESP_G3_TacShirt.rvmat"}},
                      {0.5,{"Survivalists_characters\tops\data\ESP_G3_TacShirt_damage.rvmat"}},
                      {0.30000001,{"Survivalists_characters\tops\data\ESP_G3_TacShirt_damage.rvmat"}},
                      {0,{"Survivalists_characters\tops\data\ESP_G3_TacShirt_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Melee
                {
                    class Health
                    {
                        damage = 0.69;
                    };
                    class Blood
                    {
                        damage = 0.69;
                    };
                    class Shock
                    {
                        damage = 0.85000002;
                    };
                };
                class Infected
                {
                    class Health
                    {
                        damage = 0.70999998;
                    };
                    class Blood
                    {
                        damage = 0.70999998;
                    };
                    class Shock
                    {
                        damage = 0.85000002;
                    };
                };
            };
        };
        class ClothingTypes
        {
            male = "Survivalists_characters\tops\SRP_ESP_G3_TacShirt_m.p3d";
            female = "Survivalists_characters\tops\SRP_ESP_G3_TacShirt_f.p3d";
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
    class SRP_KimonoSleeveless_Colorbase : Clothing
    {
        scope = 0;
        displayName = "Kimono";
        descriptionShort = "A delicate kimono made from silk.";
        model = "Survivalists_characters\tops\srp_kimono_sleeveless_g.p3d";
        inventorySlot[] =
        {
          "Body"
        };
        rotationFlags = 64;
        weight = 2000;
        itemSize[] = { 3,3 };
        itemsCargoSize[] = { 6,5 };
        quickBarBonus = 4;
        varWetMax = 0.38999999;
        heatIsolation = 0.75;
        repairableWithKits[] = { 2,3,5 };
        repairCosts[] = { 20,20,25 };
        soundAttType = "LeatherJacket";
        hiddenSelections[] =
        {
          "zbytek",
          "personality"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Characters\tops\data\srp_kimono_co.paa"
        };
        rootClassName = "SRP_KimonoSleeveless";
        colorVariants[] =
        {
          "Blue",
          "Red",
          "Red_WhiteBelt",
          // "White", // investor only atm
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 130;
                    healthLevels[] =
                    {
                      {1,{"Survivalists_characters\tops\data\srp_kimono.rvmat"}},
                      {0.69999999,{"Survivalists_characters\tops\data\srp_kimono.rvmat"}},
                      {0.5,{"Survivalists_characters\tops\data\srp_kimono_damage.rvmat"}},
                      {0.30000001,{"Survivalists_characters\tops\data\srp_kimono_damage.rvmat"}},
                      {0,{"Survivalists_characters\tops\data\srp_kimono_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Melee
                {
                    class Health
                    {
                        damage = 0.69;
                    };
                    class Blood
                    {
                        damage = 0.69;
                    };
                    class Shock
                    {
                        damage = 0.85000002;
                    };
                };
                class Infected
                {
                    class Health
                    {
                        damage = 0.70999998;
                    };
                    class Blood
                    {
                        damage = 0.70999998;
                    };
                    class Shock
                    {
                        damage = 0.85000002;
                    };
                };
            };
        };
        class ClothingTypes
        {
            male = "Survivalists_characters\tops\srp_kimono_sleeveless_f.p3d";
            female = "Survivalists_characters\tops\srp_kimono_sleeveless_f.p3d";
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
    //===================== END
};