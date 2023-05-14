class CfgPatches
{
	class Survivalists_Characters_Pants
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Pants",
      "Alv_Tac_Gear_Pants",
      "Kneepads_Jeans",
      "Galife_Pants",
      "Alv_Tac_Gear_Pants"
		};
	};
};
class CfgVehicles
{
  class Pants_Base;

//-------------------------------------BASE GAME OVERRIDE
  class Jeans_ColorBase: Pants_Base
  {
    rootClassName="Jeans";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Blue1",
      "Brown",
      "Green",
      "Grey",
      "BlueDark",
      "Orange",
      "Lime",
      "Moss",
      "Pink",
      "Purple",
      "Red",
      "Rose",
      "Teal",
      "Yellow",
      "CadPat_Green",
      "CadPat_Blue",
    };
  };
  class CargoPants_ColorBase: Pants_Base
	{
		itemsCargoSize[]={7,4};
    rootClassName="CargoPants";
    colorVariants[]=
    {
      "Beige",
      "Black",
      "Blue",
      "Green",
      "Grey",      
      "Janek",
      "Rain",
      "Bandit",
      "Bandit1",
      "Bandit2",
      "Bandit3",
      "Denim",
      "MTP",
      "ATAC",
      "ATACCSFG",
      "USNAOR1",
      "USNAOR2",
      "Sumrak",
      "MarpatWinter",
      "EMP6",
      "Snow",
      "Tan",
      "Olive",
      "Brown1",
      "Blue2",
      "ERDL",
      "ChocChip",
      "CADPAT",
      "M05",
      "MARPAT",
      "MulticamBlack",
      "TigerStripe",
    };
  };
  class TTSKOPants: Pants_Base
  {
    rootClassName="TTSKOPants";
    colorVariants[]=
    {
      "Green",
      "Tan",
    };
  };
  class HunterPants_ColorBase: Pants_Base
	{
		itemsCargoSize[]={8,6};
    rootClassName="HunterPants";
    colorVariants[]=
    {
      "Autumn",
      "Brown",
      "Spring",
      "Summer",
      "Winter",
      "Black",
      "Grey",
      "MTP",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
      "TigerCamo"
    };
  };      
  class CanvasPants_ColorBase: Pants_Base
	{
    rootClassName="CanvasPants";
    colorVariants[]=
    {
      "Beige",
      "Blue",
      "Grey",
      "Red",
      "Violet",
      "Leather"
    };
  };
  class CanvasPantsMidi_ColorBase: Pants_Base
	{
    rootClassName="CanvasPantsMidi";
    colorVariants[]=
    {
      "Beige",
      "Blue",
      "Grey",
      "Red",
      "Violet",
      "Leather"
    };
  };
  class TrackSuitPants_ColorBase: Pants_Base
	{
    rootClassName="TrackSuitPants";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Green",
      "Red",
      "LightBlue",
      "Montana",
      "MTP",
      "ATAC",
    };
  };
  class GorkaPants_ColorBase: Pants_Base
	{
		itemsCargoSize[]={8,6};
    heatIsolation=0.80000001;
    rootClassName="GorkaPants";
    colorVariants[]=
    {
      "Summer",
      "Autumn",
      "Flat",
      "PautRev",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "Marpat",
      "MARPATWinter",
      "EMP6",
      "ERDL",
      "Snow",
      "Multicam",
      "MulticamTropic",
      "MulticamBlack",
      "CAD",
      "ChocChip",
      "M05",
      "TigerStripe",
    };
  };
  class PolicePants: Pants_Base
	{
    rootClassName="PolicePants";
    colorVariants[]=
    {
      "Sheriff1",
      "Sheriff2",      
    };
  };
  class PolicePantsOrel: Pants_Base
	{
    rootClassName="PolicePantsOrel";
    colorVariants[]=
    {
      "SWAT",
      "WinterCamo",      
    };
  };
  class ParamedicPants_ColorBase: Pants_Base
	{
    rootClassName="ParamedicPants";
    colorVariants[]=
    {
      "Blue",
      "Crimson",
      "Green",
      "Black",
    };
  };
  class FirefightersPants_ColorBase: Pants_Base
	{
    rootClassName="FirefightersPants";
    colorVariants[]=
    {
      "Beige",
      "Black",
    };
  };
  class PrisonUniformPants: Pants_Base
	{
    rootClassName="PrisonUniformPants";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Leather",
    };
  };
  class LeatherPants_ColorBase: Pants_Base
  {
    rootClassName="LeatherPants";
    colorVariants[]=
    {
      "Natural",
      "Beige",
      "Brown",
      "Black",
      "Choco",
      "Lime",
      "Orange",
      "Pink",
      "Purple",
      "Storm",
      "Yellow",
    };
  };
  class MedicalScrubsPants_ColorBase: Pants_Base
  {
    rootClassName="MedicalScrubsPants";
    colorVariants[]=
    {
      "Blue",
      "Green",
      "White"
    };
  };
  class USMCPants_ColorBase: Pants_Base
  {
    rootClassName="USMCPants";
    colorVariants[]=
    {
      "Desert",
      "Woodland",      
    };
  };
  class SlacksPants_ColorBase: Pants_Base
  {
    rootClassName="SlacksPants";
    colorVariants[]=
    {
      "Beige",
      "Black",
      "Blue",
      "Brown",
      "DarkGrey",
      "Khaki",
      "LightGrey",
      "White",
      "TweedBlack",
      "TweedGrey",
      "TweedNavy",
      "TweedSalmon",
    };
  };
  class NBCPantsBase: Pants_Base
	{
    rootClassName="NBCPantsBase";
    colorVariants[]=
    {
      "Orange",
      "Gray",
      "Yellow",
    };
		class Protection 
    {
      biological=1;
    };
	};
  class Breeches_ColorBase: Pants_Base
  {
    rootClassName="Breeches";
    colorVariants[]=
    {
      "Beige",
      "Beetcheck",
      "Black",
      "Blackcheck",
      "Blue",
      "Browncheck",
      "Green",
      "White",
      "Red",
      "Pink",
    };
  };
  class ShortJeans_ColorBase: Pants_Base
  {
    rootClassName="ShortJeans";
    colorVariants[]=
    {
      "Black",
      "Black1",
      "Blue",
      "Brown",
      "DarkBlue",
      "Green",      
      "Red",
      "Grape",
      "Snow",
      "Leather"
    };
  };
  class Skirt_ColorBase: Pants_Base
  {
    rootClassName="Skirt";
    colorVariants[]=
    {
      "Blue",
      "Red",
      "White",
      "Yellow",
    };
  };
  class JumpsuitPants_ColorBase: Pants_Base
  {
    rootClassName="JumpsuitPants";
    colorVariants[]=
    {
      "Blue",
      "Green",
      "Grey",
      "Red",
    };
  };  
  class LegsCover_Improvised: Pants_Base
  {
    rootClassName="LegsCover_Improvised";
    colorVariants[]=
    {
      "Green",
      "Black",      
      "Orange",      
      "Blue",      
      "Red",      
    };
  };
