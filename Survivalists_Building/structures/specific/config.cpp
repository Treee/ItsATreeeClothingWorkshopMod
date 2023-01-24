class CfgPatches
{
	class Survivalists_Building_Structures_Specific
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Structures_Specific",
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;
  class Land_Building_Specific_PileOfGold: HouseNoDestruct
	{
		scope=1;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Building\structures\specific\data\srp_treasurepile_gold_co.paa"};
		model="Survivalists_Building\structures\specific\srp_treasurepile_gold.p3d";
	};
};