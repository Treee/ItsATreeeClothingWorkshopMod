class CfgMods
{
	class SRP_Core_Metallurgy
	{
		type = "mod";
		author = "ItsATreee";
		name = "SRP_Core_Metallurgy";
		dir = "SRP_Core_Metallurgy";
	};
};
class CfgPatches
{
  class SRP_Core_Metallurgy
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