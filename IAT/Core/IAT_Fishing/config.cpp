class CfgMods
{
	class IAT_Fishing
	{
		type="mod";
		author="ItsATreee";
		name="ItsATreee Fishing";
		dir="IAT_Fishing";    
    dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
        files[] = {"IAT\Core\IAT_Fishing\scripts\4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class IAT_Fishing
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts",
      "DZ_Gear_Camping",
      "DZ_Gear_Food",
    };
  };
};
class CfgVehicles
{
  class EffectArea;
  class IAT_Fishing_HotSpotArea_Static: EffectArea
	{
		scope=2;
	};
  class IAT_Fishing_ClamSpotArea_Static: EffectArea
	{
		scope=2;
	};
};