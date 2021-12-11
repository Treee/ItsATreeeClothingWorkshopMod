class CfgPatches
{
	class Survivalists_Retextures_Weapons_Supports
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Supports",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
	class GhillieAtt_ColorBase;
	class GhillieAtt_Winter: GhillieAtt_ColorBase
	{
		scope=2;
		displayName="Ghillie Wrap - Winter";
		descriptionShort="A wrap for your firearm.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa"
		};
	};
	class GhillieAtt_Black: GhillieAtt_ColorBase
	{
		scope=2;
		displayName="Ghillie Wrap - Black";
		descriptionShort="A wrap for your firearm.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa"
		};
	};
};
