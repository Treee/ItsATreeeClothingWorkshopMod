class CfgPatches
{
	class Survivalists_Retextures_Gear_Drinks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Drinks",
      "Survivalists_Retextures"
		};
	};
};

class CfgVehicles
{
  class SodaCan_ColorBase;
  class Canteen;
  class SRP_MilitaryCanteen_Base;


// Dillards " Lake Of Fire" Spiced Whiskey 
// A family recipie passed down by the Dillard family in the hills of Kentucky for over 150 years. Will warm you right up.

// Dillards Lucifers Tears
// 190 proof hard liquor Drink spiced with pure Capsaicin extract , Not for the faint if heart.

  class SodaCan_BrimstoneBeer: SodaCan_ColorBase
	{
		scope=2;
		displayName="Brimstone Beer";
		descriptionShort="At the end of a hard day of surviving nothing helps you relax like a cold beer. Brewed by the Dillard family of Hart County Kentucky.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\drinks\data\brimstone_can_co.paa"
		};
	};
  class SodaCan_LancasterBeer: SodaCan_ColorBase
	{
		scope=2;
		displayName="Lancaster Beer";
		descriptionShort="A Handcrafted luxury beer, Lancasters conjures a smooth enchanting flavor like nothing else, so sit back ,relax and stay for a spell.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\drinks\data\lancaster_can_co.paa"
		};
	};

	class SRP_MilitaryCanteen_OD: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - OD";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\drinks\data\canteen_co.paa"
		};		
	};
	class SRP_MilitaryCanteen_ERDL: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - ERDL";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\drinks\data\canteen_co_ERDL.paa"
		};		
	};
	class SRP_MilitaryCanteen_Tan: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\drinks\data\canteen_co_Tan.paa"
		};		
	};
	class SRP_MilitaryCanteen_Black: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\drinks\data\canteen_co_Black.paa"
		};		
	};
	class SRP_MilitaryCanteen_Snow: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\drinks\data\canteen_co_Snow.paa"
		};		
	};
	class SRP_MilitaryCanteen_Multicam: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Multicam";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\drinks\data\canteen_co_MC.paa"
		};		
	};
	class SRP_MilitaryCanteen_Multicam_Tropic: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Multicam Tropic";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\drinks\data\canteen_co_MC_Tropic.paa"
		};		
	};
	class SRP_MilitaryCanteen_Multicam_Black: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Multicam Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\drinks\data\canteen_co_MC_Black.paa"
		};		
	};

  class SRP_Canteen_Blue: Canteen
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\drinks\data\canteen_blue_co.paa"
    };
	};
  class SRP_Canteen_Pink: Canteen
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\drinks\data\canteen_pink_co.paa"
    };
	};
  class SRP_Canteen_Purple: Canteen
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\drinks\data\canteen_purple_co.paa"
    };
	};
  class SRP_Canteen_Neon: Canteen
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\drinks\data\canteen_neon_co.paa"
    };
	};
  class SRP_Canteen_Red: Canteen
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\gear\drinks\data\canteen_red_co.paa"
    };
	};

};