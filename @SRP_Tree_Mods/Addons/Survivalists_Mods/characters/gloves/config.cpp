class CfgPatches
{
	class Survivalists_Mods_Characters_Gloves
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Gloves"
		};
	};
};
class CfgVehicles
{
  class NBCGloves_ColorBase;
  class OMNOGloves_ColorBase;

	class SRP_NBCGloves_Blue: NBCGloves_ColorBase  // BP2_NBCGlovesBlue
	{
		scope=2;
    colr="blue";
		repairableWithKits[]={5,6}; // duct tape and rapaier kit
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\gloves\data\nbc_gloves_blue_co.paa",
			"Survivalists_Mods\characters\gloves\data\nbc_gloves_blue_co.paa",
			"Survivalists_Mods\characters\gloves\data\nbc_gloves_blue_co.paa"
		};

	};
  
	class SRP_OMNOGloves_Green: OMNOGloves_ColorBase  // BP2_Denglove_green
	{
		scope=2;
    color="green";
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\gloves\data\Denglove_green.paa",
			"Survivalists_Mods\characters\gloves\data\Denglove_green.paa",
			"Survivalists_Mods\characters\gloves\data\Denglove_green.paa"
		};
	};
	class SRP_OMNOGloves_Black: OMNOGloves_ColorBase  // Denglove
	{
		scope=2;
    color="black";
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\gloves\data\denglove.paa",
			"Survivalists_Mods\characters\gloves\data\denglove.paa",
			"Survivalists_Mods\characters\gloves\data\denglove.paa"
		};
	};
};