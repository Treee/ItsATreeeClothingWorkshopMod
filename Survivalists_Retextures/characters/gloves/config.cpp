class CfgPatches
{
    class Survivalists_Retextures_Characters_Gloves
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Characters",
            "DZ_Characters_Gloves",
            "Survivalists_Retextures"
        };
    };
};
class CfgVehicles
{
    class OMNOGloves_ColorBase;
    class WorkingGloves_ColorBase;
    class NBCGloves_ColorBase;
    class TacticalGloves_ColorBase;
    class LeatherGloves_ColorBase;
    class SurgicalGloves_ColorBase;
    class HandsCover_Improvised;

    class SRP_BoxingGloves_Colorbase;

    class NBCGloves_Blue : NBCGloves_ColorBase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\nbc_gloves_blue_co.paa",
            "Survivalists_Retextures\characters\gloves\data\nbc_gloves_blue_co.paa",
            "Survivalists_Retextures\characters\gloves\data\nbc_gloves_blue_co.paa"
        };
    };
    class NBCGloves_Gray : NBCGloves_ColorBase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa",
            "\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa",
            "\dz\characters\gloves\Data\NBC_Gloves_grey_co.paa"
        };
    };
    class NBCGloves_Yellow : NBCGloves_ColorBase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\nbc_gloves_yellow_co.paa",
            "Survivalists_Retextures\characters\gloves\data\nbc_gloves_yellow_co.paa",
            "Survivalists_Retextures\characters\gloves\data\nbc_gloves_yellow_co.paa"
        };
    };
    class NBCGloves_White : NBCGloves_ColorBase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "camoGround",
            "camoMale",
            "camoFemale"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\nbc_gloves_white_co.paa",
            "Survivalists_Retextures\characters\gloves\data\nbc_gloves_white_co.paa",
            "Survivalists_Retextures\characters\gloves\data\nbc_gloves_white_co.paa"
        };
    };

    class OMNOGloves_Green : OMNOGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\Denglove_green_co.paa",
            "Survivalists_Retextures\characters\gloves\data\Denglove_green_co.paa",
            "Survivalists_Retextures\characters\gloves\data\Denglove_green_co.paa"
        };
    };
    class OMNOGloves_Black : OMNOGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\denglove_co.paa",
            "Survivalists_Retextures\characters\gloves\data\denglove_co.paa",
            "Survivalists_Retextures\characters\gloves\data\denglove_co.paa"
        };
    };

    class SRP_BoxingGloves_Red : SRP_BoxingGloves_Colorbase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Retextures\characters\gloves\data\srp_boxinggloves_co.paa"
        };
    };
    class SRP_BoxingGloves_Blue : SRP_BoxingGloves_Colorbase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Retextures\characters\gloves\data\srp_boxinggloves_blue_co.paa"
        };
    };
    class SRP_BoxingGloves_Green : SRP_BoxingGloves_Colorbase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Retextures\characters\gloves\data\srp_boxinggloves_green_co.paa"
        };
    };
    class SRP_BoxingGloves_Grey : SRP_BoxingGloves_Colorbase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Retextures\characters\gloves\data\srp_boxinggloves_grey_co.paa"
        };
    };
    class SRP_BoxingGloves_Pink : SRP_BoxingGloves_Colorbase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Retextures\characters\gloves\data\srp_boxinggloves_pink_co.paa"
        };
    };

    class TacticalGloves_MTP : TacticalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\TacticalG01_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG01_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG01_co.paa"
        };
    };
    class TacticalGloves_ATAC : TacticalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\TacticalG04_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG04_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG04_co.paa"
        };
    };
    class TacticalGloves_ATACSFG : TacticalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\TacticalG38_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG38_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG38_co.paa"
        };
    };
    class TacticalGloves_USNAOR2 : TacticalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\TacticalG09_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG09_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG09_co.paa"
        };
    };
    class TacticalGloves_USNAOR1 : TacticalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\TacticalG10_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG10_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG10_co.paa"
        };
    };
    class TacticalGloves_SURPAT : TacticalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\TacticalG12_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG12_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG12_co.paa"
        };
    };
    class TacticalGloves_MARPATWinter : TacticalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\TacticalG19_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG19_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG19_co.paa"
        };
    };
    class TacticalGloves_EMP6 : TacticalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\TacticalG57_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG57_co.paa",
            "Survivalists_Retextures\characters\gloves\data\TacticalG57_co.paa"
        };
    };
    class TacticalGloves_Officer : TacticalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\Dillard_OfficerGloves_co.paa",
            "Survivalists_Retextures\characters\gloves\data\Dillard_OfficerGloves_co.paa",
            "Survivalists_Retextures\characters\gloves\data\Dillard_OfficerGloves_co.paa"
        };
    };

    class WorkingGloves_White : WorkingGloves_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.89999998;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\WorkingGloves_white_co.paa",
            "Survivalists_Retextures\characters\gloves\data\WorkingGloves_white_co.paa",
            "Survivalists_Retextures\characters\gloves\data\WorkingGloves_white_co.paa"
        };
    };
    class WorkingGloves_Red : WorkingGloves_ColorBase
    {
        scope = 2;
        visibilityModifier = 0.89999998;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\WorkingGloves_red_co.paa",
            "Survivalists_Retextures\characters\gloves\data\WorkingGloves_red_co.paa",
            "Survivalists_Retextures\characters\gloves\data\WorkingGloves_red_co.paa"
        };
    };

    class LeatherGloves_Choco : LeatherGloves_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "camomale","camofemale","camoground" };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_choco_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_choco_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_choco_co.paa",
        };
    };
    class LeatherGloves_Lime : LeatherGloves_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "camomale","camofemale","camoground" };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Lime_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Lime_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Lime_co.paa",
        };
    };
    class LeatherGloves_Orange : LeatherGloves_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "camomale","camofemale","camoground" };
        hiddenSelectionsTextures[] =
        { ,
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Orange_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Orange_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Orange_co.paa",
        };
    };
    class LeatherGloves_Pink : LeatherGloves_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "camomale","camofemale","camoground" };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Pink_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Pink_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Pink_co.paa",
        };
    };
    class LeatherGloves_Purple : LeatherGloves_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "camomale","camofemale","camoground" };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Purple_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Purple_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Purple_co.paa",
        };
    };
    class LeatherGloves_Storm : LeatherGloves_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "camomale","camofemale","camoground" };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Storm_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Storm_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Storm_co.paa",
        };
    };
    class LeatherGloves_Yellow : LeatherGloves_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "camomale","camofemale","camoground" };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Yellow_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Yellow_co.paa",
            "Survivalists_Retextures\characters\gloves\data\leather_gloves_Yellow_co.paa",
        };
    };

    class SurgicalGloves_SkyBlue : SurgicalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_blue_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_blue_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_blue_co.paa"
        };
    };
    class SurgicalGloves_Coal : SurgicalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_coal_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_coal_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_coal_co.paa"
        };
    };
    class SurgicalGloves_Lime : SurgicalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_green_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_green_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_green_co.paa"
        };
    };
    class SurgicalGloves_LightGreen : SurgicalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_lime_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_lime_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_lime_co.paa"
        };
    };
    class SurgicalGloves_Orange : SurgicalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_orange_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_orange_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_orange_co.paa"
        };
    };
    class SurgicalGloves_Pink : SurgicalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_pink_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_pink_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_pink_co.paa"
        };
    };
    class SurgicalGloves_Purple : SurgicalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_purple_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_purple_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_purple_co.paa"
        };
    };
    class SurgicalGloves_Red : SurgicalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_red_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_red_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_red_co.paa"
        };
    };
    class SurgicalGloves_Yellow : SurgicalGloves_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_yellow_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_yellow_co.paa",
            "Survivalists_Retextures\characters\gloves\data\surgical_gloves_yellow_co.paa"
        };
    };

    class HandsCover_Improvised_green : HandsCover_Improvised
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\characters\gloves\data\handscover_improvised_green_CO.paa","Survivalists_Retextures\characters\gloves\data\handscover_improvised_green_CO.paa","Survivalists_Retextures\characters\gloves\data\handscover_improvised_green_CO.paa" };
    };
    class HandsCover_Improvised_black : HandsCover_Improvised
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\characters\gloves\data\handscover_improvised_black_CO.paa","Survivalists_Retextures\characters\gloves\data\handscover_improvised_black_CO.paa","Survivalists_Retextures\characters\gloves\data\handscover_improvised_black_CO.paa" };
    };
    class HandsCover_Improvised_orange : HandsCover_Improvised
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\characters\gloves\data\handscover_improvised_orange_CO.paa","Survivalists_Retextures\characters\gloves\data\handscover_improvised_orange_CO.paa","Survivalists_Retextures\characters\gloves\data\handscover_improvised_orange_CO.paa" };
    };
    class HandsCover_Improvised_blue : HandsCover_Improvised
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\characters\gloves\data\handscover_improvised_blue_CO.paa","Survivalists_Retextures\characters\gloves\data\handscover_improvised_blue_CO.paa","Survivalists_Retextures\characters\gloves\data\handscover_improvised_blue_CO.paa" };
    };
    class HandsCover_Improvised_Red : HandsCover_Improvised
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\characters\gloves\data\handscover_improvised_red_CO.paa","Survivalists_Retextures\characters\gloves\data\handscover_improvised_red_CO.paa","Survivalists_Retextures\characters\gloves\data\handscover_improvised_red_CO.paa" };
    };

};
