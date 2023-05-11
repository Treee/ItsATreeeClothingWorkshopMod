class CfgPatches
{
	class Survivalists_Mods_Gear_Cooking
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Cooking",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class Bottle_Base;

  // ----------------------  BASE GAME OVERRIDES
  class Pot: Bottle_Base
  {
    itemSize[]={3,2};
    varQuantityMax=1000;
  };
  class PortableGasStove: Inventory_Base
	{
    itemSize[]={2,2};
  };
  class PortableGasLamp: Inventory_Base 
	{
		scope=2;
		itemSize[]={2,3};
    inventorySlot[]=
    {
      "SRP_Lantern"
    };
	};

  // ----------------------  CUSTOM STUFF OVERRIDES
	class SRP_Zippo_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Zippo Lighter";
		descriptionShort="A zippo lighter. Known for its durability, this lighter will last many fires.";
		model="Survivalists_Mods\gear\cooking\srp_zippo.p3d";
		rotationFlags=12;
		absorbency=0;
		weight=50;
		itemSize[]={1,1};
		stackedUnit="ml";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		destroyOnEmpty=0;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_zippo_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{"Survivalists_Mods\gear\cooking\data\srp_zippo.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\gear\cooking\data\srp_zippo.rvmat"}},						
						{0.5,{"Survivalists_Mods\gear\cooking\data\srp_zippo.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\gear\cooking\data\srp_zippo.rvmat"}},						
						{0,{"Survivalists_Mods\gear\cooking\data\srp_zippo.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class LighterZippo
				{
					soundSet="Lighter_Soundset";
					id=201;
				};
			};
		};
		soundImpactType="plastic";
	};
  class SRP_Zippo_Silver: SRP_Zippo_ColorBase
	{
		scope=2;
		displayName="Zippo Lighter - Silver";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_zippo_co.paa"};
	};
  class SRP_Zippo_Survivalists: SRP_Zippo_ColorBase
	{
		scope=2;
		displayName="Zippo Lighter - Survivalists";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_zippo_survivalists_co.paa"};
	};
  class SRP_Zippo_Stag: SRP_Zippo_ColorBase
	{
		scope=2;
		displayName="Zippo Lighter - Stag";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_zippo_stag_co.paa"};
	};
  class SRP_Zippo_Espen: SRP_Zippo_ColorBase
	{
		scope=2;
		displayName="Zippo Lighter - Espen";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_zippo_espen_co.paa"};
	};
  class SRP_Zippo_LocknSons: SRP_Zippo_ColorBase
	{
		scope=2;
		displayName="Zippo Lighter - Lock & Sons";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_zippo_locknsons_co.paa"};
	};
  class SRP_JunkLighter_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Junk Lighter";
		descriptionShort="A makeshift lighter. Careful not to zap yourself.";
		model="Survivalists_Mods\gear\cooking\srp_junklighter.p3d";
		rotationFlags=12;
		absorbency=0;
		weight=50;
		itemSize[]={1,1};
		stackedUnit="ml";
		quantityBar=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=0;
		destroyOnEmpty=0;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_junklighter_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{"Survivalists_Mods\gear\cooking\data\srp_junklighter.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\gear\cooking\data\srp_junklighter.rvmat"}},						
						{0.5,{"Survivalists_Mods\gear\cooking\data\srp_junklighter.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\gear\cooking\data\srp_junklighter.rvmat"}},						
						{0,{"Survivalists_Mods\gear\cooking\data\srp_junklighter.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class LighterZippo
				{
					soundSet="Lighter_Soundset";
					id=201;
				};
			};
		};
		soundImpactType="plastic";
	};
  class SRP_JunkLighter_Basic: SRP_JunkLighter_ColorBase
	{
		scope=2;
		displayName="Junk Lighter";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_junklighter_co.paa"};
	};

  class SRP_PortableGasLamp: Inventory_Base
	{
		scope=2;
    displayName="Portable Gas Lamp";
    descriptionShort="This lamp emits only a small amount of light.";
		model="Survivalists_Mods\gear\cooking\srp_portablegaslamp.p3d";
		weight=330;
		itemSize[]={2,3};
		attachments[]=
		{
			"GasCanister"
		};
    inventorySlot[]=
    {
      "SRP_Lantern"
    };
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1,	{	"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp_damage.rvmat"}},
            {0,	{	"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class BrewingPot_Mash_Colorbase: Inventory_Base
	{
		scope=0;
		displayName="Brewing Mash - Base";
		descriptionShort="A pot of mash ready for brewing.";
		model="\dz\gear\cooking\CookingPot.p3d";
		rotationFlags=2;
		weight=750;
		itemSize[]={4,4};
		itemsCargoSize[]={0,0};
		fragility=0.0099999998;
		varTemperatureMax=200;
    destroyOnEmpty=0;
    varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=100;
		inventorySlot[]={"CookingEquipment"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1,{"DZ\gear\cooking\data\frying_pan.rvmat"}},
            {0.69999999,{"DZ\gear\cooking\data\frying_pan.rvmat"}},
            {0.5,{"DZ\gear\cooking\data\frying_pan_damage.rvmat"}},
            {0.30000001,{"DZ\gear\cooking\data\frying_pan_damage.rvmat"}},
            {0,{"DZ\gear\cooking\data\frying_pan_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class BrewingPot_Mash_Fruit: BrewingPot_Mash_Colorbase
	{
		scope=2;
		displayName="Brewing Mash - Fruit";
  };

  class BrewingJug_Plastic_Alcohol: Bottle_Base
	{
		scope=2;
		displayName="Alcohol Brewing Reclaim Jug";
		descriptionShort="A jug used to hold the runnoff of a still.";
		model="DZ\structures\Furniture\Various\canister_DZ.p3d";		
		weight=440;
		itemSize[]={4,3};
		inventorySlot[]={"BrewingBarrel"};
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varLiquidTypeInit=4096;
		liquidContainerType="4096";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=20000;
		varTemperatureMax=200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1,{"dz\data\data\default.rvmat"}},
						{0.69999999,{"dz\data\data\default.rvmat"}},
						{0.5,{"dz\data\data\default.rvmat"}},
						{0.30000001,{"dz\data\data\default.rvmat"}},
						{0,{"dz\data\data\default.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet="pickUpPotLight_SoundSet";
					id=796;
				};
				class pickUpPot
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class BrewingJug_Plastic_Disinfectant: Bottle_Base
	{
		scope=2;
		displayName="Medical Brewing Reclaim Jug";
		descriptionShort="A jug used to hold the runnoff of a still.";
		model="DZ\structures\Furniture\Various\canister_DZ.p3d";		
		weight=440;
		itemSize[]={4,3};
		inventorySlot[]={"BrewingBarrel"};
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varLiquidTypeInit=32768;
		liquidContainerType="32768";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=500;
		varTemperatureMax=200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1,{"dz\data\data\default.rvmat"}},
						{0.69999999,{"dz\data\data\default.rvmat"}},
						{0.5,{"dz\data\data\default.rvmat"}},
						{0.30000001,{"dz\data\data\default.rvmat"}},
						{0,{"dz\data\data\default.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet="pickUpPotLight_SoundSet";
					id=796;
				};
				class pickUpPot
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class BrewingJug_Plastic_Gasoline: Bottle_Base
	{
		scope=2;
		displayName="Gasoline Brewing Reclaim Jug";
		descriptionShort="A jug used to hold the runnoff of a still.";
		model="DZ\structures\Furniture\Various\canister_DZ.p3d";		
		weight=440;
		itemSize[]={4,3};
		inventorySlot[]={"BrewingBarrel"};
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varLiquidTypeInit=8192;
		liquidContainerType="8192";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=10000;
		varTemperatureMax=200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1,{"dz\data\data\default.rvmat"}},
						{0.69999999,{"dz\data\data\default.rvmat"}},
						{0.5,{"dz\data\data\default.rvmat"}},
						{0.30000001,{"dz\data\data\default.rvmat"}},
						{0,{"dz\data\data\default.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet="pickUpPotLight_SoundSet";
					id=796;
				};
				class pickUpPot
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class BrewingJug_Plastic_Water: Bottle_Base
	{
		scope=2;
		displayName="Brewing Water Jug";
		descriptionShort="A jug used to hold pure water.";
		model="DZ\structures\Furniture\Various\canister_DZ.p3d";		
		weight=440;
		itemSize[]={4,3};
		inventorySlot[]={"BrewingBarrel1"};
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 1024 + 2048 + 4096 + 8192 + 16384) -32768";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=20000;
		varTemperatureMax=200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1,{"dz\data\data\default.rvmat"}},
						{0.69999999,{"dz\data\data\default.rvmat"}},
						{0.5,{"dz\data\data\default.rvmat"}},
						{0.30000001,{"dz\data\data\default.rvmat"}},
						{0,{"dz\data\data\default.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet="pickUpPotLight_SoundSet";
					id=796;
				};
				class pickUpPot
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class SRP_TeaKettle_ColorBase: Bottle_Base
	{
		scope=0;
		displayName="Tea Kettle";
		descriptionShort="A kettle for boiling hot water for steeping various drinks.";
		model="Survivalists_Mods\gear\cooking\srp_teakettle.p3d";
		weight=440;
		itemSize[]={4,3};
		itemsCargoSize[]={4,3};
		inventorySlot[]=
		{
			"CookingEquipment",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=500;
		varTemperatureMax=200;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_teakettle_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{						
						{1,{"DZ\gear\cooking\data\cooking_pot.rvmat"}},						
						{0.69999999,{"DZ\gear\cooking\data\cooking_pot.rvmat"}},						
						{0.5,{"DZ\gear\cooking\data\cooking_pot_damage.rvmat"}},						
						{0.30000001,{"DZ\gear\cooking\data\cooking_pot_damage.rvmat"}},						
						{0,{"DZ\gear\cooking\data\cooking_pot_destruct.rvmat"}}
					};
				};
			};
		};
		repairableWithKits[]={10};
		repairCosts[]={25};
		class AnimationSources
		{
			class handleRotate
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet="pickUpPotLight_SoundSet";
					id=796;
				};
				class pickUpPot
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class SRP_TeaKettle_Teal: SRP_TeaKettle_ColorBase
  {
    scope=2;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_teakettle_co.paa"};
  };
  class SRP_TeaKettle_Red: SRP_TeaKettle_ColorBase
  {
    scope=2;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_teakettle_red_co.paa"};
  };
  class SRP_TeaKettle_Green: SRP_TeaKettle_ColorBase
  {
    scope=2;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_teakettle_green_co.paa"};
  };
  class SRP_TeaKettle_Purple: SRP_TeaKettle_ColorBase
  {
    scope=2;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_teakettle_purple_co.paa"};
  };
  class SRP_TeaKettle_Black: SRP_TeaKettle_ColorBase
  {
    scope=2;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\cooking\data\srp_teakettle_black_co.paa"};
  };
};