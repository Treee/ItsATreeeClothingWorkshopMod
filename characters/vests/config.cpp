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
  class PlateCarrierPouches;
  class PlateCarrierHolster;

  // ----------------------  BASE GAME OVERRIDES

  class PressVest_ColorBase: Clothing
	{
		repairableWithKits[]={3,7};
		repairCosts[]={50};
	};

  class PlateCarrierVest: Clothing
	{
		repairableWithKits[]={3,7};
		repairCosts[]={50};
	};

  // ----------------------  CUSTOM STUFF


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
  class SRP_Tac_Vest_Black: SRP_Tac_Vest_Green
	{
    scope=2;	
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
      "Survivalists_Mods\characters\vests\data\Tac_vest_CO.paa"
		};	
	};
	class SRP_Tac_Vest_Tan: SRP_Tac_Vest_Green
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Tac_Vest_Tan_Co.paa"
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
	class SRP_Ratnik_Tan: SRP_Ratnik_Green
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Ratnik_Tan_CO.paa"
		};	
	};
	class SRP_Ratnik_Black: SRP_Ratnik_Green
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Ratnik_Black_CO.paa"
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
	class SRP_Light_Ratnik_Black: SRP_Light_Ratnik_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Ratnik_Black_CO.paa"
		};	
	};
	class SRP_Light_Ratnik_Tan: SRP_Light_Ratnik_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Ratnik_Tan_CO.paa"
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
	class SRP_Chestrig_Tan: SRP_Chestrig_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Chestrig_tan_CO.paa"
		};	
	};
	class SRP_Chestrig_Black: SRP_Chestrig_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Chestrig_Black_CO.paa"
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
	class SRP_Army_Vest_1_Black: SRP_Army_Vest_1_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Army_Vest_1_Black_CO.paa"
		};	
	};
	class SRP_Army_Vest_1_Tan: SRP_Army_Vest_1_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Army_Vest_1_Tan_CO.paa"
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
	class SRP_Army_Vest_2_Black: SRP_Army_Vest_2_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Army_Vest_2_Black_CO.paa"
		};	
	};
	class SRP_Army_Vest_2_Tan: SRP_Army_Vest_2_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Army_Vest_2_Tan_CO.paa"
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
	class SRP_JPC_Vest_Black: SRP_JPC_Vest_Green
	{
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\JPC_Vest_Black_CO.paa"
		};	
	};
	class SRP_JPC_Vest_Tan: SRP_JPC_Vest_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\JPC_Vest_Tan_CO.paa"
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
	class SRP_Tac_Tec_Vest_Tan: SRP_Tac_Tec_Vest_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Tac_Tec_Tan_CO.paa"
		};	
	};
	class SRP_Tac_Tec_Vest_Black: SRP_Tac_Tec_Vest_Green
	{
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Tac_Tec_Black_CO.paa"
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
  class SRP_Small_Bottle_Green: SRP_Small_Bottle_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_Small_Bottle_Green_CO.paa"
    };    
  };   
  class SRP_Small_Bottle_Black: SRP_Small_Bottle_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_Small_Bottle_Black_CO.paa"
    };    
  };

  //---------SMALL POUCHES
  class SRP_Map_Pouch_Tan : SRP_PouchBase_Small
	{
		scope=2;
		displayName="Map Pouch";
		descriptionShort="A single magazine pouch that holds two Pistol mags";
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
  class SRP_Map_Pouch_Green: SRP_Map_Pouch_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_Map_Pouch_Green_CO.paa"
    };    
  };
  class SRP_Map_Pouch_Black: SRP_Map_Pouch_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_Map_Pouch_Black_CO.paa"
    };    
  };
  class SRP_Pistol_Mag_Pouch_Tan : SRP_PouchBase_Small
	{
		scope=2;
		displayName="Pistol Magazine Pouch";
		descriptionShort="A single magazine pouch that holds two Pistol mags";
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
  class SRP_Pistol_Mag_Pouch_Green: SRP_Pistol_Mag_Pouch_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_Pistol_MagPouch_Green_CO.paa"
    };    
  };
  class SRP_Pistol_Mag_Pouch_Black: SRP_Pistol_Mag_Pouch_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_Pistol_MagPouch_Black_CO.paa"
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
  class SRP_IFAK_Green: SRP_IFAK_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_IFAK_Green_CO.paa"
    };    
  };
  class SRP_IFAK_Black: SRP_IFAK_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_IFAK_Black_CO.paa"
    };    
  };
  class SRP_Magazine_Pouch_1_Tan : SRP_PouchBase_Large
	{
		scope=2;
		displayName="Magazine Pouch";
		descriptionShort="A single magazine pouch that holds two AR mags";
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
  class SRP_Magazine_Pouch_1_Green: SRP_Magazine_Pouch_1_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_AR_MagPouch_1_Green_CO.paa"
    };    
  };
  class SRP_Magazine_Pouch_1_Black: SRP_Magazine_Pouch_1_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_AR_MagPouch_1_Black_CO.paa"
    };    
  };
  class SRP_Empty_MagPouch_Tan : SRP_PouchBase_Large
	{
		scope=2;
		displayName="Magazine Dump Pouch";
		descriptionShort="A large bag used for empty magazines";
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
  class SRP_Empty_MagPouch_Green: SRP_Empty_MagPouch_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_Empty_MagPouch_Green_CO.paa"
    };    
  };
  class SRP_Empty_MagPouch_Black: SRP_Empty_MagPouch_Tan
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\vests\data\SRP_Empty_MagPouch_Black_CO.paa"
    };    
  };


};