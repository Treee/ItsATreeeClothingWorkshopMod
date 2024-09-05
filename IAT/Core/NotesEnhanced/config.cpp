class CfgMods
{
    class IAT_Core_NotesEnhanced
    {
        type = "mod";
        author = "ItsATreee";
        name = "ItsATreee Notes Enhanced";
        dir = "IAT_LiteraryDevices";
        dependencies[] = { "World","Mission" };
        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = { "IAT/Core/NotesEnhanced/scripts/4_world" };
            };
            class missionScriptModule
            {
                value = "";
                files[] = { "IAT/Core/NotesEnhanced/scripts/5_mission" };
            };
        };
    };
};
class CfgPatches
{
    class IAT_Core_NotesEnhanced
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

