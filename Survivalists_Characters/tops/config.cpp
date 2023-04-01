class CfgPatches
{
	class Survivalists_Characters_Tops
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Tops",
      "Survivalists_Armbands_Flag",
      "Winter_Parka",
      "Dressupbox"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  // Remove eventually once Lore dictates
  class SaltyCougar_Armband;
  class Skylar_BioZone_Protection: SaltyCougar_Armband
	{
		scope=2;
		displayName="The Queen's Shawl";
		descriptionShort="Ignore biohzard effects";
    class Protection
    {
      biological=6;
    };
	};
//-------------------------------------MOD OVERRIDE
	class Winter_Parka_Base: Clothing
  {
    rootClassName="Winter_Parka";
    colorVariants[]=
    {
      "White",
      "Green",
      "Black",
      "PinkWhite",
      "PinkBlack",
      "BlueWhite",
      "BlueBlack"
    };
  }; 
  class DUB_WoolCoat: Clothing
	{
    rootClassName="DUB_WoolCoat";
    colorVariants[]=
    {
      "Red",
      "Green",
      "Brown",
      "Purple",    
    };
	};
///============== MODDED
  class DUB_Poncho: Clothing
	{
    rootClassName="DUB_Poncho";
    colorVariants[]=
    {
      "Blue",
      "Flake",
      "Pink",
      "Flowers",
      "PinkFlowers",
      "PurpleFlowers",
      "PinkPurple",
      "PurpleBlue",
      "Rose",
      "YellowRed",      
    };
  };
//----------------------------------- BASE GAME OVERRIDE
  class NBCJacketBase: Clothing
	{
		heatIsolation=0.80000001;
		absorbency=0;
    rootClassName="NBCJacketBase";
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
  class Sweater_ColorBase: Clothing
  {
    rootClassName="Sweater";
    colorVariants[]=
    {
      "Gray",
      "Blue",
      "Green",
      "Red",
      "SantaRL",
      "SantaBlueRL",
      "SantaRedGreenRL",
      "SantaRedBlueRL",
    };
  };
  class Shirt_ColorBase: Clothing
  {
    rootClassName="Shirt";
    colorVariants[]=
    {
      "BlueCheck",
      "BlueCheckBright",
      "GreenCheck",
      "RedCheck",
      "WhiteCheck",
      "PlaneBlack",
      "PlainDenim",
      "PlainGrey",
      "PlainBurgandy",
      "CatBlue",
      "CatLime",
      "CatPink",
      "PlainGrape",      
      "PlainCat", 
    };
  };
  class TShirt_ColorBase: Clothing
  {
    rootClassName="TShirt";
    colorVariants[]=
    {
      "Beige",
      "Black",
      "Blue",
      "Green",
      "OrangeWhiteStripes",
      "Red",
      "RedBlackStripes",
      "White",
      "Grey",
      "PocketPals",
      "Mendel",
      "WhiteRabbit",
      "WhiteNY",
      "WhiteUnicorn",
      "WhiteDreams",
      "WhitePunk",
      "GotMilk",
      "RedSun",
      "Nirvana",
      "IronMaiden",
      "BlackRabbit",
      "BlackNY",
      "BlackUnicorn",
      "BlackDreams",
      "BlackCars",
      "BlackPunk",
      "Music",
      "Scream",
      "Rock",
      "Misfits",
      "Smiley",
      "Kids",
      "Piggy",
      "Catdog",
      "BlackCatdog",
    };
  };
  class Hoodie_ColorBase: Clothing
  {
    rootClassName="Hoodie";
    colorVariants[]=
    {
      "Blue",
      "Blue1",
      "Black",
      "Brown",
      "Brown1",
      "Green",
      "Grey",      
      "Grey1",      
      "Red",      
      "Red1",      
      "Purple",      
      "Pink",      
    };
  };
  class TacticalShirt_ColorBase: Clothing
	{
    itemsCargoSize[]={7,5};
    rootClassName="TacticalShirt";
    colorVariants[]=
    {
      "Grey",
      "Black",
      "Olive",
      "Tan",
      "Lime",
      "Green",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
      "ERDL",
      "Snow",
      "Multicam",
      "MulticamTropic",
      "MulticamBlack",
      "Flecktarn",
    };
  };
  class HikingJacket_ColorBase: Clothing
	{
    rootClassName="HikingJacket";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Red",
      "Green",
      "ChocChip",
      "CAD",
      "ERDL",
      "M05",
      "MARPAT",
      "MulticamBlack",
      "TigerStripe",
    };
  };
  class Raincoat_ColorBase: Clothing
	{
    rootClassName="Raincoat";
    colorVariants[]=
    {
      "Orange",
      "Green",
      "Yellow",
      "Pink",
      "Red",
      "Blue",
      "Black",
      "Leather",
    };
  };
  class M65Jacket_ColorBase: Clothing
	{
		itemsCargoSize[]={8,6};
    rootClassName="M65Jacket";
    colorVariants[]=
    {
      "Black",
      "Khaki",
      "Tan",
      "Olive",
      "ATFBlack",
      "CIABlack",
      "FBIBlack",
      "MedicalBlack",
      "MedicalDpmDesert",
      "MedicalKhaki",
      "MedicalOlive",
      "MedicalTan",
      "Brown",
      "Grey",
      "RedPatches",
      "RedFaded",
      "Leather",
      "Leather1",
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
  class GorkaEJacket_ColorBase: Clothing
	{
    itemsCargoSize[]={8,5};
		heatIsolation=0.80000001;
    rootClassName="GorkaEJacket";
    colorVariants[]=
    {
      "Summer",
      "Flat",
      "Autumn",
      "PautRev",
      "Blue",
      "Tan",
      "Brown",
      "Olive",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
      "ERDL",
      "ERDL2",
      "Snow",
      "Multicam",
      "MulticamTropic",
      "MulticamBlack",
      "MulticamBlack2",
      "CAD",
      "ChocChip",
      "M05",
      "MARPAT",
      "TigerStripe",
    };
  };
  class RidersJacket_ColorBase: Clothing
	{
    rootClassName="RidersJacket";
    colorVariants[]=
    {
      "Black",
      "Brown",
      "White",
      "Skull",
      "Heart",
      "Yoda",
      "RedSun",
      "Rabbit",
      "NY",
      "Nirvana",
      "IronMaiden",
      "Unicorn",
      "Dreams",
      "Punk",
      "UpInSmoke",
      "CheechNChong",
      "Exploited",
      "FlashGordon",
      "FuckYou",
      "Smiley1",
      "Heart1",
      "Schrodinger",
      "Rainbow",
      "SmileBeatles",
    };
  };
  class WoolCoat_ColorBase: Clothing
	{
    rootClassName="WoolCoat";
    colorVariants[]=
    {
      "Black",
      "Red",
      "Blue",
      "Green",
      "Beige",
      "RedCheck",
      "BlackCheck",
      "BlueCheck",
      "GreyCheck",
      "BrownCheck",      
      "Leather",      
    };
  };
  class TrackSuitJacket_ColorBase: Clothing
	{
    rootClassName="TrackSuitJacket";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Green",
      "LightBlue",
      "Red",
      "Montana",
      "MTP",
      "ATAC",
    };
  };
  class PoliceJacket: Clothing
	{
    rootClassName="PoliceJacket";
    colorVariants[]=
    {
      "Sheriff",
      "Sheriff1",
    };
  };
  class PoliceJacketOrel: Clothing
	{
    rootClassName="PoliceJacketOrel";
    colorVariants[]=
    {
      "WinterCamo",
      "Swat",    
    };
  };
  class ParamedicJacket_ColorBase: Clothing
	{
    rootClassName="ParamedicJacket";
    colorVariants[]=
    {
      "Blue",
      "Crimson",
      "Green",
      "BlackMedic"
    };
  };
  class FirefighterJacket_ColorBase: Clothing
	{
    rootClassName="FirefighterJacket";
    colorVariants[]=
    {
      "Beige",
      "Black",
    };
  };
  class PrisonUniformJacket: Clothing
	{
    rootClassName="PrisonUniformJacket";
    colorVariants[]=
    {
      "Beige",
      "Black",
      "HawaiianMultiLeaf",
      "HawaiianPalmLeaf",
      "HawaiianFlowers",
      "Leather"
    };
  };
  class MiniDress_ColorBase: Clothing
	{
    rootClassName="MiniDress";
    colorVariants[]=
    {
      "Pink",
      "PinkChecker",
      "RedChecker",
      "WhiteChecker",
      "GreenChecker",
      "BrownChecker",
      "BlueChecker",
      "BlueWithDots",
      "Leather",
    };
  };
  class QuiltedJacket_ColorBase: Clothing
	{
    rootClassName="QuiltedJacket";
    colorVariants[]=
    {
      "Black",
      "Green",
      "Blue",
      "Red",
      "Grey",
      "Orange",
      "Yellow",
      "Violet",
      "Puffy",
      "Brown",
      "Denim",
      "White",
      "Blarg",
      "BlueStripe",
      "PinkPaw",
      "SnowFancy",
      "HeartBlue",
      "HeartPink",
      "HeartPurple",
      "DarkBlueStripe",
      "DarkPurpleStripe",
      "GreyStripe",
      "PinkPinkStripe",
      "Rose",
      "SnowPink",
      "SnowWhite",
      "TealYellowStripe",      
    };
  };
  class BomberJacket_ColorBase: Clothing
	{
    rootClassName="BomberJacket";
    colorVariants[]=
    {
      "Black",
      "Black2",
      "Black3",
      "Brown",
      "Grey",
      "Maroon",
      "Olive",
      "SkyBlue",
      "Devil",
      "Leather",      
    };
  };
  class LeatherJacket_ColorBase: Clothing
	{
    rootClassName="LeatherJacket";
    colorVariants[]=
    {
      "Natural",
      "Beige",
      "Brown",
      "Black",      
    };
  };
  class HuntingJacket_ColorBase: Clothing
	{
    rootClassName="HuntingJacket";
    colorVariants[]=
    {
      "Autumn",
      "Brown",
      "Spring",
      "Summer",      
      "Winter",      
      "Black",      
      "RainJacket",      
      "MTP",      
      "ATAC",      
      "ATACSFG",      
      "USNAOR1",      
      "USNAOR2",      
      "SURPAT",      
      "MARPATWinter",      
      "EMP6",      
      "Gold",      
      "Grape",      
      "Navy",      
      "Red",      
      "Leather",
      "GreenCamo",
      "BrownCamo",
      "PurpleCamo",
      "DarkGreenCamo",
      "RedCamo",
      "WhiteSkull",
      "TanSkull",
      "PurpleSkull",
      "BlueSkull",
      "BlackSkull",
    };
  };
  class LeatherShirt_ColorBase: Clothing
  {
    rootClassName="LeatherShirt";
    colorVariants[]=
    {
      "Natural",
      "Choco",
      "Lime",
      "Orange",
      "Pink",
      "Purple",
      "Storm",
      "Yellow",
    };
  };
  class TTsKOJacket_ColorBase: Clothing
  {
    rootClassName="TTsKOJacket";
    colorVariants[]=
    {
      "Camo",
      "Tan",      
    };
  };

  class MedicalScrubsShirt_ColorBase: Clothing
	{
    rootClassName="MedicalScrubsShirt";
    colorVariants[]=
    {
      "Blue",
      "Green",
      "White",
    };
  };
  class NurseDress_ColorBase: Clothing
  {
    heatIsolation=0.80000001;
    rootClassName="NurseDress";
    colorVariants[]=
    {
      "White",
      "Blue",      
      "BlackGrape",      
      "BlackGreen",      
      "BlackMint",      
      "BlackOcean",      
      "BlackPink",      
      "BlackRed",      
      "BlackSnow",      
      "BlackStorm",      
      "BlackSunny",      
      "BlackWhite",      
      "BlueYellow",      
      "GreenBlack",      
      "GreenBlackBow",      
      "PinkWhite",      
      "WhiteBowBlue",      
      "WhiteBowGreen",      
      "WhiteBowPink",
    };
  };
  class USMCJacket_ColorBase: Clothing
  {
    rootClassName="USMCJacket";
    colorVariants[]=
    {
      "Desert",
      "Woodland",
    };
  };
  class Blouse_ColorBase: Clothing
  {
    rootClassName="Blouse";
    colorVariants[]=
    {
      "Blue",
      "White",
      "Green",
      "Violet",
      "Leather",
    };
  };
  class DenimJacket: Clothing
  {
    rootClassName="DenimJacket";
    colorVariants[]=
    {      
      "Black",
      "Leather",
    };
  };
  class JumpsuitJacket_ColorBase: Clothing
  {
    rootClassName="JumpsuitJacket";
    colorVariants[]=
    {      
      "Blue",
      "Gray",
      "Green",
      "Red",
      "ATFBlue",
      "CIABlue",
      "FBIBlue",
    };
  };
  class ManSuit_ColorBase: Clothing
  {
    rootClassName="ManSuit";
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
    };
  };
  class WomanSuit_ColorBase: Clothing
  {
    rootClassName="WomanSuit";
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
    };
  };
  class TorsoCover_Improvised: Clothing
  {
    rootClassName="TorsoCover_Improvised";
    colorVariants[]=
    {
      "Green",
      "Black",      
      "Orange",      
      "Blue",      
      "Red",      
    };
  };


  class DUB_Monkrobe: Clothing
  {
    rootClassName="DUB_Monkrobe";
    colorVariants[]=
    {      
      "Blue",
      "Burg",
      "Coal",
      "Forest",
      "Lav",
      "Olive",
      "Pink",
      "Purp",
      "Red",
      "Salmon",
      "Snow",
      "Teal",
      "Toast",
      "Purp",
    };
  };
  class DUB_Duster: Clothing
  {
    rootClassName="DUB_Duster";
    colorVariants[]=
    {      
      "Black",
      "Cow",
      "Python",
      "OD",
      "Pink",
      "Pink1",
      "Chocolate",
      "Forest",
      "Lavender",
      "Navy",
      "Red",
    };
  };


  class Armband_ColorBase: Clothing
	{
		hiddenSelections[] = {"zbytek", "leftarmroll", "rightarmroll"};
	};

  class MassArmbandDouble_Colorbase: Armband_ColorBase
	{
    hiddenSelections[] = {"zbytek", "leftarmroll", "rightarmroll"};
	};

  class Leather_Cloak_ColorBase: Clothing
	{
    rootClassName="Leather_Cloak_down";
    colorVariants[]=
    {      
      "Blue",
      "Coffee",
      "Green",
      "Grey",
      "HeartsBlue",
      "HeartsPink",
      "Orange",
      "Pink",
      "Purple",
      "Red",
      "Snow",
      "Teal",
      "Yellow",
    };
	};

