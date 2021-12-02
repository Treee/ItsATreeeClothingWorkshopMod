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
      "DZ_Characters_Gloves",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  class OMNOGloves_ColorBase;
  class WorkingGloves_ColorBase;
  

  //-------------------------------------BASE GAME OVERRIDE
  class NBCGloves_ColorBase: Clothing
	{
		class Protection {
      biological=1;
    }
	};

  // ------------------------ Base Game Retextures
  class WorkingGloves_White: WorkingGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\gloves\data\WorkingGloves_white_co.paa",
			"Survivalists_Mods\characters\gloves\data\WorkingGloves_white_co.paa",
			"Survivalists_Mods\characters\gloves\data\WorkingGloves_white_co.paa"
		};
	};
  class WorkingGloves_Red: WorkingGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\gloves\data\WorkingGloves_red_co.paa",
			"Survivalists_Mods\characters\gloves\data\WorkingGloves_red_co.paa",
			"Survivalists_Mods\characters\gloves\data\WorkingGloves_red_co.paa"
		};
	};

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
			"camoFemale",
			"personality"
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
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\gloves\data\denglove.paa",
			"Survivalists_Mods\characters\gloves\data\denglove.paa",
			"Survivalists_Mods\characters\gloves\data\denglove.paa"
		};
	};
};