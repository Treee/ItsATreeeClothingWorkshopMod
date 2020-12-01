class CfgPatches
{
  class OutLawClothing {
    units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Characters_Tops",
      "DZ_Characters_Vests"
		};
		author = "ItsATreee";
		name = "OutLawClothing";
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

  class IAT_ATF_BomberJacket_Blue: BomberJacket_ColorBase
  {
    scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";    
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\atf\atf_bomberjacket_blue_co.paa",
      "OutLawClothing\data\atf\atf_bomberjacket_blue_co.paa",
      "OutLawClothing\data\atf\atf_bomberjacket_blue_co.paa"
    };
  };
  class IAT_ATF_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
  {
    scope=2;
    displayName = "ATF Jumpsuit Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\atf\atf_jumpsuit_top_blue_co.paa",
      "OutLawClothing\data\atf\atf_jumpsuit_top_blue_co.paa",
      "OutLawClothing\data\atf\atf_jumpsuit_top_blue_co.paa"
    };
  };
  class IAT_ATF_M65Jacket_Black: M65Jacket_ColorBase
  {
    scope=2;
    displayName = "ATF M65 Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\atf\atf_m65_jacket_black_co.paa",
      "OutLawClothing\data\atf\atf_m65_jacket_black_co.paa",
      "OutLawClothing\data\atf\atf_m65_jacket_black_co.paa"
    };
  };
  class IAT_ATF_PressVest_Blue: PressVest_ColorBase
  {
    scope=2;
    displayName = "ATF Press Vest";
    descriptionShort = "A press vest with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\atf\atf_pressvest_blue_co.paa",
      "OutLawClothing\data\atf\atf_pressvest_blue_co.paa",
      "OutLawClothing\data\atf\atf_pressvest_blue_co.paa"
    };
    hiddenSelectionsMaterials[]=
		{
			"OutLawClothing\data\pressvest.rvmat",
			"OutLawClothing\data\pressvest.rvmat",
      "OutLawClothing\data\pressvest.rvmat"
		};
  };
  class IAT_ATF_PoliceVest: PoliceVest
  {
    scope=2;
    displayName = "ATF Police Vest";
    descriptionShort = "A police vest with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\atf\atf_policevest_co.paa",
      "OutLawClothing\data\atf\atf_policevest_co.paa",
      "OutLawClothing\data\atf\atf_policevest_co.paa"
    };
    hiddenSelectionsMaterials[]=
		{
			"OutLawClothing\data\policevest.rvmat",
			"OutLawClothing\data\policevest.rvmat",
      "OutLawClothing\data\policevest.rvmat"
		};
  };
  // class IAT_ATF_PlateCarrierVest: PlateCarrierVest
	// {
	// 	scope=2;
	// 	visibilityModifier=0.69999999;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"OutLawClothing\data\atf\atf_ballisticvest_co.paa",
	// 		"OutLawClothing\data\atf\atf_ballisticvest_co.paa",
	// 		"OutLawClothing\data\atf\atf_ballisticvest_co.paa"
	// 	};
	// };
  class IAT_ATF_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "ATF Black Vest";
    descriptionShort = "A vest with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\atf\atf_tacticalvest2_black_co.paa",
			"OutLawClothing\data\atf\atf_tacticalvest2_black_co.paa",
			"OutLawClothing\data\atf\atf_tacticalvest2_black_co.paa"
		};
	};
  class IAT_ATF_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "ATF Olive Vest";
    descriptionShort = "A vest with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\atf\atf_tacticalvest2_olive_co.paa",
			"OutLawClothing\data\atf\atf_tacticalvest2_olive_co.paa",
			"OutLawClothing\data\atf\atf_tacticalvest2_olive_co.paa"
		};
	};
  
  class IAT_CIA_BomberJacket_Blue: BomberJacket_ColorBase
  {
    scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\cia\cia_bomberjacket_blue_co.paa",
      "OutLawClothing\data\cia\cia_bomberjacket_blue_co.paa",
      "OutLawClothing\data\cia\cia_bomberjacket_blue_co.paa"
    };
  };
  class IAT_CIA_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
  {
    scope=2;
    displayName = "CIA Jumpsuit Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\cia\cia_jumpsuit_top_blue_co.paa",
      "OutLawClothing\data\cia\cia_jumpsuit_top_blue_co.paa",
      "OutLawClothing\data\cia\cia_jumpsuit_top_blue_co.paa"
    };
  };
  class IAT_CIA_M65Jacket_Black: M65Jacket_ColorBase
  {
    scope=2;
    displayName = "CIA M65 Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\cia\cia_m65_jacket_black_co.paa",
      "OutLawClothing\data\cia\cia_m65_jacket_black_co.paa",
      "OutLawClothing\data\cia\cia_m65_jacket_black_co.paa"
    };
  };
  class IAT_CIA_PressVest_Blue: PressVest_ColorBase
  {
    scope=2;
    displayName = "CIA Press Vest";
    descriptionShort = "A press vest with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\cia\cia_pressvest_blue_co.paa",
      "OutLawClothing\data\cia\cia_pressvest_blue_co.paa",
      "OutLawClothing\data\cia\cia_pressvest_blue_co.paa"
    };
    hiddenSelectionsMaterials[]=
		{
			"OutLawClothing\data\pressvest.rvmat",
			"OutLawClothing\data\pressvest.rvmat",
      "OutLawClothing\data\pressvest.rvmat"
		};
  };
  class IAT_CIA_PoliceVest: PoliceVest
  {
    scope=2;
    displayName = "CIA Police Vest";
    descriptionShort = "A police vest with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\cia\cia_policevest_co.paa",
      "OutLawClothing\data\cia\cia_policevest_co.paa",
      "OutLawClothing\data\cia\cia_policevest_co.paa"
    };
    hiddenSelectionsMaterials[]=
		{
			"OutLawClothing\data\policevest.rvmat",
			"OutLawClothing\data\policevest.rvmat",
      "OutLawClothing\data\policevest.rvmat"
		};
  };
  // class IAT_CIA_PlateCarrierVest: PlateCarrierVest
	// {
	// 	scope=2;
	// 	visibilityModifier=0.69999999;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"OutLawClothing\data\cia\cia_ballisticvest_co.paa",
	// 		"OutLawClothing\data\cia\cia_ballisticvest_co.paa",
	// 		"OutLawClothing\data\cia\cia_ballisticvest_co.paa"
	// 	};
	// };
  class IAT_CIA_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "CIA Black Vest";
    descriptionShort = "A vest with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\cia\cia_tacticalvest2_black_co.paa",
			"OutLawClothing\data\cia\cia_tacticalvest2_black_co.paa",
			"OutLawClothing\data\cia\cia_tacticalvest2_black_co.paa"
		};
	};
  class IAT_CIA_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "CIA Olive Vest";
    descriptionShort = "A vest with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\cia\cia_tacticalvest2_olive_co.paa",
			"OutLawClothing\data\cia\cia_tacticalvest2_olive_co.paa",
			"OutLawClothing\data\cia\cia_tacticalvest2_olive_co.paa"
		};
	};
  
  class IAT_FBI_BomberJacket_Blue: BomberJacket_ColorBase
  {
    scope=2;
    displayName = "FBI Bomber Jacket";
    descriptionShort = "A jacket with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\fbi\fbi_bomberjacket_blue_co.paa",     // on-ground texture
      "OutLawClothing\data\fbi\fbi_bomberjacket_blue_co.paa",     // on-character texture
      "OutLawClothing\data\fbi\fbi_bomberjacket_blue_co.paa"      // on-character texture
    };
  };
  class IAT_FBI_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
  {
    scope=2;
    displayName = "FBI Jumpsuit Jacket";
    descriptionShort = "A jacket with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\fbi\fbi_jumpsuit_top_blue_co.paa",
      "OutLawClothing\data\fbi\fbi_jumpsuit_top_blue_co.paa",
      "OutLawClothing\data\fbi\fbi_jumpsuit_top_blue_co.paa"
    };
  };
  class IAT_FBI_M65Jacket_Black: M65Jacket_ColorBase
  {
    scope=2;
    displayName = "FBI M65 Jacket";
    descriptionShort = "A jacket with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\fbi\fbi_m65_jacket_black_co.paa",
      "OutLawClothing\data\fbi\fbi_m65_jacket_black_co.paa",
      "OutLawClothing\data\fbi\fbi_m65_jacket_black_co.paa"
    };
  };
  class IAT_FBI_PressVest_Blue: PressVest_ColorBase
  {
    scope=2;
    displayName = "FBI Press Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\fbi\fbi_pressvest_blue_co.paa",
      "OutLawClothing\data\fbi\fbi_pressvest_blue_co.paa",
      "OutLawClothing\data\fbi\fbi_pressvest_blue_co.paa"
    };
    hiddenSelectionsMaterials[]=
		{
			"OutLawClothing\data\pressvest.rvmat",
			"OutLawClothing\data\pressvest.rvmat",
      "OutLawClothing\data\pressvest.rvmat"
		};
  };
  class IAT_FBI_PoliceVest: PoliceVest
  {
    scope=2;
    displayName = "FBI Police Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\fbi\fbi_policevest_co.paa",
      "OutLawClothing\data\fbi\fbi_policevest_co.paa",
      "OutLawClothing\data\fbi\fbi_policevest_co.paa"
    };
    hiddenSelectionsMaterials[]=
		{
			"OutLawClothing\data\policevest.rvmat",
			"OutLawClothing\data\policevest.rvmat",
      "OutLawClothing\data\policevest.rvmat"
		};
  };
  // class IAT_FBI_PlateCarrierVest: PlateCarrierVest
	// {
	// 	scope=2;
	// 	visibilityModifier=0.69999999;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"OutLawClothing\data\fbi\fbi_ballisticvest_co.paa",
	// 		"OutLawClothing\data\fbi\fbi_ballisticvest_co.paa",
	// 		"OutLawClothing\data\fbi\fbi_ballisticvest_co.paa"
	// 	};
	// };
  class IAT_FBI_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "FBI Black Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\fbi\fbi_tacticalvest2_black_co.paa",
			"OutLawClothing\data\fbi\fbi_tacticalvest2_black_co.paa",
			"OutLawClothing\data\fbi\fbi_tacticalvest2_black_co.paa"
		};
	};
  class IAT_FBI_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "FBI Olive Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\fbi\fbi_tacticalvest2_olive_co.paa",
			"OutLawClothing\data\fbi\fbi_tacticalvest2_olive_co.paa",
			"OutLawClothing\data\fbi\fbi_tacticalvest2_olive_co.paa"
		};
	};

};
