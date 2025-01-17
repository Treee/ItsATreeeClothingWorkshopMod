class CfgPatches
{
    class Survivalists_Retextures_ExternalModRetextures_Windstride
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "DZ_Data",
            "Survivalists_Retextures",
            "Ragged_Eyepatch",
            "Assets_Shemagh",
            "Winter_Parka",
            "Kneepads_Jeans",
            "Layered_Shirt",
            "Leather_cloak",
            "Galife_Pants",
            "High_Knee_Sneakers",
            "SK8_Sneakers",
            "Leggings",
            "Scarf"
        };
    };
};
class CfgVehicles
{
    class Ragged_Eyepatch;
    class Shemagh_ColorBase;
    class Shemagh_Scarf_ColorBase;
    class Shemagh_Facemask_ColorBase;
    class Shemagh_Bandit_ColorBase;
    class Winter_Parka_Base;
    class Kneepads_Jeans_Base;
    class Layered_Shirt_Base;
    class Skinny_Jeans_ColorBase;
    class Scarf_ColorBase;
    class Leather_Cloak_down;
    class Leather_Cloak_up;
    class Galife_Pants_ColorBase;
    class High_Knee_Sneakers;
    class Leggings_ColorBase;
    class Kirza_Boots_ColorBase;

    class Layered_Shirt_Cheburashka : Layered_Shirt_Base
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\layered_shirt_redacted_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\layered_shirt_redacted_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\layered_shirt_redacted_co.paa"
        };
    };
    class Kneepads_Jeans_Olive : Kneepads_Jeans_Base
    {
        scope = 2;
        visibilityModifier = 0.80000001;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\kneepads_jeans_olive_co.paa" };
    };

    class Winter_Parka_Black : Winter_Parka_Base
    {
        scope = 2;
        visibilityModifier = 0.89999998;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\winterparka_black_co.paa" };
    };
    class Winter_Parka_PinkWhite : Winter_Parka_Base
    {
        scope = 2;
        visibilityModifier = 0.89999998;
        hiddenSelections[] =
        {
            "zbytek",
            "fur"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\winterparka_pink_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\winterparka_fur_white_ca.paa"
        };
    };
    class Winter_Parka_PinkBlack : Winter_Parka_Base
    {
        scope = 2;
        visibilityModifier = 0.89999998;
        hiddenSelections[] =
        {
            "zbytek",
            "fur"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\winterparka_pink_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\winterparka_fur_black_ca.paa"
        };
    };
    class Winter_Parka_BlueWhite : Winter_Parka_Base
    {
        scope = 2;
        visibilityModifier = 0.89999998;
        hiddenSelections[] =
        {
            "zbytek",
            "fur"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\winterparka_blue_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\winterparka_fur_white_ca.paa"
        };
    };
    class Winter_Parka_BlueBlack : Winter_Parka_Base
    {
        scope = 2;
        visibilityModifier = 0.89999998;
        hiddenSelections[] =
        {
            "zbytek",
            "fur"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\winterparka_blue_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\winterparka_fur_black_ca.paa"
        };
    };
    class SRP_Ragged_Eyepatchbblack : Ragged_Eyepatch
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\ragged_eyepatchblack_co.paa" };
    };
    class SRP_Ragged_Eyepatcheye : Ragged_Eyepatch
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\ragged_eyepatcheye_co.paa" };
    };
    class SRP_Ragged_Eyepatchbrown : Ragged_Eyepatch
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\ragged_eyepatchbrown_co.paa" };
    };

    class Shemagh_Checkered_Black_color : Shemagh_ColorBase
    {
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_black_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_black_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_black_co.paa"
        };
    };
    class Shemagh_Checkered_Black : Shemagh_Checkered_Black_color
    {
        scope = 2;
        color = "Checkered_Black";
    };

    class Shemagh_Bandit_Checkered_Black_color : Shemagh_Bandit_ColorBase
    {
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_black_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_black_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_black_co.paa"
        };
    };
    class Shemagh_Bandit_Checkered_Black : Shemagh_Bandit_Checkered_Black_color
    {
        scope = 2;
        color = "Checkered_Black";
    };

    class Shemagh_Facemask_Checkered_Black_color : Shemagh_Facemask_ColorBase
    {
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_black_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_black_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_black_co.paa"
        };
    };
    class Shemagh_Facemask_Checkered_Black : Shemagh_Facemask_Checkered_Black_color
    {
        scope = 2;
        color = "Checkered_Black";
    };

    class Shemagh_Scarf_Checkered_Black_color : Shemagh_Scarf_ColorBase
    {
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_black_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_black_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_black_co.paa"
        };
    };
    class Shemagh_Scarf_Checkered_Black : Shemagh_Scarf_Checkered_Black_color
    {
        scope = 2;
        color = "Checkered_Black";
    };

    class Shemagh_Checkered_Pink_color : Shemagh_ColorBase
    {
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_pink_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_pink_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_checkered_pink_co.paa"
        };
    };
    class Shemagh_Pink : Shemagh_Checkered_Pink_color
    {
        scope = 2;
        color = "pink";
    };

    class Shemagh_Scarf_Checkered_Pink_color : Shemagh_Scarf_ColorBase
    {
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_pink_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_pink_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_scarf_checkered_pink_co.paa"
        };
    };
    class Shemagh_Scarf_Pink : Shemagh_Scarf_Checkered_Pink_color
    {
        scope = 2;
        color = "pink";
    };

    class Shemagh_Facemask_Checkered_Pink_color : Shemagh_Facemask_ColorBase
    {
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_pink_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_pink_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_facemask_checkered_pink_co.paa"
        };
    };
    class Shemagh_Facemask_Pink : Shemagh_Facemask_Checkered_Pink_color
    {
        scope = 2;
        color = "pink";
    };

    class Shemagh_Bandit_Checkered_Pink_color : Shemagh_Bandit_ColorBase
    {
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_pink_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_pink_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\shemagh_bandit_checkered_pink_co.paa"
        };
    };
    class Shemagh_Bandit_Pink : Shemagh_Bandit_Checkered_Pink_color
    {
        scope = 2;
        color = "pink";
    };

    class Skinny_Jeans_Chocolate : Skinny_Jeans_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.8;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skinny_jeans_chocolate_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein_ca.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein2_ca.paa"
        };
    };
    class Skinny_Jeans_Coal : Skinny_Jeans_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.8;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skinny_jeans_coal_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein_ca.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein2_ca.paa"
        };
    };
    class Skinny_Jeans_HeartBunnyPetal : Skinny_Jeans_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.8;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skinny_jeans_heartbunnypetal_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein_ca.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein2_ca.paa"
        };
    };
    class Skinny_Jeans_HeartBunnySky : Skinny_Jeans_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.8;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skinny_jeans_heartbunnysky_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein_ca.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein2_ca.paa"
        };
    };
    class Skinny_Jeans_HeartPink : Skinny_Jeans_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.8;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skinny_jeans_heartpink_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein_ca.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein2_ca.paa"
        };
    };
    class Skinny_Jeans_Lime : Skinny_Jeans_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.8;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skinny_jeans_lime_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein_ca.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein2_ca.paa"
        };
    };
    class Skinny_Jeans_PurpleDark : Skinny_Jeans_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.8;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skinny_jeans_purpledark_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein_ca.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein2_ca.paa"
        };
    };
    class Skinny_Jeans_RedBunny : Skinny_Jeans_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.8;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skinny_jeans_redbunny_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein_ca.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein2_ca.paa"
        };
    };
    class Skinny_Jeans_TealBunny : Skinny_Jeans_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.8;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skinny_jeans_tealbunny_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein_ca.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein2_ca.paa"
        };
    };
    class Skinny_Jeans_YellowBunny : Skinny_Jeans_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.8;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skinny_jeans_yellowbunny_co.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein_ca.paa",
            "Survivalists_Retextures\externalmodretextures\windstrides\data\skein2_ca.paa"
        };
    };
    class Scarf_Green : Scarf_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\scarf_green_co.paa" };
    };
    class Scarf_purple : Scarf_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\scarf_purple_co.paa" };
    };
    class Scarf_White_Plaid : Scarf_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\scarf_white_plaid_co.paa" };
    };
    class Scarf_Red_Plaid : Scarf_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\scarf_red_plaid_co.paa" };
    };
    class Scarf_blue_yellow : Scarf_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\scarf_blue_Yellow_co.paa" };
    };
    class Scarf_red : Scarf_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\scarf_red_co.paa" };
    };
    class Scarf_pink_yellow : Scarf_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.85000002;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\scarf_pink_Yellow_co.paa" };
    };
    class Scarf_bluekitty : Scarf_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\scarf_bluekitty_co.paa" };
    };
    class Scarf_greykitty : Scarf_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\scarf_greykitty_co.paa" };
    };
    class Scarf_pinkkitty : Scarf_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\scarf_pinkkitty_co.paa" };
    };
    class Leather_Cloak_down_blue : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_blue";
        color = "blue";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_blue_co.paa" };
    };
    class Leather_Cloak_up_blue : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_blue";
        color = "blue";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_blue_co.paa" };
    };
    class Leather_Cloak_down_coffee : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_coffee";
        color = "coffee";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_coffee_co.paa" };
    };
    class Leather_Cloak_up_coffee : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_coffee";
        color = "coffee";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_coffee_co.paa" };
    };
    class Leather_Cloak_down_green : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_green";
        color = "green";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_green_co.paa" };
    };
    class Leather_Cloak_up_green : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_green";
        color = "green";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_green_co.paa" };
    };
    class Leather_Cloak_down_grey : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_grey";
        color = "grey";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_grey_co.paa" };
    };
    class Leather_Cloak_up_grey : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_grey";
        color = "grey";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_grey_co.paa" };
    };
    class Leather_Cloak_down_heartsblue : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_heartsblue";
        color = "heartsblue";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_heartsblue_co.paa" };
    };
    class Leather_Cloak_up_heartsblue : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_heartsblue";
        color = "heartsblue";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_heartsblue_co.paa" };
    };
    class Leather_Cloak_down_heartspink : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_heartspink";
        color = "heartspink";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_heartspink_co.paa" };
    };
    class Leather_Cloak_up_heartspink : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_heartspink";
        color = "heartspink";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_heartspink_co.paa" };
    };
    class Leather_Cloak_down_orange : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_orange";
        color = "orange";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_orange_co.paa" };
    };
    class Leather_Cloak_up_orange : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_orange";
        color = "orange";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_orange_co.paa" };
    };
    class Leather_Cloak_down_pink : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_pink";
        color = "pink";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_pink_co.paa" };
    };
    class Leather_Cloak_up_pink : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_pink";
        color = "pink";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_pink_co.paa" };
    };
    class Leather_Cloak_down_purple : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_purple";
        color = "purple";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_purple_co.paa" };
    };
    class Leather_Cloak_up_purple : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_purple";
        color = "purple";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_purple_co.paa" };
    };
    class Leather_Cloak_down_red : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_red";
        color = "red";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_red_co.paa" };
    };
    class Leather_Cloak_up_red : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_red";
        color = "red";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_red_co.paa" };
    };
    class Leather_Cloak_down_snow : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_snow";
        color = "snow";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_snow_co.paa" };
    };
    class Leather_Cloak_up_snow : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_snow";
        color = "snow";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_snow_co.paa" };
    };
    class Leather_Cloak_down_teal : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_teal";
        color = "teal";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_teal_co.paa" };
    };
    class Leather_Cloak_up_teal : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_teal";
        color = "teal";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_teal_co.paa" };
    };
    class Leather_Cloak_down_yellow : Leather_Cloak_down
    {
        scope = 2;
        transformation_hood = "Leather_Cloak_up_yellow";
        color = "yellow";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_yellow_co.paa" };
    };
    class Leather_Cloak_up_yellow : Leather_Cloak_up
    {
        scope = 2;
        transformation_nohood = "Leather_Cloak_down_yellow";
        color = "yellow";
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leather_cloak_yellow_co.paa" };
    };

    class Galife_Pants_Blue : Galife_Pants_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\galife_pants_blue_co.paa" };
    };
    class Galife_Pants_Coal : Galife_Pants_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\galife_pants_Coal_co.paa" };
    };
    class Galife_Pants_Pink : Galife_Pants_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\galife_pants_Pink_co.paa" };
    };
    class Galife_Pants_Green : Galife_Pants_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\galife_pants_Green_co.paa" };
    };
    class Galife_Pants_Wool : Galife_Pants_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\galife_pants_Wool_co.paa" };
    };

    class High_Knee_Sneakers_Blue : High_Knee_Sneakers
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\high_knee_sneakers_blue_co.paa" };
    };
    class High_Knee_Sneakers_Brown : High_Knee_Sneakers
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\high_knee_sneakers_Brown_co.paa" };
    };
    class High_Knee_Sneakers_Green : High_Knee_Sneakers
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\high_knee_sneakers_Green_co.paa" };
    };
    class High_Knee_Sneakers_Pink : High_Knee_Sneakers
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\high_knee_sneakers_Pink_co.paa" };
    };
    class High_Knee_Sneakers_Purple : High_Knee_Sneakers
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\high_knee_sneakers_Purple_co.paa" };
    };
    class Kirza_Boots_Blue : Kirza_Boots_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\kirza_boots_blue_co.paa" };
    };

    class Leggings_Blue : Leggings_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leggings_sports_blue_co.paa" };
    };
    class Leggings_Blue1 : Leggings_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Windstrideclothing\Models\Leggings\data\leggings_blue_co.paa" };
    };
    class Leggings_Adidas : Leggings_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Windstrideclothing\Models\Leggings\data\leggings_sports_co.paa" };
    };
    class Leggings_Red : Leggings_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Windstrideclothing\Models\Leggings\data\leggings_red_co.paa" };
    };
    class Leggings_Purple : Leggings_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Windstrideclothing\Models\Leggings\data\leggings_purple_co.paa" };
    };
    class Leggings_Grey : Leggings_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Windstrideclothing\Models\Leggings\data\fleece_leggings_grey_co.paa" };
    };
    class Leggings_Black : Leggings_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Windstrideclothing\Models\Leggings\data\latex_leggings_black_co.paa" };
    };
    class Leggings_White : Leggings_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Windstrideclothing\Models\Leggings\data\latex_leggings_white_co.paa" };
    };
    class Leggings_AdidasKitty : Leggings_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leggings_sports_kitty_co.paa" };
    };
    class Leggings_AdidasPink : Leggings_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\externalmodretextures\windstrides\data\leggings_sports_pink_co.paa" };
    };
};