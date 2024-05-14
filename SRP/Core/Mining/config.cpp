class CfgMods
{
    class SRP_Core_Mining
    {
        type = "mod";
        author = "ItsATreee";
        name = "SRP_Core_Mining";
        dir = "SRP_Core_Mining";
    };
};
class CfgPatches
{
    class SRP_Core_Mining
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