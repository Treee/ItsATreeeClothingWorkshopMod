class CfgPatches
{
    class IAT_Core_LiteraryDevices_Gear_Scrolls
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

    class IAT_LiteraryDevices_Scroll_Colorbase : ItemBook
    {
        scope = 0;
        model = "IAT\Core\LiteraryDevices\gear\scrolls\iat_scroll.p3d";
        author = "Author";
        title = "ScrollTitle";
        displayName = "Worn Scroll";
        file = "IAT\Core\LiteraryDevices\gear\scrolls\data\iat_scroll.html";
        descriptionShort = "A worn scroll.";
        itemSize[] = { 1,2 };
        rotationFlags = 8;
        hiddenSelections[] =
        {
            "zbytek",
            "ring"
        };
        hiddenSelectionsTextures[] =
        {
            "IAT\Core\LiteraryDevices\gear\scrolls\data\iat_scroll_co.paa",
            "IAT\Core\LiteraryDevices\gear\scrolls\data\iat_scroll_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "IAT\Core\LiteraryDevices\gear\scrolls\data\iat_scroll.rvmat",
            "IAT\Core\LiteraryDevices\gear\scrolls\data\iat_scrollring.rvmat",
        };
    };

    // ============================================= SCROLLS
    class IAT_LiteraryDevices_Scroll_CarePoem : IAT_LiteraryDevices_Scroll_Colorbase
    {
        scope = 2;
        title = "Care";
        displayName = "Care";
        author = "Unknown";
        file = "Survivalists_Books\gear\scrolls\data\scroll_Care_Poem.html";
    };
    class IAT_LiteraryDevices_Scroll_DarknessPoem : IAT_LiteraryDevices_Scroll_Colorbase
    {
        scope = 2;
        title = "The Darkness Among Us";
        displayName = "The Darkness Among Us";
        author = "Unknown";
        file = "Survivalists_Books\gear\scrolls\data\scroll_Darkness_Among_Us_Poem.html";
    };
};