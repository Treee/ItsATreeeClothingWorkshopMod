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
  class SRP_Coinage_GoldWorn;
//===================================== RAGS
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

//===================================== COINS
  class SRP_Coinage_GoldWorn_Arbiters: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Arbiters";
    color="Goldwornarbiters";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\consumables\data\srp_coinage_arbiters_co.paa"
		};
  };
  class SRP_Coinage_GoldWorn_Bastion: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Bastion";
    color="Goldwornbastion";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\consumables\data\srp_coinage_bastion_co.paa"
		};
  };
  class SRP_Coinage_GoldWorn_Betrayed: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Betrayed";
    color="Goldwornbetrayed";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\consumables\data\srp_coinage_betrayed_co.paa"
		};
  };
  class SRP_Coinage_GoldWorn_Burleeville: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Burleeville";
    color="Goldwornburleeville";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\consumables\data\srp_coinage_burleeville_co.paa"
		};
  };
  class SRP_Coinage_GoldWorn_Disciples: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Disciples";
    color="Goldworndisciples";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\consumables\data\srp_coinage_disciples_co.paa"
		};
  };  
  class SRP_Coinage_GoldWorn_Emporium: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Emporium";
    color="Goldwornemporium";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\consumables\data\srp_coinage_emporium_co.paa"
		};
  };  
  class SRP_Coinage_GoldWorn_SaltyCougar: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - SaltyCougar";
    color="Goldwornsaltycougar";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\consumables\data\srp_coinage_saltycougar_co.paa"
		};
  };  
  class SRP_Coinage_GoldWorn_CougarTown: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - CougarTown";
    color="Goldworncougartown";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\consumables\data\srp_coinage_cougartown_co.paa"
		};
  };  
};