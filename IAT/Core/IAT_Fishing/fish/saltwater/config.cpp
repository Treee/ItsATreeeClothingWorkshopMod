class CfgPatches
{
  class IAT_Fishing_Fish_SaltWater
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Gear_Food",
      "IAT_Fishing"
    };
  };
};
class NotCookable
{
	class Raw
	{
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
};
class FoodAnimationSources
{
	class CS_Raw
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Rotten
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Baked
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Boiled
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Dried
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Burned
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
};
class CfgVehicles
{
  class Edible_Base;
//======================================================== CUSTOM FISH
	class IAT_Fishing_SaltWaterFish_Base: Edible_Base
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
            {1,{}},
            {0.69999999,{}},
            {0.5,{}},
            {0.30000001,{}},
						{0,{}}
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
			"TrapPrey_1",
      "IAT_Fish_Small1",
      "IAT_Fish_Small2",
      "IAT_Fish_Small3",
      "IAT_Fish_Small4",
      "IAT_Fish_Small5",
      "IAT_Fish_Small6",
      "IAT_Fish_Small7",
      "IAT_Fish_Small8",
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
  class IAT_Fishing_CoralFish_ColorBase: IAT_Fishing_SaltWaterFish_Base
  {
    scope=0;
    displayName="Coral Fish";
    descriptionShort="A colorful fish found in salt water.";
    model="IAT\Core\IAT_Fishing\fish\saltwater\iat_coralfish.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_co.paa"
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
						{1,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish.rvmat"}},						
						{0.69999999,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish.rvmat"}},						
						{0.5,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish.rvmat"}},						
						{0.30000001,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish.rvmat"}},						
						{0,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish.rvmat"}}
				  };
				};
			};
		};
  };  
  // blue
  class IAT_Fishing_CoralFish_Blue_Small: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Blue_Medium: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Blue_Large: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Blue_Epic: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_co.paa"
    };
  };
  // green
  class IAT_Fishing_CoralFish_Green_Small: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_green_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Green_Medium: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_green_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Green_Large: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_green_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Green_Epic: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_green_co.paa"
    };
  };
  // purple
  class IAT_Fishing_CoralFish_Purple_Small: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_purple_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Purple_Medium: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_purple_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Purple_Large: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_purple_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Purple_Epic: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_purple_co.paa"
    };
  };  
  // red
  class IAT_Fishing_CoralFish_Red_Small: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_red_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Red_Medium: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_red_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Red_Large: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_red_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Red_Epic: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_red_co.paa"
    };
  };  
  // yellow
  class IAT_Fishing_CoralFish_Yellow_Small: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Yellow_Medium: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Yellow_Large: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_CoralFish_Yellow_Epic: IAT_Fishing_CoralFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\coralfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_coralfish_yellow_co.paa"
    };
  };
//======================================= ANGEL FISH
  class IAT_Fishing_AngelFish_ColorBase: IAT_Fishing_SaltWaterFish_Base
  {
    scope=0;
    displayName="Angel Fish";
    descriptionShort="A colorful fish found in salt water.";
    model="IAT\Core\IAT_Fishing\fish\saltwater\iat_angelfish.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_blue_co.paa"
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
						{1,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish.rvmat"}},						
						{0.69999999,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish.rvmat"}},						
						{0.5,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish.rvmat"}},						
						{0.30000001,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish.rvmat"}},						
						{0,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish.rvmat"}}
				  };
				};
			};
		};
  };  
  // blue
  class IAT_Fishing_AngelFish_Blue_Small: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_blue_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Blue_Medium: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_blue_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Blue_Large: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_blue_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Blue_Epic: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_blue_co.paa"
    };
  };
  // orange
  class IAT_Fishing_AngelFish_Orange_Small: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_orange_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Orange_Medium: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_orange_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Orange_Large: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_orange_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Orange_Epic: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_orange_co.paa"
    };
  };
  // red
  class IAT_Fishing_AngelFish_Red_Small: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_red_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Red_Medium: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_red_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Red_Large: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_red_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Red_Epic: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_red_co.paa"
    };
  };  
  // yellow
  class IAT_Fishing_AngelFish_Yellow_Small: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Yellow_Medium: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Yellow_Large: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_AngelFish_Yellow_Epic: IAT_Fishing_AngelFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\angelfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_angelfish_yellow_co.paa"
    };
  };
