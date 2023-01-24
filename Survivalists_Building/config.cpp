class CfgMods
{
	class Survivalists_Building
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_Building";
		dir = "Survivalists_Building";
	};
};
class CfgPatches
{
  class Survivalists_Building
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