class CfgPatches
{
	class Custom_NewHaven
	{
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee",
      "ModularVestSystem"
		};
	};
};
class CfgVehicles
{
  class M65Jacket_Black;
  class New_Haven_Patreon_Jacket: M65Jacket_Black
	{
		scope=2;
    displayName="New Haven Jacket";
    descriptionShort="The jacket of a New Haven resident.";
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Custom_NewHaven\data\new_haven_field_jacket_co.paa",
			"Custom_NewHaven\data\new_haven_field_jacket_co.paa",
			"Custom_NewHaven\data\new_haven_field_jacket_co.paa"
		};
	};

  class HunterPants_Spring;
  class New_Haven_Patreon_HunterPants_Spring: HunterPants_Spring
	{
		scope=2;
    displayName="New Haven Pants";
    descriptionShort="The pants of a New Haven resident.";
		visibilityModifier=0.75;
    itemsCargoSize[]={6,6}; // this is the same as Mass's hunter pants vanilla is {6,4}
		hiddenSelectionsTextures[]=
		{
			"Custom_NewHaven\data\new_haven_hunterpants_co.paa",
			"Custom_NewHaven\data\new_haven_hunterpants_co.paa",
			"Custom_NewHaven\data\new_haven_hunterpants_co.paa"
		};
	};

  class ModularVestSystem_Base;
  class New_Haven_Patreon_MVS_Combat_Vest: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "New Haven - Multicam";
    descriptionShort="The Multicam of a New Haven resident.";
		hiddenSelectionsTextures[] = 
		{
			"Custom_NewHaven\data\new_haven_mc_vest_co.paa",
			"Custom_NewHaven\data\new_haven_mc_vest_co.paa",
			"Custom_NewHaven\data\new_haven_mc_vest_co.paa"
		};
	};

  class Modular_Patch_Base;
  class New_Haven_Patreon_MVS_Patch: Modular_Patch_Base
	{
		scope = 2;
		displayName = "New Haven Patch";
    descriptionShort="The Patch of New Haven.";
		hiddenSelectionsTextures[] = 
		{
			"Custom_NewHaven\data\new_haven_patch_co.paa"
		};
	};

  class MVS_OpsCore_Base;
  class New_Haven_Patreon_MVS_OpsCore: MVS_OpsCore_Base
	{
		scope = 2;
		displayName = "New Haven High Cut Helmet";
    descriptionShort="The Helmet of a New Haven resident.";
		hiddenSelectionsTextures[] = 
		{
			"Custom_NewHaven\data\new_haven_OpsCore_co.paa",
			"Custom_NewHaven\data\new_haven_OpsCore_co.paa",
			"Custom_NewHaven\data\new_haven_OpsCore_co.paa"
		};
	};
  
};