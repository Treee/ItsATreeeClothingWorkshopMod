class CfgMods
{
    class IAT_Core_Fishing
    {
        type = "mod";
        author = "ItsATreee";
        name = "ItsATreee Fishing";
        dir = "Fishing";
        dependencies[] = { "World" };
        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = { "IAT\Core\Fishing\scripts\4_world" };
            };
        };
    };
};
class CfgPatches
{
    class IAT_Core_Fishing
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
          "DZ_Data",
          "DZ_Scripts"
        };
    };
};
class CfgVehicles
{
    class EffectArea;
    class IAT_Core_Fishing_HotSpotArea_Static : EffectArea
    {
        scope = 2;
    };
    class IAT_Core_Fishing_ClamSpotArea_Static : EffectArea
    {
        scope = 2;
    };
};