class CfgMods
{
	class IAT_Custom_Armbands
	{
		type = "mod";
		author = "ItsATreee";
		name = "IAT_Custom_Armbands";
		dir = "IAT_Custom_Armbands";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"IAT_Custom_Armbands\scripts\4_world"};
			};
		};
	};
};
class CfgPatches
{
	class IAT_Custom_Armbands
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Scripts", "DZ_Characters", "Mass_Textures" };
	};
};
class CfgVehicles
{
  class MassArmbandDouble_Colorbase;  
  // Craftable Armbands  

  class GenericCraftedArmband_Bandit_Black: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Skull and Crossbones Armband";
    descriptionShort="Skull and Crossbones Armband";
    heatIsolation=1;
		color="black";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\bandit_black_armbend_co.paa",
			"IAT_Custom_Armbands\data\bandit_black_armbend_co.paa",
			"IAT_Custom_Armbands\data\bandit_black_armbend_co.paa",
			"IAT_Custom_Armbands\data\bandit_black_armbend_co.paa",
			"IAT_Custom_Armbands\data\bandit_black_armbend_co.paa"
		};
	};

  // Medical
  class GenericCraftedArmband_FieldMedic: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Red Cross Armband";
		descriptionShort="Red Cross Armband";
    heatIsolation=1;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\medical_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_FieldMedic1: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Medical Armband";
		descriptionShort="MedicalArmband";
    heatIsolation=1;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\medical1_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical1_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical1_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical1_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical1_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_FieldMedic2: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Medical Corps Armband";
		descriptionShort="Medical Corps Armband";
    heatIsolation=1;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\medical2_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical2_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical2_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical2_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical2_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_FieldMedic3: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Blue Medical Armband";
		descriptionShort="Blue Medical Armband";
    heatIsolation=1;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\medical3_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical3_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical3_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical3_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical3_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_FieldMedic4: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Runic Armband Armband";
		descriptionShort="Runic Armband Armband";
    heatIsolation=1;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\medical4_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical4_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical4_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical4_armbend_co.paa",
			"IAT_Custom_Armbands\data\medical4_armbend_co.paa"
		};
	};


  // General Colors
  class GenericCraftedArmband_Black: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Black Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="black";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\black_armbend_co.paa",
			"IAT_Custom_Armbands\data\black_armbend_co.paa",
			"IAT_Custom_Armbands\data\black_armbend_co.paa",
			"IAT_Custom_Armbands\data\black_armbend_co.paa",
			"IAT_Custom_Armbands\data\black_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_DarkBlue: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="Dark Blue Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="dark blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\dark_blue_armbend_co.paa",
			"IAT_Custom_Armbands\data\dark_blue_armbend_co.paa",
			"IAT_Custom_Armbands\data\dark_blue_armbend_co.paa",
			"IAT_Custom_Armbands\data\dark_blue_armbend_co.paa",
			"IAT_Custom_Armbands\data\dark_blue_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_DarkPurple: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="A Dark Purple Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="purple";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\deep_purple_armbend_co.paa",
			"IAT_Custom_Armbands\data\deep_purple_armbend_co.paa",
			"IAT_Custom_Armbands\data\deep_purple_armbend_co.paa",
			"IAT_Custom_Armbands\data\deep_purple_armbend_co.paa",
			"IAT_Custom_Armbands\data\deep_purple_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_Green: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="A Green Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="green";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\green_armbend_co.paa",
			"IAT_Custom_Armbands\data\green_armbend_co.paa",
			"IAT_Custom_Armbands\data\green_armbend_co.paa",
			"IAT_Custom_Armbands\data\green_armbend_co.paa",
			"IAT_Custom_Armbands\data\green_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_Grey: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="A Grey Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="grey";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\grey_armbend_co.paa",
			"IAT_Custom_Armbands\data\grey_armbend_co.paa",
			"IAT_Custom_Armbands\data\grey_armbend_co.paa",
			"IAT_Custom_Armbands\data\grey_armbend_co.paa",
			"IAT_Custom_Armbands\data\grey_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_LightBlue: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="A Light Blue Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="blue";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\light_blue_armbend_co.paa",
			"IAT_Custom_Armbands\data\light_blue_armbend_co.paa",
			"IAT_Custom_Armbands\data\light_blue_armbend_co.paa",
			"IAT_Custom_Armbands\data\light_blue_armbend_co.paa",
			"IAT_Custom_Armbands\data\light_blue_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_LightGray: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="A Light Gray Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="grey";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\light_grey_armbend_co.paa",
			"IAT_Custom_Armbands\data\light_grey_armbend_co.paa",
			"IAT_Custom_Armbands\data\light_grey_armbend_co.paa",
			"IAT_Custom_Armbands\data\light_grey_armbend_co.paa",
			"IAT_Custom_Armbands\data\light_grey_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_Lime: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="A Lime Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="green";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\lime_armbend_co.paa",
			"IAT_Custom_Armbands\data\lime_armbend_co.paa",
			"IAT_Custom_Armbands\data\lime_armbend_co.paa",
			"IAT_Custom_Armbands\data\lime_armbend_co.paa",
			"IAT_Custom_Armbands\data\lime_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_Orange: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="An Orange Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="orange";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\orange_armbend_co.paa",
			"IAT_Custom_Armbands\data\orange_armbend_co.paa",
			"IAT_Custom_Armbands\data\orange_armbend_co.paa",
			"IAT_Custom_Armbands\data\orange_armbend_co.paa",
			"IAT_Custom_Armbands\data\orange_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_Pink: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="A Pink Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="pink";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\pink_armbend_co.paa",
			"IAT_Custom_Armbands\data\pink_armbend_co.paa",
			"IAT_Custom_Armbands\data\pink_armbend_co.paa",
			"IAT_Custom_Armbands\data\pink_armbend_co.paa",
			"IAT_Custom_Armbands\data\pink_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_Purple: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="A Purple Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="purple";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\purple_armbend_co.paa",
			"IAT_Custom_Armbands\data\purple_armbend_co.paa",
			"IAT_Custom_Armbands\data\purple_armbend_co.paa",
			"IAT_Custom_Armbands\data\purple_armbend_co.paa",
			"IAT_Custom_Armbands\data\purple_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_Red: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="A Red Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="red";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\red_armbend_co.paa",
			"IAT_Custom_Armbands\data\red_armbend_co.paa",
			"IAT_Custom_Armbands\data\red_armbend_co.paa",
			"IAT_Custom_Armbands\data\red_armbend_co.paa",
			"IAT_Custom_Armbands\data\red_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_Teal: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="A Teal Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="teal";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\teal_armbend_co.paa",
			"IAT_Custom_Armbands\data\teal_armbend_co.paa",
			"IAT_Custom_Armbands\data\teal_armbend_co.paa",
			"IAT_Custom_Armbands\data\teal_armbend_co.paa",
			"IAT_Custom_Armbands\data\teal_armbend_co.paa"
		};
	};
  class GenericCraftedArmband_Yellow: MassArmbandDouble_Colorbase
	{
		scope=2;
		visibilityModifier=0.85000002;
    displayName="A Yellow Armband";
    descriptionShort="This crudely crafted armband has been dyed unprofessionally and is freyed at the edges.";
    heatIsolation=1;
		color="yellow";
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Armbands\data\yellow_armbend_co.paa",
			"IAT_Custom_Armbands\data\yellow_armbend_co.paa",
			"IAT_Custom_Armbands\data\yellow_armbend_co.paa",
			"IAT_Custom_Armbands\data\yellow_armbend_co.paa",
			"IAT_Custom_Armbands\data\yellow_armbend_co.paa"
		};
	};



  //Faction Armbands

  // class Betrayed_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The Betrayed Armband";
	// 	descriptionShort="The Betrayed Armband";
  //   heatIsolation=1;
	// 	color="blue";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\betrayed_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\betrayed_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\betrayed_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\betrayed_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\betrayed_armbend_co.paa"
	// 	};
	// };
  // class Chivalrous_Fist_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The Chivalrous Fist Armband";
	// 	descriptionShort="The Chivalrous Fist Armband";
  //   heatIsolation=1;
	// 	color="blue";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\chivalrous_fist_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\chivalrous_fist_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\chivalrous_fist_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\chivalrous_fist_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\chivalrous_fist_armbend_co.paa"
	// 	};
	// };
  // class Collective_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The Collective Armband";
	// 	descriptionShort="The Collective Armband";
  //   heatIsolation=1;
	// 	color="blue";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\collective_armbend_blue_co.paa",
	// 		"IAT_Custom_Armbands\data\collective_armbend_blue_co.paa",
	// 		"IAT_Custom_Armbands\data\collective_armbend_blue_co.paa",
	// 		"IAT_Custom_Armbands\data\collective_armbend_blue_co.paa",
	// 		"IAT_Custom_Armbands\data\collective_armbend_blue_co.paa"
	// 	};
	// };
  // class Duskar_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The Duskar Armband";
	// 	descriptionShort="The Duskar Armband";
  //   heatIsolation=1;
	// 	color="blue";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\duskar_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\duskar_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\duskar_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\duskar_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\duskar_armbend_co.paa"
	// 	};
	// };
  // class FAST_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="F.A.S.T Armband";
  //   descriptionShort="F.A.S.T Armband";
  //   heatIsolation=1;
	// 	color="purple";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\fast_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\fast_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\fast_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\fast_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\fast_armbend_co.paa"
	// 	};
	// };
  // class Jamestown_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="Jamestown Armband";
  //   descriptionShort="Jamestown Armband";
  //   heatIsolation=1;
	// 	color="purple";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\jamestown_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\jamestown_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\jamestown_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\jamestown_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\jamestown_armbend_co.paa"
	// 	};
	// };
  // class New_Haven_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="New Haven Armband";
  //   descriptionShort="New Haven Armband";
  //   heatIsolation=1;
	// 	color="purple";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\new_haven_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\new_haven_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\new_haven_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\new_haven_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\new_haven_armbend_co.paa"
	// 	};
	// };
  // class PALF_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="PALF Armband";
  //   descriptionShort="PALF Armband";
  //   heatIsolation=1;
	// 	color="grey";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\palf_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\palf_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\palf_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\palf_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\palf_armbend_co.paa"
	// 	};
	// };
  // class Settlers_Of_Portland_Deer_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="Settlers of Portland Armband";
  //   descriptionShort="Settlers of Portland Armband";
  //   heatIsolation=1;
	// 	color="blue";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\settlers_of_portland_armbend_blue_co.paa",
	// 		"IAT_Custom_Armbands\data\settlers_of_portland_armbend_blue_co.paa",
	// 		"IAT_Custom_Armbands\data\settlers_of_portland_armbend_blue_co.paa",
	// 		"IAT_Custom_Armbands\data\settlers_of_portland_armbend_blue_co.paa",
	// 		"IAT_Custom_Armbands\data\settlers_of_portland_armbend_blue_co.paa"
	// 	};
	// };
  // class Reaperz_Squad_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="Reaperz Squadron Armband";
  //   descriptionShort="Reaperz Squadron Armband";
  //   heatIsolation=1;
	// 	color="purple";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\reaperz_squad_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\reaperz_squad_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\reaperz_squad_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\reaperz_squad_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\reaperz_squad_armbend_co.paa"
	// 	};
	// };
  // class Sundown_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="Sundown Armband";
  //   descriptionShort="Sundown Armband";
  //   heatIsolation=1;
	// 	color="black";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\sundown_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\sundown_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\sundown_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\sundown_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\sundown_armbend_co.paa"
	// 	};
	// };
  // class The_AereSkjold_Clan_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The AereSkjold Clan Armband";
  //   descriptionShort="The AereSkjold Clan Armband";
  //   heatIsolation=1;
	// 	color="black";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\the_aereskjold_clan_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_aereskjold_clan_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_aereskjold_clan_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_aereskjold_clan_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_aereskjold_clan_armbend_co.paa"
	// 	};
	// };
  // class The_Alliance_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The Alliance Armband";
  //   descriptionShort="The Alliance Armband";
  //   heatIsolation=1;
	// 	color="black";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\the_alliance_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_alliance_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_alliance_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_alliance_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_alliance_armbend_co.paa"
	// 	};
	// };
  // class The_Brotherhood_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The Brotherhood Armband";
  //   descriptionShort="The Brotherhood Armband";
  //   heatIsolation=1;
	// 	color="black";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\the_brotherhood_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_brotherhood_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_brotherhood_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_brotherhood_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_brotherhood_armbend_co.paa"
	// 	};
	// };
  // class The_Legion_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The Legion Armband";
  //   descriptionShort="The Legion Armband";
  //   heatIsolation=1;
	// 	color="black";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\the_legion_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_legion_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_legion_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_legion_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_legion_armbend_co.paa"
	// 	};
	// };
  // class The_Marketplace_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The Marketplace Armband";
  //   descriptionShort="The Marketplace Armband";
  //   heatIsolation=1;
	// 	color="black";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\the_marketplace_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_marketplace_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_marketplace_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_marketplace_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_marketplace_armbend_co.paa"
	// 	};
	// };
  // class The_New_Order_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The New Order Armband";
  //   descriptionShort="The New Order Armband";
  //   heatIsolation=1;
	// 	color="black";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\the_new_order_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_new_order_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_new_order_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_new_order_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_new_order_armbend_co.paa"
	// 	};
	// };
  // class The_Patriots_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The Patriots Armband";
  //   descriptionShort="The Patriots Armband";
  //   heatIsolation=1;
	// 	color="red";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\the_patriots_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_patriots_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_patriots_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_patriots_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_patriots_armbend_co.paa"
	// 	};
	// };
  // class The_Red_Militia_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The Red Militia Armband";
  //   descriptionShort="The Red Militia Armband";
  //   heatIsolation=1;
	// 	color="red";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\the_red_militia_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_red_militia_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_red_militia_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_red_militia_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_red_militia_armbend_co.paa"
	// 	};
	// };
  // class The_Visionaries_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="The Visionaries Armband";
  //   descriptionShort="The Visionaries Armband";
  //   heatIsolation=1;
	// 	color="orange";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\the_visionaries_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_visionaries_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_visionaries_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_visionaries_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\the_visionaries_armbend_co.paa"
	// 	};
	// };
  // class Wardens_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="Wardens Armband";
  //   descriptionShort="Wardens Armband";
  //   heatIsolation=1;
	// 	color="black";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\wardens_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\wardens_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\wardens_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\wardens_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\wardens_armbend_co.paa"
	// 	};
	// };
  // class Wolfpack_Armband: MassArmbandDouble_Colorbase
	// {
	// 	scope=2;
	// 	visibilityModifier=0.85000002;
  //   displayName="Wolfpack Armband";
  //   descriptionShort="Wolfpack Armband";
  //   heatIsolation=1;
	// 	color="grey";
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"IAT_Custom_Armbands\data\wolfpack_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\wolfpack_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\wolfpack_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\wolfpack_armbend_co.paa",
	// 		"IAT_Custom_Armbands\data\wolfpack_armbend_co.paa"
	// 	};
	// };
};