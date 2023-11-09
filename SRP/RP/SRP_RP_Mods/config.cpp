class CfgMods
{
	class SRP_RP_Mods
	{
		type = "mod";
		author = "ItsATreee";
		name = "SRP_RP_Mods";
		dir = "SRP_RP_Mods";
	};
};
class CfgPatches
{
  class SRP_RP_Mods
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