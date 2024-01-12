class CfgPatches
{
  class IAT_Fishing_Fish_Freshwater
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
	class IAT_Fishing_FreshWaterFish_Base: Edible_Base
	{
    scope=0;
    displayName="Fresh Water Fish";
    descriptionShort="A fish found in fresh water.";
    color="base";
		model="\dz\gear\food\carp_live.p3d";
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
			"dz\gear\food\data\carp_live_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\carp_live.rvmat"
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
//======================================= TROUT FISH
  class IAT_Fishing_TroutFish_ColorBase: IAT_Fishing_FreshWaterFish_Base
  {
    scope=0;
    displayName="Trout";
    descriptionShort="A fish found in fresh water.";
    model="IAT\Core\IAT_Fishing\fish\freshwater\iat_trout.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_co.paa"
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
						
						{1,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout.rvmat"}},						
						{0.69999999,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout.rvmat"}},						
						{0.5,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout.rvmat"}},						
						{0.30000001,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout.rvmat"}},						
						{0,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout.rvmat"}}
				  };
				};
			};
		};
  };  
  // brown
  class IAT_Fishing_TroutFish_Brown_Small: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Brown_Medium: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Brown_Large: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Brown_Epic: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_co.paa"
    };
  };
  // blue
  class IAT_Fishing_TroutFish_Blue_Small: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_blue_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Blue_Medium: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_blue_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Blue_Large: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_blue_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Blue_Epic: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_blue_co.paa"
    };
  };  
  // red
  class IAT_Fishing_TroutFish_Red_Small: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_red_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Red_Medium: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_red_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Red_Large: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_red_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Red_Epic: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_red_co.paa"
    };
  };
  // yellow
  class IAT_Fishing_TroutFish_Yellow_Small: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_yellow_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Yellow_Medium: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_yellow_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Yellow_Large: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_yellow_co.paa"
    };
  };
  class IAT_Fishing_TroutFish_Yellow_Epic: IAT_Fishing_TroutFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\trout_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_trout_yellow_co.paa"
    };
  };
//======================================= MUTANT FISH
  class IAT_Fishing_MutantFish_ColorBase: IAT_Fishing_FreshWaterFish_Base
  {
    scope=0;
    displayName="Mutant Fish";
    descriptionShort="A mutant fish found in fresh water.";
    model="IAT\Core\IAT_Fishing\fish\freshwater\iat_mutantfish.p3d";
    hiddenSelections[]={"zbytek"};
    rotationFlags=64;
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_co.paa"
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
						{1,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish.rvmat"}},						
						{0.69999999,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish.rvmat"}},						
						{0.5,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish.rvmat"}},						
						{0.30000001,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish.rvmat"}},						
						{0,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish.rvmat"}}
				  };
				};
			};
		};
  };
  // Red
  class IAT_Fishing_MutantFish_Red_Small: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Red_Medium: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Red_Large: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Red_Epic: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_co.paa"
    };
  };
  // blue
  class IAT_Fishing_MutantFish_Blue_Small: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_blue_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Blue_Medium: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_blue_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Blue_Large: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_blue_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Blue_Epic: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_blue_co.paa"
    };
  };  
  // Green
  class IAT_Fishing_MutantFish_Green_Small: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_green_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Green_Medium: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_green_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Green_Large: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_green_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Green_Epic: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_green_co.paa"
    };
  };
  // yellow
  class IAT_Fishing_MutantFish_Yellow_Small: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Yellow_Medium: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Yellow_Large: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_yellow_co.paa"
    };
  };
  class IAT_Fishing_MutantFish_Yellow_Epic: IAT_Fishing_MutantFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\mutantfish_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_mutantfish_yellow_co.paa"
    };
  };
//======================================= SPLAKE FISH
  class IAT_Fishing_SplakeFish_ColorBase: IAT_Fishing_FreshWaterFish_Base
  {
    scope=0;
    displayName="Splake";
    descriptionShort="A fish found in fresh water. Sometimes referred to as a Wendigo";
    model="IAT\Core\IAT_Fishing\fish\freshwater\iat_splake.p3d";
    hiddenSelections[]={"zbytek"};    
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_co.paa"
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
						
						{1,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake.rvmat"}},						
						{0.69999999,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake.rvmat"}},						
						{0.5,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake.rvmat"}},						
						{0.30000001,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake.rvmat"}},						
						{0,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake.rvmat"}}
				  };
				};
			};
		};
  };  
  // Red
  class IAT_Fishing_SplakeFish_Red_Small: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Red_Medium: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Red_Large: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Red_Epic: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_co.paa"
    };
  };
  // blue
  class IAT_Fishing_SplakeFish_Blue_Small: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_blue_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Blue_Medium: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_blue_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Blue_Large: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_blue_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Blue_Epic: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_blue_co.paa"
    };
  };  
  // Green
  class IAT_Fishing_SplakeFish_Green_Small: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_green_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Green_Medium: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_green_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Green_Large: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_green_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Green_Epic: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_green_co.paa"
    };
  };
  // yellow
  class IAT_Fishing_SplakeFish_Yellow_Small: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_yellow_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Yellow_Medium: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_yellow_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Yellow_Large: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_yellow_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Yellow_Epic: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_yellow_co.paa"
    };
  };
  // Purple
  class IAT_Fishing_SplakeFish_Purple_Small: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_purple_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Purple_Medium: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_purple_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Purple_Large: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_purple_co.paa"
    };
  };
  class IAT_Fishing_SplakeFish_Purple_Epic: IAT_Fishing_SplakeFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\splake_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_splake_purple_co.paa"
    };
  };
