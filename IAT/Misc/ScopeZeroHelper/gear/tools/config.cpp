class CfgPatches
{
    class IAT_ScopeZeroHelper_Gear_Tools
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Scripts",
            "Notes_Gear",//WRDG Notes
        };
    };
};
class CfgVehicles
{
    class Inventory_Base;


    //============================================ WRDG NOTES
    class WrittenNote : Inventory_Base
    {
        scope = 0;
    };
};