class CfgPatches
{
	class Survivalists_Characters_Vests
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  class Container_Base;
  class Bottle_Base;

  // ----------------------  BASE GAME OVERRIDES
  class PlateCarrierVest: Clothing
	{
    itemSize[]={5,4};
    heatIsolation=0.2;
		repairableWithKits[]={5,3,7};
		repairCosts[]={30,25,25};
    rootClassName="PlateCarrierVest";
    colorVariants[]=
    {
      "Trader",
      "Black",
      "White",
      "Pseudo",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR2",
      "USNAOR1",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
      "Lavender",
      "Petal",
      "Stone",
      "Storm",
      "Sunny",
    };
	};
  class PlateCarrierHolster: Clothing
	{
    itemSize[]={2,2};
		repairableWithKits[]={5,3,7};
		repairCosts[]={30,25,25};
    heatIsolation=0.1;
    rootClassName="PlateCarrierHolster";
    colorVariants[]=
    {
      "White",
      "Pseudo",
      "Tan",
      "Green",
      "Black",
      "Lavender",
      "Petal",
      "Stone",
      "Storm",
      "Sunny",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR2",
      "USNAOR1",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
    };
  };
  class PlateCarrierPouches: Container_Base
	{
    itemSize[]={6,4};
		itemsCargoSize[]={6,4};
		repairCosts[]={30,25,25};
    inventorySlot[]+=
		{
			"VestHolster",
			"Belt_Right",
			"Belt_Back",
			"VestPouch"
		};
    rootClassName="PlateCarrierPouches";
    colorVariants[]=
    {
      "White",
      "Pseudo",
      "Tan",
      "Green",
      "Black",
      "Lavender",
      "Petal",
      "Stone",
      "Storm",
      "Sunny",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR2",
      "USNAOR1",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
    };
  };
  class PressVest_ColorBase: Clothing
	{
		repairableWithKits[]={5,3,7};
		repairCosts[]={30,25,25};
    itemsCargoSize[]={9,4};
    rootClassName="PressVest";
    colorVariants[]=
    {
      "Black",   
      "Blue",
      "LightBlue",      
      "ATFBlue",      
      "CIABlue",      
      "FBIBlue",      
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
  class UKAssVest_ColorBase: Clothing
	{
    rootClassName="UKAssVest";
    colorVariants[]=
    {
      "Black",
      "Camo",      
      "Khaki",      
      "Olive",      
      "White",       
    };
	};
  class PoliceVest: Clothing
	{
    rootClassName="PoliceVest";
    colorVariants[]=
    {
      "Sheriff",
      "ATF",      
      "CIA",      
      "FBI",      
    };
	};
  class ChestHolster: Clothing
	{
    rootClassName="ChestHolster";
    colorVariants[]=
    {
      "Black",
      "White",      
    };
	};
  class HighCapacityVest_ColorBase: Clothing
	{
    itemsCargoSize[]={8,5};
		repairableWithKits[]={5,3,7};
		repairCosts[]={30,25,25};
    rootClassName="HighCapacityVest";
    colorVariants[]=
    {
      "Black",
      "Olive",
      "Rain",
      "ATFBlack",
      "ATFOlive",
      "CIABlack",
      "CIAOlive",
      "FBIBlack",
      "FBIOlive",
      "MTP",
      "ATAC",
      "ATACSFG",
      "USNAOR2",
      "USNAOR1",
      "SURPAT",
      "MARPATWinter",
      "EMP6",
    };
  };
  class LeatherStorageVest_ColorBase: Clothing
	{
    rootClassName="LeatherStorageVest";
    colorVariants[]=
    {
      "Natural",
      "Beige",
      "Brown",
      "Black",
      "Choco",
      "Lime",
      "Orange",
      "Pink",
      "Purple",
      "Storm",
      "Yellow",
    };
  };
  class HuntingVest: Clothing
	{
    rootClassName="HuntingVest";
    colorVariants[]=
    {
      "Leather",      
    };
  };

  // ----------------------  CUSTOM STUFF
  class SRP_Brewstershield: PlateCarrierVest
	{
		scope=2;
		displayName="Brewster Shield";
		descriptionShort="Espen Industries. A crude body shield proven to be effective in World War 1.";
		model="Survivalists_Characters\vests\brewstershield_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\brewstershield_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\vests\data\brewstershield.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\brewstershield_m.p3d";
			female="Survivalists_Characters\vests\brewstershield_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\brewstershield.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\vests\data\brewstershield.rvmat"}},
            {0.5,	{	"Survivalists_Characters\vests\data\brewstershield_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\vests\data\brewstershield_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\vests\data\brewstershield_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
	};  

  class SRP_Bandoiler: Clothing
	{	
		scope=2;
		displayName="Leather bandoiler";
		descriptionShort="Espen Industries. An old belt which has been turned into a bandoiler";
		model="Survivalists_Characters\vests\bandoiler_g.p3d";
		attachments[]=
		{
			"Belt_Back",
      "VestGrenadeA",
      "VestGrenadeB"
		};
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
		weight=1000;
		itemSize[]={1,5};
		itemsCargoSize[]={6,5};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek",
      "buckle"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\Bandoiler_CO.paa",
      "Survivalists_Characters\vests\data\Bandoilerbuckle_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\bandoiler_m.p3d";
			female="Survivalists_Characters\vests\bandoiler_f.p3d";
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
						{1.0,	{	"Survivalists_Characters\vests\data\Bandoiler.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\Bandoiler.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\Bandoiler_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\Bandoiler_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\Bandoiler_destruct.rvmat"}}
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

  class SRP_Bandoiler_Alchemist: SRP_Bandoiler
  {
    scope=2;
    displayName="Alchemist Sling";
    descriptionShort="Espen Industries. A leather sling with attachments for vials.";
    attachments[]=
		{
			"Belt_Back",
      "VestGrenadeA",
      "VestGrenadeB",
      "SRP_DyeBottle1",
      "SRP_DyeBottle2",
      "SRP_DyeBottle3",
      "SRP_DyeBottle4",
		};
  };
  
  class SRP_ShoulderSling: Clothing
	{	
		scope=2;
		displayName="Shoulder Sling";
		descriptionShort="Espen Industries. A shoulder sling with some small pouches attatched";
		model="Survivalists_Characters\vests\Shoulder_Holster_g.p3d";
		attachments[]=
		{
			"VestGrenadeA",
      "VestGrenadeB"
		};
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=12;
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
		weight=1000;
		itemSize[]={2,3};
		itemsCargoSize[]={6,5};
		absorbency=0;
		heatIsolation=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\Shoulder_Holster_CO.paa"			
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\Shoulder_Holster_m.p3d";
			female="Survivalists_Characters\vests\Shoulder_Holster_f.p3d";
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
						{1.0,	{	"Survivalists_Characters\vests\data\Shoulder_Holster.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\Shoulder_Holster.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\Shoulder_Holster_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\Shoulder_Holster_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\Shoulder_Holster_destruct.rvmat"}}
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

  class SRP_Tac_Vest_ColorBase: PlateCarrierVest
	{	
		scope=0;
		displayName="Tactical Vest";
		descriptionShort="Espen Industries. A Tactical vest";
		model="Survivalists_Characters\vests\Tac_Vest_g.p3d";
		attachments[]=
		{
			"SRP_Patch",
      "VestHolster",
      "VestGrenadeA",
			"VestGrenadeB",
      "SmallPouch1",
      "SmallPouch2",
      "SmallPouch3",
      "SmallPouch4",
      "SmallPouch5",
      "SmallPouch6",
      "LargePouch1",
      "LargePouch2",
      "LargePouch3",
      "LargePouch4",
      "LargePouch5",
		};
    rootClassName="SRP_Tac_Vest";
    colorVariants[]=
    {
      "Green",
      "Tan",      
      "Black",
      "MC_Black",
      "CAD",
      "M05",
      "ChocChip",
      "ERDL",
      "MARPAT_Wood", 
    };
		itemSize[]={5,5};
		quickBarBonus=2;
    itemBehaviour=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\Tac_vest_Green_CO.paa"			
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\Tac_Vest_m.p3d";
			female="Survivalists_Characters\vests\Tac_Vest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
          hitpoints=225;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\Tac_Vest.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\Tac_Vest.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\Tac_Vest_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\Tac_Vest_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\Tac_Vest_destruct.rvmat"}}
					};
				};
			};
      class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.60000002;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
      class Attachments
			{
				name="Accessories";
				description="";
				attachmentSlots[]=
				{
					"SRP_Patch",
				};
        icon="set:dayz_inventory image:missing";
				view_index=1;
			};
			class SmallPouches
			{
				name="Small Pouches";
				description="Attach small pouches.";
        icon="set:dayz_inventory image:missing";
				attachmentSlots[]=
				{
          "SmallPouch1",
          "SmallPouch2",
          "SmallPouch3",
          "SmallPouch4",
          "SmallPouch5",
          "SmallPouch6"
				};
			};
			class LargePouches
			{
				name="Large Pouches";
				description="Attach large pouches";
		    icon="set:dayz_inventory image:vestpouches";		    
				attachmentSlots[]=
				{
          "LargePouch1",
          "LargePouch2",
          "LargePouch3",
          "LargePouch4",
          "LargePouch5",
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_Ratnik_ColorBase: PlateCarrierVest
	{	
		scope=0;
		displayName="Full Ratnik";
		descriptionShort="Espen Industries. A fully kitted out ratnik vest";
		model="Survivalists_Characters\vests\Ratnik_g.p3d";
		attachments[]=
		{
			"SRP_Patch",
      "VestHolster",
      "VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
      "WalkieTalkie",
      "SmallPouch1",
      "SmallPouch2",
      "SmallPouch3",
      "SmallPouch4",
      "SmallPouch5",
      "SmallPouch6",
      "LargePouch1",
      "LargePouch2",
      "LargePouch3",
      "LargePouch4",
      "LargePouch5",
		};
    rootClassName="SRP_Ratnik";
    colorVariants[]=
    {
      "Green",
      "Tan",      
      "Black",
      "Blue",
      "Pink",
      "Teal",
      "Yellow",
      "MC_Black",
      "CAD",
      "M05",
      "ChocChip",
      "ERDL",
      "MARPAT_Wood",
    };
		itemSize[]={7,7};
		itemBehaviour=0;
		quickBarBonus=2;
    repairableWithKits[]={3};
		repairCosts[]={75};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\Ratnik_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\Ratnik_m.p3d";
			female="Survivalists_Characters\vests\Ratnik_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\Ratnik.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\Ratnik.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\Ratnik_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\Ratnik_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\Ratnik_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.2000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.2000001;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.125;
					};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
      class Attachments
			{
				name="Accessories";
				description="";
				attachmentSlots[]=
				{
					"SRP_Patch",
				};
        icon="set:dayz_inventory image:missing";
				view_index=1;
			};
			class SmallPouches
			{
				name="Small Pouches";
				description="Attach small pouches.";
        icon="set:dayz_inventory image:missing";
				attachmentSlots[]=
				{
          "SmallPouch1",
          "SmallPouch2",
          "SmallPouch3",
          "SmallPouch4",
          "SmallPouch5",
          "SmallPouch6"
				};
			};
			class LargePouches
			{
				name="Large Pouches";
				description="Attach large pouches";
		    icon="set:dayz_inventory image:vestpouches";		    
				attachmentSlots[]=
				{
          "LargePouch1",
          "LargePouch2",
          "LargePouch3",
          "LargePouch4",
          "LargePouch5",
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_Light_Ratnik_ColorBase: PlateCarrierVest
	{	
		scope=0;
		displayName="Light Ratnik";
		descriptionShort="Espen Industries. A Ratnik vest without the additional armor";
		model="Survivalists_Characters\vests\Light_Ratnik_g.p3d";
		attachments[]=
		{
			"SRP_Patch",
      "VestHolster",
      "VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
      "WalkieTalkie",
      "SmallPouch1",
      "SmallPouch2",
      "SmallPouch3",
      "SmallPouch4",
      "SmallPouch5",
      "SmallPouch6",
      "LargePouch1",
      "LargePouch2",
      "LargePouch3",
      "LargePouch4",
      "LargePouch5",
		};
    rootClassName="SRP_Light_Ratnik";
    colorVariants[]=
    {
      "Green",
      "Tan",      
      "Black",
      "Blue",
      "Pink",
      "Teal",
      "Yellow",
      "MC_Black",
      "CAD",
      "M05",
      "ChocChip",
      "ERDL",
      "MARPAT_Wood",
    };
		itemSize[]={6,6};
    itemBehaviour=0;
		repairableWithKits[]={3};
		repairCosts[]={75};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\Ratnik_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\Light_Ratnik_m.p3d";
			female="Survivalists_Characters\vests\Light_Ratnik_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=225;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\Ratnik.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\Ratnik.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\Ratnik_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\Ratnik_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\Ratnik_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.60000002;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
      class Attachments
			{
				name="Accessories";
				description="";
				attachmentSlots[]=
				{
					"SRP_Patch",
				};
        icon="set:dayz_inventory image:missing";
				view_index=1;
			};
			class SmallPouches
			{
				name="Small Pouches";
				description="Attach small pouches.";
        icon="set:dayz_inventory image:missing";
				attachmentSlots[]=
				{
          "SmallPouch1",
          "SmallPouch2",
          "SmallPouch3",
          "SmallPouch4",
          "SmallPouch5",
          "SmallPouch6"
				};
			};
			class LargePouches
			{
				name="Large Pouches";
				description="Attach large pouches";
		    icon="set:dayz_inventory image:vestpouches";		    
				attachmentSlots[]=
				{
          "LargePouch1",
          "LargePouch2",
          "LargePouch3",
          "LargePouch4",
          "LargePouch5",
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class SRP_Chestrig_ColorBase: PlateCarrierVest
	{
		scope=0;
		displayName="Chest Rig";
		descriptionShort="Espen Industries. A high capacity chest rig";
		model="Survivalists_Characters\vests\ChestRig_g.p3d";
		attachments[]=
		{
			"SRP_Patch",
      "VestHolster",
      "VestGrenadeA",
			"VestGrenadeB",
      "WalkieTalkie",
      "SmallPouch1",
      "SmallPouch2",
      "SmallPouch3",
      "SmallPouch4",
      "SmallPouch5",
      "SmallPouch6",
      "LargePouch1",
      "LargePouch2",
      "LargePouch3",
      "LargePouch4",
      "LargePouch5",
		};
    rootClassName="SRP_Chestrig";
    colorVariants[]=
    {
      "Green",
      "Tan",      
      "Black",      
    };
		itemSize[]={4,4};
    itemBehaviour=2;
		repairableWithKits[]={3};
		repairCosts[]={75};
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\Chestrig_Green_CO.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Characters\vests\data\chestrig.rvmat"
    };
    class ClothingTypes
		{
			male="Survivalists_Characters\vests\ChestRig_m.p3d";
			female="Survivalists_Characters\vests\ChestRig_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=225;
					transferToAttachmentsCoef=0.5;
          healthLevels[]= 
          {
            {1.0,{"Survivalists_Characters\vests\data\chestrig.rvmat"}},
            {0.7,{"Survivalists_Characters\vests\data\chestrig.rvmat"}},
            {0.5,{"Survivalists_Characters\vests\data\chestrig_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\vests\data\chestrig_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\vests\data\chestrig_destruct.rvmat"}}
          };
				};
			};
      class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.60000002;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
      class Attachments
			{
				name="Accessories";
				description="";
				attachmentSlots[]=
				{
					"SRP_Patch",
				};
        icon="set:dayz_inventory image:missing";
				view_index=1;
			};
			class SmallPouches
			{
				name="Small Pouches";
				description="Attach small pouches.";
        icon="set:dayz_inventory image:missing";
				attachmentSlots[]=
				{
          "SmallPouch1",
          "SmallPouch2",
          "SmallPouch3",
          "SmallPouch4",
          "SmallPouch5",
          "SmallPouch6"
				};
			};
			class LargePouches
			{
				name="Large Pouches";
				description="Attach large pouches";
		    icon="set:dayz_inventory image:vestpouches";		    
				attachmentSlots[]=
				{
          "LargePouch1",
          "LargePouch2",
          "LargePouch3",
          "LargePouch4",
          "LargePouch5",
				};
			};
		};
	};

  class SRP_Army_Vest_1_ColorBase: PlateCarrierVest
	{	
		scope=0;
		displayName="Light Armored Vest";
		descriptionShort="Espen Industries. A light weight armored vest";
		model="Survivalists_Characters\vests\Army_Vest_1_g.p3d";
		attachments[]=
		{
			"SRP_Patch",
      "VestHolster",
      "VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
      "SmallPouch1",
      "SmallPouch2",
      "SmallPouch3",
      "SmallPouch4",
      "SmallPouch5",
      "SmallPouch6",
      "LargePouch1",
      "LargePouch2",
      "LargePouch3",
      "LargePouch4",
      "LargePouch5",
		};
    rootClassName="SRP_Army_Vest_1";
    colorVariants[]=
    {
      "Green",
      "Tan",      
      "Black",    
      "MC_Black",
      "CAD",
      "M05",
      "ChocChip",
      "ERDL",
      "MARPAT_Wood",  
    };
		quickBarBonus=2;
    itemBehaviour=2;
		repairableWithKits[]={3};
		repairCosts[]={75};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\Army_Vest_1_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\Army_Vest_1_m.p3d";
			female="Survivalists_Characters\vests\Army_Vest_1_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=225;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\Army_Vest_1.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\Army_Vest_1.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\Army_Vest_1_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\Army_Vest_1_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\Army_Vest_1_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.60000002;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
      class Attachments
			{
				name="Accessories";
				description="";
				attachmentSlots[]=
				{
					"SRP_Patch",
				};
        icon="set:dayz_inventory image:missing";
				view_index=1;
			};
			class SmallPouches
			{
				name="Small Pouches";
				description="Attach small pouches.";
        icon="set:dayz_inventory image:missing";
				attachmentSlots[]=
				{
          "SmallPouch1",
          "SmallPouch2",
          "SmallPouch3",
          "SmallPouch4",
          "SmallPouch5",
          "SmallPouch6"
				};
			};
			class LargePouches
			{
				name="Large Pouches";
				description="Attach large pouches";
		    icon="set:dayz_inventory image:vestpouches";		    
				attachmentSlots[]=
				{
          "LargePouch1",
          "LargePouch2",
          "LargePouch3",
          "LargePouch4",
          "LargePouch5",
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_Army_Vest_2_ColorBase: PlateCarrierVest
	{	
		scope=0;
		displayName="6B45 Vest";
		descriptionShort="Espen Industries. A 6B45 armored vest";
		model="Survivalists_Characters\vests\Army_Vest_2_g.p3d";
		attachments[]=
		{
			"SRP_Patch",
      "VestHolster",
      "VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
      "SmallPouch1",
      "SmallPouch2",
      "SmallPouch3",
      "SmallPouch4",
      "SmallPouch5",
      "SmallPouch6",
      "LargePouch1",
      "LargePouch2",
      "LargePouch3",
      "LargePouch4",
      "LargePouch5",
		};
    rootClassName="SRP_Army_Vest_2";
    colorVariants[]=
    {
      "Green",
      "Tan",      
      "Black",
      "MC_Black",
      "CAD",
      "M05",
      "ChocChip",
      "ERDL",
      "MARPAT_Wood", 
    };
		quickBarBonus=2;
    itemBehaviour=2;
		repairableWithKits[]={3};
		repairCosts[]={75};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\Army_Vest_2_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\Army_Vest_2_m.p3d";
			female="Survivalists_Characters\vests\Army_Vest_2_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=225;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\Army_Vest_2.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\Army_Vest_2.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\Army_Vest_2_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\Army_Vest_2_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\Army_Vest_2_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.60000002;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
      class Attachments
			{
				name="Accessories";
				description="";
				attachmentSlots[]=
				{
					"SRP_Patch",
				};
        icon="set:dayz_inventory image:missing";
				view_index=1;
			};
			class SmallPouches
			{
				name="Small Pouches";
				description="Attach small pouches.";
        icon="set:dayz_inventory image:missing";
				attachmentSlots[]=
				{
          "SmallPouch1",
          "SmallPouch2",
          "SmallPouch3",
          "SmallPouch4",
          "SmallPouch5",
          "SmallPouch6"
				};
			};
			class LargePouches
			{
				name="Large Pouches";
				description="Attach large pouches";
		    icon="set:dayz_inventory image:vestpouches";		    
				attachmentSlots[]=
				{
          "LargePouch1",
          "LargePouch2",
          "LargePouch3",
          "LargePouch4",
          "LargePouch5",
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};

	};

  class SRP_JPC_Vest_ColorBase: PlateCarrierVest
	{	
		scope=0;
		displayName="JPC Vest";
		descriptionShort="Espen Industries. A JPC vest";
		model="Survivalists_Characters\vests\JPC_Vest_g.p3d";
		attachments[]=
		{
			"SRP_Patch",
      "SmallPouch1",
      "SmallPouch2",
      "SmallPouch3",
      "SmallPouch4",
      "SmallPouch5",
      "SmallPouch6",
      "LargePouch1",
      "LargePouch2",
      "LargePouch3",
      "LargePouch4",
      "LargePouch5",
		};
    rootClassName="SRP_JPC_Vest";
    colorVariants[]=
    {
      "Green",
      "Tan",      
      "Black",
      "MC_Black",
      "CAD",
      "M05",
      "ChocChip",
      "ERDL",
      "MARPAT_Wood",    
    };
		quickBarBonus=2;
    itemBehaviour=2;
		repairableWithKits[]={3};
		repairCosts[]={75};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\JPC_Vest_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\JPC_Vest_m.p3d";
			female="Survivalists_Characters\vests\JPC_Vest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=225;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\JPC_Vest.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\JPC_Vest.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\JPC_Vest_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\JPC_Vest_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\JPC_Vest_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.60000002;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
      class Attachments
			{
				name="Accessories";
				description="";
				attachmentSlots[]=
				{
					"SRP_Patch",
				};
        icon="set:dayz_inventory image:missing";
				view_index=1;
			};
			class SmallPouches
			{
				name="Small Pouches";
				description="Attach small pouches.";
        icon="set:dayz_inventory image:missing";
				attachmentSlots[]=
				{
          "SmallPouch1",
          "SmallPouch2",
          "SmallPouch3",
          "SmallPouch4",
          "SmallPouch5",
          "SmallPouch6"
				};
			};
			class LargePouches
			{
				name="Large Pouches";
				description="Attach large pouches";
		    icon="set:dayz_inventory image:vestpouches";		    
				attachmentSlots[]=
				{
          "LargePouch1",
          "LargePouch2",
          "LargePouch3",
          "LargePouch4",
          "LargePouch5",
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_Tac_Tec_Vest_ColorBase: PlateCarrierVest
	{	
		scope=0;
		displayName="Tac-Tec Vest";
		descriptionShort="Espen Industries. A Tac-Tec vest";
		model="Survivalists_Characters\vests\Tac_Tec_Vest_g.p3d";
		attachments[]=
		{
			"SRP_Patch",
      "SmallPouch1",
      "SmallPouch2",
      "SmallPouch3",
      "SmallPouch4",
      "SmallPouch5",
      "SmallPouch6",
      "LargePouch1",
      "LargePouch2",
      "LargePouch3",
      "LargePouch4",
      "LargePouch5",
		};
    rootClassName="SRP_Tac_Tec_Vest";
    colorVariants[]=
    {
      "Green",
      "Tan",      
      "Black",
      "MC_Black",
      "CAD",
      "M05",
      "ChocChip",
      "ERDL",
      "MARPAT_Wood", 
    };
		quickBarBonus=2;
    itemBehaviour=2;
		repairableWithKits[]={3};
		repairCosts[]={75};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\Tac_Tec_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\Tac_Tec_Vest_m.p3d";
			female="Survivalists_Characters\vests\Tac_Tec_Vest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=225;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\Tac_Tec_Vest.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\Tac_Tec_Vest.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\Tac_Tec_Vest_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\Tac_Tec_Vest_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\Tac_Tec_Vest_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.60000002;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
      class Attachments
			{
				name="Accessories";
				description="";
				attachmentSlots[]=
				{
					"SRP_Patch",
				};
        icon="set:dayz_inventory image:missing";
				view_index=1;
			};
			class SmallPouches
			{
				name="Small Pouches";
				description="Attach small pouches.";
        icon="set:dayz_inventory image:missing";
				attachmentSlots[]=
				{
          "SmallPouch1",
          "SmallPouch2",
          "SmallPouch3",
          "SmallPouch4",
          "SmallPouch5",
          "SmallPouch6"
				};
			};
			class LargePouches
			{
				name="Large Pouches";
				description="Attach large pouches";
		    icon="set:dayz_inventory image:vestpouches";		    
				attachmentSlots[]=
				{
          "LargePouch1",
          "LargePouch2",
          "LargePouch3",
          "LargePouch4",
          "LargePouch5",
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  
  class SRP_Ratnik_Armor_ColorBase: Clothing
	{	
		scope=0;
		displayName="Ratnik Leg Pads";
    descriptionShort="Espen Industries. Leg armor designed for enhanced ratnik protection.";
		model="Survivalists_Characters\vests\Ratnik_armor_g.p3d";
    attachments[]={};
		rotationFlags=16;
		inventorySlot="Hips";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
    rootClassName="SRP_Ratnik_Armor";
    colorVariants[]=
    {
      "Green",
      "Tan",      
      "Black",    
      "Blue",
      "Pink",
      "Teal",
      "Yellow",
    };
		weight=12000;
		itemSize[]={2,3};
		quickBarBonus=2;
		absorbency=0;
		heatIsolation=0.80;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\Ratnik_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\Ratnik_armor_m.p3d";
			female="Survivalists_Characters\vests\Ratnik_armor_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
          transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\Ratnik.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\Ratnik.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\Ratnik_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\Ratnik_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\Ratnik_destruct.rvmat"}}
					};
				};
			};
      class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.60000002;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
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
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_FrakenArmor_Vest_ColorBase: PlateCarrierVest
	{
		scope=0;
		displayName="Fraken Armor -  Vest";
		descriptionShort="A gruesome vest made from human leather.";
		model="Survivalists_Characters\vests\srp_frakenarmor_vest_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\srp_frakenarmor_chest_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\vests\data\srp_frakenarmor_chest.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\vests\srp_frakenarmor_vest_m.p3d";
			female="Survivalists_Characters\vests\srp_frakenarmor_vest_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\srp_frakenarmor_chest.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\vests\data\srp_frakenarmor_chest.rvmat"}},
            {0.5,	{	"Survivalists_Characters\vests\data\srp_frakenarmor_chest.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\vests\data\srp_frakenarmor_chest.rvmat"}},
            {0.0,	{	"Survivalists_Characters\vests\data\srp_frakenarmor_chest.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
	};


  // ===================== VEST POUCHES

  class SRP_PouchBase_Small: Container_Base
  {
		scope=0;
		displayName="Small Pouch Base";
    descriptionShort="Espen Industries. Base Pouch, How can you see this?";
		model="Survivalists_Characters\vests\SRP_AR_MagPouch_1.p3d";
		inventorySlot[]=
    {
			"VestPouch",
      "SmallPouch1",
      "SmallPouch2",
      "SmallPouch3",
      "SmallPouch4",
      "SmallPouch5",
      "SmallPouch6",
		};
    weight=150;
		itemSize[]={2,2};
		itemsCargoSize[]={0,0};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
    rotationFlags=16;
		class AnimEvents
		{
			class SoundWeapon
			{
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
  class SRP_PouchBase_Large: Container_Base
  {
		scope=0;
		displayName="Large Pouch Base";
    descriptionShort="Espen Industries. Base Pouch, How can you see this?";
		model="Survivalists_Characters\vests\SRP_AR_MagPouch_1.p3d";
		inventorySlot[]=
    {
			"VestPouch",
      "LargePouch1",
      "LargePouch2",
      "LargePouch3",
      "LargePouch4",
      "LargePouch5",
		};
    weight=250;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
    rotationFlags=16;
		class AnimEvents
		{
			class SoundWeapon
			{
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

  class SRP_Small_Bottle_ColorBase: Bottle_Base
	{
		scope=0;
		displayName="Small Bottle";
		descriptionShort="Espen Industries. A small drinks bottle";
		model="Survivalists_Characters\vests\SRP_Small_Bottle.p3d";
		inventorySlot[]=
    {
			"Belt_Left"
		};
		weight=250;
		itemSize[]={2,2};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\SRP_Small_Bottle_Tan_CO.paa"
		};
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\SRP_Small_Bottle.rvmat"}},
						{0.69999999,	{	"Survivalists_Characters\vests\data\SRP_Small_Bottle.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\SRP_Small_Bottle_damage.rvmat"}},
						{0.30000001,	{	"Survivalists_Characters\vests\data\SRP_Small_Bottle_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\SRP_Small_Bottle_destruct.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Canteen_in_B
				{
					soundSet="Canteen_in_B_SoundSet";
					id=202;
				};
				class Canteen_in_C
				{
					soundSet="Canteen_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class Canteen_out_A
				{
					soundSet="Canteen_out_A_SoundSet";
					id=205;
				};
				class Canteen_out_B
				{
					soundSet="Canteen_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
	};

  //---------SMALL POUCHES
  class SRP_Map_Pouch_ColorBase: SRP_PouchBase_Small
	{
		scope=2;
		displayName="Map Pouch";
		descriptionShort="Espen Industries. A pouch that holds various small items.";
		model="Survivalists_Characters\vests\SRP_Map_Pouch.p3d";
    itemSize[]={3,3};
		itemsCargoSize[]={3,3};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\SRP_Map_Pouch_Tan_CO.paa"
		};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\SRP_Map_Pouch.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\SRP_Map_Pouch.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\SRP_Map_Pouch_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\SRP_Map_Pouch_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\SRP_Map_Pouch_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Pistol_Mag_Pouch_ColorBase: SRP_PouchBase_Small
	{
		scope=2;
		displayName="Pistol Magazine Pouch";
		descriptionShort="Espen Industries. A single pouch that holds two Pistol mags";
		model="Survivalists_Characters\vests\SRP_Pistol_MagPouch.p3d";
    attachments[]=
		{
			"magazine",
			"magazine2"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\SRP_Pistol_MagPouch_Tan_CO.paa"
		};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\SRP_Pistol_MagPouch.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\SRP_Pistol_MagPouch.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\SRP_Pistol_MagPouch_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\SRP_Pistol_MagPouch_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\SRP_Pistol_MagPouch_destruct.rvmat"}}
					};
				};
			};
		};
	};

  //---------LARGE POUCHES
  class SRP_IFAK_ColorBase: SRP_PouchBase_Large
	{
		scope=2;
		displayName="IFAK Pouch";
		descriptionShort="Espen Industries. An Individual First Aid Kit";
		model="Survivalists_Characters\vests\SRP_IFAK_Pouch.p3d";
    itemSize[]={5,4};
    itemsCargoSize[]={5,4};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\SRP_IFAK_Tan_CO.paa"
		};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\SRP_IFAK.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\SRP_IFAK.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\SRP_IFAK_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\SRP_IFAK_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\SRP_IFAK_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Magazine_Pouch_1_ColorBase: SRP_PouchBase_Large
	{
		scope=2;
		displayName="Magazine Pouch";
		descriptionShort="Espen Industries. A single pouch that holds an AR mag";
		model="Survivalists_Characters\vests\SRP_AR_MagPouch_1.p3d";
    attachments[]=
		{
			"magazine3"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\SRP_AR_MagPouch_1_Tan_CO.paa"
		};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\SRP_AR_MagPouch_1.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\SRP_AR_MagPouch_1.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\SRP_AR_MagPouch_1_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\SRP_AR_MagPouch_1_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\SRP_AR_MagPouch_1_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Empty_MagPouch_ColorBase: SRP_PouchBase_Large
	{
		scope=2;
		displayName="Magazine Dump Pouch";
		descriptionShort="Espen Industries. A large bag used for empty magazines.";
		model="Survivalists_Characters\vests\SRP_Empty_Mag_Pouch.p3d";
    itemSize[]={5,4};
    itemsCargoSize[]={5,4};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\SRP_Empty_MagPouch_Tan_CO.paa"
		};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Characters\vests\data\SRP_Empty_MagPouch.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\SRP_Empty_MagPouch.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\SRP_Empty_MagPouch_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\SRP_Empty_MagPouch_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\SRP_Empty_MagPouch_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_UtilityPouch_ColorBase: SRP_PouchBase_Large
	{
		scope=0;
		displayName="Utility Pouch";
		descriptionShort="Espen Industries. A single pouch that holds a useful tool.";
		model="Survivalists_Characters\vests\srp_utility_pouch.p3d";
    itemsCargoSize[]={3,2};
    attachments[]=
		{
			"SRP_Tool1",
      "SRP_Tool2",
      "SRP_Tool3"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\srp_pouchesvest_tan_co.paa"
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
						{1.0,	{	"Survivalists_Characters\vests\data\srp_pouchesvest.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\srp_pouchesvest.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\srp_pouchesvest_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\srp_pouchesvest_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\srp_pouchesvest_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_HeavyPouch_ColorBase: SRP_PouchBase_Large
	{
		scope=0;
		displayName="Heavy Pouch";
		descriptionShort="Espen Industries. A single pouch that holds several things.";
		model="Survivalists_Characters\vests\srp_heavy_pouch.p3d";
    itemSize[]={3,3};
    itemsCargoSize[]={3,3};
    attachments[]=
		{
			"SRP_Tool1",
      "SRP_Medical1",
      "SRP_Medical2"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\srp_pouchesvest_Heavy_Tan_CO.paa"
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
						{1.0,	{	"Survivalists_Characters\vests\data\srp_pouchesvest_heavy.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\srp_pouchesvest_heavy.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\srp_pouchesvest_heavy_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\srp_pouchesvest_heavy_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\srp_pouchesvest_heavy_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MediumPouch_ColorBase: SRP_PouchBase_Large
	{
		scope=0;
		displayName="Medium Pouch";
		descriptionShort="Espen Industries. A single pouch that holds several things.";
		model="Survivalists_Characters\vests\srp_medium_pouch.p3d";
    itemSize[]={3,3};
    itemsCargoSize[]={3,3};
    attachments[]=
		{
			"SRP_Tool1",
      "SRP_Medical1",
      "SRP_Medical2"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\srp_pouchesvest_tan_co.paa"
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
						{1.0,	{	"Survivalists_Characters\vests\data\srp_pouchesvest.rvmat"}},
						{0.7,	{	"Survivalists_Characters\vests\data\srp_pouchesvest.rvmat"}},
						{0.5,	{	"Survivalists_Characters\vests\data\srp_pouchesvest_damage.rvmat"}},
						{0.3,	{	"Survivalists_Characters\vests\data\srp_pouchesvest_damage.rvmat"}},
						{0.0,	{	"Survivalists_Characters\vests\data\srp_pouchesvest_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_TacoPouch_ColorBase: SRP_PouchBase_Large
	{
		scope=0;
		displayName="Taco Pouch";
		descriptionShort="Espen Industries. A single pouch that holds several tools.";
		model="Survivalists_Characters\vests\srp_taco_pouch.p3d";
    itemSize[]={3,3};
    itemsCargoSize[]={2,2};
    attachments[]=
		{
			"SRP_Tool1",
      "SRP_Tool2",
      "SRP_Tool3",
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\vests\data\tacticalbelt_Tan_co.paa"
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
						{1.0,{"Survivalists_Characters\belts\data\tacticalbelt.rvmat"}},
            {0.69999999,{"Survivalists_Characters\belts\data\tacticalbelt.rvmat"}},
            {0.5,{"Survivalists_Characters\belts\data\tacticalbelt_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\belts\data\tacticalbelt_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\belts\data\tacticalbelt_destruct.rvmat"}}
					};
				};
			};
		};	
  };
};