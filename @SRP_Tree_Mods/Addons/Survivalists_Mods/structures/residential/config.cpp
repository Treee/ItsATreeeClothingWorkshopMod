	class CfgPatches
{
	class Survivalists_Mods_Structures_Residential
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Structures_Residential"
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;
  
  class land_srp_saloon: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\residential\SRP_Saloon.p3d";
	};
};