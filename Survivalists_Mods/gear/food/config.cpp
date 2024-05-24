class CfgPatches
{
    class Survivalists_Mods_Gear_Food
    {
        units[] = {	};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
      "DZ_Gear_Food"
        };
    };
};
class CfgVehicles
{
    class Edible_Base;
    ///=========================================== MOVE TO CONSUMABLES
    class SRP_CrushedHerb_Colorbase : Edible_Base
    {
        scope = 0;
        displayName = "Crushed Herbs";
        descriptionShort = "Herbs that have been pulverized by a mortar and pestle.";
        model = "Survivalists_Mods\gear\food\srp_crushedherb.p3d";
        color = "base";
        weight = 0;
        itemSize[] = { 1,1 };
        stackedUnit = "pc.";
        absorbency = 0.2;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 200;
        canBeSplit = 1;
        inventorySlot[] =
        {
          "SRP_Flower1",
          "SRP_CrushedPowder1",
          "SRP_CrushedPowder2",
          "SRP_CrushedPowder3",
          "SRP_CrushedPowder4",
          "SRP_CrushedPowder5",
        };
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\food\data\srp_crushedherb_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {
            {	1.0,{"Survivalists_Mods\gear\food\data\srp_crushedherb.rvmat"}},
            {	0.69999999,{"Survivalists_Mods\gear\food\data\srp_crushedherb.rvmat"}},
            {	0.5,{"Survivalists_Mods\gear\food\data\srp_crushedherb_damage.rvmat"}},
            {	0.30000001,{"Survivalists_Mods\gear\food\data\srp_crushedherb_damage.rvmat"}},
            {	0.0,{"Survivalists_Mods\gear\food\data\srp_crushedherb_damage.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_CrushedHerb_Brookmint : SRP_CrushedHerb_Colorbase
    {
        scope = 2;
        displayName = "Crushed Herbs - Brookmint";
        color = "brookmint";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\food\data\srp_crushedherb_brookmint_co.paa"
        };
    };
    class SRP_CrushedHerb_Dock : SRP_CrushedHerb_Colorbase
    {
        scope = 2;
        displayName = "Crushed Herbs - Dock";
        color = "dock";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\food\data\srp_crushedherb_dock_co.paa"
        };
    };
    class SRP_CrushedHerb_GreenAmanita : SRP_CrushedHerb_Colorbase
    {
        scope = 2;
        displayName = "Crushed Herbs - Green Amanita";
        color = "greenamanita";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\food\data\srp_crushedherb_greenamanita_co.paa"
        };
    };
    class SRP_CrushedHerb_Mint : SRP_CrushedHerb_Colorbase
    {
        scope = 2;
        displayName = "Crushed Herbs - Mint";
        color = "mint";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\food\data\srp_crushedherb_mint_co.paa"
        };
    };
    class SRP_CrushedHerb_Ribwort : SRP_CrushedHerb_Colorbase
    {
        scope = 2;
        displayName = "Crushed Herbs - Ribwort";
        color = "ribwort";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\food\data\srp_crushedherb_ribwort_co.paa"
        };
    };
    class SRP_CrushedHerb_Rosemary : SRP_CrushedHerb_Colorbase
    {
        scope = 2;
        displayName = "Crushed Herbs - Rosemary";
        color = "rosemary";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\food\data\srp_crushedherb_rosemary_co.paa"
        };
    };
    class SRP_CrushedHerb_Valerian : SRP_CrushedHerb_Colorbase
    {
        scope = 2;
        displayName = "Crushed Herbs - Valerian";
        color = "valerian";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\food\data\srp_crushedherb_valerian_co.paa"
        };
    };
    class SRP_CrushedHerb_Yarrow : SRP_CrushedHerb_Colorbase
    {
        scope = 2;
        displayName = "Crushed Herbs - Yarrow";
        color = "yarrow";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\food\data\srp_crushedherb_yarrow_co.paa"
        };
    };
    class SRP_CrushedHerb_SRP_PlantPulp : SRP_CrushedHerb_Colorbase
    {
        scope = 2;
        displayName = "Crushed Plant Pulp";
        descriptionShort = "Finely crushed plant material that has been pulverized by a mortar and pestle.";
        color = "SRP_PlantPulp";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\food\data\srp_crushedherb_co.paa"
        };
    };

};