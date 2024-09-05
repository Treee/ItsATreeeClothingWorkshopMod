class CfgMods
{
    class IAT_Core_MusicPlus
    {
        type = "mod";
        author = "ItsATreee";
        name = "ItsATreee Crafting Plus Enums";
        dir = "MusicPlus";
        dependencies[] = { "World" };
        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = { "IAT\Core\MusicPlus\scripts\4_world" };
            };
        };
    };
};
class CfgPatches
{
    class IAT_Core_MusicPlus
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
          "DZ_Data",
          "DZ_Scripts",
        };
    };
};