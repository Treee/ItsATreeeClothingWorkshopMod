class CfgPatches
{
	class Survivalists_Characters_Headgear
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Characters",
      "DZ_Characters_Headgear",
      "DZ_Characters_Masks",
      "DZ_Gear_Optics",
      "DZ_Characters_Glasses",
      "MSP_Clothing_Data"//bunny ears, slouchie
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class Clothing;
  class Switchable_Base;
  class BalaclavaMask_ColorBase;

	class Msp_BunnyEarsHeadband: Clothing
	{
    inventorySlot[]+={"Wig"};
  };
  class Msp_Slouchie_ColorBase: Clothing
	{
    rootClassName="Msp_Slouchie";
    colorVariants[]=
    {
      "Beige",
      "Black",
      "Blue",
      "Red",
      "Red1",      
      "Green",      
      "GreenWeed",      
      "GreyKitty",      
      "Pink",      
      "PinkKitty",      
      "PinkWeed",      
      "PinkPurple",      
      "Teal",      
      "TealWeed",      
    };
	};

//-------------------------------------- BASE GAME OVERRIDE
  class BallisticHelmet_ColorBase: Clothing
	{
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
    itemSize[]={3,3};
		itemsCargoSize[]={1,1};
    noMask=0;
    rootClassName="BallisticHelmet";
    colorVariants[]=
    {
      "Green",
      "Black",
      "UN",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
      "Rain"
    };
  };
  class BaseballCap_ColorBase: Clothing
	{
		itemSize[]={1,2};
		itemsCargoSize[]={1,1};
    rootClassName="BaseballCap";
    colorVariants[]=
    {
      "Blue",
      "Beige",
      "Black",
      "Olive",
      "Pink",
      "Red",
      "Camo",
      "CMMG_Black",
      "CMMG_Pink",
      "Lisiy",
      "PoliceCap",
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
  class BurlapSackCover: Clothing
  {
    rootClassName="BurlapSackCover";
    colorVariants[]=
    {
      "Black",
      "Skull",
      "White",
    }; 
  };
  class ConstructionHelmet_ColorBase: Clothing
	{
		itemsCargoSize[]={1,1};
    rootClassName="ConstructionHelmet";
    colorVariants[]=
    {
      "Blue",
      "Lime",
      "Orange",
      "Red",
      "White",
      "Yellow",
      "Camo",
      "CMMG_Black",
      "CMMG_Pink",
      "Lisiy",
      "PoliceCap",
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
  class BeanieHat_ColorBase: Clothing
	{
		itemSize[]={2,1};
		itemsCargoSize[]={2,1};
    rootClassName="BeanieHat";
    colorVariants[]=
    {
      "Beige",
      "Black",
      "Blue",
      "Brown",
      "Green",
      "Grey",
      "Pink",
      "Red",
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
  class MassCatEars: BeanieHat_ColorBase
  {
    inventorySlot[]+={"Wig"};
  };
  class Ushanka_ColorBase: Clothing
	{
		itemSize[]={2,2};
		itemsCargoSize[]={1,1};
    rootClassName="Ushanka";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Green",
      "Denim",
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
  class MotoHelmet_ColorBase: Clothing
	{
		soundVoiceType="none";
		soundVoicePriority=10;
    rootClassName="MotoHelmet";
    colorVariants[]=
    {
      "Black",
      "Grey",
      "Green",
      "Lime",
      "Blue",
      "Red",
      "White",
      "Yellow"
    };
	};
	class DarkMotoHelmet_ColorBase: Clothing
	{
		soundVoiceType="none";
		soundVoicePriority=10;
    rootClassName="DarkMotoHelmet";
    colorVariants[]=
    {
      "Black",
      "Grey",
      "Green",
      "Lime",
      "Blue",
      "Red",
      "White",
      "Yellow",
      "YellowScarred"
    };
	};
	class Headtorch_ColorBase: Switchable_Base
	{
		itemSize[]={2,1};
    rootClassName="Headtorch";
    colorVariants[]=
    {
      "Black",
      "Grey"
    };
	};
  class Bandana_ColorBase: Clothing
	{
    rootClassName="Bandana";
    colorVariants[]=
    {
      "RedPattern",
      "BlackPattern",
      "PolkaPattern",
      "GreenPattern",
      "CamoPattern",
      "Blue",
      "Pink",
      "Yellow",
      "65Black",
      "65Desert",
      "65Tan",
      "CheckBlue",
      "CheckBlueBright",
      "CheckGreen",
      "Checkred",
      "CheckWhite",
      "Denim",
      "Kamysh",
      "USMC_D",
      "USMC_W",
    };
	};
  class RadarCap_ColorBase: Clothing
	{
    rootClassName="RadarCap";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Brown",
      "Green",
      "Red"
    };
	};
  class MilitaryBeret_ColorBase: Clothing
	{
    rootClassName="MilitaryBeret";
    colorVariants[]=
    {
      "Red",
      "UN",
      "NZ",
      "ChDKZ",
      "CDF"
    };
	};
  class FlatCap_ColorBase: Clothing
	{
    rootClassName="FlatCap";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Red",
      "Brown",
      "BrownCheck",
      "GreyCheck",
      "BlackCheck",
      "ERDL",
      "Snow",
      "Multicam",
      "MulticamTropic",
      "MulticamBlack"
    };
	};
  class ZmijovkaCap_ColorBase: Clothing
	{
    rootClassName="ZmijovkaCap";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Brown",
      "Green",
      "Red",      
    };
	};
  class CowboyHat_ColorBase: Clothing
	{
    rootClassName="CowboyHat";
    colorVariants[]=
    {
      "Brown",
      "Black",
      "DarkBrown",
      "Green"  
    };
	};
  class BoonieHat_ColorBase: Clothing
	{
		itemSize[]={2,2};
		itemsCargoSize[]={1,1};
    rootClassName="BoonieHat";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "DPM",
      "Dubok",
      "Flecktran",
      "NavyBlue",
      "Olive",
      "Orange",
      "Red",
      "Tan",
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
    };
  };
  class GorkaHelmet: Clothing
	{
    rootClassName="GorkaHelmet";
    colorVariants[]=
    {
      "Black",
      "Green",
    };
  };
  class FirefightersHelmet_ColorBase: Clothing
	{
    rootClassName="FirefightersHelmet";
    colorVariants[]=
    {
      "Red",
      "White",
      "Yellow",
    };
  };
  class SkateHelmet_ColorBase: Clothing
	{
    rootClassName="SkateHelmet";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Gray",
      "Green",
      "Red",
    };
  };
  class PrisonerCap: Clothing
	{
    rootClassName="PrisonerCap";
    colorVariants[]=
    {
      "Brown"
    };
  };
  class GhillieHood_ColorBase: Clothing
	{
    rootClassName="GhillieHood";
    colorVariants[]=
    {
      "Tan",
      "Woodland",
      "Mossy"
    };
  };
  class LeatherHat_ColorBase: Clothing
	{
    rootClassName="LeatherHat";
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
  class MedicalScrubsHat_ColorBase: Clothing
	{
    rootClassName="MedicalScrubsHat";
    colorVariants[]=
    {
      "Blue",
      "White",
      "Green",      
    };
  };
  class DirtBikeHelmet_ColorBase: Clothing
	{
    rootClassName="DirtBikeHelmet";
    colorVariants[]=
    {
      "Green",
      "Chernarus",
      "Khaki",      
      "Police",      
      "Red",      
      "Black",      
      "Blue",      
    };
  };
  class NBCHoodBase: Clothing
  {
    class Protection 
    {
      biological=1;
    };
    rootClassName="NBCHood";
    colorVariants[]=
    {
      "Gray",
      "Yellow",
      "Orange" 
    };
  };
  class HockeyHelmet_ColorBase: Clothing
  {
    rootClassName="HockeyHelmet";
    colorVariants[]=
    {
      "Black",
      "Blue",
      "Red",
      "White",      
    };
  };
  class Mich2001Helmet: Clothing
	{
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
    itemSize[]={3,3};
		itemsCargoSize[]={1,1};
    noMask=0;
    rootClassName="Mich2001Helmet";
    colorVariants[]=
    {
      "EMP6",
      "MTP",
      "ATAC",
      "ATACSFG",      
      "USNAOR1",      
      "USNAOR2",      
      "SURPAT",      
      "MARPATWinter",      
    };
  };
  class WitchHood_ColorBase: Clothing
  {
    rootClassName="WitchHood";
    colorVariants[]=
    {
      "Black",
      "Brown",
      "Red",           
    };
  };
  class WitchHat: Clothing
  {
    rootClassName="WitchHat";
    colorVariants[]=
    {
      "Blue",
      "BlueKitty",
      "Pink",
      "RedKitty",           
    };
  };

// ----------------------------------------- Custom Stuff  
  class SRP_BaseballCap_Tinfoil: BaseballCap_ColorBase  // new
	{
		scope=2;
		color="Tinfoil";
    displayName="Tinfoil Hat";
    descriptionShort="Espen Industries. Light protection for the ... radio enthusiast ...";
    model="Survivalists_Characters\headgear\tinfoilhat_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\tinfoilhat_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\headgear\data\tinfoilhat.rvmat"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\headgear\tinfoilhat_m.p3d";
			female="Survivalists_Characters\headgear\tinfoilhat_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\headgear\data\tinfoilhat.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\tinfoilhat.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\tinfoilhat_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\tinfoilhat_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\headgear\data\tinfoilhat_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_TurkeyBeanie_ColorBase: BeanieHat_ColorBase  // new
	{
		scope=0;
    displayName="Turkey Beanie";
    descriptionShort="Espen Industries. A well knit cap with turkey legs.";
    model="Survivalists_Characters\headgear\turkeybeanie_g.p3d";
    rotationFlags="64";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\srp_turkey_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\headgear\data\turkeybeanie.rvmat"
		};
    rootClassName="SRP_TurkeyBeanie";
    colorVariants[]=
    {
      "Turkey",
      "TurkeyPink",
      "SkylarPink",
      "Green",      
      "Grey",      
      "Purple",      
      "Teal",      
      "Yellow",      
      "Light",      
      "Dark",      
      "Snowflake",      
    };
    class ClothingTypes
		{
			male="Survivalists_Characters\headgear\turkeybeanie_m.p3d";
			female="Survivalists_Characters\headgear\turkeybeanie_f.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\headgear\data\turkeybeanie.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\turkeybeanie.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\turkeybeanie.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\turkeybeanie.rvmat"}},
            {0.0,	{	"Survivalists_Characters\headgear\data\turkeybeanie.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_FrakenArmor_Helmet_ColorBase: BeanieHat_ColorBase  // new
	{
		scope=0;
    displayName="Fraken Armor - Helmet";
    descriptionShort="A gruesome mask made from human leather.";
    model="Survivalists_Characters\headgear\srp_frakenarmor_helmet_g.p3d";
    rotationFlags="64";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\srp_turkey_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\headgear\data\srp_frakenarmor_helmet.rvmat"
		};
    rootClassName="SRP_FrakenArmor_Mask";
    colorVariants[]={};
    class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_frakenarmor_helmet_m.p3d";
			female="Survivalists_Characters\headgear\srp_frakenarmor_helmet_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\headgear\data\srp_frakenarmor_helmet.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\srp_frakenarmor_helmet.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\srp_frakenarmor_helmet.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\srp_frakenarmor_helmet.rvmat"}},
            {0.0,	{	"Survivalists_Characters\headgear\data\srp_frakenarmor_helmet.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MinerHelmet: Headtorch_ColorBase
  {
		scope=2;
    displayName="Miner Helmet";
    descriptionShort="Espen Industries. Full head protection witha convenient light.";
    model="Survivalists_Characters\headgear\minerhelmet_g.p3d";
		itemSize[]={3,2};
    hiddenSelections[]=
		{
			"zbytek",
			"lamp",			
			"bulb",
			"reflector",
			"glass",
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\minerhelmet_co.paa",
			"Survivalists_Characters\headgear\data\minerhelmet_light_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\headgear\data\minerhelmet.rvmat",
      "Survivalists_Characters\headgear\data\minerhelmet_light.rvmat"
		};
    rootClassName="";
    colorVariants[]={};
    class ClothingTypes
		{
			male="Survivalists_Characters\headgear\minerhelmet_m.p3d";
			female="Survivalists_Characters\headgear\minerhelmet_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\headgear\data\minerhelmet.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\minerhelmet.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\minerhelmet_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\minerhelmet_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\headgear\data\minerhelmet_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_Brewsterhelm: BallisticHelmet_ColorBase
  {
		scope=2;
    displayName="Brewster Helmet";
    descriptionShort="Espen Industries. An old war era helmet. Very effective from the front.";
    model="Survivalists_Characters\headgear\brewsterhelm_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\brewstershield_co.paa" // using the shield texture. just grab that as a retexture
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\headgear\data\brewsterhelm.rvmat"
		};
    rootClassName="";
    colorVariants[]={};
    class ClothingTypes
		{
			male="Survivalists_Characters\headgear\brewsterhelm_m.p3d";
			female="Survivalists_Characters\headgear\brewsterhelm_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\headgear\data\brewsterhelm.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\brewsterhelm.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\brewsterhelm_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\brewsterhelm_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\headgear\data\brewsterhelm_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
  };
  
  class SRP_MaximusHelmet: Clothing
	{
		scope=2;
		displayName="Full Helmet";
		descriptionShort="Espen Industries. A slim helmet that covers the whole head";
		model="Survivalists_Characters\headgear\SRP_Maximus_Helmet_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;
		weight=1200;
		itemSize[]={4,3};
		noNVStrap=1;
		varWetMax=0.249;
		heatIsolation=0.25;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\SRP_Maximus_Helmet_Co.paa"
		};
    rootClassName="";
    colorVariants[]={};
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_maximus_helmet_m.p3d";
			female="Survivalists_Characters\headgear\srp_maximus_helmet_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						{1,	{	"Survivalists_Characters\headgear\data\srp_maximushelmet.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\srp_maximushelmet.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\srp_maximushelmet_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\srp_maximushelmet_damage.rvmat"}},
            {0,	{	"Survivalists_Characters\headgear\data\srp_maximushelmet_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.35;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_FireHead_ColorBase: Clothing
	{
		scope=2;
		displayName="Fire Helmet";
		descriptionShort="Espen Industries. A crude biohazard helmet that covers the whole head.";
		model="Survivalists_Characters\headgear\srp_fireheadgear_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;
		weight=1200;
		itemSize[]={4,3};
		noNVStrap=1;
		varWetMax=0.249;
		heatIsolation=0.25;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\srp_fireheadgear_co.paa"
		};
    rootClassName="";
    colorVariants[]={};
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_fireheadgear_m.p3d";
			female="Survivalists_Characters\headgear\srp_fireheadgear_m.p3d";
		};
    class Protection
		{
			biological=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\headgear\data\srp_fireheadgear.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\srp_fireheadgear.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\srp_fireheadgear_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\srp_fireheadgear_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\headgear\data\srp_fireheadgear_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.35;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class MetalCrown_ColorBase: Clothing
	{
    scope=0;
		displayName="Crown";
		descriptionShort="A forged crown, embedded with a flawless ruby. Heavy is the head that wears the crown.";
		model="Survivalists_characters\headgear\ArthurCrown_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		weight=110;
		itemSize[]={3,2};
		varWetMax=1;
		heatIsolation=0.2;
		repairableWithKits[]={3,8};
		repairCosts[]={50,25};
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_characters\headgear\data\ArthurCrown_Ruby_co.paa"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{						
						{1,{"Survivalists_characters\headgear\data\ArthurCrown.rvmat"}},						
						{0.69999999,{"Survivalists_characters\headgear\data\ArthurCrown.rvmat"}},						
						{0.5,{"Survivalists_characters\headgear\data\ArthurCrown.rvmat"}},						
						{0.30000001,{"Survivalists_characters\headgear\data\ArthurCrown.rvmat"}},						
						{0,{"Survivalists_characters\headgear\data\ArthurCrown.rvmat"}}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_characters\headgear\ArthurCrown_m.p3d";
			female="Survivalists_characters\headgear\ArthurCrown_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class MetalCrown_Basic: MetalCrown_ColorBase
	{
    scope=2;
	};
	class MetalCrown_Emerald: MetalCrown_ColorBase
	{
    scope=2;
		displayName="Emerald Crown";
		descriptionShort="A forged crown, embedded with a flawless emerald. Heavy is the head that wears the crown.";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
        "Survivalists_characters\headgear\data\ArthurCrown_Emerald_co.paa"
    };
	};
	class MetalCrown_Amethyst: MetalCrown_ColorBase
	{
    scope=2;
		displayName="Amethyst Crown";
		descriptionShort="A forged crown, embedded with a flawless amethyst. Heavy is the head that wears the crown.";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
        "Survivalists_characters\headgear\data\ArthurCrown_Amethyst_co.paa"
    };
	};
	class MetalCrown_Sapphire: MetalCrown_ColorBase
	{
    scope=2;
		displayName="Sapphire Crown";
		descriptionShort="A forged crown, embedded with a flawless sapphire. Heavy is the head that wears the crown.";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
        "Survivalists_characters\headgear\data\ArthurCrown_Sapphire_co.paa"
    };
	};


  class SRP_Masked_HighcutHelmet_ColorBase: Mich2001Helmet
	{
		scope=2;
		displayName="Masked Highcut helmet";
		descriptionShort="A Highcut helmet with shrapnel defense facemask";
		model="Survivalists_characters\headgear\SRP_Masked_HighcutHelmet_G.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={3,3};
		attachments[] = {"NVG","helmetFlashlight","SRP_Comtacs"};
		varWetMax=0.249;
		heatIsolation=0.30000001;
		headSelectionsToHide[]=
		{
			"Clipping_HelmetMich"
		};
		hiddenSelections[]=
		{
			"zbytek",
			"Mask"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_characters\headgear\data\Full_Face_Helm_ca.paa",
			"Survivalists_characters\headgear\data\Full_Face_Helm_Mask_ca.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{						
						{1,{"Survivalists_characters\headgear\data\Full_FaceHelm.rvmat"}},						
						{0.69999999,{"Survivalists_characters\headgear\data\Full_FaceHelm.rvmat"}},						
						{0.5,{"Survivalists_characters\headgear\data\Full_FaceHelm.rvmat"}},						
						{0.30000001,{"Survivalists_characters\headgear\data\Full_FaceHelm.rvmat"}},						
						{0,{"Survivalists_characters\headgear\data\Full_FaceHelm.rvmat"}}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_characters\headgear\SRP_Masked_HighcutHelmet_m.p3d";
			female="Survivalists_characters\headgear\SRP_Masked_HighcutHelmet_m.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};

// -=============================== OLD MVS STUFF  

  class BaseballCap_MilitaryPatrolTan: BaseballCap_ColorBase
	{
		scope=2;
		color="MilitaryPatrolTan";
    displayName="Patrol Cap";
    descriptionShort="Espen Industries. A tight fitting cap with room for a patch above the bill.";
    model="Survivalists_Characters\headgear\srp_patrolcap_g.p3d";
    rotationFlags=64;
    attachments[]=
		{
      "SRP_Patch",
      "SRP_Comtacs"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\srp_patrolcap_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\headgear\data\srp_patrolcap.rvmat"
		};
    rootClassName="";
    colorVariants[]={};
    class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_patrolcap_m.p3d";
			female="Survivalists_Characters\headgear\srp_patrolcap_f.p3d";
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
						{1.0,	{	"Survivalists_Characters\headgear\data\srp_patrolcap.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\srp_patrolcap.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\srp_patrolcap_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\srp_patrolcap_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\headgear\data\srp_patrolcap_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class BaseballCap_MilitaryPatrolTan_Backwards: BaseballCap_MilitaryPatrolTan
  {
		scope=2;
    rootClassName="";
    colorVariants[]={};
    class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_patrolcap_backwards_m.p3d";
			female="Survivalists_Characters\headgear\srp_patrolcap_backwards_f.p3d";
		};
  };

  class BaseballCap_Pakol: BaseballCap_ColorBase
	{
		scope=2;
		color="Pakol";
    displayName="Pakol";
		descriptionShort = "Espen Industries. Pakol, popularly known as the Chitrali cap, is a soft round-topped men's hat, typically of wool and found in any of a variety of earthy colors.";
    model="Survivalists_Characters\headgear\srp_pakol_g.p3d";
    rotationFlags=64;
    attachments[]=
		{
      "SRP_Comtacs"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\srp_pakol_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\headgear\data\srp_pakol.rvmat"
		};
    rootClassName="";
    colorVariants[]={};
    class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_pakol_m.p3d";
			female="Survivalists_Characters\headgear\srp_pakol_m.p3d";
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
						{1.0,	{	"Survivalists_Characters\headgear\data\srp_pakol.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\srp_pakol.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\srp_pakol_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\srp_pakol_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\headgear\data\srp_pakol_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_CombatHelmet_ColorBase: Mich2001Helmet
  {
    scope=0;
    displayName="Combat Helmet";
		descriptionShort="Espen Industries. The MICH-style combat helmet offers good ballistic protection, much like the MICH 2001 combat helmet. Has room for several attachments.";
		model="Survivalists_Characters\headgear\srp_combathelmet_g.p3d";
    attachments[]=
    {
      "NVG",
      "helmetFlashlight",
      "SRP_Patch",
      "SRP_PatchMirror",
      "SRP_Comtacs"  
    };
		inventorySlot[]={"Headgear"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Characters\headgear\data\srp_combathelmet_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\headgear\data\srp_combathelmet.rvmat"
    };
    rootClassName="SRP_CombatHelmet";
    colorVariants[]=
    {
      "Black",
      "Green",
      "Tan",
    };
		class ClothingTypes
		{
			male = "Survivalists_Characters\headgear\srp_combathelmet_m.p3d";
			female = "Survivalists_Characters\headgear\srp_combathelmet_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Characters\headgear\data\srp_combathelmet.rvmat"}},
						{0.7,{"Survivalists_Characters\headgear\data\srp_combathelmet.rvmat"}},
						{0.5,{"Survivalists_Characters\headgear\data\srp_combathelmet_damage.rvmat"}},
						{0.3,{"Survivalists_Characters\headgear\data\srp_combathelmet_damage.rvmat"}},
						{0.0,{"Survivalists_Characters\headgear\data\srp_combathelmet_destruct.rvmat"}}
					};
				};
			};
      class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};		
  };
  class SRP_CombatHelmetV2_ColorBase: Mich2001Helmet
  {
    scope=0;
    displayName="Combat Helmet - V2";
		descriptionShort="Espen Industries. The MICH-style v2 combat helmet offers good ballistic protection, much like the MICH 2001 combat helmet. Has room for several attachments.";
		model="Survivalists_Characters\headgear\srp_combathelmetv2_g.p3d";
    attachments[]=
    {
      "NVG",
      "helmetFlashlight",
      "SRP_Patch",
      "SRP_PatchMirror",
      "SRP_Comtacs"  
    };
		inventorySlot[]={"Headgear"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Characters\headgear\data\srp_combathelmetv2_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\headgear\data\srp_combathelmetv2.rvmat"
    };	
    rootClassName="SRP_CombatHelmetV2";
    colorVariants[]=
    {
      "Black",
      "Green",
      "Tan",
    };
		class ClothingTypes
		{
			male = "Survivalists_Characters\headgear\srp_combathelmetv2_m.p3d";
			female = "Survivalists_Characters\headgear\srp_combathelmetv2_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Characters\headgear\data\srp_combathelmetv2.rvmat"}},
						{0.7,{"Survivalists_Characters\headgear\data\srp_combathelmetv2.rvmat"}},
						{0.5,{"Survivalists_Characters\headgear\data\srp_combathelmetv2_damage.rvmat"}},
						{0.3,{"Survivalists_Characters\headgear\data\srp_combathelmetv2_damage.rvmat"}},
						{0.0,{"Survivalists_Characters\headgear\data\srp_combathelmetv2_destruct.rvmat"}}
					};
				};
			};
      class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
  };
  class SRP_CombatHelmet6B47_ColorBase: Mich2001Helmet
  {
    scope=0;
    displayName="Combat Helmet - 6B47";
		descriptionShort = "Espen Industries. The Russian-designed 6B47 helmet is a part of Ratnik combat gear.";
		model="Survivalists_Characters\headgear\srp_combathelmet6b47_g.p3d";
    attachments[]=
    {
      "NVG",
      "helmetFlashlight",
      "SRP_Patch",
      "SRP_PatchMirror",
      "SRP_Comtacs"  
    };
		inventorySlot[]={"Headgear"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Characters\headgear\data\srp_combathelmet6b47_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\headgear\data\srp_combathelmet6b47.rvmat"
    };	
    rootClassName="SRP_CombatHelmet6B47";
    colorVariants[]=
    {
      "Black",
      "Green",
      "Tan",
    };
		class ClothingTypes
		{
			male = "Survivalists_Characters\headgear\srp_combathelmet6b47_m.p3d";
			female = "Survivalists_Characters\headgear\srp_combathelmet6b47_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Characters\headgear\data\srp_combathelmet6b47.rvmat"}},
						{0.7,{"Survivalists_Characters\headgear\data\srp_combathelmet6b47.rvmat"}},
						{0.5,{"Survivalists_Characters\headgear\data\srp_combathelmet6b47_damage.rvmat"}},
						{0.3,{"Survivalists_Characters\headgear\data\srp_combathelmet6b47_damage.rvmat"}},
						{0.0,{"Survivalists_Characters\headgear\data\srp_combathelmet6b47_destruct.rvmat"}}
					};
				};
			};
      class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};		
  };
  class SRP_CombatHelmetHighCut_ColorBase: Mich2001Helmet
  {
    scope=0;
    displayName="Combat Helmet - High Cut";
		descriptionShort = "Espen Industries. The High Cut style combat helmet offers good ballistic protection, and comes prepped for comtac hearing protection.";
		model="Survivalists_Characters\headgear\srp_combathelmethighcut_g.p3d";
    attachments[]=
    {
      "NVG",
      "helmetFlashlight",
      "SRP_Patch",
      "SRP_PatchMirror",
      "SRP_Comtacs"  
    };
		inventorySlot[]={"Headgear"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Characters\headgear\data\srp_combathelmethighcut_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\headgear\data\srp_combathelmethighcut.rvmat"
    };	
    rootClassName="SRP_CombatHelmetHighCut";
    colorVariants[]=
    {
      "Black",
      "Green",
      "Tan",
    };
		class ClothingTypes
		{
			male = "Survivalists_Characters\headgear\srp_combathelmethighcut_m.p3d";
			female = "Survivalists_Characters\headgear\srp_combathelmethighcut_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Characters\headgear\data\srp_combathelmethighcut.rvmat"}},
						{0.7,{"Survivalists_Characters\headgear\data\srp_combathelmethighcut.rvmat"}},
						{0.5,{"Survivalists_Characters\headgear\data\srp_combathelmethighcut_damage.rvmat"}},
						{0.3,{"Survivalists_Characters\headgear\data\srp_combathelmethighcut_damage.rvmat"}},
						{0.0,{"Survivalists_Characters\headgear\data\srp_combathelmethighcut_destruct.rvmat"}}
					};
				};
			};
      class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};		
  };
  class SRP_CombatHelmetAltyn_ColorBase: Mich2001Helmet
  {
    scope=0;
    displayName="Combat Helmet - Altyn";
		descriptionShort = "Espen Industries. The Altyn helmet offers some of the best ballistic protection.";
		model="Survivalists_Characters\headgear\srp_combathelmetaltyn_g.p3d";
    attachments[]=
    {
      "NVG",
      "helmetFlashlight",
      "SRP_Patch",
      "SRP_PatchMirror",
      "SRP_Comtacs",
      "SRP_AltynVisor"
    };
		inventorySlot[]={"Headgear"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Characters\headgear\data\srp_combathelmetaltyn_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\headgear\data\srp_combathelmetaltyn.rvmat"
    };	
    rootClassName="SRP_CombatHelmetAltyn";
    colorVariants[]=
    {
      "Black",
      "Green",
      "Tan",
    };
		class ClothingTypes
		{
			male = "Survivalists_Characters\headgear\srp_combathelmetaltyn_m.p3d";
			female = "Survivalists_Characters\headgear\srp_combathelmetaltyn_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Characters\headgear\data\srp_combathelmetaltyn.rvmat"}},
						{0.7,{"Survivalists_Characters\headgear\data\srp_combathelmetaltyn.rvmat"}},
						{0.5,{"Survivalists_Characters\headgear\data\srp_combathelmetaltyn_damage.rvmat"}},
						{0.3,{"Survivalists_Characters\headgear\data\srp_combathelmetaltyn_damage.rvmat"}},
						{0.0,{"Survivalists_Characters\headgear\data\srp_combathelmetaltyn_destruct.rvmat"}}
					};
				};
			};
      class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};		
  };
  class SRP_AltynHelmetVisor_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Altyn Helmet Visor";
		descriptionShort="Espen Industries. A visor that attaches to the Atyln helmet to offore more protection.";
		model="Survivalists_Characters\headgear\srp_altynhelmetvisor.p3d";
		weight=350;
		itemSize[]={3,2};
    rotationFlags=16;
		inventorySlot[]=
		{
      "SRP_AltynVisor"
		};
    hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Characters\headgear\data\srp_combathelmetaltyn_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\headgear\data\srp_combathelmetaltyn.rvmat"
    };	
    rootClassName="SRP_AltynHelmetVisor";
    colorVariants[]=
    {
      "Black",
      "Green",
      "Tan",
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 	
					{					
						{1.0,{"Survivalists_Characters\headgear\data\srp_combathelmetaltyn.rvmat"}},
						{0.7,{"Survivalists_Characters\headgear\data\srp_combathelmetaltyn.rvmat"}},
						{0.5,{"Survivalists_Characters\headgear\data\srp_combathelmetaltyn_damage.rvmat"}},
						{0.3,{"Survivalists_Characters\headgear\data\srp_combathelmetaltyn_damage.rvmat"}},
						{0.0,{"Survivalists_Characters\headgear\data\srp_combathelmetaltyn_destruct.rvmat"}}
					};
				};
			};
      class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
    };
	};

	class SRP_FaceMaskSkull_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Face Mask";
		descriptionShort="Espen Industries. A mask used for concealing one's identity.";
		itemSize[]={3,2};
		rotationFlags=0;
		model="Survivalists_Characters\headgear\srp_facemask_skullmask_g.p3d";
    color="base";
    rootClassName="SRP_FaceMaskSkull";
    colorVariants[]=
    {
      "Wraith",
      "Black",
      "Snow",
      "OD",
      "Tan",
    };
		inventorySlot[]=
    {
      "Mask",
      "Headgear"
    };
		headSelectionsToHide[]=
    {
      "Clipping_Gasmask",
      "Clipping_Balaclava_3holes"
    };
		hiddenSelections[]=
    {
      "zbytek", 
      "mask"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\srp_facemask_co.paa",
			"Survivalists_Characters\headgear\data\srp_facemask_skullmask_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\headgear\data\srp_facemask.rvmat",
			"Survivalists_Characters\headgear\data\srp_facemask_skullmask.rvmat"
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
            {1.0,{"Survivalists_Characters\headgear\data\srp_facemask.rvmat","Survivalists_Characters\headgear\data\srp_facemask_skullmask.rvmat"}},
            {0.7,{"Survivalists_Characters\headgear\data\srp_facemask.rvmat","Survivalists_Characters\headgear\data\srp_facemask_skullmask.rvmat"}},
            {0.5,{"Survivalists_Characters\headgear\data\srp_facemask_damage.rvmat","Survivalists_Characters\headgear\data\srp_facemask_skullmask_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\headgear\data\srp_facemask_damage.rvmat","Survivalists_Characters\headgear\data\srp_facemask_skullmask_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\headgear\data\srp_facemask_destruct.rvmat","Survivalists_Characters\headgear\data\srp_facemask_skullmask_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_facemask_skullmask.p3d";
			female="Survivalists_Characters\headgear\srp_facemask_skullmask.p3d";
		};
	};
	class SRP_FaceMask_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Face Mask";
		descriptionShort="Espen Industries. A mask used for concealing one's identity.";
		itemSize[]={3,2};
		rotationFlags=0;
		model="Survivalists_Characters\headgear\srp_facemask_g.p3d";
    color="base";
    rootClassName="SRP_FaceMask";
    colorVariants[]=
    {
      "Wraith",
      "Black",
      "Snow",
      "OD",
      "Tan",
    };
		inventorySlot[]=
    {
      "Mask",
      "Headgear"
    };
		headSelectionsToHide[]=
    {
      "Clipping_Gasmask",
      "Clipping_Balaclava_3holes"
    };
		hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\srp_facemask_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\headgear\data\srp_facemask.rvmat"
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
            {1.0,{"Survivalists_Characters\headgear\data\srp_facemask.rvmat"}},
            {0.7,{"Survivalists_Characters\headgear\data\srp_facemask.rvmat"}},
            {0.5,{"Survivalists_Characters\headgear\data\srp_facemask_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\headgear\data\srp_facemask_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\headgear\data\srp_facemask_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_facemask.p3d";
			female="Survivalists_Characters\headgear\srp_facemask.p3d";
		};
	};
  class SRP_MouthCover_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Mouth Cover";
		descriptionShort="Espen Industries. A mask used for concealing one's identity. Only covers the mouth.";
		itemSize[]={3,2};
		rotationFlags=0;
		model="Survivalists_Characters\headgear\srp_mouthcover_g.p3d";
    color="base";
    rootClassName="SRP_MouthCover";
    colorVariants[]=
    {
      "Wraith",
      "Black",
      "Snow",
      "OD",
      "Tan",
    };
		inventorySlot[]=
    {
      "Mask"
    };
		headSelectionsToHide[]=
    {
      "Clipping_Gasmask",
      "Clipping_Balaclava_3holes"
    };
		hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\srp_facemask_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\headgear\data\srp_facemask.rvmat"
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
            {1.0,{"Survivalists_Characters\headgear\data\srp_facemask.rvmat"}},
            {0.7,{"Survivalists_Characters\headgear\data\srp_facemask.rvmat"}},
            {0.5,{"Survivalists_Characters\headgear\data\srp_facemask_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\headgear\data\srp_facemask_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\headgear\data\srp_facemask_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_mouthcover.p3d";
			female="Survivalists_Characters\headgear\srp_mouthcover.p3d";
		};
	};
	class SRP_Shroud_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Head Shroud";
		descriptionShort="Espen Industries. A mask used for concealing one's identity.";
		itemSize[]={3,2};
		rotationFlags=0;
		model="Survivalists_Characters\headgear\srp_shroud_g.p3d";
    color="base";
    rootClassName="SRP_Shroud";
    colorVariants[]=
    {
      "Black",
      "OD",
      "Tan",
    };
		inventorySlot[]=
    {
      "Mask",
      "Headgear"
    };
		headSelectionsToHide[]=
    {
      "Clipping_Gasmask",
      "Clipping_Balaclava_3holes"
    };
		hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\srp_shroud_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\headgear\data\srp_shroud.rvmat"
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
            {1.0,{"Survivalists_Characters\headgear\data\srp_shroud.rvmat"}},
            {0.7,{"Survivalists_Characters\headgear\data\srp_shroud.rvmat"}},
            {0.5,{"Survivalists_Characters\headgear\data\srp_shroud_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\headgear\data\srp_shroud_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\headgear\data\srp_shroud_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_shroud.p3d";
			female="Survivalists_Characters\headgear\srp_shroud.p3d";
		};
	};
  class SRP_Comtacs_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Comtacs";
		descriptionShort="Espen Industries. Comtacs - a trusted tactical communications and hearing protection headset that is field proven by law enforcement and militaries world wide";
		model="Survivalists_Characters\headgear\srp_comtacs_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		rotationFlags=16;
		weight=110;
		itemSize[]={3,2};
		absorbency=0.80000001;
		heatIsolation=0.25;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
    color="base";
    rootClassName="SRP_Comtacs";
    colorVariants[]=
    {
      "Black",
      "OD",
      "Tan",
    };
		inventorySlot[]=
		{
			"Headgear",
      "SRP_Comtacs",
      "Wig",
      "Extra"
		};
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		headSelectionsToHide[]=
		{
		};
		hiddenSelections[]=
		{
			"zbytek"
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
						{1.0,{"DZ\characters\headgear\data\BaseballCapII.rvmat"}},
            {0.699,{"DZ\characters\headgear\data\BaseballCapII.rvmat"}},
            {0.5,{"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"}},
            {0.301,{"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"}},
            {0.0,{"DZ\characters\headgear\data\BaseballCapII_destruct.rvmat"}}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_comtacs.p3d";
			female="Survivalists_Characters\headgear\srp_comtacs.p3d";
		};
	};

  class SRP_EarProtection_ColorBase: BalaclavaMask_ColorBase
	{
		scope=0;
		displayName="Ear Protection";
		descriptionShort="Espen Industries. Ear Protection - a trusted satefy protection headset that is field proven by law enforcement and militaries world wide";
		model="Survivalists_Characters\headgear\srp_comtacs_protection_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		rotationFlags=16;
		weight=110;
		itemSize[]={3,2};
		absorbency=0.80000001;
		heatIsolation=0.25;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
    color="base";
    rootClassName="SRP_EarProtection";
    colorVariants[]=
    {
      "Black",
      "OD",
      "Tan",
    };		
    inventorySlot[]=
		{
			"Headgear",
      "SRP_Comtacs",
      "Wig",
      "Extra"
		};
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		headSelectionsToHide[]=
		{
		};
		hiddenSelections[]=
		{
			"zbytek"
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
						{1.0,{"DZ\characters\headgear\data\BaseballCapII.rvmat"}},
            {0.699,{"DZ\characters\headgear\data\BaseballCapII.rvmat"}},
            {0.5,{"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"}},
            {0.301,{"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"}},
            {0.0,{"DZ\characters\headgear\data\BaseballCapII_destruct.rvmat"}}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_comtacs_protection.p3d";
			female="Survivalists_Characters\headgear\srp_comtacs_protection.p3d";
		};
	};

