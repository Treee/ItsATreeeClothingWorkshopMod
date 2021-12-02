class CfgPatches
{
	class Survivalists_Mods_Weapons_Supports
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "Survivalists_Mods"
		};
	};
};

class CfgVehicles
{
  class GhillieAtt_ColorBase;

  //-------------------------------------BASE GAME OVERRIDE
  class GhillieAtt_Winter : GhillieAtt_ColorBase
	{
		scope = 2;
		displayName = "Ghillie Wrap - Winter";
		descriptionShort = "A wrap for your firearm.";
		hiddenSelectionsTextures[] =
		{
		  "Survivalists_Mods\characters\backpacks\data\ghillie_winter_co.paa"
		};
	};
  class GhillieAtt_Black : GhillieAtt_ColorBase
	{
		scope = 2;
		displayName = "Ghillie Wrap - Black";
		descriptionShort = "A wrap for your firearm.";
		hiddenSelectionsTextures[] =
		{
		  "Survivalists_Mods\characters\backpacks\data\ghillie_black_co.paa"
		};
	};

};