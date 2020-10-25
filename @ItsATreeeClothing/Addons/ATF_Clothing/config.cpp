class CfgPatches
{
  class DZ_Characters_Tops
  {
    units[]=
    {
      "Shirt_CheckRed",
      "Hoodie_Blue",
      "Hoodie_Black",
      "Hoodie_Brown",
      "Hoodie_Green",
      "Hoodie_Grey",
      "Hoodie_Red",
      "MaleTorso",
      "FemaleTorso"
    };
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
        "DZ_Characters"
    };
  };
  class DZ_Characters_Vests
	{
		units[]=
		{
			"TacticalVest",
			"UKAssVest"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};

class CfgVehicles 
{
  class BomberJacket_ColorBase;
  class JumpsuitJacket_ColorBase;
  class M65Jacket_ColorBase;
  
  class PressVest_ColorBase;
  class PoliceVest;
  // class PlateCarrierVest;
  class HighCapacityVest_ColorBase;

  class ItsaTreee_ATF_BomberJacket_Blue: BomberJacket_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "ATF_Clothing\data\bomberjacket_blue_co.paa",
      "ATF_Clothing\data\bomberjacket_blue_co.paa",
      "ATF_Clothing\data\bomberjacket_blue_co.paa"
    };
  };

  class ItsaTreee_ATF_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
  {
    scope=2;
    visibilityModifier=0.80000001;
    hiddenSelectionsTextures[]=
    {
      "ATF_Clothing\data\jumpsuit_top_blue_co.paa",
      "ATF_Clothing\data\jumpsuit_top_blue_co.paa",
      "ATF_Clothing\data\jumpsuit_top_blue_co.paa"
    };
  };

  class ItsaTreee_ATF_M65Jacket_Black: M65Jacket_ColorBase
  {
    scope=2;
    visibilityModifier=0.69999999;
    hiddenSelectionsTextures[]=
    {
      "ATF_Clothing\data\m65_jacket_black_co.paa",
      "ATF_Clothing\data\m65_jacket_black_co.paa",
      "ATF_Clothing\data\m65_jacket_black_co.paa"
    };
  };

  class ItsaTreee_ATF_PressVest_Blue: PressVest_ColorBase
  {
    scope=2;
    visibilityModifier=0.94999999;
    hiddenSelectionsTextures[]=
    {
      "ATF_Clothing\data\pressvest_blue_co.paa",
      "ATF_Clothing\data\pressvest_blue_co.paa",
      "ATF_Clothing\data\pressvest_blue_co.paa"
    };
  };

  class ItsaTreee_ATF_PoliceVest: PoliceVest
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "ATF_Clothing\data\policevest_co.paa",
      "ATF_Clothing\data\policevest_co.paa",
      "ATF_Clothing\data\policevest_co.paa"
    };
  };

  // class ItsaTreee_ATF_PlateCarrierVest: PlateCarrierVest
	// {
	// 	scope=2;
	// 	visibilityModifier=0.69999999;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"ATF_Clothing\data\ballisticvest_co.paa",
	// 		"ATF_Clothing\data\ballisticvest_co.paa",
	// 		"ATF_Clothing\data\ballisticvest_co.paa"
	// 	};
	// };

  class ItsaTreee_ATF_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"ATF_Clothing\data\tacticalvest2_black_co.paa",
			"ATF_Clothing\data\tacticalvest2_black_co.paa",
			"ATF_Clothing\data\tacticalvest2_black_co.paa"
		};
	};

  class ItsaTreee_ATF_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"ATF_Clothing\data\tacticalvest2_olive_co.paa",
			"ATF_Clothing\data\tacticalvest2_olive_co.paa",
			"ATF_Clothing\data\tacticalvest2_olive_co.paa"
		};
	};
};