//-------------------------------------ALEVARIC OVERRIDE
  class ALV_MV_CryeG3_Pants_Colorbase: Pants_Base
  {
    rootClassName="ALV_MV_CryeG3_Pants";
    colorVariants[]=
    {
      "Black",
      "Green",
      "Tan",
      "Brown",
      "Cadpat",
      "ChocoChip",
      "ERDL",
      "M05",
      "Marpat",
      "MC_Black",
      "TigerStripe",      
    };
  };
  class ALV_MV_SurvivorPants_Colorbase: Pants_Base
  {
    rootClassName="ALV_MV_SurvivorPants";
    colorVariants[]=
    {
      "Black",
      "Green",
      "Tan",    
    };
  };
  class ALV_MV_ScoutingPants_Colorbase: Pants_Base
  {
    rootClassName="ALV_MV_ScoutingPants";
    colorVariants[]=
    {
      "Black",
      "Green",
      "Tan",
      "Brown",
      "Cadpat",
      "ChocoChip",
      "ERDL",
      "M05",
      "Marpat",
      "MC_Black",
      "TigerStripe",      
    };
  };
  
//-------------------------------------MODDED OVERRIDE
  class Skinny_Jeans_ColorBase: Pants_Base
  {
    rootClassName="Skinny_Jeans";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Chocolate",
      "Coal",
      "HeartBunnyPetal",
      "HeartBunnySky",
      "HeartPink",
      "Lime",
      "PurpleDark",
      "RedBunny",
      "TealBunny",
      "YellowBunny"
    };
  };
  class Galife_Pants_ColorBase: Pants_Base
  {
    rootClassName="Galife_Pants";
    colorVariants[]=
    {
      "Olive",
      "Navy",
      "Blue",
      "Coal",
      "Green",
      "Pink",
      "Wool"      
    };
  };
  class Leggings_Colorbase: Pants_Base
  {
    rootClassName="Leggings";
    colorVariants[]=
    {
      "Blue",
      "Blue1",
      "Adidas",
      "adidasKitty",
      "AdidasPink",
      "Red",
      "Purple",
      "Grey",
      "Black",
      "White",
    };
  };
