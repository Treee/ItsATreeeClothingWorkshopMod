class CfgPatches
{
	class Survivalists_Mods_Structures_Furniture
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Structures",
      "DZ_Structures_Furniture"
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;
  class land_srp_saloon_counter: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\furniture\SRP_BarCounter.p3d";
	};
	class land_srp_saloon_sofal: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\furniture\SRP_BarSofaL.p3d";
	};
  class land_srp_saloon_barrel: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\furniture\SRP_BarBarrel.p3d";
	};
};