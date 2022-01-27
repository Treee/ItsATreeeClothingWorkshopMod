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

  class GardenLime: Inventory_Base
  {
    canBeSplit=1;
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

  // bone armor kit
  class Bone: Inventory_Base
  {
    inventorySlot[]=
		{
			"SRP_Bones"
		};
    varQuantityMax=30;
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
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_turquoise_co.paa"
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
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_red_co.paa"
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
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_brown_co.paa"
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
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_green_co.paa"
		};
	};  
  class SRP_Spraycan_White: Spraycan_ColorBase
	{
		scope=2;
		displayName="White Spraycan";
		descriptionShort="White Spraycan";
		color="White";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\consumables\data\srp_spraycan_white_co.paa"
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
		model="Survivalists_Mods\gear\consumables\craftingmaterials_sheetmetal.p3d";
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
						{1.0,	{	"Survivalists_Mods\gear\consumables\data\craftingmaterials_metal.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\consumables\data\craftingmaterials_metal.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\consumables\data\craftingmaterials_metal_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\consumables\data\craftingmaterials_metal_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\consumables\data\craftingmaterials_metal_destruct.rvmat"}}
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
  class SRP_CraftingMaterial_MetalScraps_Cut: SRP_CraftingMaterial_MetalScraps
  {
		scope=2;
		displayName="Cut Sheet Metal Scraps";
		descriptionShort="Cut Sheet Metal Scraps";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\craftingmaterials_metalcut_co.paa"
    };
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

  class SRP_CraftingMaterial_BagBase: Inventory_Base
	{
		scope=0;
		displayName="Bag Crafting Model Base";
		descriptionShort="Bag Crafting Model Base";
		model="Survivalists_Mods\gear\consumables\craftingmaterials_bag.p3d";
		weight=1200;
		itemSize[]={3,4};
		itemBehaviour=0;
		canBeSplit=1;
		varQuantityInit=5;
		varQuantityMin=0;
		varQuantityMax=40;
		varQuantityDestroyOnMin=1;
		varStackMax=40;
		inventorySlot[]={};
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_cement_bag.paa"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_bag.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_bag.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_bag_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_bag_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_bag_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_CraftingMaterial_Cement: SRP_CraftingMaterial_BagBase
  {
		scope=2;
		displayName="Bag of Cement";
		descriptionShort="A bag of cement. Combined with various things to build sturdy things.";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_cement_bag.paa"
    };
  };
  class SRP_CraftingMaterial_Mortar: SRP_CraftingMaterial_BagBase
  {
		scope=2;
		displayName="Bag of Mortar";
		descriptionShort="A bag of mortar. Combined with various things to fill in gaps between stones.";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_mortar_bag.paa"
    };
  };

  class SRP_CraftingMaterial_Dye_Base: Inventory_Base
	{
		scope=0;
		displayName="Dye Crafting Model Base";
		descriptionShort="A rudimentary dye. Useful for staining this color on cloth or other various things.";
		model="Survivalists_Mods\gear\consumables\srp_dyebottle.p3d";
    color="base";
		weight=120;
		itemSize[]={2,2};
		itemBehaviour=1;
		canBeSplit=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=1;
		varStackMax=100;
		inventorySlot[]=
    {
      "SRP_DyeBottle1",
      "SRP_DyeBottle2",
      "SRP_DyeBottle3",
      "SRP_DyeBottle4",
      "SRP_DyeBottle5",
      "SRP_DyeBottle6",
      "SRP_DyeBottle7",
      "SRP_DyeBottle8",
      "SRP_DyeBottle9",
      "SRP_DyeBottle10",
      "SRP_DyeBottle11",
      "SRP_DyeBottle12"
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_dyebottle_whitepotion_ca.paa"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\consumables\data\srp_dyebottle.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\consumables\data\srp_dyebottle.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\consumables\data\srp_dyebottle_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\consumables\data\srp_dyebottle_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\consumables\data\srp_dyebottle_destruct.rvmat"}}
					};
				};
			};
		};
	};
  
  class SRP_CraftingMaterial_Dye_Bleach: SRP_CraftingMaterial_Dye_Base
  {
    scope=2;
    displayName="Dye - Bleach";
    color="bleach";
  };
  class SRP_CraftingMaterial_Dye_Black: SRP_CraftingMaterial_Dye_Base
  {
    scope=2;
    displayName="Dye - Black";
    color="black";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_dyebottle_blackpotion_ca.paa"
    };
  };
  class SRP_CraftingMaterial_Dye_Blue: SRP_CraftingMaterial_Dye_Base
  {
    scope=2;
    displayName="Dye - Blue";
    color="blue";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_dyebottle_bluepotion_ca.paa"
    };
  };
  class SRP_CraftingMaterial_Dye_Brown: SRP_CraftingMaterial_Dye_Base
  {
    scope=2;
    displayName="Dye - Brown";
    color="brown";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_dyebottle_brownpotion_ca.paa"
    };
  };
  class SRP_CraftingMaterial_Dye_Green: SRP_CraftingMaterial_Dye_Base
  {
    scope=2;
    displayName="Dye - Green";
    color="green";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_dyebottle_greenpotion_ca.paa"
    };
  };
  class SRP_CraftingMaterial_Dye_Pink: SRP_CraftingMaterial_Dye_Base
  {
    scope=2;
    displayName="Dye - Pink";
    color="pink";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_dyebottle_pinkpotion_ca.paa"
    };
  };
  class SRP_CraftingMaterial_Dye_Red: SRP_CraftingMaterial_Dye_Base
  {
    scope=2;
    displayName="Dye - Red";
    color="red";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_dyebottle_redpotion_ca.paa"
    };
  };
  class SRP_CraftingMaterial_Dye_Yellow: SRP_CraftingMaterial_Dye_Base
  {
    scope=2;
    displayName="Dye - Yellow";
    color="Yellow";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_dyebottle_yellowpotion_ca.paa"
    };
  };

  class SRP_SkeletonFrame: Inventory_Base
  {
		scope=2;
		displayName="Skeleton";
		descriptionShort="The torso serves as a foundation for other bones.";
		model="Survivalists_Mods\gear\consumables\srp_skeletonframe.p3d";
		weight=1200;
		itemSize[]={5,5};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
    rotationFlags=16;
		attachments[]=
    {
      "SRP_SkeletonSkull",
      "SRP_SkeletonArmLeft",
      "SRP_SkeletonArmRight",
      "SRP_SkeletonPelvis",
      "SRP_SkeletonLegLeft",
      "SRP_SkeletonLegRight",
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\consumables\data\srp_skeleton_co.paa"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\consumables\data\srp_skeleton.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\consumables\data\srp_skeleton.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\consumables\data\srp_skeleton_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\consumables\data\srp_skeleton_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\consumables\data\srp_skeleton_destruct.rvmat"}}
					};
				};
			};
		};
  };
  class SRP_SkeletonFrame_Skull: SRP_SkeletonFrame
  {
		scope=2;
		displayName="Skeleton Skull";
		descriptionShort="The skull crowns any skeleton set.";
		model="Survivalists_Mods\gear\consumables\srp_skeletonhead.p3d";
		weight=1200;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		itemBehaviour=0;
		attachments[]={};
		inventorySlot[]=
    {
      "SRP_SkeletonSkull"
    };
  };
  class SRP_SkeletonFrame_ArmLeft: SRP_SkeletonFrame
  {
		scope=2;
		displayName="Skeleton Left Arm";
		descriptionShort="The left arm of a skeleton.";
		model="Survivalists_Mods\gear\consumables\srp_skeletonarmleft.p3d";
		weight=1200;
		itemSize[]={2,6};
		itemsCargoSize[]={0,0};
		itemBehaviour=0;
		attachments[]={};
		inventorySlot[]=
    {
      "SRP_SkeletonArmLeft"
    };
  };
  class SRP_SkeletonFrame_ArmRight: SRP_SkeletonFrame
  {
		scope=2;
		displayName="Skeleton Right Arm";
		descriptionShort="The right arm of a skeleton.";
		model="Survivalists_Mods\gear\consumables\srp_skeletonarmright.p3d";
		weight=1200;
		itemSize[]={2,6};
		itemsCargoSize[]={0,0};
		itemBehaviour=0;
		attachments[]={};
		inventorySlot[]=
    {
      "SRP_SkeletonArmRight"
    };
  };
  class SRP_SkeletonFrame_Pelvis: SRP_SkeletonFrame
  {
		scope=2;
		displayName="Skeleton Pelvis";
		descriptionShort="The pelvis of a skeleton";
		model="Survivalists_Mods\gear\consumables\srp_skeletonpelvis.p3d";
		weight=1200;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		itemBehaviour=0;
		attachments[]={};
		inventorySlot[]=
    {
      "SRP_SkeletonPelvis"
    };
  };
  class SRP_SkeletonFrame_LegLeft: SRP_SkeletonFrame
  {
		scope=2;
		displayName="Skeleton Left Leg";
		descriptionShort="The left leg of a skeleton.";
		model="Survivalists_Mods\gear\consumables\srp_skeletonlegleft.p3d";
		weight=1200;
		itemSize[]={2,6};
		itemsCargoSize[]={0,0};
		itemBehaviour=0;
		attachments[]={};
		inventorySlot[]=
    {
      "SRP_SkeletonLegLeft"
    };
  };
  class SRP_SkeletonFrame_LegRight: SRP_SkeletonFrame
  {
		scope=2;
		displayName="Skeleton Right Leg";
		descriptionShort="The right leg of a skeleton.";
		model="Survivalists_Mods\gear\consumables\srp_skeletonlegright.p3d";
		weight=1200;
		itemSize[]={2,6};
		itemsCargoSize[]={0,0};
		itemBehaviour=0;
		attachments[]={};
		inventorySlot[]=
    {
      "SRP_SkeletonLegRight"
    };
  };
};