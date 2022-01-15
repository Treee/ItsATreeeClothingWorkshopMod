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
  class Rag_Black: Rag
	{
    scope=2;
    color="black";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\consumables\data\SRP_Cloth_Scraps_Black_CO.paa"
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
      "Survivalists_Retextures\gear\consumables\data\SRP_Cloth_Scraps_blue_CO.paa"
    };
  };
  class Rag_Brown: Rag
	{
    scope=2;
    color="brown";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\consumables\data\SRP_Cloth_Scraps_brown_CO.paa"
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
      "Survivalists_Retextures\gear\consumables\data\SRP_Cloth_Scraps_green_CO.paa"
    };
  };
  class Rag_Pink: Rag
	{
    scope=2;
    color="pink";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\consumables\data\SRP_Cloth_Scraps_pink_CO.paa"
    };
  };
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
      "Survivalists_Retextures\gear\consumables\data\SRP_Cloth_Scraps_red_CO.paa"
    };
  };
  class Rag_Yellow: Rag
	{
    scope=2;
    color="yellow";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\consumables\data\SRP_Cloth_Scraps_yellow_CO.paa"
    };
  };
};