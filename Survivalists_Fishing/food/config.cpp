class CfgPatches
{
	class Survivalists_Fishing_Food
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

  class SRP_ClamFilletMeat: Edible_Base
	{
		scope=2;
		displayName="Clam Meat";
		descriptionShort="A large piece of clam meat.";
		model="Survivalists_Fishing\food\clam_tongue.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		interactionWeight=1;
		quantityBar=1;
		itemSize[]={2,1};
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
    inventorySlot[]=
		{
			"Ingredient",
			"Ingredient1",
			"Ingredient2",
			"Ingredient3",
			"Ingredient4",
			"Ingredient5",
			"Ingredient6",
			"Ingredient7",
			"Ingredient8",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
      "SmokingD",
      "SRP_ClamMeat"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\carp_fillet_raw_CO.paa",
			"dz\gear\food\data\carp_fillet_baked_CO.paa",
			"dz\gear\food\data\carp_fillet_boiled_CO.paa",
			"dz\gear\food\data\carp_fillet_dried_CO.paa",
			"dz\gear\food\data\carp_fillet_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\carp_fillet_raw.rvmat",
			"dz\gear\food\data\carp_fillet_baked.rvmat",
			"dz\gear\food\data\carp_fillet_boiled.rvmat",
			"dz\gear\food\data\carp_fillet_dried.rvmat",
			"dz\gear\food\data\carp_fillet_burnt.rvmat",
			"dz\gear\food\data\carp_fillet_rotten.rvmat"
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
					nutrition_properties[]={5,50,100,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						50,
						1,
						0,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,600,100,1,0};
					cooking_properties[]={70,120};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,400,400,1,0};
					cooking_properties[]={70,125};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,400,130,1,0};
					cooking_properties[]={70,300,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16};
					cooking_properties[]={100,300};
				};
			};			
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
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

	class SRP_Clam: Edible_Base
	{
		scope=2;
		displayName="Clam";
		descriptionShort="A closed clam. Pry it open with your bare hands!";
		model="Survivalists_Fishing\food\clam.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=265;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\food\data\clam_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{1,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.69999999,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.5,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.30000001,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0,{"Survivalists_Fishing\food\data\clam.rvmat"}}
          };
        };
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
	class SRP_Clam_Opened: Edible_Base
	{
		scope=2;
		displayName="Opened Clam";
		descriptionShort="The clam has been opened and the contents revealed.";
		model="Survivalists_Fishing\food\clam_opened.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=265;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
    attachments[]=
    {
      "SRP_ClamPearl",
      "SRP_ClamMeat"
    };
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\food\data\clam_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.69999999,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.5,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.30000001,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.0,{"Survivalists_Fishing\food\data\clam.rvmat"}}
					};
				};
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

	class SRP_Clam_Blue: Edible_Base
	{
		scope=2;
		displayName="Clam";
		descriptionShort="A closed clam. Pry it open with your bare hands!";
		model="Survivalists_Fishing\food\clam.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=265;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\food\data\clam_blue_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{1,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.69999999,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.5,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.30000001,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0,{"Survivalists_Fishing\food\data\clam.rvmat"}}
          };
        };
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
	class SRP_Clam_Blue_Opened: Edible_Base
	{
		scope=2;
		displayName="Opened Clam";
		descriptionShort="The clam has been opened and the contents revealed.";
		model="Survivalists_Fishing\food\clam_opened.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=265;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
    attachments[]=
    {
      "SRP_ClamPearl",
      "SRP_ClamMeat"
    };
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\food\data\clam_blue_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.69999999,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.5,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.30000001,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.0,{"Survivalists_Fishing\food\data\clam.rvmat"}}
					};
				};
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

  class SRP_Clam_Red: Edible_Base
	{
		scope=2;
		displayName="Clam";
		descriptionShort="A closed clam. Pry it open with your bare hands!";
		model="Survivalists_Fishing\food\clam.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=265;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\food\data\clam_red_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{1,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.69999999,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.5,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.30000001,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0,{"Survivalists_Fishing\food\data\clam.rvmat"}}
          };
        };
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
	class SRP_Clam_Red_Opened: Edible_Base
	{
		scope=2;
		displayName="Opened Clam";
		descriptionShort="The clam has been opened and the contents revealed.";
		model="Survivalists_Fishing\food\clam_opened.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=265;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
    attachments[]=
    {
      "SRP_ClamPearl",
      "SRP_ClamMeat"
    };
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\food\data\clam_red_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.69999999,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.5,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.30000001,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.0,{"Survivalists_Fishing\food\data\clam.rvmat"}}
					};
				};
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

  class SRP_Clam_Silver: Edible_Base
	{
		scope=2;
		displayName="Clam";
		descriptionShort="A closed clam. Pry it open with your bare hands!";
		model="Survivalists_Fishing\food\clam.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=265;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\food\data\clam_silver_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{1,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.69999999,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.5,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0.30000001,{"Survivalists_Fishing\food\data\clam.rvmat"}},
            {0,{"Survivalists_Fishing\food\data\clam.rvmat"}}
          };
        };
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
	class SRP_Clam_Silver_Opened: Edible_Base
	{
		scope=2;
		displayName="Opened Clam";
		descriptionShort="The clam has been opened and the contents revealed.";
		model="Survivalists_Fishing\food\clam_opened.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=265;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		isMeleeWeapon=1;
    attachments[]=
    {
      "SRP_ClamPearl",
      "SRP_ClamMeat"
    };
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\food\data\clam_silver_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.69999999,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.5,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.30000001,{"Survivalists_Fishing\food\data\clam.rvmat"}},
						{0.0,{"Survivalists_Fishing\food\data\clam.rvmat"}}
					};
				};
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
};