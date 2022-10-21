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
      "DZ_Characters_Shoes"
		};
	};
};
class CfgVehicles
{
  class Clothing;

  //-------------------------------------BASE GAME OVERRIDE
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
  class AthleticShoes_ColorBase: Clothing
  {
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
    };
  };
  class DressShoes_ColorBase: Clothing
  {
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
    attachments[]+={"SRP_GunDerringer"};
    rootClassName="LeatherShoes";
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
  class Ballerinas_ColorBase: Clothing
  {
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

};