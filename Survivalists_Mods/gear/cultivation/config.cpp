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
    class Plant_Brookmint
		{
			infestedTex="Survivalists_Mods\gear\cultivation\data\srp_brookmint_insect_co.paa";
			infestedMat="Survivalists_Mods\gear\cultivation\data\srp_brookmint_insect.rvmat";
			healthyTex="Survivalists_Mods\gear\cultivation\data\srp_brookmint_co.paa";
			healthyMat="Survivalists_Mods\gear\cultivation\data\srp_brookmint.rvmat";
		};
    class Plant_Dock
		{
			infestedTex="Survivalists_Mods\gear\cultivation\data\srp_dock_insect_co.paa";
			infestedMat="Survivalists_Mods\gear\cultivation\data\srp_dock_insect.rvmat";
			healthyTex="Survivalists_Mods\gear\cultivation\data\srp_dock_co.paa";
			healthyMat="Survivalists_Mods\gear\cultivation\data\srp_dock.rvmat";
		};
    class Plant_Valerian
		{
			infestedTex="Survivalists_Mods\gear\cultivation\data\srp_valerian_insect_co.paa";
			infestedMat="Survivalists_Mods\gear\cultivation\data\srp_valerian_insect.rvmat";
			healthyTex="Survivalists_Mods\gear\cultivation\data\srp_valerian_co.paa";
			healthyMat="Survivalists_Mods\gear\cultivation\data\srp_valerian.rvmat";
		};
    class Plant_Ribwort
		{
			infestedTex="Survivalists_Mods\gear\cultivation\data\srp_ribwort_insect_co.paa";
			infestedMat="Survivalists_Mods\gear\cultivation\data\srp_ribwort_insect.rvmat";
			healthyTex="Survivalists_Mods\gear\cultivation\data\srp_ribwort_co.paa";
			healthyMat="Survivalists_Mods\gear\cultivation\data\srp_ribwort.rvmat";
		};
    class Plant_Rosemary
		{
			infestedTex="Survivalists_Mods\gear\cultivation\data\srp_plants_insect_co.paa";
			infestedMat="Survivalists_Mods\gear\cultivation\data\srp_plants_insect.rvmat";
			healthyTex="Survivalists_Mods\gear\cultivation\data\srp_plants_co.paa";
			healthyMat="Survivalists_Mods\gear\cultivation\data\srp_plants.rvmat";
		};
    class Plant_GreenAmanita
		{
			infestedTex="Survivalists_Mods\gear\cultivation\data\srp_plants_insect_co.paa";
			infestedMat="Survivalists_Mods\gear\cultivation\data\srp_plants_insect.rvmat";
			healthyTex="Survivalists_Mods\gear\cultivation\data\srp_plants_co.paa";
			healthyMat="Survivalists_Mods\gear\cultivation\data\srp_plants.rvmat";
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
		displayName="Cocaine";
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


  class BrookmintSeeds: SeedBase
	{
		scope=2;
		displayName="Brookmint Seeds";
		descriptionShort="Seeds for a specific type of plant.";
		model="\dz\gear\cultivation\cannabis_seeds.p3d";
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=20;
		class Horticulture
		{
			PlantType="Plant_Brookmint";
		};
	};
  class BrookmintSeedsPack: Inventory_Base
	{
		scope=2;
		displayName="Brookmint Seed Pack";
		descriptionShort="A pack of Brookmint seeds. Who even put these here? Most of the seeds are probably bunk.";
    model="\dz\gear\cultivation\pepper_seeds_pack.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_brookmint_seeds_co.paa"
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
						{1.0,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.69999999,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.5,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.30000001,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.0,{"DZ\gear\cultivation\data\cannabis_seeds_destruct.rvmat"}}
					};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType="BrookmintSeeds";
			ContainsSeedsQuantity=4;
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
  class Plant_Brookmint: PlantBase
	{
		scope=2;
		displayName="Brookmint";
		descriptionShort="A wierd plant that you haven't seen before in this climate.";
		model="Survivalists_Mods\gear\cultivation\brookmint.p3d";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_brookmint_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_brookmint.rvmat"
		};
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=1; // was 7;
			CropsType="Brookmint";
		};
	};

  class DockSeeds: SeedBase
	{
		scope=2;
		displayName="Dock Seeds";
		descriptionShort="Seeds for a specific type of plant.";
		model="\dz\gear\cultivation\cannabis_seeds.p3d";
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=20;
		class Horticulture
		{
			PlantType="Plant_Dock";
		};
	};
  class DockSeedsPack: Inventory_Base
	{
		scope=2;
		displayName="Dock Seed Pack";
		descriptionShort="A pack of Dock seeds. Who even put these here? Most of the seeds are probably bunk.";
    model="\dz\gear\cultivation\pepper_seeds_pack.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_dock_seeds_co.paa"
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
						{1.0,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.69999999,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.5,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.30000001,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.0,{"DZ\gear\cultivation\data\cannabis_seeds_destruct.rvmat"}}
					};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType="DockSeeds";
			ContainsSeedsQuantity=4;
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
  class Plant_Dock: PlantBase
	{
		scope=2;
		displayName="Dock";
		descriptionShort="A wierd plant that you haven't seen before in this climate.";
		model="Survivalists_Mods\gear\cultivation\dock.p3d";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_dock_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_dock.rvmat"
		};
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=1; // was 7;
			CropsType="Dock";
		};
	};

  class ValerianSeeds: SeedBase
	{
		scope=2;
		displayName="Valerian Seeds";
		descriptionShort="Seeds for a specific type of plant.";
		model="\dz\gear\cultivation\cannabis_seeds.p3d";
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=20;
		class Horticulture
		{
			PlantType="Plant_Valerian";
		};
	};
  class ValerianSeedsPack: Inventory_Base
	{
		scope=2;
		displayName="Valerian Seed Pack";
		descriptionShort="A pack of Valerian seeds. Who even put these here? Most of the seeds are probably bunk.";
    model="\dz\gear\cultivation\pepper_seeds_pack.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_valerian_seeds_co.paa"
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
						{1.0,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.69999999,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.5,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.30000001,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.0,{"DZ\gear\cultivation\data\cannabis_seeds_destruct.rvmat"}}
					};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType="ValerianSeeds";
			ContainsSeedsQuantity=4;
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
  class Plant_Valerian: PlantBase
	{
		scope=2;
		displayName="Valerian";
		descriptionShort="A wierd plant that you haven't seen before in this climate.";
		model="Survivalists_Mods\gear\cultivation\valerian.p3d";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_valerian_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_valerian.rvmat"
		};
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=1; // was 7;
			CropsType="Valerian";
		};
	};

  class RibwortSeeds: SeedBase
	{
		scope=2;
		displayName="Ribwort Seeds";
		descriptionShort="Seeds for a specific type of plant.";
		model="\dz\gear\cultivation\cannabis_seeds.p3d";
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=20;
		class Horticulture
		{
			PlantType="Plant_Ribwort";
		};
	};
  class RibwortSeedsPack: Inventory_Base
	{
		scope=2;
		displayName="Ribwort Seed Pack";
		descriptionShort="A pack of Ribwort seeds. Who even put these here? Most of the seeds are probably bunk.";
    model="\dz\gear\cultivation\pepper_seeds_pack.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_ribwort_seeds_co.paa"
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
						{1.0,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.69999999,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.5,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.30000001,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.0,{"DZ\gear\cultivation\data\cannabis_seeds_destruct.rvmat"}}
					};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType="RibwortSeeds";
			ContainsSeedsQuantity=4;
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
  class Plant_Ribwort: PlantBase
	{
		scope=2;
		displayName="Ribwort";
		descriptionShort="A wierd plant that you haven't seen before in this climate.";
		model="Survivalists_Mods\gear\cultivation\ribwort.p3d";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_ribwort_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_ribwort.rvmat"
		};
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=1; // was 7;
			CropsType="Ribwort";
		};
	};

  class RosemarySeeds: SeedBase
	{
		scope=2;
		displayName="Rosemary Seeds";
		descriptionShort="Seeds for a specific type of plant.";
		model="\dz\gear\cultivation\cannabis_seeds.p3d";
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=20;
		class Horticulture
		{
			PlantType="Plant_Rosemary";
		};
	};
  class RosemarySeedsPack: Inventory_Base
	{
		scope=2;
		displayName="Rosemary Seed Pack";
		descriptionShort="A pack of Rosemary seeds. Who even put these here? Most of the seeds are probably bunk.";
    model="\dz\gear\cultivation\pepper_seeds_pack.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_rosemary_seeds_co.paa"
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
						{1.0,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.69999999,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.5,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.30000001,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.0,{"DZ\gear\cultivation\data\cannabis_seeds_destruct.rvmat"}}
					};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType="RosemarySeeds";
			ContainsSeedsQuantity=4;
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
  class Plant_Rosemary: PlantBase
	{
		scope=2;
		displayName="Rosemary";
		descriptionShort="A wierd plant that you haven't seen before in this climate.";
		model="Survivalists_Mods\gear\cultivation\rosemary.p3d";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_plants_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_plants.rvmat"
		};
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=1; // was 7;
			CropsType="Rosemary";
		};
	};

  class GreenAmanitaSeeds: SeedBase
	{
		scope=2;
		displayName="GreenAmanita Seeds";
		descriptionShort="Seeds for a specific type of plant.";
		model="\dz\gear\cultivation\cannabis_seeds.p3d";
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=20;
		class Horticulture
		{
			PlantType="Plant_GreenAmanita";
		};
	};
  class GreenAmanitaSeedsPack: Inventory_Base
	{
		scope=2;
		displayName="GreenAmanita Seed Pack";
		descriptionShort="A pack of Green Amanita seeds. Who even put these here? Most of the seeds are probably bunk.";
    model="\dz\gear\cultivation\pepper_seeds_pack.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_greenamanita_seeds_co.paa"
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
						{1.0,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.69999999,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},
            {0.5,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.30000001,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},
            {0.0,{"DZ\gear\cultivation\data\cannabis_seeds_destruct.rvmat"}}
					};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType="GreenAmanitaSeeds";
			ContainsSeedsQuantity=4;
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
  class Plant_GreenAmanita: PlantBase
	{
		scope=2;
		displayName="Green Amanita";
		descriptionShort="A wierd plant that you haven't seen before in this climate.";
		model="Survivalists_Mods\gear\cultivation\greenamanita.p3d";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_plants_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_plants.rvmat"
		};
		class Horticulture
		{
			GrowthStagesCount=6;
			CropsCount=1; // was 7;
			CropsType="GreenAmanita";
		};
	};

};