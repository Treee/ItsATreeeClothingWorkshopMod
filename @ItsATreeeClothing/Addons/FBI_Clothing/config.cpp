class CfgPatches
{
  class FBI_Clothing {
    units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Characters_Tops",
      "DZ_Characters_Vests"
		};
		author = "ItsATreee";
		name = "Treee";
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

  // https://github.com/BohemiaInteractive/DayZ-Samples/blob/master/Test_ClothingRetexture/config.cpp

  class ItsaTreee_FBI_BomberJacket_Blue: BomberJacket_ColorBase
  {
    scope=2;
    displayName = "FBI Bomber Jacket";
    descriptionShort = "A jacket with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "FBI_Clothing\data\bomberjacket_blue_co_fbi.paa",     // on-ground texture
      "FBI_Clothing\data\bomberjacket_blue_co_fbi.paa",     // on-character texture
      "FBI_Clothing\data\bomberjacket_blue_co_fbi.paa"      // on-character texture
    };
  };

  class ItsaTreee_FBI_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
  {
    scope=2;
    displayName = "FBI Jumpsuit Jacket";
    descriptionShort = "A jacket with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "FBI_Clothing\data\jumpsuit_top_blue_co_fbi.paa",
      "FBI_Clothing\data\jumpsuit_top_blue_co_fbi.paa",
      "FBI_Clothing\data\jumpsuit_top_blue_co_fbi.paa"
    };
  };

  class ItsaTreee_FBI_M65Jacket_Black: M65Jacket_ColorBase
  {
    scope=2;
    displayName = "FBI M65 Jacket";
    descriptionShort = "A jacket with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "FBI_Clothing\data\m65_jacket_black_co_fbi.paa",
      "FBI_Clothing\data\m65_jacket_black_co_fbi.paa",
      "FBI_Clothing\data\m65_jacket_black_co_fbi.paa"
    };
  };

  class ItsaTreee_FBI_PressVest_Blue: PressVest_ColorBase
  {
    scope=2;
    displayName = "FBI Press Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "FBI_Clothing\data\pressvest_blue_co_fbi.paa",
      "FBI_Clothing\data\pressvest_blue_co_fbi.paa",
      "FBI_Clothing\data\pressvest_blue_co_fbi.paa"
    };
  };

  class ItsaTreee_FBI_PoliceVest: PoliceVest
  {
    scope=2;
    displayName = "FBI Police Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "FBI_Clothing\data\policevest_co_fbi.paa",
      "FBI_Clothing\data\policevest_co_fbi.paa",
      "FBI_Clothing\data\policevest_co_fbi.paa"
    };
  };

  // class ItsaTreee_FBI_PlateCarrierVest: PlateCarrierVest
	// {
	// 	scope=2;
	// 	visibilityModifier=0.69999999;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"FBI_Clothing\data\ballisticvest_co_fbi.paa",
	// 		"FBI_Clothing\data\ballisticvest_co_fbi.paa",
	// 		"FBI_Clothing\data\ballisticvest_co_fbi.paa"
	// 	};
	// };

  class ItsaTreee_FBI_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "FBI High Capacity Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"FBI_Clothing\data\tacticalvest2_black_co_fbi.paa",
			"FBI_Clothing\data\tacticalvest2_black_co_fbi.paa",
			"FBI_Clothing\data\tacticalvest2_black_co_fbi.paa"
		};
	};

  class ItsaTreee_FBI_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "FBI High Capacity Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"FBI_Clothing\data\tacticalvest2_olive_co_fbi.paa",
			"FBI_Clothing\data\tacticalvest2_olive_co_fbi.paa",
			"FBI_Clothing\data\tacticalvest2_olive_co_fbi.paa"
		};
	};
};
