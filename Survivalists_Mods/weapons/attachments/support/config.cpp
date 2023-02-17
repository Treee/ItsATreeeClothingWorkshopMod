class CfgPatches
{
	class Survivalists_Mods_Weapons_Supports
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class GhillieAtt_ColorBase: Inventory_Base
	{
    rootClassName="GhillieAtt";
    colorVariants[]=
    {
      "Tan",
      "Woodland",
      "Mossy",
      "White",      
      "Black",      
    };
	};
};