class CfgPatches
{
	class IAT_Medical_Clothing
	{
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
  class BDUJacket;
  class IAT_Medical_BDUJacket: BDUJacket
	{
		scope=2;
    heatIsolation=1;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical_bdu_jacket_co.paa",
			"IAT_Medical_Clothing\data\medical_bdu_jacket_co.paa",
			"IAT_Medical_Clothing\data\medical_bdu_jacket_co.paa"
		};
	};

  class M65Jacket_ColorBase;
  class IAT_FieldMedic_M65Jacket_Black: M65Jacket_ColorBase
	{
		scope=2;
    heatIsolation=1;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical_m65_jacket_black_co.paa",
			"IAT_Medical_Clothing\data\medical_m65_jacket_black_co.paa",
			"IAT_Medical_Clothing\data\medical_m65_jacket_black_co.paa"
		};
	};
  class IAT_FieldMedic_M65Jacket_DpmDesert: M65Jacket_ColorBase
	{
		scope=2;
    heatIsolation=1;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical_m65_jacket_dpmdesert_co.paa",
			"IAT_Medical_Clothing\data\medical_m65_jacket_dpmdesert_co.paa",
			"IAT_Medical_Clothing\data\medical_m65_jacket_dpmdesert_co.paa"
		};
	};
  class IAT_FieldMedic_M65Jacket_Khaki: M65Jacket_ColorBase
	{
		scope=2;
    heatIsolation=1;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical_m65_jacket_khaki_co.paa",
			"IAT_Medical_Clothing\data\medical_m65_jacket_khaki_co.paa",
			"IAT_Medical_Clothing\data\medical_m65_jacket_khaki_co.paa"
		};
	};
  class IAT_FieldMedic_M65Jacket_Olive: M65Jacket_ColorBase
	{
		scope=2;
    heatIsolation=1;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical_m65_jacket_olive_co.paa",
			"IAT_Medical_Clothing\data\medical_m65_jacket_olive_co.paa",
			"IAT_Medical_Clothing\data\medical_m65_jacket_olive_co.paa"
		};
	};
  class IAT_FieldMedic_M65Jacket_Tan: M65Jacket_ColorBase
	{
		scope=2;
    heatIsolation=1;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical_m65_jacket_tan_co.paa",
			"IAT_Medical_Clothing\data\medical_m65_jacket_tan_co.paa",
			"IAT_Medical_Clothing\data\medical_m65_jacket_tan_co.paa"
		};
	};

};