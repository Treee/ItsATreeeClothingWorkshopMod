class CfgPatches
{
  class ATF_Clothing {
    units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Characters_Tops",
      "DZ_Characters_Vests"
		};
		author = "ItsATreee";
		name = "ATF_Clothing";
		url = "https://github.com/Treee/ItsATreeeDayZWorkshopMods/tree/master/ItsATreeeClothingSource";
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
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";    
    hiddenSelectionsTextures[]=
    {
      "ATF_Clothing\data\bomberjacket_blue_atf_co.paa",
      "ATF_Clothing\data\bomberjacket_blue_atf_co.paa",
      "ATF_Clothing\data\bomberjacket_blue_atf_co.paa"
    };
  };

  class ItsaTreee_ATF_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
  {
    scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "ATF_Clothing\data\jumpsuit_top_blue_atf_co.paa",
      "ATF_Clothing\data\jumpsuit_top_blue_atf_co.paa",
      "ATF_Clothing\data\jumpsuit_top_blue_atf_co.paa"
    };
  };

  class ItsaTreee_ATF_M65Jacket_Black: M65Jacket_ColorBase
  {
    scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "ATF_Clothing\data\m65_jacket_black_atf_co.paa",
      "ATF_Clothing\data\m65_jacket_black_atf_co.paa",
      "ATF_Clothing\data\m65_jacket_black_atf_co.paa"
    };
  };

  class ItsaTreee_ATF_PressVest_Blue: PressVest_ColorBase
  {
    scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "ATF_Clothing\data\pressvest_blue_atf_co.paa",
      "ATF_Clothing\data\pressvest_blue_atf_co.paa",
      "ATF_Clothing\data\pressvest_blue_atf_co.paa"
    };
  };

  class ItsaTreee_ATF_PoliceVest: PoliceVest
  {
    scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "ATF_Clothing\data\policevest_atf_co.paa",
      "ATF_Clothing\data\policevest_atf_co.paa",
      "ATF_Clothing\data\policevest_atf_co.paa"
    };
  };

  // class ItsaTreee_ATF_PlateCarrierVest: PlateCarrierVest
	// {
	// 	scope=2;
	// 	visibilityModifier=0.69999999;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"ATF_Clothing\data\ballisticvest_atf_co.paa",
	// 		"ATF_Clothing\data\ballisticvest_atf_co.paa",
	// 		"ATF_Clothing\data\ballisticvest_atf_co.paa"
	// 	};
	// };

  class ItsaTreee_ATF_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"ATF_Clothing\data\tacticalvest2_black_atf_co.paa",
			"ATF_Clothing\data\tacticalvest2_black_atf_co.paa",
			"ATF_Clothing\data\tacticalvest2_black_atf_co.paa"
		};
	};

  class ItsaTreee_ATF_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"ATF_Clothing\data\tacticalvest2_olive_atf_co.paa",
			"ATF_Clothing\data\tacticalvest2_olive_atf_co.paa",
			"ATF_Clothing\data\tacticalvest2_olive_atf_co.paa"
		};
	};
};