//======================================= CUSTOM CLOTHING
  class SRP_ESPG3_TacPants_Colorbase: Pants_Base
  {
    scope=0;
    displayName="ESP-G3 Combat Pants";
    descriptionShort="The ESP-G3 Combat Pants were designed and manufactured in mass quantities in the 2001. Whilst not commonly used by the US military, due to their extortionate cost, they did become favourable amongst military enthusiasts and private military companies";
    model="Survivalists_characters\pants\SRP_ESP_G3_TacPants_g.p3d";
    inventorySlot[]=
    {
      "Legs"
    };
    itemSize[]={4,3};
    itemsCargoSize[]={6,4};
    weight=530;
    ragQuantity=3;
    varWetMax=1;
    heatIsolation=0.80000001;
    repairableWithKits[]={5,2};
    repairCosts[]={30,25};
    quickBarBonus=2;
    hiddenSelections[]=
    {
      "zbytek",
      "personality"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_characters\pants\Data\ESP_G3_TacPants_CO.paa"
    };
    class ClothingTypes
    {
      male="Survivalists_characters\pants\SRP_ESP_G3_TacPants_m.p3d";
      female="Survivalists_characters\pants\SRP_ESP_G3_TacPants_f.p3d";
    };
    rootClassName="SRP_ESPG3_TacPants";
    colorVariants[]=
    {
      "Black",
      "Tan",
      "Green",
      "MC_Black",
      "CAD",
      "M05",
      "ChocChip",
      "ERDL",
      "MARPAT_Wood",
      "GreyHex",
      "HelloKitty",
    };
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          hitpoints=100;
          healthLevels[]=
          {
            {1,{"Survivalists_characters\pants\Data\ESP_G3_TacPants.rvmat"}},
            {0.69999999,{"Survivalists_characters\pants\Data\ESP_G3_TacPants.rvmat"}},
            {0.5,{"Survivalists_characters\pants\Data\ESP_G3_TacPants_damage.rvmat"}},
            {0.30000001,{"Survivalists_characters\pants\Data\ESP_G3_TacPants_damage.rvmat"}},
            {0,{"Survivalists_characters\pants\Data\ESP_G3_TacPants_destruct.rvmat"}}
          };
        };
      };
      class GlobalArmor
      {
        class Melee
        {
          class Health
          {
            damage=0.89999998;
          };
          class Blood
          {
            damage=0.89999998;
          };
          class Shock
          {
            damage=0.89999998;
          };
        };
        class Infected
        {
          class Health
          {
            damage=0.89999998;
          };
          class Blood
          {
            damage=0.89999998;
          };
          class Shock
          {
            damage=0.89999998;
          };
        };
      };
    };
    class AnimEvents
    {
      class SoundWeapon
      {
        class pickUpItem
        {
          soundSet="Shirt_pickup_SoundSet";
          id=797;
        };
        class drop
        {
          soundset="Shirt_drop_SoundSet";
          id=898;
        };
      };
    };
  };  
//-------------------------------------END
};