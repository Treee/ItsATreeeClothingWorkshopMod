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
      "OutLawClothing\data\atf\bomberjacket_blue_atf_co.paa",
      "OutLawClothing\data\atf\bomberjacket_blue_atf_co.paa",
      "OutLawClothing\data\atf\bomberjacket_blue_atf_co.paa"
    };
  };
  class IAT_ATF_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
  {
    scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\atf\jumpsuit_top_blue_atf_co.paa",
      "OutLawClothing\data\atf\jumpsuit_top_blue_atf_co.paa",
      "OutLawClothing\data\atf\jumpsuit_top_blue_atf_co.paa"
    };
  };
  class IAT_ATF_M65Jacket_Black: M65Jacket_ColorBase
  {
    scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\atf\m65_jacket_black_atf_co.paa",
      "OutLawClothing\data\atf\m65_jacket_black_atf_co.paa",
      "OutLawClothing\data\atf\m65_jacket_black_atf_co.paa"
    };
  };
  class IAT_ATF_PressVest_Blue: PressVest_ColorBase
  {
    scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\atf\pressvest_blue_atf_co.paa",
      "OutLawClothing\data\atf\pressvest_blue_atf_co.paa",
      "OutLawClothing\data\atf\pressvest_blue_atf_co.paa"
    };
  };
  class IAT_ATF_PoliceVest: PoliceVest
  {
    scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\atf\policevest_atf_co.paa",
      "OutLawClothing\data\atf\policevest_atf_co.paa",
      "OutLawClothing\data\atf\policevest_atf_co.paa"
    };
  };
  // class IAT_ATF_PlateCarrierVest: PlateCarrierVest
	// {
	// 	scope=2;
	// 	visibilityModifier=0.69999999;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"OutLawClothing\data\atf\ballisticvest_atf_co.paa",
	// 		"OutLawClothing\data\atf\ballisticvest_atf_co.paa",
	// 		"OutLawClothing\data\atf\ballisticvest_atf_co.paa"
	// 	};
	// };
  class IAT_ATF_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\atf\tacticalvest2_black_atf_co.paa",
			"OutLawClothing\data\atf\tacticalvest2_black_atf_co.paa",
			"OutLawClothing\data\atf\tacticalvest2_black_atf_co.paa"
		};
	};
  class IAT_ATF_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "ATF Bomber Jacket";
    descriptionShort = "A jacket with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\atf\tacticalvest2_olive_atf_co.paa",
			"OutLawClothing\data\atf\tacticalvest2_olive_atf_co.paa",
			"OutLawClothing\data\atf\tacticalvest2_olive_atf_co.paa"
		};
	};
  
  class IAT_CIA_BomberJacket_Blue: BomberJacket_ColorBase
  {
    scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\cia\bomberjacket_blue_cia_co.paa",
      "OutLawClothing\data\cia\bomberjacket_blue_cia_co.paa",
      "OutLawClothing\data\cia\bomberjacket_blue_cia_co.paa"
    };
  };
  class IAT_CIA_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
  {
    scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\cia\jumpsuit_top_blue_cia_co.paa",
      "OutLawClothing\data\cia\jumpsuit_top_blue_cia_co.paa",
      "OutLawClothing\data\cia\jumpsuit_top_blue_cia_co.paa"
    };
  };
  class IAT_CIA_M65Jacket_Black: M65Jacket_ColorBase
  {
    scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\cia\m65_jacket_black_cia_co.paa",
      "OutLawClothing\data\cia\m65_jacket_black_cia_co.paa",
      "OutLawClothing\data\cia\m65_jacket_black_cia_co.paa"
    };
  };
  class IAT_CIA_PressVest_Blue: PressVest_ColorBase
  {
    scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\cia\pressvest_blue_cia_co.paa",
      "OutLawClothing\data\cia\pressvest_blue_cia_co.paa",
      "OutLawClothing\data\cia\pressvest_blue_cia_co.paa"
    };
  };
  class IAT_CIA_PoliceVest: PoliceVest
  {
    scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\cia\policevest_cia_co.paa",
      "OutLawClothing\data\cia\policevest_cia_co.paa",
      "OutLawClothing\data\cia\policevest_cia_co.paa"
    };
  };
  // class IAT_CIA_PlateCarrierVest: PlateCarrierVest
	// {
	// 	scope=2;
	// 	visibilityModifier=0.69999999;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"OutLawClothing\data\cia\ballisticvest_cia_co.paa",
	// 		"OutLawClothing\data\cia\ballisticvest_cia_co.paa",
	// 		"OutLawClothing\data\cia\ballisticvest_cia_co.paa"
	// 	};
	// };
  class IAT_CIA_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\cia\tacticalvest2_black_cia_co.paa",
			"OutLawClothing\data\cia\tacticalvest2_black_cia_co.paa",
			"OutLawClothing\data\cia\tacticalvest2_black_cia_co.paa"
		};
	};
  class IAT_CIA_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "CIA Bomber Jacket";
    descriptionShort = "A jacket with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\cia\tacticalvest2_olive_cia_co.paa",
			"OutLawClothing\data\cia\tacticalvest2_olive_cia_co.paa",
			"OutLawClothing\data\cia\tacticalvest2_olive_cia_co.paa"
		};
	};
  
  class IAT_FBI_BomberJacket_Blue: BomberJacket_ColorBase
  {
    scope=2;
    displayName = "FBI Bomber Jacket";
    descriptionShort = "A jacket with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\fbi\bomberjacket_blue_fbi_co.paa",     // on-ground texture
      "OutLawClothing\data\fbi\bomberjacket_blue_fbi_co.paa",     // on-character texture
      "OutLawClothing\data\fbi\bomberjacket_blue_fbi_co.paa"      // on-character texture
    };
  };
  class IAT_FBI_JumpsuitJacket_Blue: JumpsuitJacket_ColorBase
  {
    scope=2;
    displayName = "FBI Jumpsuit Jacket";
    descriptionShort = "A jacket with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\fbi\jumpsuit_top_blue_fbi_co.paa",
      "OutLawClothing\data\fbi\jumpsuit_top_blue_fbi_co.paa",
      "OutLawClothing\data\fbi\jumpsuit_top_blue_fbi_co.paa"
    };
  };
  class IAT_FBI_M65Jacket_Black: M65Jacket_ColorBase
  {
    scope=2;
    displayName = "FBI M65 Jacket";
    descriptionShort = "A jacket with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\fbi\m65_jacket_black_fbi_co.paa",
      "OutLawClothing\data\fbi\m65_jacket_black_fbi_co.paa",
      "OutLawClothing\data\fbi\m65_jacket_black_fbi_co.paa"
    };
  };
  class IAT_FBI_PressVest_Blue: PressVest_ColorBase
  {
    scope=2;
    displayName = "FBI Press Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\fbi\pressvest_blue_fbi_co.paa",
      "OutLawClothing\data\fbi\pressvest_blue_fbi_co.paa",
      "OutLawClothing\data\fbi\pressvest_blue_fbi_co.paa"
    };
  };
  class IAT_FBI_PoliceVest: PoliceVest
  {
    scope=2;
    displayName = "FBI Police Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
    hiddenSelectionsTextures[]=
    {
      "OutLawClothing\data\fbi\policevest_fbi_co.paa",
      "OutLawClothing\data\fbi\policevest_fbi_co.paa",
      "OutLawClothing\data\fbi\policevest_fbi_co.paa"
    };
  };
  // class IAT_FBI_PlateCarrierVest: PlateCarrierVest
	// {
	// 	scope=2;
	// 	visibilityModifier=0.69999999;
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"OutLawClothing\data\fbi\ballisticvest_fbi_co.paa",
	// 		"OutLawClothing\data\fbi\ballisticvest_fbi_co.paa",
	// 		"OutLawClothing\data\fbi\ballisticvest_fbi_co.paa"
	// 	};
	// };
  class IAT_FBI_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "FBI High Capacity Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\fbi\tacticalvest2_black_fbi_co.paa",
			"OutLawClothing\data\fbi\tacticalvest2_black_fbi_co.paa",
			"OutLawClothing\data\fbi\tacticalvest2_black_fbi_co.paa"
		};
	};
  class IAT_FBI_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
    displayName = "FBI High Capacity Vest";
    descriptionShort = "A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"OutLawClothing\data\fbi\tacticalvest2_olive_fbi_co.paa",
			"OutLawClothing\data\fbi\tacticalvest2_olive_fbi_co.paa",
			"OutLawClothing\data\fbi\tacticalvest2_olive_fbi_co.paa"
		};
	};



};
