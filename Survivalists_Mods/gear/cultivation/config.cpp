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
      "DZ_Gear_Cultivation",
      "Survivalists_Mods"
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
    class Plant_Yarrow
		{
			infestedTex="Survivalists_Mods\gear\cultivation\data\srp_plants_insect_co.paa";
			infestedMat="Survivalists_Mods\gear\cultivation\data\srp_plants_insect.rvmat";
			healthyTex="Survivalists_Mods\gear\cultivation\data\srp_plants_co.paa";
			healthyMat="Survivalists_Mods\gear\cultivation\data\srp_plants.rvmat";
		};
    class Plant_Mint
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

  class SRP_KitBase;

// -------------------- BASE GAME OVERRIDE
  class PotatoSeed: SeedBase
	{
    inventorySlot[]+=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
			"SeedBase_4",
			"SeedBase_5",
			"SeedBase_6",
			"SeedBase_7",
			"SeedBase_8",
			"SeedBase_9",
			"SeedBase_10",
			"SeedBase_11",
			"SeedBase_12",
			"SeedBase_13"
		};
  };
  class CannabisSeeds: SeedBase
	{
    displayName="Cannabis Seeds";
		descriptionShort="Cannabis seeds harvested from a cannabis plant.";
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
  class PlantMaterial: Inventory_Base
  {
    itemSize[]={2,1};
  };

  class TomatoSeedsPack: Inventory_Base
  {
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cultivation\data\tomato_seeds_espen_co.paa"};
    class Horticulture
		{
			ContainsSeedsType="TomatoSeeds";
			ContainsSeedsQuantity=4;
		};
  };
  class PepperSeedsPack: Inventory_Base
  {
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cultivation\data\pepper_seeds_stag_co.paa"};
    class Horticulture
		{
			ContainsSeedsType="PepperSeeds";
			ContainsSeedsQuantity=4;
		};
  };
  class PumpkinSeedsPack: Inventory_Base
  {
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cultivation\data\pumpkin_seeds_espen_co.paa"};
    class Horticulture
		{
			ContainsSeedsType="PumpkinSeeds";
			ContainsSeedsQuantity=4;
		};
  };
  class ZucchiniSeedsPack: Inventory_Base
  {
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cultivation\data\zucchini_seeds_espen_co.paa"};
    class Horticulture
		{
			ContainsSeedsType="ZucchiniSeeds";
			ContainsSeedsQuantity=4;
		};
  };
  class CannabisSeedsPack: Inventory_Base
	{
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cultivation\data\cannabis_seeds_stag_co.paa"};
    displayName="Cannabis Seeds Pack";
		descriptionShort="A pack of cannabis seeds.";
    class Horticulture
		{
			ContainsSeedsType="CannabisSeeds";
			ContainsSeedsQuantity=4;
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
			CropsCount=3; // was 7;
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
			CropsCount=3; // was 7;
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
			CropsCount=3; // was 7;
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
			CropsCount=3; // was 7;
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
			CropsCount=3; // was 7;
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
			CropsCount=3; // was 7;
			CropsType="GreenAmanita";
		};
	};

  class YarrowSeeds: SeedBase
	{
		scope=2;
		displayName="Yarrow Seeds";
		descriptionShort="Seeds for a specific type of plant.";
		model="\dz\gear\cultivation\cannabis_seeds.p3d";
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=20;
		class Horticulture
		{
			PlantType="Plant_Yarrow";
		};
	};
  class YarrowSeedsPack: Inventory_Base
	{
		scope=2;
		displayName="Yarrow Seed Pack";
		descriptionShort="A pack of Yarrow seeds. Who even put these here? Most of the seeds are probably bunk.";
    model="\dz\gear\cultivation\pepper_seeds_pack.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_yarrow_seeds_co.paa"
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
			ContainsSeedsType="YarrowSeeds";
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
  class Plant_Yarrow: PlantBase
	{
		scope=2;
		displayName="Yarrow";
		descriptionShort="A wierd plant that you haven't seen before in this climate.";
		model="Survivalists_Mods\gear\cultivation\yarrow.p3d";
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
			CropsCount=3; // was 7;
			CropsType="Yarrow";
		};
	};

  class MintSeeds: SeedBase
	{
		scope=2;
		displayName="Mint Seeds";
		descriptionShort="Seeds for a specific type of plant.";
		model="\dz\gear\cultivation\cannabis_seeds.p3d";
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=20;
		class Horticulture
		{
			PlantType="Plant_Mint";
		};
	};
  class MintSeedsPack: Inventory_Base
	{
		scope=2;
		displayName="Mint Seed Pack";
		descriptionShort="A pack of Mint seeds. Who even put these here? Most of the seeds are probably bunk.";
    model="\dz\gear\cultivation\pepper_seeds_pack.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cultivation\data\srp_mint_seeds_co.paa"
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
			ContainsSeedsType="MintSeeds";
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
  class Plant_Mint: PlantBase
	{
		scope=2;
		displayName="Mint";
		descriptionShort="A wierd plant that you haven't seen before in this climate.";
		model="Survivalists_Mods\gear\cultivation\mint.p3d";
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
			CropsCount=3; // was 7;
			CropsType="Mint";
		};
	};
// --------------------------- GARDEN PLOTS
  class SRP_GardenPlotSmall_ColorBase: Inventory_Base
	{
		scope=0;
		model="Survivalists_Mods\gear\cultivation\srp_gardenplot_small.p3d";
		storageCategory=1;
		lootCategory="Crafted";
		useEntityHierarchy="true";
		slopeTolerance=0.30000001;
		alignHologramToTerain=1;
		yawPitchRollLimit[]={10,10,10};
		attachments[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
		};
		physLayer="item_large";
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name="$STR_attachment_Filling0";
				description="";
				attachmentSlots[]=
				{
					"SeedBase_1",
					"SeedBase_2",
					"SeedBase_3"
				};
				icon="set:dayz_inventory image:cat_gp_filling";
			};
		};
		hiddenSelections[]=
		{
			"seedbase_1",
			"seedbase_2",
			"seedbase_3",
			"slotCovered_01",
			"slotCovered_02",
			"slotCovered_03",
			"zbytek",
      "dirt"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\cultivation\data\soil_cultivated_co.paa",
			"dz\gear\cultivation\data\soil_cultivated_limed_CO.paa",
			"dz\gear\cultivation\data\soil_cultivated_compost_CO.paa",
			"",
			"",
			"",
			"Survivalists_Mods\gear\cultivation\data\srp_gardenplot_co.paa",
      "Survivalists_Mods\gear\cultivation\data\srp_gardenplotdirt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"Survivalists_Mods\gear\cultivation\data\srp_gardenplot.rvmat",
      "Survivalists_Mods\gear\cultivation\data\srp_gardenplotdirt.rvmat"
		};
		class AnimationSources
		{
			class slotVisible
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class slotHidden: slotVisible
			{
				initPhase=1;
			};
			class SeedBase_1: slotVisible
			{
			};
			class SeedBase_2: slotVisible
			{
			};
			class SeedBase_3: slotVisible
			{
			};
			class slotCovered_01: slotHidden
			{
			};
			class slotCovered_02: slotHidden
			{
			};
			class slotCovered_03: slotHidden
			{
			};
		};
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};

  class SRP_GardenPlotSmall_Basic_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Small Garden Planter - 3 Plot";
    descriptionShort="A 3 plot garden planter that grows a few plants.";
    projectionTypename="SRP_GardenPlotSmall_Basic";
  };
  class SRP_GardenPlotSmall_Basic: SRP_GardenPlotSmall_ColorBase
	{
		scope=2;
	};

  class SRP_GardenPlotMedium_ColorBase: Inventory_Base
	{
		scope=0;
		model="Survivalists_Mods\gear\cultivation\srp_gardenplot_medium.p3d";
		storageCategory=1;
		lootCategory="Crafted";
		useEntityHierarchy="true";
		slopeTolerance=0.30000001;
		alignHologramToTerain=1;
		yawPitchRollLimit[]={10,10,10};
		attachments[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
			"SeedBase_4",
			"SeedBase_5",
			"SeedBase_6",
		};
		physLayer="item_large";
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name="$STR_attachment_Filling0";
				description="";
				attachmentSlots[]=
				{
					"SeedBase_1",
					"SeedBase_2",
					"SeedBase_3",
					"SeedBase_4",
					"SeedBase_5",
					"SeedBase_6",
				};
				icon="set:dayz_inventory image:cat_gp_filling";
			};
		};
		hiddenSelections[]=
		{
			"seedbase_1",
			"seedbase_2",
			"seedbase_3",
			"seedbase_4",
			"seedbase_5",
			"seedbase_6",
			"slotCovered_01",
			"slotCovered_02",
			"slotCovered_03",
			"slotCovered_04",
			"slotCovered_05",
			"slotCovered_06",
			"zbytek",
      "dirt"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\cultivation\data\soil_cultivated_co.paa",
			"dz\gear\cultivation\data\soil_cultivated_limed_CO.paa",
			"dz\gear\cultivation\data\soil_cultivated_compost_CO.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Survivalists_Mods\gear\cultivation\data\srp_gardenplot_co.paa",
      "Survivalists_Mods\gear\cultivation\data\srp_gardenplotdirt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
      "",
			"",
			"",
			"",
			"",
			"",
			"Survivalists_Mods\gear\cultivation\data\srp_gardenplot.rvmat",
      "Survivalists_Mods\gear\cultivation\data\srp_gardenplotdirt.rvmat"
		};
		class AnimationSources
		{
			class slotVisible
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class slotHidden: slotVisible
			{
				initPhase=1;
			};
			class SeedBase_1: slotVisible
			{
			};
			class SeedBase_2: slotVisible
			{
			};
			class SeedBase_3: slotVisible
			{
			};
      class SeedBase_4: slotVisible
			{
			};
      class SeedBase_5: slotVisible
			{
			};
      class SeedBase_6: slotVisible
			{
			};
			class slotCovered_01: slotHidden
			{
			};
			class slotCovered_02: slotHidden
			{
			};
			class slotCovered_03: slotHidden
			{
			};
      class slotCovered_04: slotHidden
			{
			};
      class slotCovered_05: slotHidden
			{
			};
      class slotCovered_06: slotHidden
			{
			};
		};
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};

  class SRP_GardenPlotMedium_Basic_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Medium Garden Planter - 6 Plot";
    descriptionShort="A 6 plot garden planter that grows a few plants.";
    projectionTypename="SRP_GardenPlotMedium_Basic";
  };
  class SRP_GardenPlotMedium_Basic: SRP_GardenPlotMedium_ColorBase
	{
		scope=2;
	};

  class SRP_GardenPlotLarge_ColorBase: Inventory_Base
	{
		scope=0;
		model="Survivalists_Mods\gear\cultivation\srp_gardenplot_large.p3d";
		storageCategory=1;
		lootCategory="Crafted";
		useEntityHierarchy="true";
		slopeTolerance=0.30000001;
		alignHologramToTerain=1;
		yawPitchRollLimit[]={10,10,10};
		attachments[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
			"SeedBase_4",
			"SeedBase_5",
			"SeedBase_6",
			"SeedBase_7",
			"SeedBase_8",
			"SeedBase_9",
			"SeedBase_10",
			"SeedBase_11",
			"SeedBase_12",
		};
		physLayer="item_large";
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name="$STR_attachment_Filling0";
				description="";
				attachmentSlots[]=
				{
					"SeedBase_1",
					"SeedBase_2",
					"SeedBase_3",
					"SeedBase_4",
					"SeedBase_5",
					"SeedBase_6",
					"SeedBase_7",
					"SeedBase_8",
					"SeedBase_9",
					"SeedBase_10",
					"SeedBase_11",
					"SeedBase_12",
				};
				icon="set:dayz_inventory image:cat_gp_filling";
			};
		};
		hiddenSelections[]=
		{
			"seedbase_1",
			"seedbase_2",
			"seedbase_3",
			"seedbase_4",
			"seedbase_5",
			"seedbase_6",
			"seedbase_7",
			"seedbase_8",
			"seedbase_9",
			"seedbase_10",
			"seedbase_11",
			"seedbase_12",
			"slotCovered_01",
			"slotCovered_02",
			"slotCovered_03",
			"slotCovered_04",
			"slotCovered_05",
			"slotCovered_06",
			"slotCovered_07",
			"slotCovered_08",
			"slotCovered_09",
			"slotCovered_10",
			"slotCovered_11",
			"slotCovered_12",
			"zbytek",
      "dirt"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\cultivation\data\soil_cultivated_co.paa",
			"dz\gear\cultivation\data\soil_cultivated_limed_CO.paa",
			"dz\gear\cultivation\data\soil_cultivated_compost_CO.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Survivalists_Mods\gear\cultivation\data\srp_gardenplot_co.paa",
      "Survivalists_Mods\gear\cultivation\data\srp_gardenplotdirt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Survivalists_Mods\gear\cultivation\data\srp_gardenplot.rvmat",
      "Survivalists_Mods\gear\cultivation\data\srp_gardenplotdirt.rvmat"
		};
		class AnimationSources
		{
			class slotVisible
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class slotHidden: slotVisible
			{
				initPhase=1;
			};
			class SeedBase_1: slotVisible
			{
			};
			class SeedBase_2: slotVisible
			{
			};
			class SeedBase_3: slotVisible
			{
			};
      class SeedBase_4: slotVisible
			{
			};
      class SeedBase_5: slotVisible
			{
			};
      class SeedBase_6: slotVisible
			{
			};
      class SeedBase_7: slotVisible
			{
			};
			class SeedBase_8: slotVisible
			{
			};
			class SeedBase_9: slotVisible
			{
			};
      class SeedBase_10: slotVisible
			{
			};
      class SeedBase_11: slotVisible
			{
			};
      class SeedBase_12: slotVisible
			{
			};
			class slotCovered_01: slotHidden
			{
			};
			class slotCovered_02: slotHidden
			{
			};
			class slotCovered_03: slotHidden
			{
			};
      class slotCovered_04: slotHidden
			{
			};
      class slotCovered_05: slotHidden
			{
			};
      class slotCovered_06: slotHidden
			{
			};
      class slotCovered_07: slotHidden
			{
			};
			class slotCovered_08: slotHidden
			{
			};
			class slotCovered_09: slotHidden
			{
			};
      class slotCovered_10: slotHidden
			{
			};
      class slotCovered_11: slotHidden
			{
			};
      class slotCovered_12: slotHidden
			{
			};
		};
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};

  class SRP_GardenPlotLarge_Basic_Kit: SRP_KitBase
  {
    scope=2;
    displayName="Large Garden Planter - 12 Plot";
    descriptionShort="A 12 plot garden planter that grows a few plants.";
    projectionTypename="SRP_GardenPlotLarge_Basic";
  };
  class SRP_GardenPlotLarge_Basic: SRP_GardenPlotLarge_ColorBase
	{
		scope=2;
	};
// --------------------------- END

};