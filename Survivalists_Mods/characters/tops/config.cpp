class CfgPatches
{
	class Survivalists_Mods_Tops
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Tops",
      "Winter_Parka",
      "Survivalists_Characters_Tops"
		};
	};
};
class CfgVehicles
{
  class Clothing;

  //-------------------------------------MOD OVERRIDE
	class Winter_Parka_Base: Clothing
  {
    rootClassName="Winter_Parka";
    colorVariants[]=
    {
      "White",
      "Green",
      "Black",
      "PinkWhite",
      "PinkBlack",
      "BlueWhite",
      "BlueBlack"
    };
  }; 
};