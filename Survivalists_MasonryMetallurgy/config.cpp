class CfgMods
{
	class Survivalists_MasonryMetallurgy
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_MasonryMetallurgy";
		dir = "Survivalists_MasonryMetallurgy";
	};
};
class CfgPatches
{
  class Survivalists_MasonryMetallurgy
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts"
    };
  };
};