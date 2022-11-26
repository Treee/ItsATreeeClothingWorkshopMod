class CfgPatches
{
	class Survivalists_Mods_Pants
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Pants",
      "Kneepads_Jeans",
      "Survivalists_Characters_Pants"
		};
	};
};
class CfgVehicles
{
  class Clothing;

  //-------------------------------------MOD OVERRIDE
	class Skinny_Jeans_ColorBase: Clothing
  {
    rootClassName="Skinny_Jeans";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Chocolate",
      "Coal",
      "HeartBunnyPetal",
      "HeartBunnySky",
      "HeartPink",
      "Lime",
      "PurpleDark",
      "RedBunny",
      "TealBunny",
      "YellowBunny"
    };
  }; 
};