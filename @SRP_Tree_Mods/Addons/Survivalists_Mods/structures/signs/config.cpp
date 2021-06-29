class CfgPatches
{
	class Survivalists_Mods_Structures_Signs
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Structures_Signs"
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;

	class land_srp_sanctuarysign: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_ForestSign.p3d";
	};
	class land_srp_bastionsign: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_BastionTownSign.p3d";
	};
  class land_srp_saloon_sign: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_SaloonSign.p3d";
	};
	class land_srp_saloon_sign_sanctuary: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_SaloonSignSanc.p3d";
	};
};