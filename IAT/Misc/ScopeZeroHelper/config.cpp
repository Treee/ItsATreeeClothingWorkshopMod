class CfgMods
{
    class IAT_ScopeZeroHelper
    {
        type = "mod";
        author = "ItsATreee";
        name = "ItsATreee Delete Object On Ruined";
        dir = "IAT_ScopeZeroHelper";
        dependencies[] = { "World" };
        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = { "IAT/Misc/ScopeZeroHelper/scripts/4_world" };
            };
        };
    };
};
class CfgPatches
{
    class IAT_ScopeZeroHelper
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