class CfgPatches
{
	class Survivalists_Fishing_Tools
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Tools",
      "Survivalists_Fishing"
		};
	};
};
class CfgVehicles
{	
  class FishingRod_Base_New;
  class SRP_Fishing_KitBase;
  
  class ImprovisedFishingRod: FishingRod_Base_New
  {
    attachments[]=
		{
			"Hook",
      "SRP_FishingLure"
		};  
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{						
						{1,{"DZ\gear\crafting\data\wooden_stick.rvmat"}},						
						{0.69999999,{"DZ\gear\crafting\data\wooden_stick.rvmat"}},						
						{0.5,{"DZ\gear\crafting\data\wooden_stick_damage.rvmat"}},						
						{0.30000001,{"DZ\gear\crafting\data\wooden_stick_damage.rvmat"}},						
						{0,{"DZ\gear\crafting\data\wooden_stick_destruct.rvmat"}}
					};
				};
			};
		};
  };
  class ObsoleteFishingRod: FishingRod_Base_New
  {
    attachments[]=
		{
			"Hook",
      "SRP_FishingLure"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{						
						{1,{"DZ\gear\crafting\data\wooden_stick.rvmat"}},						
						{0.69999999,{"DZ\gear\crafting\data\wooden_stick.rvmat"}},						
						{0.5,{"DZ\gear\crafting\data\wooden_stick_damage.rvmat"}},						
						{0.30000001,{"DZ\gear\crafting\data\wooden_stick_damage.rvmat"}},						
						{0,{"DZ\gear\crafting\data\wooden_stick_destruct.rvmat"}}
					};
				};
			};
		};
  };
  class FishingRod: FishingRod_Base_New
  {
    attachments[]=
		{
			"Hook",
      "SRP_FishingLure"
		};  
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{						
						{1,{"DZ\gear\tools\data\fishing_rod.rvmat"}},						
						{0.69999999,{"DZ\gear\tools\data\fishing_rod.rvmat"}},						
						{0.5,{"DZ\gear\tools\data\fishing_rod_damage.rvmat"}},						
						{0.30000001,{"DZ\gear\tools\data\fishing_rod_damage.rvmat"}},						
						{0,{"DZ\gear\tools\data\fishing_rod_destruct.rvmat"}}
					};
				};
			};
		};
  };
  
  class SRP_FishingWoodRod_Kit: SRP_Fishing_KitBase
	{
		scope=2;
		displayName="Wooden Fishing Rod Kit";
		descriptionShort="Deprecated. Replace with IAT_Fishing_WoodenRod_Kit";
    attachments[]=
    {
      "Material_Shelter_FrameSticks",
      "WoodenStick",
      "Rope",
			"Material_FPole_Rope",
			"Material_Shelter_Rope",
      "Material_MetalWire",
			"Material_FPole_MetalWire"
    };
	};
  class SRP_HandMadeFishingRod: FishingRod_Base_New
	{
		scope=2;
		displayName="Hand Made Fishing Rod";
		descriptionShort="Deprecated. Replace with IAT_Fishing_WoodenRod_";
		model="Survivalists_Fishing\tools\handmadefishingrod.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		weight=670;
		itemSize[]={1,9};
		itemBehaviour=2;
		absorbency=0.80000001;
		lootCategory="Crafted";
    rootClassName="SRP_HandMadeFishingRod";
    colorVariants[]=
    {
      "Blue",    
      "Purple",    
      "Red",    
    };
		attachments[]=
		{
			"Hook",
      "SRP_FishingLure"
		};
		energyResources[]=
		{			
			{
				"power",
				0.1
			}
		};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\tools\data\handmadefishingrod_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\tools\data\handmadefishingrod.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000;
					healthLevels[]=
					{						
						{1.0,{"Survivalists_Fishing\tools\data\handmadefishingrod.rvmat"}},						
						{0.69999999,{"Survivalists_Fishing\tools\data\handmadefishingrod.rvmat"}},						
						{0.5,{"Survivalists_Fishing\tools\data\handmadefishingrod.rvmat"}},						
						{0.30000001,{"Survivalists_Fishing\tools\data\handmadefishingrod.rvmat"}},						
						{0.0,{"Survivalists_Fishing\tools\data\handmadefishingrod.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Fishing_puddle_SoundSet
				{
					soundSet="Fishing_puddle_SoundSet";
					id=206;
				};
				class Fishing_splash_SoundSet
				{
					soundSet="Fishing_splash_SoundSet";
					id=207;
				};
				class Fishing_splash_small_SoundSet
				{
					soundSet="Fishing_splash_small_SoundSet";
					id=208;
				};
				class Fish_struggling_SoundSet
				{
					soundSet="Fish_struggling_SoundSet";
					id=209;
				};
			};
		};
		class AnimationSources
		{
			class AnimateRod
			{
				source="user";
				initPhase=0;
				animPeriod=2.5;
			};
		};
	};
  class SRP_HandMadeFishingRod_Blue: SRP_HandMadeFishingRod
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\tools\data\handmadefishingrod_blue_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\tools\data\handmadefishingrod.rvmat"
		};
	};
  class SRP_HandMadeFishingRod_Purple: SRP_HandMadeFishingRod
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\tools\data\handmadefishingrod_purple_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\tools\data\handmadefishingrod.rvmat"
		};
	};
  class SRP_HandMadeFishingRod_Red: SRP_HandMadeFishingRod
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\tools\data\handmadefishingrod_red_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\tools\data\handmadefishingrod.rvmat"
		};
	};
};