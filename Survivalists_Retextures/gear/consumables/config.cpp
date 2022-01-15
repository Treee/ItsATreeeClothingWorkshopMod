class CfgPatches
{
	class Survivalists_Retextures_Gear_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical",
      "Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
  class Rag;
  class Rag_Red: Rag
	{
    scope=2;
    color="red";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\consumables\data\rag_red_co.paa"
    };
  };
  class Rag_Blue: Rag
	{
    scope=2;
    color="blue";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\consumables\data\rag_blue_co.paa"
    };
  };
  class Rag_Green: Rag
	{
    scope=2;
    color="green";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\consumables\data\rag_green_co.paa"
    };
  };
};