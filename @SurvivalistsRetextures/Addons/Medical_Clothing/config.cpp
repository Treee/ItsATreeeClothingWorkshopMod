class CfgPatches
{
	class IAT_Medical_Clothing
	{
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "Mass_Textures"
		};
	};
};
class CfgVehicles
{
  class MassArmbandDouble_Colorbase;
  class IAT_FieldMedic_Armband: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Field Medic Armband";
		descriptionShort="Field Medic Armband";
    heatIsolation=1;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical_armbend_co.paa"
		};
	};
  class IAT_FieldMedic1_Armband: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Field Medic 1 Armband";
		descriptionShort="Field Medic 1 Armband";
    heatIsolation=1;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical1_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical1_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical1_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical1_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical1_armbend_co.paa"
		};
	};
  class IAT_FieldMedic2_Armband: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Field Medic 2 Armband";
		descriptionShort="Field Medic 2 Armband";
    heatIsolation=1;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical2_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical2_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical2_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical2_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical2_armbend_co.paa"
		};
	};
  class IAT_FieldMedic3_Armband: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Field Medic 3 Armband";
		descriptionShort="Field Medic 3 Armband";
    heatIsolation=1;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical3_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical3_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical3_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical3_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical3_armbend_co.paa"
		};
	};
  class IAT_FieldMedic4_Armband: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Field Medic 4 Armband";
		descriptionShort="Field Medic 4 Armband";
    heatIsolation=1;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical4_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical4_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical4_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical4_armbend_co.paa",
			"IAT_Medical_Clothing\data\medical4_armbend_co.paa"
		};
	};

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
  class IAT_Medical1_BDUJacket: BDUJacket
	{
		scope=2;
    heatIsolation=1;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"IAT_Medical_Clothing\data\medical1_bdu_jacket_co.paa",
			"IAT_Medical_Clothing\data\medical1_bdu_jacket_co.paa",
			"IAT_Medical_Clothing\data\medical1_bdu_jacket_co.paa"
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