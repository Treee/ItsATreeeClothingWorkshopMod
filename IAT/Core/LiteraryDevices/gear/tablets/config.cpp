class CfgPatches
{
    class IAT_Core_LiteraryDevices_Gear_Tablets
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Gear_Books"
        };
    };
};
class CfgVehicles
{
    class ItemBook;

    class IAT_LiteraryDevices_HandHeldTablet_Colorbase : ItemBook
    {
        scope = 0;
        model = "IAT\Core\LiteraryDevices\gear\tablets\iat_handheldtablet.p3d";
        displayName = "Tablet";
        descriptionShort = "An electronic tablet.";
        itemSize[] = { 2,2 };
        rotationFlags = 8;
        booksInArchive[] = {};
        hiddenSelections[] =
        {
            "zbytek",
            "screen"
        };
        hiddenSelectionsTextures[] =
        {
            "IAT\Core\LiteraryDevices\gear\tablets\data\iat_tablet_co.paa",
            "IAT\Core\LiteraryDevices\gear\tablets\data\iat_tablet_console_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "IAT\Core\LiteraryDevices\gear\tablets\data\iat_tablet.rvmat",
            "IAT\Core\LiteraryDevices\gear\tablets\data\iat_tabletglass.rvmat",
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
                        {1,{"IAT\Core\LiteraryDevices\gear\tablets\data\iat_tablet.rvmat","IAT\Core\LiteraryDevices\gear\tablets\data\iat_tabletglass.rvmat"}},
                        {0.69999999,{"IAT\Core\LiteraryDevices\gear\tablets\data\iat_tablet.rvmat","IAT\Core\LiteraryDevices\gear\tablets\data\iat_tabletglass.rvmat"}},
                        {0.5,{"IAT\Core\LiteraryDevices\gear\tablets\data\iat_tablet_damage.rvmat","IAT\Core\LiteraryDevices\gear\tablets\data\iat_tabletglass_damage.rvmat"}},
                        {0.30000001,{"IAT\Core\LiteraryDevices\gear\tablets\data\iat_tablet_damage.rvmat","IAT\Core\LiteraryDevices\gear\tablets\data\iat_tabletglass_damage.rvmat"}},
                        {0,{"IAT\Core\LiteraryDevices\gear\tablets\data\iat_tablet_destruct.rvmat","IAT\Core\LiteraryDevices\gear\tablets\data\iat_tabletglass_destruct.rvmat"}},
                    };
                };
            };
        };
    };

    // ============================================= Tablets
    class IAT_LiteraryDevices_HandHeldTablet_Archive1 : IAT_LiteraryDevices_HandHeldTablet_Colorbase
    {
        scope = 2;
        displayName = "Tablet - Archive 1";
        booksInArchive[] =
        {
            "IAT_LiteraryDevices_Book_CodeBreakers",
            "IAT_LiteraryDevices_Book_RadioEtiquette",
            "IAT_LiteraryDevices_Book_BanditryGuide",
            "IAT_LiteraryDevices_Book_NavigationProtocols",
            "IAT_LiteraryDevices_Book_ZombieSurvivalGuide",
        };
    };
    class IAT_LiteraryDevices_HandHeldTablet_Archive2 : IAT_LiteraryDevices_HandHeldTablet_Colorbase
    {
        scope = 2;
        displayName = "Tablet - Archive 2";
        booksInArchive[] =
        {
            "BookBible",
            "BookTheWarOfTheWorlds",
            "BookAroundTheWorldIn80Days",
            "BookCrimeAndPunishment",
            "BookTheMetamorphosis",
            "BookTheRaven",
            "BookTheArtOfWar",
            "BookRobinsonCrusoe",
            "BookRussian",
            "BookRussianCheatSheet",
        };
    };

};