//================================= CUSTOM STUFF
  class SRP_SlimHelmetFull: Clothing
  {
    scope=2;
    displayName="Full Helmet";
    descriptionShort="Espen Industries. A slim helmet that coveres the whole head";
    model="Survivalists_Characters\headgear\srp_slimhelmet_g.p3d";
    repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]=
		{
			"NVG"
		};
		rotationFlags=2;
		weight=1200;
		itemSize[]={4,3};
		noNVStrap=1;
		varWetMax=0.249;
		heatIsolation=0.25;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
    hiddenSelections[]=
		{
			"zbytek",
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\srp_slimhelmet_co.paa"
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\headgear\srp_slimhelmet_m.p3d";
			female="Survivalists_Characters\headgear\srp_slimhelmet_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						{1,	{	"Survivalists_Characters\headgear\data\srp_slimhelmet.rvmat"}},
						{0.69999999,	{	"Survivalists_Characters\headgear\data\srp_slimhelmet.rvmat"}},
						{0.5,	{	"Survivalists_Characters\headgear\data\srp_slimhelmet_damage.rvmat"}},
						{0.30000001,	{	"Survivalists_Characters\headgear\data\srp_slimhelmet_damage.rvmat"}},
						{0,	{	"Survivalists_Characters\headgear\data\srp_slimhelmet_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
  };

  class SRP_Goggles_Head: Clothing
	{	
    scope=2;
		displayName="Old Goggles";
    descriptionShort="Espen Industries. Full eye protection from particulate in the environment.";
		model="Survivalists_Characters\headgear\gogglesHead_g.p3d";
		noMask=0;	
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Headgear",
      "Eyewear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1200;
		itemSize[]={2,1};
		varWetMax=0.249;
		heatIsolation=0.5;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\goggles_CO.paa",
		};
    class ClothingTypes
		{
			male="Survivalists_Characters\headgear\gogglesHead_m.p3d";
			female="Survivalists_Characters\headgear\gogglesHead_f.p3d";
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
						{1.0,	{	"Survivalists_Characters\headgear\data\goggles.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\goggles.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\goggles_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\goggles_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\headgear\data\goggles_destruct.rvmat"}}
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
  };
	
  class SRP_Cowboy_Hat: Clothing
	{	
		scope=2;
		displayName="Cowboy hat";
		descriptionShort="Espen Industries. A ragged cowboy hat.";
		model="Survivalists_Characters\headgear\cowboyhat_g.p3d";
		weight=100;
		noMask=0;
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
    rootClassName="SRP_Cowboy_Hat";
    colorVariants[]=
    {
      "Pink",
      "Purple",      
    };	
		itemSize[]={2,1};
		varWetMax=0.249;
		heatIsolation=0.5;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek",
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\cowboyhat_CO.paa",
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\cowboyhat_m.p3d";
			female="Survivalists_Characters\headgear\cowboyhat_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\headgear\data\cowboyhat.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\cowboyhat.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\cowboyhat_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\cowboyhat_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\headgear\data\cowboyhat_destruct.rvmat"}}
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_Burlap_Mask: Clothing
	{	
		scope=2;
		displayName="Burlap Mask";
		descriptionShort="Espen Industries. A Burlap Sack with an eye hole cut out of it";
		model="Survivalists_Characters\headgear\burlapmask_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
    rotationFlags=16;
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=1;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek",
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\burlapmask_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\burlapmask_m.p3d";
			female="Survivalists_Characters\headgear\burlapmask_f.p3d";
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
						{1.0,	{	"Survivalists_Characters\headgear\data\burlapmask.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\burlapmask.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\burlapmask_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\burlapmask_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\headgear\data\burlapmask_destruct.rvmat"}}
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_Alchemist_Hat: Clothing
	{
		scope=2;
		displayName="Leather Hat";
		descriptionShort="Espen Industries. A leather top hat with some glass bottles upon it.";
		model="Survivalists_Characters\headgear\SRP_Alchemist_Hat_g.p3d";
		weight=100;
		noMask=0;
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
    attachments[]=
		{
      "SRP_DyeBottle1",
      "SRP_DyeBottle2",
      "SRP_DyeBottle3",
      "SRP_DyeBottle4",
      "SRP_DyeBottle5",
      "SRP_DyeBottle6",
      "SRP_DyeBottle7",
      "SRP_DyeBottle8",
      "SRP_DyeBottle9",
      "SRP_DyeBottle10",
      "SRP_DyeBottle11",
      "SRP_DyeBottle12"
		};
		itemSize[]={3,3};
		varWetMax=0.249;
		heatIsolation=0.5;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek",
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\Alchemist_Hat_CO.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\SRP_Alchemist_Hat_m.p3d";
			female="Survivalists_Characters\headgear\SRP_Alchemist_Hat_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1,{"Survivalists_Characters\headgear\data\Alchemist_Hat.rvmat"}},
            {0.69999999,{"Survivalists_Characters\headgear\data\Alchemist_Hat.rvmat"}},
            {0.5,{"Survivalists_Characters\headgear\data\Alchemist_Hat_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\headgear\data\Alchemist_Hat_damage.rvmat"}},
            {0,{"Survivalists_Characters\headgear\data\Alchemist_Hat_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_Cowboy_Hat_Carl: Clothing
	{
		scope=2;
		displayName="Cowboy hat";
		descriptionShort="Espen Industries. A ragged cowboy hat.";
		model="Survivalists_Characters\headgear\SRP_Cowboy_Carl_g.p3d";
		weight=100;
		noMask=0;
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
    rootClassName="";
    colorVariants[]={};
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0.5;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\headgear\data\Cowboy_Carl_CO.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\headgear\SRP_Cowboy_Carl.p3d";
			female="Survivalists_Characters\headgear\SRP_Cowboy_Carl.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1,	{	"Survivalists_Characters\headgear\data\Cowboy_Carl.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\headgear\data\Cowboy_Carl.rvmat"}},
            {0.5,	{	"Survivalists_Characters\headgear\data\Cowboy_Carl_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\headgear\data\Cowboy_Carl_damage.rvmat"}},
            {0,	{	"Survivalists_Characters\headgear\data\Cowboy_Carl_destruct.rvmat"}}
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};