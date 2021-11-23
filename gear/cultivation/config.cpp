class CfgPatches
{
	class Survivalists_Mods_Cultivation
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Cultivation"
		};
	};
};
class CfgHorticulture
{
	class Plants
	{
		class Plant_Tobacco
		{
			infestedTex="Survivalists_Mods\gear\cultivation\data\tobacco_plant_insect_co.paa";
			infestedMat="dz\gear\cultivation\data\cannabis_plant_insect.rvmat";
			healthyTex="Survivalists_Mods\gear\cultivation\data\tobacco_plant_co.paa";
			healthyMat="dz\gear\cultivation\data\cannabis_plant.rvmat";
		};
    class Plant_Cocaine
		{
			infestedTex="Survivalists_Mods\gear\cultivation\data\cocaineplant_insect_co.paa";
			infestedMat="Survivalists_Mods\gear\cultivation\data\cocaineplant_insect.rvmat";
			healthyTex="Survivalists_Mods\gear\cultivation\data\cocaineplant_co.paa";
			healthyMat="Survivalists_Mods\gear\cultivation\data\cocaineplant.rvmat";
		};
	};
};
class CfgVehicles
{
  class SeedBase;
  class PlantBase;
  class Inventory_Base;

  // -------------------- BASE GAME OVERRIDE
  class CannabisSeeds: SeedBase
	{
    displayName="Cannabis Seeds";
		descriptionShort="Cannabis seeds harvested from a cannabis plant.";
  };
  class CannabisSeedsPack: Inventory_Base
	{
    displayName="Cannabis Seeds Pack";
		descriptionShort="A pack of cannabis seeds.";
  };
  
  class Plant_Cannabis: PlantBase
	{
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=1; // was 7
			CropsType="Cannabis";
		};
	};
  // --------------------------- CUSTOM STUFF

  class TobaccoSeeds: SeedBase
	{
		scope=2;
		displayName="Tobacco Seeds";
		descriptionShort="Seeds for the tobacco plant";
		model="\dz\gear\cultivation\cannabis_seeds.p3d";
		canBeSplit=1;
		varQuantityInit=20;
		varQuantityMin=0;
		varQuantityMax=20;
		class Horticulture
		{
			PlantType="Plant_Tobacco";
		};
	};

  class TobaccoSeedsPack: Inventory_Base
	{
		scope=2;
		displayName="Tobacco Seed Pack";
		descriptionShort="A pack of tobacco seeds. Who even put these here? Most of the seeds are probably bunk.";
    model="\dz\gear\cultivation\pepper_seeds_pack.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\tobacco_seeds_co.paa"
		};		
    rotationFlags=17;
		quantityBar=1;
		itemSize[]={1,1};
		weight=10;
		spawnOffset=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5;
					healthLevels[]=
					{
						{1,	{	"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.69999999,	{	"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.5,	{	"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.30000001,	{	"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0,	{	"DZ\gear\cultivation\data\cannabis_seeds_destruct.rvmat"}}
					};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType="TobaccoSeeds";
			ContainsSeedsQuantity=4;
		};
		class UserActions
		{
			class EmptyPack
			{
				displayNameDefault="$STR_CfgVehicles_CannabisSeedsPack_UserActions_EmptyPack0";
				displayName="$STR_CfgVehicles_CannabisSeedsPack_UserActions_EmptyPack1";
				position="action";
				onlyForPlayer=1;
				radius=2;
				condition="true";
				statement="this callMethod ['EmptySeedPack', _person];";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet="seedpack_pickup_SoundSet";
					id=797;
				};
			};
		};
	};

  class Plant_Tobacco: PlantBase
	{
		scope=2;
		model="DZ\gear\cultivation\Cannabis_plant.p3d";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\tobacco_plant_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\cultivation\data\Cannabis_plant.rvmat"
		};
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=2;
			CropsType="Tobacco";
		};
	};

  class CocaineSeeds: SeedBase
	{
		scope=2;
		displayName="Cocaine Seeds";
		descriptionShort="Seeds for a specific type of plant.";
		model="\dz\gear\cultivation\cannabis_seeds.p3d";
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=20;
		class Horticulture
		{
			PlantType="Plant_Cocaine";
		};
	};

  class CocaineSeedsPack: Inventory_Base
	{
		scope=2;
		displayName="Cocaine Seed Pack";
		descriptionShort="A pack of cocaine seeds. Who even put these here? Most of the seeds are probably bunk.";
    model="\dz\gear\cultivation\pepper_seeds_pack.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\cocaine_seeds_co.paa"
		};		
    rotationFlags=17;
		quantityBar=1;
		itemSize[]={1,1};
		weight=10;
		spawnOffset=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5;
					healthLevels[]=
					{
						{1,	{	"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.69999999,	{	"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.5,	{	"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.30000001,	{	"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0,	{	"DZ\gear\cultivation\data\cannabis_seeds_destruct.rvmat"}}
					};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType="CocaineSeeds";
			ContainsSeedsQuantity=4;
		};
		class UserActions
		{
			class EmptyPack
			{
				displayNameDefault="$STR_CfgVehicles_CannabisSeedsPack_UserActions_EmptyPack0";
				displayName="$STR_CfgVehicles_CannabisSeedsPack_UserActions_EmptyPack1";
				position="action";
				onlyForPlayer=1;
				radius=2;
				condition="true";
				statement="this callMethod ['EmptySeedPack', _person];";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet="seedpack_pickup_SoundSet";
					id=797;
				};
			};
		};
	};

  class Plant_Cocaine: PlantBase
	{
		scope=2;
		displayName="Cocaine Plant";
		descriptionShort="A wierd plant that you haven't seen before in this climate.";
		model="Survivalists_Mods\gear\cultivation\cocaine_plant.p3d";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\cocaineplant_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\cultivation\data\cocaineplant.rvmat"
		};
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=1; // was 7;
			CropsType="Cocaine";
		};
	};
};