//======================================= SAILFISH
  class IAT_Fishing_SailFish_ColorBase: IAT_Fishing_SaltWaterFish_Base
  {
    scope=0;
    displayName="SailFish";
    descriptionShort="A large and powerful fish found in deep salt water.";
    model="IAT\Core\IAT_Fishing\fish\saltwater\iat_sailfish.p3d";
    hiddenSelections[]={"zbytek"};
    rotationFlags=4;
    inventorySlot[]=
		{
			"TrapPrey_1",
      "IAT_Fishing_Fish_Large1"
		};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_co.paa"
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
						{1,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish.rvmat"}},						
						{0.69999999,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish.rvmat"}},						
						{0.5,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish.rvmat"}},						
						{0.30000001,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish.rvmat"}},						
						{0,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish.rvmat"}}
				  };
				};
			};
		};
  };  
  // blue
  class IAT_Fishing_SailFish_Blue_Small: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish.p3d";
    itemSize[]={4,5};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Blue_Medium: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_m.p3d";
    itemSize[]={4,6};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Blue_Large: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_l.p3d";
    itemSize[]={4,7};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Blue_Epic: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_xl.p3d";
    itemSize[]={5,8};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_co.paa"
    };
  };
  // green
  class IAT_Fishing_SailFish_Green_Small: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish.p3d";
    itemSize[]={4,5};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_green_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Green_Medium: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_m.p3d";
    itemSize[]={4,6};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_green_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Green_Large: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_l.p3d";
    itemSize[]={4,7};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_green_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Green_Epic: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_xl.p3d";
    itemSize[]={5,8};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_green_co.paa"
    };
  };
  // red
  class IAT_Fishing_SailFish_Red_Small: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish.p3d";
    itemSize[]={4,5};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_red_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Red_Medium: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_m.p3d";
    itemSize[]={4,6};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_red_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Red_Large: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_l.p3d";
    itemSize[]={4,7};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_red_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Red_Epic: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_xl.p3d";
    itemSize[]={5,8};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_red_co.paa"
    };
  };
  // yellow
  class IAT_Fishing_SailFish_Yellow_Small: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish.p3d";
    itemSize[]={4,5};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Yellow_Medium: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_m.p3d";
    itemSize[]={4,6};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Yellow_Large: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_l.p3d";
    itemSize[]={4,7};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Yellow_Epic: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_xl.p3d";
    itemSize[]={5,8};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_yellow_co.paa"
    };
  };  
  // silver
  class IAT_Fishing_SailFish_Silver_Small: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish.p3d";
    itemSize[]={4,5};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_silver_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Silver_Medium: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_m.p3d";
    itemSize[]={4,6};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_silver_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Silver_Large: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_l.p3d";
    itemSize[]={4,7};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_silver_co.paa"
    };
  };
  class IAT_Fishing_SailFish_Silver_Epic: IAT_Fishing_SailFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\sailfish_xl.p3d";
    itemSize[]={5,8};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_sailfish_silver_co.paa"
    };
  };
