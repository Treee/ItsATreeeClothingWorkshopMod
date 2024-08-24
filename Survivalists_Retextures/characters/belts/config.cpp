class CfgPatches
{
    class Survivalists_Retextures_Characters_Belts
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Characters",
            "DZ_Characters_Belts",
            "Survivalists_Retextures"
        };
    };
};
class CfgVehicles
{
    class SRP_Elbow_Knee_Pads_ColorBase;
    class SRP_Military_Belt_ColorBase;
    class SRP_Knife_Sheath_ColorBase;
    class SRP_TacticalBelt_ColorBase;
    class SRP_TacticalHolster_ColorBase;
    class SRP_DualTacticalHolster_ColorBase;
    class SRP_Car_WoodenDerby;
    class SRP_FlagBelt_ColorBase;
    class SRP_HuskyTailBelt_ColorBase;

    //======================== MAIN MOD RETEXTURES
    class SRP_Elbow_Knee_Pads_Green : SRP_Elbow_Knee_Pads_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\Pads_Green_CO.paa"
        };
    };
    class SRP_Elbow_Knee_Pads_Black : SRP_Elbow_Knee_Pads_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\Pads_Black_CO.paa"
        };
    };
    class SRP_Elbow_Knee_Pads_Tan : SRP_Elbow_Knee_Pads_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\Pads_Tan_CO.paa"
        };
    };

    class SRP_Military_Belt_Green : SRP_Military_Belt_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\Military_Belt_Green_CO.paa"
        };
    };
    class SRP_Military_Belt_Black : SRP_Military_Belt_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\Military_Belt_Black_CO.paa"
        };
    };
    class SRP_Military_Belt_Tan : SRP_Military_Belt_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\Military_Belt_Tan_CO.paa"
        };
    };

    class SRP_Knife_Sheath_Green : SRP_Knife_Sheath_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\Sheath_Green_CO.paa"
        };
    };
    class SRP_Knife_Sheath_Black : SRP_Knife_Sheath_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\Sheath_Black_CO.paa"
        };
    };
    class SRP_Knife_Sheath_Tan : SRP_Knife_Sheath_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\Sheath_Tan_CO.paa"
        };
    };

    class SRP_TacticalBelt_Green : SRP_TacticalBelt_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\tacticalbelt_Green_co.paa"
        };
    };
    class SRP_TacticalBelt_Black : SRP_TacticalBelt_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\tacticalbelt_Black_co.paa"
        };
    };
    class SRP_TacticalBelt_Tan : SRP_TacticalBelt_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\tacticalbelt_Tan_co.paa"
        };
    };


    class SRP_Car_WoodenDerby_Illusive : SRP_Car_WoodenDerby
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek",
      "personality"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\srp_woodencar_illusive_co.paa"
        };
    };

    class SRP_TacticalHolster_Black : SRP_TacticalHolster_ColorBase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\SRP_Tactical_Holster_Belt_CO.paa"
        };
    };

    class SRP_DualTacticalHolster_Black : SRP_DualTacticalHolster_ColorBase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\SRP_Tactical_Holster_Belt_CO.paa"
        };
    };

    class SRP_FlagBelt_Basic : SRP_FlagBelt_ColorBase
    {
        scope = 2;
    };

    class SRP_HuskyTailBelt_Basic : SRP_HuskyTailBelt_ColorBase
    {
        scope = 2;
    };
    class SRP_HuskyTailBelt_HuskoMatto : SRP_HuskyTailBelt_ColorBase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\characters\belts\data\srp_huskytail_huskomatto_co.paa"
        };
    };
};