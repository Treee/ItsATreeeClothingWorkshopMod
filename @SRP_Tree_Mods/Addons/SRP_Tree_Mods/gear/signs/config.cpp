class CfgPatches
{
	class SRP_Tree_Mods_Signs
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
	class NeonSign_Wharf: HouseNoDestruct
	{
		scope=1;
		model="SRP_Tree_Mods\gear\signs\neonsign_thewarf.p3d";
	};
};
