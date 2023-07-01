class CfgPatches
{
	class Survivalists_Characters_Shoes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Shoes",
      "High_Knee_Sneakers",
      "SK8_Sneakers",
		};
	};
};
class CfgVehicles
{
  // class Shoes_Base;
  class Clothing;

//-------------------------------------MODDED OVERRIDE
  class High_Knee_Sneakers: Clothing
	{
    rootClassName="High_Knee_Sneakers";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Brown",
      "Green",
      "Pink",
      "Purple",    
    };
  };
  class Kirza_Boots_ColorBase: Clothing
	{
    rootClassName="Kirza_Boots";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Brown",
      "Green",
      "Pink",
      "Purple",    
    };
  };
//-------------------------------------BASE GAME OVERRIDE	
  class AthleticShoes_ColorBase: Clothing
  {
    itemSize[]={2,2};
    attachments[]+={"SRP_GunDerringer"};
    rootClassName="AthleticShoes";
    colorVariants[]=
    {
      "Blue",
      "Black",
      "Brown",
      "Brown1",
      "Green",
      "Green1",
      "Grey",
      "White",
    };
  };
  class HikingBoots_ColorBase: Clothing
  {
    itemSize[]={2,2};
    attachments[]+={"SRP_GunDerringer"};
    rootClassName="HikingBoots";
    colorVariants[]=
    {
      "Black",
      "Brown",
    };
  };
  class HikingBootsLow_ColorBase: Clothing
  {
    itemSize[]={2,2};
    attachments[]+={"SRP_GunDerringer"};
    rootClassName="HikingBootsLow";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Beige",
      "Grey",      
    };
  };
  class Wellies_ColorBase: Clothing
  {
    itemSize[]={2,2};
    attachments[]+={"SRP_GunDerringer","Knife"};
    rootClassName="Wellies";
    colorVariants[]=
    {
      "Black",
      "Brown",
      "Green",
      "Grey",      
    };
  };
  class WorkingBoots_ColorBase: Clothing
  {
    itemSize[]={2,2};
    attachments[]+={"SRP_GunDerringer"};
    rootClassName="WorkingBoots";
    colorVariants[]=
    {
      "Beige",
      "Yellow",
      "Brown",
      "Green",
      "Grey",      
    };
  };
  class JungleBoots_ColorBase: Clothing
	{
    attachments[]+={"SRP_GunDerringer","Knife"};
    itemSize[]={2,2};
		itemsCargoSize[]={1,2};
    repairableWithKits[]={5,3};
		repairCosts[]={30,25};
    rootClassName="JungleBoots";
    colorVariants[]=
    {
      "Beige",
      "Black",
      "Brown",
      "Green",
      "Olive",      
      "Yellow",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
      "MC_Black",
      "ChocChip",
      "ERDL",
      "M05",
      "MARPAT",
      "TigerStripe",
      "CADPAT",
    };
  };
  class DressShoes_ColorBase: Clothing
  {
    itemSize[]={2,2};
    attachments[]+={"SRP_GunDerringer"};
    rootClassName="DressShoes";
    colorVariants[]=
    {
      "Beige",
      "Black",
      "Brown",
      "Sunburst",
      "White",
    };
  };
  class MilitaryBoots_ColorBase: Clothing
  {
    itemSize[]={2,2};
    itemsCargoSize[]={1,2};
    attachments[]+={"SRP_GunDerringer"};
    rootClassName="MilitaryBoots";
    colorVariants[]=
    {
      "Beige",
      "Black",
      "Bluerock",
      "Brown",
      "Redpunk",
      "White",
    };
  };
  class CombatBoots_ColorBase: Clothing
  {
    itemSize[]={2,2};
    attachments[]+={"SRP_GunDerringer","Knife"};
    rootClassName="CombatBoots";
    colorVariants[]=
    {
      "Beige",
      "Black",
      "Brown",
      "Green",
      "Grey",
    };
  };
  class JoggingShoes_ColorBase: Clothing
  {
    itemSize[]={2,2};
    attachments[]+={"SRP_GunDerringer"};
    rootClassName="JoggingShoes";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Red",
      "Violet",
      "White",
    };
  };
  class LeatherShoes_ColorBase: Clothing
  {
    itemSize[]={2,2};
    attachments[]+={"SRP_GunDerringer"};
    soundAttType="none";
    rootClassName="LeatherShoes";
    colorVariants[]=
    {
      "Black",
      "Natural",
      "Brown",
      "Beige",  
      "Choco",
      "Lime",
      "Orange",
      "Pink",
      "Purple",
      "Storm",
      "Yellow",    
    };
  };
  class Sneakers_ColorBase: Clothing
  {
    itemSize[]={2,2};
    attachments[]+={"SRP_GunDerringer"};
    rootClassName="Sneakers";
    colorVariants[]=
    {
      "Black",
      "Black1",
      "BabyBlue",
      "Grey",
      "Green",
      "Red",      
      "Red1",      
      "White",      
      "Lime",      
      "Purple",      
      "DarkPurple",      
      "Salmon",      
      "Tan",      
      "WhitePink",      
    };
  };
  class NBCBootsBase: Clothing
	{
    soundAttType="none";
    rootClassName="NBCBootsBase";
    colorVariants[]=
    {
      "Gray",
      "Yellow",
      "Orange"
    };
		class Protection 
    {
      biological=1;
    };
	};
  class Ballerinas_ColorBase: Clothing
  {
    itemSize[]={2,2};
    attachments[]+={"SRP_GunDerringer"};
    soundAttType="none";
    rootClassName="Ballerinas";
    colorVariants[]=
    {
      "Blue",
      "Red",
      "White",
      "Yellow",      
    };
  };
  class TTSKOBoots: Clothing
	{
    itemSize[]={2,2};
  };
  class FeetCover_Improvised: Clothing
  {
    rootClassName="FeetCover_Improvised";
    colorVariants[]=
    {
      "Green",
      "Black",      
      "Orange",      
      "Blue",      
      "Red",      
    };
  };
//====================================================== CUSTOM STUFF
  class Sneakers_Skylar_Biozone: Sneakers_ColorBase
	{
		scope=2;
		displayName="The Queen's Shoes";
		descriptionShort="Ignore biohzard effects";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\shoes\data\sneakers_Skylar_Bio_pink_co.paa",
			"Survivalists_Characters\shoes\data\sneakers_Skylar_Bio_pink_co.paa",
			"Survivalists_Characters\shoes\data\sneakers_Skylar_Bio_pink_co.paa"
		};
    class Protection
    {
      biological=6;
    };
	};
  class Sneakers_Sneaky: Sneakers_ColorBase
	{
		scope=2;
		displayName="These shoes are very quiet";
		descriptionShort="Shoes that move silently";
    soundAttType="none";
    hiddenSelectionsTextures[]=
		{
			"\dz\characters\shoes\data\Sneakers_Black_co.paa",
			"\dz\characters\shoes\data\Sneakers_Black_co.paa",
			"\dz\characters\shoes\data\Sneakers_Black_co.paa"
		};
    class Protection
    {
      biological=6;
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
        };
      };
    };
	};
//====================================================== END
};