//======================================= PERCH FISH
  class IAT_Fishing_PerchFish_ColorBase: IAT_Fishing_FreshWaterFish_Base
  {
    scope=0;
    displayName="Perch";
    descriptionShort="A fish found in fresh water.";
    model="IAT\Core\IAT_Fishing\fish\freshwater\iat_perch.p3d";
    hiddenSelections[]={"zbytek"};    
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_co.paa"
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
						
						{1,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch.rvmat"}},						
						{0.69999999,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch.rvmat"}},						
						{0.5,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch.rvmat"}},						
						{0.30000001,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch.rvmat"}},						
						{0,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch.rvmat"}}
				  };
				};
			};
		};
  };  
  // Red
  class IAT_Fishing_PerchFish_Red_Small: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Red_Medium: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Red_Large: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Red_Epic: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_co.paa"
    };
  };
  // blue
  class IAT_Fishing_PerchFish_Blue_Small: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_blue_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Blue_Medium: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_blue_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Blue_Large: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_blue_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Blue_Epic: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_blue_co.paa"
    };
  };  
  // Green
  class IAT_Fishing_PerchFish_Green_Small: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_green_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Green_Medium: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_green_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Green_Large: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_green_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Green_Epic: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_green_co.paa"
    };
  };
  // yellow
  class IAT_Fishing_PerchFish_Yellow_Small: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_yellow_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Yellow_Medium: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_yellow_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Yellow_Large: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_yellow_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Yellow_Epic: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_yellow_co.paa"
    };
  };
  // Silver
  class IAT_Fishing_PerchFish_Silver_Small: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_silver_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Silver_Medium: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_silver_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Silver_Large: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_silver_co.paa"
    };
  };
  class IAT_Fishing_PerchFish_Silver_Epic: IAT_Fishing_PerchFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\perch_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_perch_silver_co.paa"
    };
  };
//======================================= TILAPIA FISH
  class IAT_Fishing_TilapiaFish_ColorBase: IAT_Fishing_FreshWaterFish_Base
  {
    scope=0;
    displayName="Tilapia";
    descriptionShort="A fish found in fresh water.";
    model="IAT\Core\IAT_Fishing\fish\freshwater\iat_tilapia.p3d";
    hiddenSelections[]={"zbytek"};    
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_co.paa"
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
						
						{1,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia.rvmat"}},						
						{0.69999999,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia.rvmat"}},						
						{0.5,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia.rvmat"}},						
						{0.30000001,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia.rvmat"}},						
						{0,{"IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia.rvmat"}}
				  };
				};
			};
		};
  };  
  // blue
  class IAT_Fishing_TilapiaFish_Blue_Small: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Blue_Medium: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Blue_Large: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Blue_Epic: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_co.paa"
    };
  };
  // Red
  class IAT_Fishing_TilapiaFish_Red_Small: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_red_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Red_Medium: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_red_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Red_Large: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_red_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Red_Epic: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_red_co.paa"
    };
  };
  // Green
  class IAT_Fishing_TilapiaFish_Green_Small: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_green_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Green_Medium: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_green_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Green_Large: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_green_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Green_Epic: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_green_co.paa"
    };
  };
  // yellow
  class IAT_Fishing_TilapiaFish_Yellow_Small: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_yellow_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Yellow_Medium: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_yellow_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Yellow_Large: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_yellow_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Yellow_Epic: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_yellow_co.paa"
    };
  };
  // Silver
  class IAT_Fishing_TilapiaFish_Silver_Small: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia.p3d";
    itemSize[]={1,2};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_silver_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Silver_Medium: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_m.p3d";
    itemSize[]={2,2};
		weight=500;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="g";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_silver_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Silver_Large: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_l.p3d";
    itemSize[]={2,3};
		weight=750;
		varQuantityInit=1000;
		varQuantityMax=1000;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_silver_co.paa"
    };
  };
  class IAT_Fishing_TilapiaFish_Silver_Epic: IAT_Fishing_TilapiaFish_ColorBase
  {
    scope=2;
    // model="IAT\Core\IAT_Fishing\fish\freshwater\tilapia_xl.p3d";
    itemSize[]={3,3};
		weight=1500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_Fishing\fish\freshwater\data\iat_tilapia_silver_co.paa"
    };
  };
//======================================= END
};
