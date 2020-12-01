class CfgPatches
{
	class OutLawTools
	{
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
  class BurlapSackCover;
  // naming convention
  // IAT -> ItsATreee
  class IAT_OutLawTool_Black_BurlapSackCover: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OutLawTools\data\head_sack\head_sack_black_co.paa",
			"OutLawTools\data\head_sack\head_sack_black_co.paa",
			"OutLawTools\data\head_sack\head_sack_black_co.paa"
		};
	};
  class IAT_OutLawTool_Black_Skull_BurlapSackCover: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OutLawTools\data\head_sack\head_sack_black_skull_co.paa",
			"OutLawTools\data\head_sack\head_sack_black_skull_co.paa",
			"OutLawTools\data\head_sack\head_sack_black_skull_co.paa"
		};
	};
  class IAT_OutLawTool_White_BurlapSackCover: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OutLawTools\data\head_sack\head_sack_white_co.paa",
			"OutLawTools\data\head_sack\head_sack_white_co.paa",
			"OutLawTools\data\head_sack\head_sack_white_co.paa"
		};
	};
  class IAT_OutLawTool_Rainbow_BurlapSackCover: BurlapSackCover
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"OutLawTools\data\head_sack\head_sack_rainbow_co.paa",
			"OutLawTools\data\head_sack\head_sack_rainbow_co.paa",
			"OutLawTools\data\head_sack\head_sack_rainbow_co.paa"
		};
	};

};