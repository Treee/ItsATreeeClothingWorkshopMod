class CfgPatches
{
	class IAT_Custom_Flags
	{
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
		};
	};
};
class CfgVehicles
{
  class Flag_Base;

  class Collective_Flag: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"IAT_Custom_Flags\data\collective_flag_co.paa"
		};
	};
};