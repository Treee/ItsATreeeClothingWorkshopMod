class CfgPatches
{
  class Survivalists_Fishing_Fish_SaltWater
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Gear_Food",
      "Survivalists_Fishing"
    };
  };
};
class CfgVehicles
{
  class Edible_Base;
  class FoodAnimationSources;
  class NotCookable;

  class Mackerel;
  class Sardines;
  //======================================================== VANILLA FISH

  class Mackerel_Small: Mackerel
	{
		scope=2;
		itemSize[]={3,1};
		weight=1000;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
	};
  class Mackerel_Medium: Mackerel
	{
    scope=2;
		itemSize[]={4,2};
		weight=2000;
		varQuantityInit=1000;
		varQuantityMax=1000;
    stackedUnit="g";
  };
  class Mackerel_Large: Mackerel
	{
		scope=2;
		itemSize[]={5,2};
		weight=2500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    stackedUnit="g";
	};
  class Mackerel_Epic: Mackerel
	{
		scope=2;
		itemSize[]={5,3};
		weight=3000;
		varQuantityInit=2000;
		varQuantityMax=2000;
    stackedUnit="g";
	};

  class Sardines_Small: Sardines
	{
		scope=2;
		itemSize[]={1,1};
		weight=100;
		varQuantityInit=200;
		varQuantityMax=200;
    stackedUnit="g";
	};
  class Sardines_Medium: Sardines
	{
    scope=2;
		itemSize[]={2,1};
		weight=200;
		varQuantityInit=400;
		varQuantityMax=400;
    stackedUnit="g";
  };
  class Sardines_Large: Sardines
	{
		scope=2;
		itemSize[]={2,2};
		weight=300;
		varQuantityInit=600;
		varQuantityMax=600;
    stackedUnit="g";
	};
  class Sardines_Epic: Sardines
	{
		scope=2;
		itemSize[]={2,3};
		weight=400;
		varQuantityInit=800;
		varQuantityMax=800;
    stackedUnit="g";
	};

  //======================================================== CUSTOM FISH
	class SaltWaterFish_Base: Edible_Base
	{
    scope=0;
    displayName="Salt Water Fish";
    descriptionShort="A fish found in salt water.";
    color="base";
		model="\dz\gear\food\mackerel_live.p3d";
		debug_ItemCategory=6;
		rotationFlags=16;
		weight=1000;
		itemSize[]={4,2};
		stackedUnit="g";
		quantityBar=1;
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		inventorySlot[]=
		{
			"TrapPrey_1"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mackerel_live_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mackerel_live.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};

  //======================================= CORAL FISH
  class CoralFish_ColorBase: SaltWaterFish_Base
  {
    scope=0;
    displayName="Coral Fish";
    descriptionShort="A colorful fish found in salt water.";
    model="Survivalists_Fishing\fish\saltwater\coralfish.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_co.paa"
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
						
						{1,{"Survivalists_Fishing\fish\saltwater\data\coralfish.rvmat"}},						
						{0.69999999,{"Survivalists_Fishing\fish\saltwater\data\coralfish.rvmat"}},						
						{0.5,{"Survivalists_Fishing\fish\saltwater\data\coralfish.rvmat"}},						
						{0.30000001,{"Survivalists_Fishing\fish\saltwater\data\coralfish.rvmat"}},						
						{0,{"Survivalists_Fishing\fish\saltwater\data\coralfish.rvmat"}}
				  };
				};
			};
		};
  };

  // blue
  class CoralFish_Blue_Small: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_co.paa"
    };
  };
  class CoralFish_Blue_Medium: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_co.paa"
    };
  };
  class CoralFish_Blue_Large: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_co.paa"
    };
  };
  class CoralFish_Blue_Epic: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_co.paa"
    };
  };
  
  // green
  class CoralFish_Green_Small: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_green_co.paa"
    };
  };
  class CoralFish_Green_Medium: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_green_co.paa"
    };
  };
  class CoralFish_Green_Large: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_green_co.paa"
    };
  };
  class CoralFish_Green_Epic: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_green_co.paa"
    };
  };
  
  // purple
  class CoralFish_Purple_Small: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_purple_co.paa"
    };
  };
  class CoralFish_Purple_Medium: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_purple_co.paa"
    };
  };
  class CoralFish_Purple_Large: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_purple_co.paa"
    };
  };
  class CoralFish_Purple_Epic: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_purple_co.paa"
    };
  };  
  
  // red
  class CoralFish_Red_Small: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_red_co.paa"
    };
  };
  class CoralFish_Red_Medium: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_red_co.paa"
    };
  };
  class CoralFish_Red_Large: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_red_co.paa"
    };
  };
  class CoralFish_Red_Epic: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_red_co.paa"
    };
  };  
  // yellow
  class CoralFish_Yellow_Small: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_yellow_co.paa"
    };
  };
  class CoralFish_Yellow_Medium: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_yellow_co.paa"
    };
  };
  class CoralFish_Yellow_Large: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_yellow_co.paa"
    };
  };
  class CoralFish_Yellow_Epic: CoralFish_ColorBase
  {
    scope=2;
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Fishing\fish\saltwater\data\coralfish_yellow_co.paa"
    };
  };

};