//===================== CUSTOM SHIRTS

  class SRP_Bowtie_ColorBase: Clothing
	{
    scope=0;
		displayName="Bow Tie";
		descriptionShort="A tie for any formal occasion.";
		model="Survivalists_Characters\tops\srp_bowtie_g.p3d";
		inventorySlot[]=
		{
			"Armband",
      "Extra",
      "Wig"
		};
		itemInfo[]=
		{
			"Clothing",
			"Armband"
		};
    rootClassName="SRP_Bowtie";
    colorVariants[]=
    {      
      "BlackWhiteDot",
      "Black",
      "Blue",
      "Gold",
      "Purple",
      "Red",
      "Yellow",
    };
		rotationFlags=34;
		weight=80;
		itemSize[]={2,1};
		ragQuantity=1;
		varWetMax=1;
		absorbency=0.80000001;
		repairableWithKits[]={2,3,5};
		repairCosts[]={20,20,25};
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]={"Survivalists_Characters\tops\data\srp_bowtie_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{"Survivalists_Characters\tops\data\srp_bowtie.rvmat"}},						
						{0.69999999,{"Survivalists_Characters\tops\data\srp_bowtie.rvmat"}},						
						{0.5,{"Survivalists_Characters\tops\data\srp_bowtie.rvmat"}},						
						{0.30000001,{"Survivalists_Characters\tops\data\srp_bowtie.rvmat"}},						
						{0,{"Survivalists_Characters\tops\data\srp_bowtie.rvmat"}}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\tops\srp_bowtie_m.p3d";
			female="Survivalists_Characters\tops\srp_bowtie_f.p3d";
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

  class SRP_PlatHoodie: Clothing
	{
    scope=2;
		displayName="Hoodie";
		descriptionShort="Espen Industries. A nicely sewed hoody with plenty of room inside.";
		model="Survivalists_Characters\tops\srp_plathoodie_g.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=850;
		itemSize[]={3,3};
		itemsCargoSize[]={5,4};
		quickBarBonus=1;
		varWetMax=1;
		heatIsolation=0.8;
		ragQuantity=4;
		repairableWithKits[]={2,3,5};
		repairCosts[]={20,20,25};
		soundAttType="WoolShirt";
    headSelectionsToHide[]=
		{
			"Clipping_BandanaHead",
			"Clipping_BandanaFace"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\tops\data\srp_plathoodie_co.paa"
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
						{1.0, {"Survivalists_Characters\tops\data\srp_plathoodie.rvmat"}},
            {0.69999999, {"Survivalists_Characters\tops\data\srp_plathoodie.rvmat"}},
            {0.5, {"Survivalists_Characters\tops\data\srp_plathoodie_damage.rvmat"}},
            {0.30000001, {"Survivalists_Characters\tops\data\srp_plathoodie_damage.rvmat"}},
            {0.0, {"Survivalists_Characters\tops\data\srp_plathoodie_destruct.rvmat"}}
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
		class ClothingTypes
		{
			male="Survivalists_Characters\tops\srp_plathoodie_m.p3d";
			female="Survivalists_Characters\tops\srp_plathoodie_f.p3d";
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

  class SRP_PlatHoodie_Wolfbeard: SRP_PlatHoodie
  {
    scope=2;
  };

  class SRP_Sweater_ColorBase: Clothing
	{
    scope=0;
		displayName="Turtleneck Sweater";
		descriptionShort="A loose fitting turtleneck sweater";
		model="Survivalists_Characters\tops\SRP_Sweater_g.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		rotationFlags=64;
		weight=2000;
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
		quickBarBonus=2;
		varWetMax=0.39;
		heatIsolation=0.90;
		repairableWithKits[]={2,3,5};
		repairCosts[]={20,20,25};
		soundAttType="LeatherJacket";
		hiddenSelections[]=
		{
			"zbytek",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\tops\data\srp_Sweater_CO.paa"
		};
    rootClassName="SRP_Sweater";
    colorVariants[]=
    {      
      "Orange",
      "Mustard",
      "Blue",
      "Grey",
      "Green",
      "Cream",
      "Burgundy"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Characters\tops\data\srp_sweater.rvmat"}},
						{0.7,{"Survivalists_Characters\tops\data\srp_sweater.rvmat"}},
						{0.5,{"Survivalists_Characters\tops\data\srp_sweater_damage.rvmat"}},
						{0.3,{"Survivalists_Characters\tops\data\srp_sweater_damage.rvmat"}},
						{0.0,{"Survivalists_Characters\tops\data\srp_sweater_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.69;
					};
					class Blood
					{
						damage=0.69;
					};
					class Shock
					{
						damage=0.85;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.71;
					};
					class Blood
					{
						damage=0.71;
					};
					class Shock
					{
						damage=0.85;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\tops\SRP_Sweater_m.p3d";
			female="Survivalists_Characters\tops\SRP_Sweater_f.p3d";
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

  class SRP_Rolled_Shirt_ColorBase: Clothing
	{
		scope=0;
		displayName="Rolled up shirt";
		descriptionShort="An unbuttoned shirt with rolled up sleeves.";
		model="Survivalists_Characters\tops\SRP_Rolled_Shirt_g.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		rotationFlags=64;
		weight=2000;
		itemSize[]={3,3};
		itemsCargoSize[]={6,5};
		quickBarBonus=2;
		varWetMax=0.38999999;
		heatIsolation=0.75;
		repairableWithKits[]={2,3,5};
		repairCosts[]={20,20,25};
		soundAttType="LeatherJacket";
		hiddenSelections[]=
		{
			"zbytek",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\tops\data\SRP_Rolled_Shirt_co.paa"
		};
    rootClassName="SRP_Rolled_Shirt";
    colorVariants[]=
    {      
      "Gray_Plaid",
      "Green_Plaid",
      "Red_Plaid",
      "Pink_Plaid",
      "Tan",
      "Pink",
      "Green",
      "Blue"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Characters\tops\data\srp_rolled_shirt.rvmat"}},
						{0.69999999,{"Survivalists_Characters\tops\data\srp_rolled_shirt.rvmat"}},
						{0.5,{"Survivalists_Characters\tops\data\srp_rolled_shirt_damage.rvmat"}},
						{0.30000001,{"Survivalists_Characters\tops\data\srp_rolled_shirt_damage.rvmat"}},
						{0.0,{"Survivalists_Characters\tops\data\srp_rolled_shirt_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.69;
					};
					class Blood
					{
						damage=0.69;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.70999998;
					};
					class Blood
					{
						damage=0.70999998;
					};
					class Shock
					{
						damage=0.85000002;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\tops\SRP_Rolled_Shirt_m.p3d";
			female="Survivalists_Characters\tops\SRP_Rolled_Shirt_f.p3d";
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

  class SRP_ESPG3_TacShirt_Colorbase: Clothing
  {
    scope=0;
    displayName="ESP-G3 Combat Shirt";
    descriptionShort="The ESP-G3 Combat Shirt weas designed and manufactured in mass quantities in the 2001. Whilst not commonly used by the US military, due to it's extortionate cost, it did become favourable amongst military enthusiasts and private military companies";
    model="Survivalists_characters\tops\SRP_ESP_G3_TacShirt_g.p3d";
    inventorySlot[]=
    {
      "Body"
    };
    itemInfo[]=
    {
      "Clothing",
      "Body"
    };
    rotationFlags=64;
    weight=2000;
    itemSize[]={3,3};
    itemsCargoSize[]={6,5};
    attachments[]=
    {
      "SRP_Patch"
    };
    quickBarBonus=2;
    varWetMax=0.38999999;
    heatIsolation=0.75;
		repairableWithKits[]={2,3,5};
		repairCosts[]={20,20,25};
    soundAttType="LeatherJacket";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_characters\tops\data\ESP_G3_TacShirt_CO.paa"
    };
    rootClassName="SRP_ESPG3_TacShirt";
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
      "HelloKitty"
    };
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          hitpoints=130;
          healthLevels[]=
          {
            {1,{"Survivalists_characters\tops\data\ESP_G3_TacShirt.rvmat"}},
            {0.69999999,{"Survivalists_characters\tops\data\ESP_G3_TacShirt.rvmat"}},
            {0.5,{"Survivalists_characters\tops\data\ESP_G3_TacShirt_damage.rvmat"}},
            {0.30000001,{"Survivalists_characters\tops\data\ESP_G3_TacShirt_damage.rvmat"}},
            {0,{"Survivalists_characters\tops\data\ESP_G3_TacShirt_destruct.rvmat"}}
          };
        };
      };
      class GlobalArmor
      {
          class Melee
          {
              class Health
              {
                  damage=0.69;
              };
              class Blood
              {
                  damage=0.69;
              };
              class Shock
              {
                  damage=0.85000002;
              };
          };
          class Infected
          {
              class Health
              {
                  damage=0.70999998;
              };
              class Blood
              {
                  damage=0.70999998;
              };
              class Shock
              {
                  damage=0.85000002;
              };
          };
      };
    };
    class ClothingTypes
    {
      male="Survivalists_characters\tops\SRP_ESP_G3_TacShirt_m.p3d";
      female="Survivalists_characters\tops\SRP_ESP_G3_TacShirt_f.p3d";
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
};