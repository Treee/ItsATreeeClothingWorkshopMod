class CfgMods
{
    class IAT_Core_LiteraryDevices
    {
        type = "mod";
        author = "ItsATreee";
        name = "ItsATreee Literary Devices";
        dir = "IAT_LiteraryDevices";
        dependencies[] = { "World","Mission" };
        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = { "IAT/Core/LiteraryDevices/scripts/4_world" };
            };
            class missionScriptModule
            {
                value = "";
                files[] = { "IAT/Core/LiteraryDevices/scripts/5_mission" };
            };
        };
    };
};
class CfgPatches
{
    class IAT_Core_LiteraryDevices
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

