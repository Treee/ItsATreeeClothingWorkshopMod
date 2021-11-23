class CfgPatches
{
	class Survivalists_Mods_Gear_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Spraycan_ColorBase;
  class Inventory_Base;
  class ButaneCanister;

  //--------------------------------------------- BASE GAME OVERRIDES
	class Battery9V: Inventory_Base
	{
    varQuantityInit=200;
		varQuantityMax=200;
		class EnergyManager
		{
			energyStorageMax=200;
			energyAtSpawn=200;
		};
	};
	class TruckBattery: Inventory_Base
	{
    varQuantityInit=6000;
		varQuantityMax=6000;
		class EnergyManager
		{
			energyStorageMax=6000;
			energyAtSpawn=6000;
		};
	};
	class CarBattery: Inventory_Base
	{
    varQuantityInit=2000;
		varQuantityMax=2000;
		class EnergyManager
		{
			energyStorageMax=2000;
			energyAtSpawn=2000;
		};
	};
	class AircraftBattery: Inventory_Base
	{
    varQuantityInit=2000;
		varQuantityMax=2000;
		class EnergyManager
		{
			energyStorageMax=2000;
			energyAtSpawn=2000;
		};
	};
  class WoodenPlank: Inventory_Base
	{
    varStackMax=20;
  };

  // drug workbench
  class HeadlightH7: Inventory_Base
	{
		inventorySlot[]=
		{
			"Reflector_1_1",
			"Reflector_2_1",
      "Lightbulb"
		};
	};
  
  //----------------------------------------------- CUSTOM STUFF
  class SRP_LongRangeRadioBattery: Battery9V // SRPLRRadioBattery
	{
		scope=2;
		displayName="Military Radio Battery";
		descriptionShort="Military radio battery pack";
		model="Survivalists_Mods\gear\consumables\SRP_LRRadioBattery.p3d";
		inventorySlot[]={"SRPRadioBattery"};
		itemSize[]={1,2};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			energyStorageMax=250;
			energyAtSpawn=250;
			convertEnergyToQuantity=1;
			reduceMaxEnergyByDamageCoef=1;
			powerSocketsCount=1;
			compatiblePlugTypes[]={1};
		};
	};

	class SRP_Spraycan_Turquoise: Spraycan_ColorBase
	{
		scope=2;
		displayName="Turquoise Spraycan";
		descriptionShort="A spray can that can be used to paint some weapons";
		color="Turquoise";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_co.paa"
		};
	};
	class SRP_Spraycan_Red: Spraycan_ColorBase
	{
		scope=2;
		displayName="Red Spraycan";
		descriptionShort="A spray can that can be used to paint some weapons";
		color="Red";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_co.paa"
		};
	};
	class SRP_Spraycan_Brown: Spraycan_ColorBase
	{
		scope=2;
		displayName="Brown Spraycan";
		descriptionShort="A spray can that can be used to paint some weapons";
		color="Brown";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_co.paa"
		};
	};
	class SRP_Spraycan_Green: Spraycan_ColorBase
	{
		scope=2;
		displayName="Green Spraycan";
		descriptionShort="Green Spraycan";
		color="Green";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_co.paa"
		};
	};  
  class SRP_ButaneCanister: ButaneCanister
	{
		scope=2;
		displayName="Refillable Butane Canister";
		descriptionShort="A canister used for re-fueling gas containers";
		overrideDrawArea="3.0";
		varQuantityInit=20;
		varQuantityMin=0;
		varQuantityMax=20;
		stackedUnit="w";
		varQuantityDestroyOnMin=0;
		destroyOnEmpty=0;
	};

  class SRP_FacePaintStick: Inventory_Base
	{
		scope=2;
		displayName="Face Paint Stick";
		descriptionShort="Paint your face into a lion. Might take some time to stick on your face, be patient between applications.";
		model="\dz\gear\medical\Epinephrine.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\characters\heads\srp_facepaint_co.paa"
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
            {1.0,	{	"DZ\gear\medical\data\epipen.rvmat"}},
            {0.69999999,	{	"DZ\gear\medical\data\epipen.rvmat"}},
            {0.5,	{	"DZ\gear\medical\data\epipen_damage.rvmat"}},
            {0.30000001,	{	"DZ\gear\medical\data\epipen_damage.rvmat"}},
            {0.0,	{	"DZ\gear\medical\data\epipen_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_ToiletPaper: Inventory_Base
	{
		scope=2;
		displayName="Toilet Paper";
		descriptionShort="1 ply toilet paper. Looks more like sand paper.";
		model="Survivalists_Mods\gear\consumables\toiletpaper.p3d";
		weight=20;
		absorbency=1;
		itemSize[]={2,2};
		inventorySlot[]=
		{
			"Rags"
		};
		ChangeInventorySlot[]=
		{
			"Mask"
		};
		ChangeIntoOnAttach[]=
		{
			"",
			"MouthRag"
		};
		canBeSplit=1;
		varQuantityInit=6;
		varQuantityMin=0;
		varQuantityMax=6;
		varQuantityDestroyOnMin=1;
		rotationFlags=17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
            {	1,{"Survivalists_Mods\gear\consumables\data\toiletpaper.rvmat"	}},
            {	0.69999999,{"Survivalists_Mods\gear\consumables\data\toiletpaper.rvmat"	}},
            {	0.5,{"Survivalists_Mods\gear\consumables\data\toiletpaper_damage.rvmat"	}},
            {	0.30000001,{"Survivalists_Mods\gear\consumables\data\toiletpaper_damage.rvmat"	}},
            {	0,{"Survivalists_Mods\gear\consumables\data\toiletpaper_destruct.rvmat"	}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet="Bandage_loop_SoundSet";
					id=201;
				};
				class Bandage_loop2
				{
					soundSet="Bandage_loop_SoundSet";
					id=202;
				};
				class Bandage_loop3
				{
					soundSet="Bandage_loop_SoundSet";
					id=203;
				};
				class Bandage_start
				{
					soundSet="Bandage_start_SoundSet";
					id=204;
				};
				class Bandage_end
				{
					soundSet="Bandage_end_SoundSet";
					id=205;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};

  class SRP_RollingPapers: Inventory_Base
	{
		scope=2;
		displayName="Rolling Papers";
		descriptionShort="A set of rolling papers";
		model="Survivalists_Mods\gear\consumables\rollingpapers.p3d";
		weight=20;
		absorbency=1;
		itemSize[]={2,1};
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		rotationFlags=17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
            {	1,{"Survivalists_Mods\gear\consumables\data\rollingpapers.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\consumables\data\rollingpapers.rvmat"}},
            {	0.5,{"Survivalists_Mods\gear\consumables\data\rollingpapers_damage.rvmat"}},
            {	0.30000001,{"Survivalists_Mods\gear\consumables\data\rollingpapers_damage.rvmat"}},
            {	0,{"Survivalists_Mods\gear\consumables\data\rollingpapers_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet="Bandage_loop_SoundSet";
					id=201;
				};
				class Bandage_loop2
				{
					soundSet="Bandage_loop_SoundSet";
					id=202;
				};
				class Bandage_loop3
				{
					soundSet="Bandage_loop_SoundSet";
					id=203;
				};
				class Bandage_start
				{
					soundSet="Bandage_start_SoundSet";
					id=204;
				};
				class Bandage_end
				{
					soundSet="Bandage_end_SoundSet";
					id=205;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};

  //============================================= CONSUMABLES
  class SRP_CraftingMaterial_Metal: Inventory_Base
	{
		scope=0;
		displayName="Metal Crafting Model Base";
		descriptionShort="Metal Crafting Model Base";
		model="Survivalists_Mods\gear\consumables\craftingmaterials_metal.p3d";
		rotationFlags=34;
		weight=1200;
		itemSize[]={5,5};
		itemBehaviour=0;
		canBeSplit=1;
		varQuantityInit=5;
		varQuantityMin=0;
		varQuantityMax=40;
		varQuantityDestroyOnMin=1;
		varStackMax=40;
		inventorySlot[]={};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{	"dz\gear\consumables\data\craftingmaterials_metal.rvmat"}},
            {0.69999999,	{	"dz\gear\consumables\data\craftingmaterials_metal.rvmat"}},
            {0.5,	{	"dz\gear\consumables\data\craftingmaterials_metal_damage.rvmat"}},
            {0.30000001,	{	"dz\gear\consumables\data\craftingmaterials_metal_damage.rvmat"}},
            {0.0,	{	"dz\gear\consumables\data\craftingmaterials_metal_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_CraftingMaterial_MetalScraps: SRP_CraftingMaterial_Metal
  {
		scope=2;
		displayName="Sheet Metal Scraps";
		descriptionShort="Sheet Metal Scraps";
		model="Survivalists_Mods\gear\consumables\craftingmaterials_sheetmetal.p3d";
  }
  class SRP_CraftingMaterial_MetalRod: SRP_CraftingMaterial_Metal
  {
		scope=2;
		displayName="Metal Rod";
		descriptionShort="Metal Rod. Might be useful on a lathe.";
		model="Survivalists_Mods\gear\consumables\craftingmaterials_metalrod.p3d";
    itemSize[]={2,5};
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		varQuantityDestroyOnMin=1;
		varStackMax=1;
  }
  class SRP_CraftingMaterial_StoneBrick: SRP_CraftingMaterial_Metal
  {
		scope=2;
		displayName="Stone Brick";
		descriptionShort="Stone Brick. Pretty heavy.";
		model="Survivalists_Mods\gear\consumables\craftingmaterials_stonebrick.p3d";
    itemSize[]={2,3};
  }
  class SRP_CraftingMaterial_MetalBeam: SRP_CraftingMaterial_Metal
  {
		scope=2;
		displayName="Metal Beam";
		descriptionShort="Metal Beam. Pretty heavy.";
		model="Survivalists_Mods\gear\consumables\craftingmaterials_metalbeam.p3d";
    itemSize[]={3,8};
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		varQuantityDestroyOnMin=1;
		varStackMax=1;
  }
};