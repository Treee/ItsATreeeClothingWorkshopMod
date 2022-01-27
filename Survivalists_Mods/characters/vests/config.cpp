class CfgPatches
{
	class Survivalists_Mods_Characters_Vests
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Characters",
      "DZ_Characters_Vests",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  class Container_Base;
  class Bottle_Base;

  class SRP_KitBase;

  // ----------------------  BASE GAME OVERRIDES

  class PressVest_ColorBase: Clothing
	{
		repairableWithKits[]={5,3,7};
		repairCosts[]={30,25, 25};
    itemsCargoSize[]={9,4};
	};

  class PlateCarrierVest: Clothing
	{
    itemSize[]={5,4};
    heatIsolation=0.2;
		repairableWithKits[]={5,3,7};
		repairCosts[]={30,25, 25};
	};
  class PlateCarrierHolster: Clothing
	{
    itemSize[]={2,2};
		repairableWithKits[]={5,3,7};
		repairCosts[]={30,25, 25};
    heatIsolation=0.1;
  };
  class PlateCarrierPouches: Container_Base
	{
    itemSize[]={6,4};
		itemsCargoSize[]={6,4};
		repairCosts[]={30,25, 25};
    inventorySlot[]=
		{
			"VestHolster",
			"Belt_Right",
			"Belt_Back",
			"VestPouch"
		};
  };
  class HighCapacityVest_ColorBase: Clothing
	{
    itemsCargoSize[]={8,5};
		repairableWithKits[]={5,3,7};
		repairCosts[]={30,25, 25};
  };

  // ----------------------  CUSTOM STUFF

  class SRP_ArmorKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Armor Kit";
		descriptionShort="An Armor Kit - Still needs a bit of work. Combine with other materials to finish.";
	};

  class SRP_WoodenStickArmor_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Stick Armor Kit";
		descriptionShort="A Wooden Stick Armor Kit - Finish with a needle and thread.";
    attachments[]=
		{
			"Material_Shelter_Sticks",
      "WoodenStick",
      "Material_MetalWire",
      "Material_Shelter_Rope",
      "Material_Shelter_Fabric",
		};
	};

  class SRP_SimpleBoneArmor_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Simple Bone Armor Kit";
		descriptionShort="A Bone Armor Kit - Finish with a needle and thread.";
    attachments[]=
		{
			"SRP_Bones",
      "Material_MetalWire",
      "Material_Shelter_Rope",
      "Material_FPole_Rope",
      "Material_Shelter_Fabric",
		};
	};

  class SRP_Brewstershield: PlateCarrierVest
	{
		scope=2;
		displayName="Brewster Shield";
		descriptionShort="A crude body shield proven to be effective in World War 1.";
		model="Survivalists_Mods\characters\vests\brewstershield_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\brewstershield_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\vests\data\brewstershield.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\brewstershield_m.p3d";
			female="Survivalists_Mods\characters\vests\brewstershield_m.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\brewstershield.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\vests\data\brewstershield.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\vests\data\brewstershield_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\vests\data\brewstershield_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\vests\data\brewstershield_destruct.rvmat"}}
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

  class SRP_Tac_Vest_Green: Clothing
	{	
		scope=2;
		displayName="Tactical Vest";
		descriptionShort="A Tactical vest";
		model="Survivalists_Mods\characters\vests\Tac_Vest_g.p3d";
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
    inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
		weight=12000;
		itemSize[]={5,5};
		quickBarBonus=2;
		absorbency=0;
    itemBehaviour=2;
		heatIsolation=0.80;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Tac_vest_Green_CO.paa"			
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\Tac_Vest_m.p3d";
			female="Survivalists_Mods\characters\vests\Tac_Vest_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\Tac_Vest.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\Tac_Vest.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\Tac_Vest_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\Tac_Vest_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\Tac_Vest_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
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

  class SRP_Ratnik_Green: Clothing
	{	
		scope=2;
		displayName="Full Ratnik";
		descriptionShort="A fully kitted out ratnik vest";
		model="Survivalists_Mods\characters\vests\Ratnik_g.p3d";
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
    inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
		weight=15000;
		itemSize[]={7,7};
		itemBehaviour=0;
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
			"Survivalists_Mods\characters\vests\data\Ratnik_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\Ratnik_m.p3d";
			female="Survivalists_Mods\characters\vests\Ratnik_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\Ratnik.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\Ratnik.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\Ratnik_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\Ratnik_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\Ratnik_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.15000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.15000001;
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

  class SRP_Light_Ratnik_Green: Clothing
	{	
		scope=2;
		displayName="Light Ratnik";
		descriptionShort="A Ratnik vest without the additional armor";
		model="Survivalists_Mods\characters\vests\Light_Ratnik_g.p3d";
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
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
		weight=12000;
		itemSize[]={6,6};
		absorbency=0;
    itemBehaviour=0;
		heatIsolation=0.80;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Ratnik_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\Light_Ratnik_m.p3d";
			female="Survivalists_Mods\characters\vests\Light_Ratnik_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\Ratnik.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\Ratnik.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\Ratnik_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\Ratnik_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\Ratnik_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
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

	class SRP_Chestrig_Green: Clothing
	{
		scope=2;
		displayName="Chest Rig";
		descriptionShort="A high capacity chest rig";
		model="Survivalists_Mods\characters\vests\ChestRig_g.p3d";
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
    inventorySlot="Vest";
    simulation="clothing";
		vehicleClass="Clothing";
    itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
    weight=12000;
		itemSize[]={4,4};
		absorbency=0;
    itemBehaviour=2;
		heatIsolation=0.80;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Chestrig_Green_CO.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\vests\data\chestrig.rvmat"
    };
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\ChestRig_m.p3d";
			female="Survivalists_Mods\characters\vests\ChestRig_f.p3d";
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
            {1.0,{"Survivalists_Mods\characters\vests\data\chestrig.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\vests\data\chestrig.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\vests\data\chestrig_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\vests\data\chestrig_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\vests\data\chestrig_destruct.rvmat"}}
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

  class SRP_Army_Vest_1_Green: Clothing
	{	
		scope=2;
		displayName="Light Armored Vest";
		descriptionShort="A light weight armored vest";
		model="Survivalists_Mods\characters\vests\Army_Vest_1_g.p3d";
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
    inventorySlot="Vest";
		itemSize[]={5,5};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
		weight=12000;
		quickBarBonus=2;
		absorbency=0;
    itemBehaviour=2;
		heatIsolation=0.80;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Army_Vest_1_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\Army_Vest_1_m.p3d";
			female="Survivalists_Mods\characters\vests\Army_Vest_1_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\Army_Vest_1.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\Army_Vest_1.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\Army_Vest_1_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\Army_Vest_1_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\Army_Vest_1_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
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
						damage=0.25;
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

  class SRP_Army_Vest_2_Green: Clothing
	{	
		scope=2;
		displayName="6B45 vest";
		descriptionShort="A 6B45 armored vest vest";
		model="Survivalists_Mods\characters\vests\Army_Vest_2_g.p3d";
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
    inventorySlot="Vest";
		itemSize[]={5,5};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
		weight=12000;
		quickBarBonus=2;
		absorbency=0;
    itemBehaviour=2;
		heatIsolation=0.80;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Army_Vest_2_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\Army_Vest_2_m.p3d";
			female="Survivalists_Mods\characters\vests\Army_Vest_2_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\Army_Vest_2.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\Army_Vest_2.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\Army_Vest_2_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\Army_Vest_2_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\Army_Vest_2_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
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
						damage=0.25;
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

  class SRP_JPC_Vest_Green: Clothing
	{	
		scope=2;
		displayName="JPC Vest";
		descriptionShort="A JPC vest";
		model="Survivalists_Mods\characters\vests\JPC_Vest_g.p3d";
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
    inventorySlot="Vest";
		itemSize[]={5,5};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
		weight=12000;
		quickBarBonus=2;
		absorbency=0;
    itemBehaviour=2;
		heatIsolation=0.80;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\JPC_Vest_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\JPC_Vest_m.p3d";
			female="Survivalists_Mods\characters\vests\JPC_Vest_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\JPC_Vest.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\JPC_Vest.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\JPC_Vest_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\JPC_Vest_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\JPC_Vest_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
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
						damage=0.25;
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

  class SRP_Tac_Tec_Vest_Green: Clothing
	{	
		scope=2;
		displayName="Tac-Tec Vest";
		descriptionShort="A Tac-Tec vest";
		model="Survivalists_Mods\characters\vests\Tac_Tec_Vest_g.p3d";
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
    inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemSize[]={5,5};
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
		weight=12000;
		quickBarBonus=2;
		absorbency=0;
    itemBehaviour=2;
		heatIsolation=0.80;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Tac_Tec_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\Tac_Tec_Vest_m.p3d";
			female="Survivalists_Mods\characters\vests\Tac_Tec_Vest_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\Tac_Tec_Vest.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\Tac_Tec_Vest.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\Tac_Tec_Vest_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\Tac_Tec_Vest_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\Tac_Tec_Vest_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
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
						damage=0.25;
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

  class SRP_Bandoiler: Clothing
	{	
		scope=2;
		displayName="Leather bandoiler";
		descriptionShort="An old belt which has been turned into a bandoiler";
		model="Survivalists_Mods\characters\vests\bandoiler_g.p3d";
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
			"Survivalists_Mods\characters\vests\data\Bandoiler_CO.paa",
      "Survivalists_Mods\characters\vests\data\Bandoilerbuckle_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\bandoiler_m.p3d";
			female="Survivalists_Mods\characters\vests\bandoiler_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\Bandoiler.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\Bandoiler.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\Bandoiler_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\Bandoiler_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\Bandoiler_destruct.rvmat"}}
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
    displayName="Alchemists Sling";
    descriptionShort="A leather sling with attachments for vials.";
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
		descriptionShort="A shoulder sling with some small pouches attatched";
		model="Survivalists_Mods\characters\vests\Shoulder_Holster_g.p3d";
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
			"Survivalists_Mods\characters\vests\data\Shoulder_Holster_CO.paa"			
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\Shoulder_Holster_m.p3d";
			female="Survivalists_Mods\characters\vests\Shoulder_Holster_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\Shoulder_Holster.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\Shoulder_Holster.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\Shoulder_Holster_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\Shoulder_Holster_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\Shoulder_Holster_destruct.rvmat"}}
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
  

  // ===================== VEST POUCHES

  class SRP_PouchBase_Small: Container_Base
  {
		scope=0;
		displayName="Small Pouch Base";
    descriptionShort="Base Pouch, How can you see this?";
		model="Survivalists_Mods\characters\vests\SRP_AR_MagPouch_1.p3d";
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
    descriptionShort="Base Pouch, How can you see this?";
		model="Survivalists_Mods\characters\vests\SRP_AR_MagPouch_1.p3d";
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

  class SRP_Small_Bottle_Tan : Bottle_Base
	{
		scope=2;
		displayName="Small Bottle";
		descriptionShort="A small drinks bottle";
		model="Survivalists_Mods\characters\vests\SRP_Small_Bottle.p3d";
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
			"Survivalists_Mods\characters\vests\data\SRP_Small_Bottle_Tan_CO.paa"
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\SRP_Small_Bottle.rvmat"}},
						{0.69999999,	{	"Survivalists_Mods\characters\vests\data\SRP_Small_Bottle.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\SRP_Small_Bottle_damage.rvmat"}},
						{0.30000001,	{	"Survivalists_Mods\characters\vests\data\SRP_Small_Bottle_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\SRP_Small_Bottle_destruct.rvmat"}}
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
  class SRP_Map_Pouch_Tan : SRP_PouchBase_Small
	{
		scope=2;
		displayName="Map Pouch";
		descriptionShort="A pouch that holds various small items.";
		model="Survivalists_Mods\characters\vests\SRP_Map_Pouch.p3d";
    itemSize[]={3,3};
		itemsCargoSize[]={3,3};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\SRP_Map_Pouch_Tan_CO.paa"
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\SRP_Map_Pouch.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\SRP_Map_Pouch.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\SRP_Map_Pouch_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\SRP_Map_Pouch_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\SRP_Map_Pouch_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Pistol_Mag_Pouch_Tan : SRP_PouchBase_Small
	{
		scope=2;
		displayName="Pistol Magazine Pouch";
		descriptionShort="A single pouch that holds two Pistol mags";
		model="Survivalists_Mods\characters\vests\SRP_Pistol_MagPouch.p3d";
    attachments[]=
		{
			"magazine",
			"magazine2"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\SRP_Pistol_MagPouch_Tan_CO.paa"
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\SRP_Pistol_MagPouch.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\SRP_Pistol_MagPouch.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\SRP_Pistol_MagPouch_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\SRP_Pistol_MagPouch_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\SRP_Pistol_MagPouch_destruct.rvmat"}}
					};
				};
			};
		};
	};

  //---------LARGE POUCHES
  class SRP_IFAK_Tan : SRP_PouchBase_Large
	{
		scope=2;
		displayName="IFAK Pouch";
		descriptionShort="An Individual First Aid Kit";
		model="Survivalists_Mods\characters\vests\SRP_IFAK_Pouch.p3d";
    itemSize[]={5,4};
    itemsCargoSize[]={5,4};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\SRP_IFAK_Tan_CO.paa"
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\SRP_IFAK.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\SRP_IFAK.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\SRP_IFAK_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\SRP_IFAK_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\SRP_IFAK_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Magazine_Pouch_1_Tan : SRP_PouchBase_Large
	{
		scope=2;
		displayName="Magazine Pouch";
		descriptionShort="A single pouch that holds an AR mag";
		model="Survivalists_Mods\characters\vests\SRP_AR_MagPouch_1.p3d";
    attachments[]=
		{
			"magazine3"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\SRP_AR_MagPouch_1_Tan_CO.paa"
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\SRP_AR_MagPouch_1.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\SRP_AR_MagPouch_1.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\SRP_AR_MagPouch_1_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\SRP_AR_MagPouch_1_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\SRP_AR_MagPouch_1_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Empty_MagPouch_Tan : SRP_PouchBase_Large
	{
		scope=2;
		displayName="Magazine Dump Pouch";
		descriptionShort="A large bag used for empty magazines.";
		model="Survivalists_Mods\characters\vests\SRP_Empty_Mag_Pouch.p3d";
    itemSize[]={5,4};
    itemsCargoSize[]={5,4};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\SRP_Empty_MagPouch_Tan_CO.paa"
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\SRP_Empty_MagPouch.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\SRP_Empty_MagPouch.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\SRP_Empty_MagPouch_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\SRP_Empty_MagPouch_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\SRP_Empty_MagPouch_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_UtilityPouch_Tan: SRP_PouchBase_Large
	{
		scope=2;
		displayName="Utility Pouch";
		descriptionShort="A single pouch that holds a useful tool.";
		model="Survivalists_Mods\characters\vests\srp_utility_pouch.p3d";
    itemsCargoSize[]={3,2};
    attachments[]=
		{
			"SRP_Tool1",
      "SRP_Tool2",
      "SRP_Tool3"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\srp_pouchesvest_tan_co.paa"
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_HeavyPouch_Tan: SRP_PouchBase_Large
	{
		scope=2;
		displayName="Heavy Pouch";
		descriptionShort="A single pouch that holds several things.";
		model="Survivalists_Mods\characters\vests\srp_heavy_pouch.p3d";
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
			"Survivalists_Mods\characters\vests\data\srp_pouchesvest_Heavy_Tan_CO.paa"
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest_heavy.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest_heavy.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest_heavy_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest_heavy_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest_heavy_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MediumPouch_Tan: SRP_PouchBase_Large
	{
		scope=2;
		displayName="Medium Pouch";
		descriptionShort="A single pouch that holds several things.";
		model="Survivalists_Mods\characters\vests\srp_medium_pouch.p3d";
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
			"Survivalists_Mods\characters\vests\data\srp_pouchesvest_tan_co.paa"
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
						{1.0,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\vests\data\srp_pouchesvest_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_TacoPouch_Tan: SRP_PouchBase_Large
	{
		scope=2;
		displayName="Taco Pouch";
		descriptionShort="A single pouch that holds several tools.";
		model="Survivalists_Mods\characters\vests\srp_taco_pouch.p3d";
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
			"Survivalists_Mods\characters\vests\data\tacticalbelt_Tan_co.paa"
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
						{1.0,{"Survivalists_Mods\characters\belts\data\tacticalbelt.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\belts\data\tacticalbelt.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\tacticalbelt_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\belts\data\tacticalbelt_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\belts\data\tacticalbelt_destruct.rvmat"}}
					};
				};
			};
		};	
  };

};