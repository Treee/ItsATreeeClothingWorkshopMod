class CfgPatches
{
	class Survivalists_Characters_Backpacks
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Backpacks",
      "Dressupbox",
      "Alv_Tac_Gear_Backpacks"
		};
	};
};
class CfgVehicles
{
  class Container_Base;
  class Clothing;
  // class Backpack_Base;

//--------------------------------- MOD/VANILLA OVERRIDE

  class TaloonBag_ColorBase: Clothing
  {
    rootClassName="TaloonBag";
    colorVariants[]=
    {
      "Blue",
      "Green",
      "Orange",
      "Violet",
      "Black1",
      "Black2"
    };
  };
  class TortillaBag: Clothing
	{
    itemsCargoSize[]={10,8};
    repairableWithKits[]={5,3,2};
		repairCosts[]={30,25,25};
    rootClassName="TortillaBag";
    colorVariants[]=
    {
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
    };
  };
  class CourierBag: Clothing
  {
    rootClassName="CourierBag";
    colorVariants[]=
    {
      "Black",
    };
  };
  class DryBag_ColorBase: Clothing
  {
    rootClassName="DryBag";
    colorVariants[]=
    {
      "Orange",
      "Yellow",
      "Blue",
      "Green",
      "Black",
      "Red",
      "Pink",
      "MintBlue",
      "Camo",
      "ChernaRussian",
      "NordicStripe",
      "Soviet",
      "UnionJack",
    };
  }; 
  class HuntingBag: Clothing
	{
		itemsCargoSize[]={10,7};
    repairableWithKits[]={5,3,2};
		repairCosts[]={30,25,25};
    rootClassName="HuntingBag";
    colorVariants[]=
    {
      "Hannah",
      "Black",
      "Gorka",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
      "Blue",
      "Red",
      "Yellow",
      "Travel",
    };
  };
  class MountainBag_ColorBase: Clothing
	{
		itemsCargoSize[]={7,14};
    repairableWithKits[]={5,3,2};
		repairCosts[]={30,25,25};
    rootClassName="MountainBag";
    colorVariants[]=
    {
      "Red",
      "Blue",
      "Orange",
      "Green",
      "Black",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
    };
  };
  class SmershBag: Clothing
  {
    rootClassName="SmershBag";
    colorVariants[]=
    {
      "White",
      "Black",
      "Green",
      "Tan",
      "NBC",
      "Red",
      "Purple",
      "Blue",
      "Pink",
      "Olive",
      "Storm",
    };
  }; 
  class ChildBag_ColorBase: Clothing
  {
    rootClassName="ChildBag";
    colorVariants[]=
    {
      "Green",
      "Red",
      "Blue",
    };
  };
  class GhillieBushrag_ColorBase: Clothing
  {
    rootClassName="GhillieBushrag";
    colorVariants[]=
    {
      "Tan",
      "Woodland",
      "Orange",
      "Mossy",
      "White",
      "Black"
    };
  };
  class GhillieTop_ColorBase: Clothing
  {
    rootClassName="GhillieTop";
    colorVariants[]=
    {
      "Tan",
      "Woodland",
      "Orange",
      "Mossy",
      "White",
      "Black"
    };
  };
  class GhillieSuit_ColorBase: Clothing
  {
    rootClassName="GhillieSuit";
    colorVariants[]=
    {
      "Tan",
      "Woodland",
      "Orange",
      "Mossy",
      "White",
      "Black"
    };
  };
  class AssaultBag_ColorBase: Clothing
	{
    repairableWithKits[]={5,3,2};
		repairCosts[]={30,25,25};
    attachments[]+=
		{
			"CookingEquipment"
		};
    rootClassName="AssaultBag";
    colorVariants[]=
    {
      "Ttsko",
      "Black",
      "Green",
      "Denim",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
    };
  };
  class CoyoteBag_ColorBase: Clothing
  {
    rootClassName="CoyoteBag";
    colorVariants[]=
    {
      "Brown",
      "Green"
    };
  };
  class AliceBag_ColorBase: Clothing
	{
		itemsCargoSize[]={10,12};
    repairableWithKits[]={5,3,2};
		repairCosts[]={30,25,25};
    rootClassName="AliceBag";
    colorVariants[]=
    {
      "Green",
      "Black",
      "Camo",
      "Camo1",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR1",
      "USNAOR2",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
    };
  };

//--------------------------------- ALEVARIC STUFF
  class ALV_MV_DuffleBag_Colorbase: Clothing
  {
    rootClassName="ALV_MV_DuffleBag";
    colorVariants[]=
    {
      "Black",      
      "Green",
      "Camo",      
      "Black",
      "Teal",
    };
  };
  class ALV_MV_RifleHolster_Colorbase: Clothing
  {
    rootClassName="ALV_MV_RifleHolster";
    colorVariants[]=
    {
      "Black",      
      "Tan",
    };
  };
  class ALV_MV_BackPouches_Colorbase: Clothing
  {
    rootClassName="ALV_MV_BackPouches";
    colorVariants[]=
    {
      "Black",      
      "Tan",
      "Green"
    };
  };
  class ALV_MV_Slingbag_Colorbase: Clothing
  {
    rootClassName="ALV_MV_Slingbag";
    colorVariants[]=
    {
      "Black",
      "Yellow",
      "Green",
      "Blue",      
      "ChocoChip",
      "ERDL",
      "M05",
      "Marpat",
      "MC_Black",
      "TigerStripe"
    };
  };
  class ALV_MV_SmallPack_Colorbase: Clothing
  {
    rootClassName="ALV_MV_SmallPack";
    colorVariants[]=
    {
      "Black",      
      "Tan",
      "Green"
    };
  };
  class ALV_MV_LargePack_Colorbase: Clothing
  {
    rootClassName="ALV_MV_LargePack";
    colorVariants[]=
    {
      "Black",      
      "Tan",
      "Green"
    };
  };
//--------------------------------- CUSTOM STUFF
  class SRP_LeatherBackpack_Default: Clothing 
	{
		scope=2;
    displayName="Leather Backpack";
    descriptionShort="Espen Industries. This rugged leather backpack is large enough to store all of your travelling wares.";
		model="Survivalists_Characters\backpacks\leatherbackpack_g.p3d";
		itemsCargoSize[]={8,8};
    rootClassName="SRP_LeatherBackpack";
    colorVariants[]={};
		heatIsolation=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		itemSize[]={5,6};
    inventorySlot[]=
		{
			"Back"
		};
    itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		attachments[]=
		{
      "Shoulder",
			"Chemlight",
			"WalkieTalkie",
      "Knife",
		};
    hiddenSelections[]=
		{
			"zbytek",
      "cloth",
      "pouches",
      "straps"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\backpacks\data\leatherbackpack_base_co.paa",
			"Survivalists_Characters\backpacks\data\leatherbackpack_cloth_co.paa",
			"Survivalists_Characters\backpacks\data\leatherbackpack_pouches_co.paa",
			"Survivalists_Characters\backpacks\data\leatherbackpack_straps_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Characters\backpacks\data\leatherbackpack.rvmat",
			"Survivalists_Characters\backpacks\data\leatherbackpack_cloth.rvmat",
			"Survivalists_Characters\backpacks\data\leatherbackpack_pouches.rvmat",
			"Survivalists_Characters\backpacks\data\leatherbackpack_straps.rvmat"
    };
		class ClothingTypes
		{
			male="Survivalists_Characters\backpacks\leatherbackpack_m.p3d";
			female="Survivalists_Characters\backpacks\leatherbackpack_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Characters\backpacks\data\leatherbackpack.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_cloth.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_pouches.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_straps.rvmat"}},
            {0.69999999,{"Survivalists_Characters\backpacks\data\leatherbackpack.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_cloth.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_pouches.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_straps.rvmat"}},
            {0.5,{"Survivalists_Characters\backpacks\data\leatherbackpack_damage.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_cloth_damage.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_pouches_damage.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_straps_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\backpacks\data\leatherbackpack_damage.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_cloth_damage.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_pouches_damage.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_straps_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\backpacks\data\leatherbackpack_destruct.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_cloth_destruct.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_pouches_destruct.rvmat", "Survivalists_Characters\backpacks\data\leatherbackpack_straps_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_SurvivalBackpack_Default: Clothing 
	{
		scope=2;
    displayName="Survival Backpack";
    descriptionShort="Espen Industries. This survival backpack has seen better days.";
		model="Survivalists_Characters\backpacks\survivalbackpack_g.p3d";
		itemsCargoSize[]={8,8};
    rootClassName="SRP_SurvivalBackpack";
    colorVariants[]={};
		heatIsolation=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		itemSize[]={5,6};
    attachments[]=
		{
      "Shoulder",
			"Chemlight",
			"WalkieTalkie",
      "Knife",
		};
    inventorySlot[]=
		{
			"Back"
		};
    itemInfo[]=
		{
			"Clothing",
			"Back"
		};    
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\backpacks\data\survivalbackpack_co.paa",
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Characters\backpacks\data\survivalbackpack.rvmat",
    };
		class ClothingTypes
		{
			male="Survivalists_Characters\backpacks\survivalbackpack_m.p3d";
			female="Survivalists_Characters\backpacks\survivalbackpack_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Characters\backpacks\data\survivalbackpack.rvmat"}},
            {0.69999999,{"Survivalists_Characters\backpacks\data\survivalbackpack.rvmat"}},
            {0.5,{"Survivalists_Characters\backpacks\data\survivalbackpack_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\backpacks\data\survivalbackpack_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\backpacks\data\survivalbackpack_destruct.rvmat"}}
					};
				};
			};
		};    
	};
  class SRP_SlingBackpack_Default: Clothing 
	{
		scope=2;
    displayName="Sling Backpack";
    descriptionShort="Espen Industries. This bag comfortably sits across your shoulders.";
		model="Survivalists_Characters\backpacks\shoulderslingbackpack_g.p3d";
		itemsCargoSize[]={8,8};
    rootClassName="SRP_SlingBackpack";
    colorVariants[]=
    {
      "Default",
      "Red",
    };
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		itemSize[]={6,7};
    inventorySlot[]=
		{
			"Back"
		};
    itemInfo[]=
		{
			"Clothing",
			"Back"
		};    
    attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
      "Knife",
      "Pistol",
      "Belt_Left",
      "Shoulder"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\backpacks\data\shoulderslingbackpack_tan_co.paa",
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Characters\backpacks\data\shoulderslingbackpack.rvmat",
    };
		class ClothingTypes
		{
			male="Survivalists_Characters\backpacks\shoulderslingbackpack_m.p3d";
			female="Survivalists_Characters\backpacks\shoulderslingbackpack_m.p3d";
		};    		
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Characters\backpacks\data\shoulderslingbackpack.rvmat"}},
            {0.69999999,{"Survivalists_Characters\backpacks\data\shoulderslingbackpack.rvmat"}},
            {0.5,{"Survivalists_Characters\backpacks\data\shoulderslingbackpack_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\backpacks\data\shoulderslingbackpack_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\backpacks\data\shoulderslingbackpack_destruct.rvmat"}}
					};
				};
			};
		}; 
	};
  class SRP_Small_Military_Pack_Tan: Clothing 
	{
		scope=2;
		displayName="Small Military Pack";
    descriptionShort="Espen Industries. This small bag was the first line of products marketed to the military.";
		model="Survivalists_Characters\backpacks\Small_Military_Pack_g.p3d";
		itemsCargoSize[]={7,7};
    rotationFlags=1;
    rootClassName="SRP_Small_Military_Pack";
    colorVariants[]=
    {
      "Tan",
      "Black",
      "Green",
      "MC_Black",
      "CAD",
      "M05",
      "ChocChip",
      "ERDL",
      "MARPAT_Wood",
    };
		heatIsolation=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		itemSize[]={5,6};
    inventorySlot[]=
		{
			"Back"
		};
    itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		attachments[]=
		{
      "VestBackpack","LargePouch1","Belt_Left","SmallPouch1","SmallPouch2","SRP_Patch"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\backpacks\data\Small_Military_Pack_Tan_CO.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\backpacks\Small_Military_Pack.p3d";
			female="Survivalists_Characters\backpacks\Small_Military_Pack.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Characters\backpacks\data\Small_Military_Pack.rvmat"}},
            {0.7,{"Survivalists_Characters\backpacks\data\Small_Military_Pack.rvmat"}},
            {0.5,{"Survivalists_Characters\backpacks\data\Small_Military_Pack_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\backpacks\data\Small_Military_Pack_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\backpacks\data\Small_Military_Pack_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Big_Military_Pack_Tan: Clothing 
	{
		scope=2;
		displayName="Large Military Pack";
    descriptionShort="Espen Industries. This large bag was created to solve storage problems for a mobile soldier.";
		model="Survivalists_Characters\backpacks\Big_Military_Pack_g.p3d";
		itemsCargoSize[]={10,10};
    rotationFlags=1;
    rootClassName="SRP_Big_Military_Pack";
    colorVariants[]=
    {
      "Tan",
      "Black",
      "Green",
      "Blue",
      "Coco",
      "Lavender",
      "Orange",
      "Pink",
      "Red",
      "Storm",
      "Sunny",
      "Teal"      
    };
		heatIsolation=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		itemSize[]={5,6};
    inventorySlot[]=
		{
			"Back"
		};
    itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		attachments[]=
		{
      "VestBackpack","LargePouch1","Belt_Left","SmallPouch1","SmallPouch2","SRP_Patch"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\backpacks\data\Big_Military_Pack_Tan_CO.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\backpacks\Big_Military_Pack.p3d";
			female="Survivalists_Characters\backpacks\Big_Military_Pack.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Characters\backpacks\data\Big_Military_Pack.rvmat"}},
            {0.7,{"Survivalists_Characters\backpacks\data\Big_Military_Pack.rvmat"}},
            {0.5,{"Survivalists_Characters\backpacks\data\Big_Military_Pack_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\backpacks\data\Big_Military_Pack_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\backpacks\data\Big_Military_Pack_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Rifle_Bag_Green: Clothing 
  {
    scope=2;
    displayName="Rifle bag";
    descriptionShort="Espen Industries. This large rifle bag serves the marksman well with ample storage for accessories and several guns.";
    model="Survivalists_Characters\backpacks\Rifle_Bag_g.p3d";
    itemsCargoSize[]={5,8};
    rootClassName="SRP_Rifle_Bag";
    colorVariants[]=
    {
      "Tan",
      "Black",
      "Green"  
    };
    attachments[]=
    {
      "Shoulder","Melee","Pistol","SmallPouch1","SmallPouch2","SRP_Patch"
    };
		heatIsolation=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		itemSize[]={5,6};
    inventorySlot[]=
		{
			"Back"
		};
    itemInfo[]=
		{
			"Clothing",
			"Back"
		};
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Characters\backpacks\data\Rifle_Bag_Green_CO.paa"
    };
    class ClothingTypes
    {
      male="Survivalists_Characters\backpacks\Rifle_Bag.p3d";
      female="Survivalists_Characters\backpacks\Rifle_Bag.p3d";
    };
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          hitpoints=160;
          healthLevels[]=
          {
            {1.0,{"Survivalists_Characters\backpacks\data\Rifle_Bag.rvmat"}},
            {0.7,{"Survivalists_Characters\backpacks\data\Rifle_Bag.rvmat"}},
            {0.5,{"Survivalists_Characters\backpacks\data\Rifle_Bag_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\backpacks\data\Rifle_Bag_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\backpacks\data\Rifle_Bag_destruct.rvmat"}}
          };
        };
      };
    };
  };
  class SRP_Rolltop_Bag: Clothing
	{	
		scope=2;
		displayName="Rolltop Bag";
    descriptionShort="Espen Industries. The style of bag caught fire faster than the outbreak. Not surprising is is still popular among survivors today.";
		model="Survivalists_Characters\backpacks\Backpackrolltop_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		weight=1000;
		itemSize[]={5,4};
		itemsCargoSize[]={8,8};
    attachments[]=
		{
			"CookingEquipment",
			"cookingtripod",
			"fishingRod"
		};
    inventorySlot[]=
		{
			"Back"
		};
    itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		absorbency=0;
		heatIsolation=0.80;
    rootClassName="SRP_Rolltop_Bag";
    colorVariants[]={};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\backpacks\data\backpackrolltop_CO.paa"			
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\backpacks\Backpackrolltop_m.p3d";
			female="Survivalists_Characters\backpacks\Backpackrolltop_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\backpacks\data\backpackrolltop.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\backpacks\data\backpackrolltop.rvmat"}},
            {0.5,	{	"Survivalists_Characters\backpacks\data\backpackrolltop_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\backpacks\data\backpackrolltop_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\backpacks\data\backpackrolltop_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class SRP_MessengerBag_Leather: Clothing
	{
		scope=2;
		displayName="Messenger Bag";
    descriptionShort="Espen Industries. A leather satchel with a strap. Sits comfortably across your shoulders.";
		model="Survivalists_Characters\backpacks\Leather_Satchel_g.p3d";
    repairableWithKits[]={5,8};
		repairCosts[]={30,25};
    rootClassName="SRP_MessengerBag";
    colorVariants[]=
    {
      "Leather",
      "Tan",
      "Brown",
      "Pink",
      "Blue",
    };
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		weight=1000;
		itemSize[]={5,4};
		itemsCargoSize[]={8,8};
		absorbency=0;
		heatIsolation=0.80;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Compass"
		};
    inventorySlot[]=
		{
			"Back"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\backpacks\data\Leather_Satchel_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\backpacks\data\Leather_Satchel.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\backpacks\Leather_Satchel_m.p3d";
			female="Survivalists_Characters\backpacks\Leather_Satchel_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\backpacks\data\Leather_Satchel.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\backpacks\data\Leather_Satchel.rvmat"}},
            {0.5,	{	"Survivalists_Characters\backpacks\data\Leather_Satchel_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\backpacks\data\Leather_Satchel_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\backpacks\data\Leather_Satchel_destruct.rvmat"}}
					};
				};
			};
		};
    class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class SRP_Bergan_Backpack: Clothing
	{
		scope=2;
		displayName="Bergan Backpack";
		descriptionShort="Espen Industries. This rugged leather backpack is large enough to store all of your travelling wares.";
		model="Survivalists_Characters\backpacks\Bergan_Backpack_g.p3d";
    repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rootClassName="SRP_Bergan_Backpack";
		colorVariants[]={};
    itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		weight=1000;
		itemSize[]={5,4};
		itemsCargoSize[]={8,8};
		absorbency=0;
		heatIsolation=0.80;
		attachments[]=
		{
			"SmallPouch1",
			"SmallPouch2",
			"LargePouch1",
			"LargePouch2"
		};
    inventorySlot[]=
		{
			"Back"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\backpacks\data\SRP_Bergan_Backpack_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\backpacks\data\SRP_Bergan_Backpack.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\backpacks\Bergan_Backpack_m.p3d";
			female="Survivalists_Characters\backpacks\Bergan_Backpack_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1,{"Survivalists_Characters\backpacks\data\SRP_Bergan_Backpack.rvmat"}},
						{0.69999999,{"Survivalists_Characters\backpacks\data\SRP_Bergan_Backpack.rvmat"}},
						{0.5,{"Survivalists_Characters\backpacks\data\SRP_Bergan_Backpack.rvmat"}},
						{0.30000001,{"Survivalists_Characters\backpacks\data\SRP_Bergan_Backpack.rvmat"}},
						{0,{"Survivalists_Characters\backpacks\data\SRP_Bergan_Backpack.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Trader_Backpack_ColorBase: Clothing
	{
		scope=0;
		displayName="Leather Backpack";
		descriptionShort="Espen Industries. This rugged leather backpack is large enough to store all of your travelling wares.";
		model="Survivalists_Characters\backpacks\Trader_Backpack_g.p3d";
    repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rootClassName="SRP_Trader_Backpack";
		colorVariants[]={};
    itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		weight=1000;
		itemSize[]={5,4};
		absorbency=0.5;
		heatIsolation=0.80;
		itemsCargoSize[]={8,10};
		attachments[]=
		{
			"Chemlight"
		};
    inventorySlot[]=
		{
			"Back"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\backpacks\data\SRP_Trader_Backpack_CO.paa",
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\backpacks\data\SRP_Trader_Backpack.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\backpacks\Trader_Backpack_m.p3d";
			female="Survivalists_Characters\backpacks\Trader_Backpack_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{						
						{1.0,{"Survivalists_Characters\backpacks\data\SRP_Trader_Backpack.rvmat"}},						
						{0.69999999,{"Survivalists_Characters\backpacks\data\SRP_Trader_Backpack.rvmat"}},						
						{0.5,{"Survivalists_Characters\backpacks\data\SRP_Trader_Backpack.rvmat"}},						
						{0.30000001,{"Survivalists_Characters\backpacks\data\SRP_Trader_Backpack.rvmat"}},						
						{0.0,{"Survivalists_Characters\backpacks\data\SRP_Trader_Backpack.rvmat"}}
					};
				};
			};
		};
	};
//--------------------------------- END
};