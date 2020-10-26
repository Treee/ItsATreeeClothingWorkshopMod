class CfgPatches
{
  class CIA_Clothing {
    units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Characters_Tops",
      "DZ_Characters_Vests"
		};
		author = "ItsATreee";
		name = "CIA_Clothing";
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

  class ItsaTreee_CIA_BomberJacket_Blue: BomberJacket_ColorBase
  {
    scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "CIA_Clothing\data\bomberjacket_blue_co_cia.paa",
      "CIA_Clothing\data\bomberjacket_blue_co_cia.paa",
      "CIA_Clothing\data\bomberjacket_blue_co_cia.paa"
    };
  };

  class ItsaTreee_CIA_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
  {
    scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "CIA_Clothing\data\jumpsuit_top_blue_co_cia.paa",
      "CIA_Clothing\data\jumpsuit_top_blue_co_cia.paa",
      "CIA_Clothing\data\jumpsuit_top_blue_co_cia.paa"
    };
  };

  class ItsaTreee_CIA_M65Jacket_Black: M65Jacket_ColorBase
  {
    scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "CIA_Clothing\data\m65_jacket_black_co_cia.paa",
      "CIA_Clothing\data\m65_jacket_black_co_cia.paa",
      "CIA_Clothing\data\m65_jacket_black_co_cia.paa"
    };
  };

  class ItsaTreee_CIA_PressVest_Blue: PressVest_ColorBase
  {
    scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "CIA_Clothing\data\pressvest_blue_co_cia.paa",
      "CIA_Clothing\data\pressvest_blue_co_cia.paa",
      "CIA_Clothing\data\pressvest_blue_co_cia.paa"
    };
  };

  class ItsaTreee_CIA_PoliceVest: PoliceVest
  {
    scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "CIA_Clothing\data\policevest_co_cia.paa",
      "CIA_Clothing\data\policevest_co_cia.paa",
      "CIA_Clothing\data\policevest_co_cia.paa"
    };
  };

  // class ItsaTreee_CIA_PlateCarrierVest: PlateCarrierVest
	// {
	// 	scope=2;
	// 	visibilityModifier=0.69999999;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"CIA_Clothing\data\ballisticvest_co_cia.paa",
	// 		"CIA_Clothing\data\ballisticvest_co_cia.paa",
	// 		"CIA_Clothing\data\ballisticvest_co_cia.paa"
	// 	};
	// };

  class ItsaTreee_CIA_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"CIA_Clothing\data\tacticalvest2_black_co_cia.paa",
			"CIA_Clothing\data\tacticalvest2_black_co_cia.paa",
			"CIA_Clothing\data\tacticalvest2_black_co_cia.paa"
		};
	};

  class ItsaTreee_CIA_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"CIA_Clothing\data\tacticalvest2_olive_co_cia.paa",
			"CIA_Clothing\data\tacticalvest2_olive_co_cia.paa",
			"CIA_Clothing\data\tacticalvest2_olive_co_cia.paa"
		};
	};
};
