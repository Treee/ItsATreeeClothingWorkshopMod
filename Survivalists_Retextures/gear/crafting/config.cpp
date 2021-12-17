class CfgPatches
{
	class Survivalists_Retextures_Gear_Crafting
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
  class BurlapSack;

  class BurlapSack_Black: BurlapSack
  {
    scope=2;
    color="black";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\crafting\data\head_sack_black_co.paa",
    };
  };
  class BurlapSack_Skull: BurlapSack
  {
    scope=2;
    color="skull";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\crafting\data\head_sack_black_skull_co.paa",
    };
  };
  class BurlapSack_White: BurlapSack
  {
    scope=2;
    color="white";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\crafting\data\head_sack_white_co.paa",
    };
  };
};