//======================================= ANGLER FISH
  class IAT_Fishing_AnglerFish_ColorBase: IAT_Fishing_SaltWaterFish_Base
  {
    scope=0;
    displayName="Angler Fish";
    descriptionShort="A deep water fish found in salt water.";
    model="IAT\Core\IAT_Fishing\fish\saltwater\iat_anglerfish.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_co.paa"
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
						{1,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish.rvmat"}},						
						{0.69999999,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish.rvmat"}},						
						{0.5,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish.rvmat"}},						
						{0.30000001,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish.rvmat"}},						
						{0,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish.rvmat"}}
				  };
				};
			};
		};
  };  
  // blue
  class IAT_Fishing_AnglerFish_Blue_Small: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish.p3d";
    itemSize[]={2,3};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_co.paa"
    };
  };
  class IAT_Fishing_AnglerFish_Blue_Medium: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish_m.p3d";
    itemSize[]={3,3};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_co.paa"
    };
  };
  class IAT_Fishing_AnglerFish_Blue_Large: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish_l.p3d";
    itemSize[]={3,4};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_co.paa"
    };
  };
  class IAT_Fishing_AnglerFish_Blue_Epic: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish_xl.p3d";
    itemSize[]={3,5};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_co.paa"
    };
  };  
  // Purple
  class IAT_Fishing_AnglerFish_Purple_Small: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish.p3d";
    itemSize[]={2,3};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_purple_co.paa"
    };
  };
  class IAT_Fishing_AnglerFish_Purple_Medium: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish_m.p3d";
    itemSize[]={3,3};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_purple_co.paa"
    };
  };
  class IAT_Fishing_AnglerFish_Purple_Large: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish_l.p3d";
    itemSize[]={3,4};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_purple_co.paa"
    };
  };
  class IAT_Fishing_AnglerFish_Purple_Epic: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish_xl.p3d";
    itemSize[]={3,5};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_purple_co.paa"
    };
  };
  // Silver
  class IAT_Fishing_AnglerFish_Silver_Small: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish.p3d";
    itemSize[]={2,3};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_silver_co.paa"
    };
  };
  class IAT_Fishing_AnglerFish_Silver_Medium: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish_m.p3d";
    itemSize[]={3,3};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_silver_co.paa"
    };
  };
  class IAT_Fishing_AnglerFish_Silver_Large: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish_l.p3d";
    itemSize[]={3,4};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_silver_co.paa"
    };
  };
  class IAT_Fishing_AnglerFish_Silver_Epic: IAT_Fishing_AnglerFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\anglerfish_xl.p3d";
    itemSize[]={3,5};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_anglerfish_silver_co.paa"
    };
  };
//======================================= HAMMERHEAD SHARK
  class IAT_Fishing_HammerHeadFish_ColorBase: IAT_Fishing_SaltWaterFish_Base
  {
    scope=0;
    displayName="Hammer Head Shark";
    descriptionShort="A deep water shark found in salt water.";
    model="IAT\Core\IAT_Fishing\fish\saltwater\iat_hammerheadshark.p3d";
    rotationFlags=64;
    inventorySlot[]=
		{
			"TrapPrey_1",
      "IAT_Fishing_Fish_Large1"
		};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_co.paa"
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
						
						{1,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark.rvmat"}},						
						{0.69999999,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark.rvmat"}},						
						{0.5,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark.rvmat"}},						
						{0.30000001,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark.rvmat"}},						
						{0,{"IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark.rvmat"}}
				  };
				};
			};
		};
  };  
  // blue
  class IAT_Fishing_HammerHeadFish_Blue_Small: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark.p3d";
    itemSize[]={4,5};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Blue_Medium: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_m.p3d";
    itemSize[]={4,6};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Blue_Large: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_l.p3d";
    itemSize[]={5,6};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Blue_Epic: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_xl.p3d";
    itemSize[]={6,7};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_co.paa"
    };
  };  
  // Red
  class IAT_Fishing_HammerHeadFish_Red_Small: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark.p3d";
    itemSize[]={4,5};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_red_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Red_Medium: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_m.p3d";
    itemSize[]={4,6};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_red_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Red_Large: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_l.p3d";
    itemSize[]={5,6};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_red_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Red_Epic: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_xl.p3d";
    itemSize[]={6,7};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_red_co.paa"
    };
  };
  // Silver
  class IAT_Fishing_HammerHeadFish_Silver_Small: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark.p3d";
    itemSize[]={4,5};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_silver_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Silver_Medium: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_m.p3d";
    itemSize[]={4,6};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_silver_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Silver_Large: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_l.p3d";
    itemSize[]={5,6};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_silver_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Silver_Epic: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_xl.p3d";
    itemSize[]={6,7};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_silver_co.paa"
    };
  };
  // Yellow
  class IAT_Fishing_HammerHeadFish_Yellow_Small: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark.p3d";
    itemSize[]={4,5};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_yellow_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Yellow_Medium: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_m.p3d";
    itemSize[]={4,6};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_yellow_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Yellow_Large: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_l.p3d";
    itemSize[]={5,6};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_yellow_co.paa"
    };
  };
  class IAT_Fishing_HammerHeadFish_Yellow_Epic: IAT_Fishing_HammerHeadFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\saltwater\hammerheadshark_xl.p3d";
    itemSize[]={6,7};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\saltwater\data\iat_hammerheadshark_yellow_co.paa"
    };
  };
//======================================= END
};