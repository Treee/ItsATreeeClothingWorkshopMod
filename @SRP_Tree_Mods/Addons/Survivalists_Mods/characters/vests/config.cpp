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
  class ChestHolster;
  class PlateCarrierPouches;
  class PlateCarrierHolster;
  class HighCapacityVest_ColorBase;

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

  // ----------------------  BASE GAME RETEXTURES

	class SRP_TraderVest: PlateCarrierVest  // SRPTraderVest
	{
		scope=2;
		quickBarBonus=10;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\SRPTraderVest.paa"
		};
	};

	class SRP_PressVest_Black: PressVest_ColorBase  // BP_PressVest_Black
	{
		scope=2;
		displayName="Black Press Vest";
		descriptionShort="A black vest with 'Press' printed onto it";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest.paa"
		};
	};

	class SRP_ChestHolster_Black: ChestHolster  // BP1_ChestHolster_black
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\chest_holster_black_co.paa",
			"Survivalists_Mods\characters\vests\data\chest_holster_black_co.paa",
			"Survivalists_Mods\characters\vests\data\chest_holster_black_co.paa"
		};
	};

	class SRP_PlateCarrierVest_Black: PlateCarrierVest  // BP_PlateCarrierVest_black
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa"
		};
	};

	class SRP_PlateCarrierPouches_Black: PlateCarrierPouches  // BP_PlateCarrierPouches_Black
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa"
		};
	};

	class SRP_PlateCarrierHolster_Black: PlateCarrierHolster  // BP_PlateCarrierHolster_Black
	{
		scope=2;
		attachments[]=
		{
			"Pistol"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa"
		};
	};

	class SRP_HighCapacityVest_Rain: HighCapacityVest_ColorBase  // BP2_Rainvest
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\rainvest.paa",
			"Survivalists_Mods\characters\vests\data\rainvest.paa",
			"Survivalists_Mods\characters\vests\data\rainvest.paa"
		};
	};

  class SRP_PlateCarrierVest_Pseudo: PlateCarrierVest  // new
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Mods\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Mods\characters\vests\data\ballisticvest_pseudo_co.paa"
		};
	};

	class SRP_PlateCarrierPouches_Pseudo: PlateCarrierPouches  // new
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Mods\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Mods\characters\vests\data\ballisticvest_pseudo_co.paa"
		};
	};

	class SRP_PlateCarrierHolster_Pseudo: PlateCarrierHolster  // new
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Mods\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Mods\characters\vests\data\ballisticvest_pseudo_co.paa"
		};
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

  class SRP_Tac_Vest_Black: Clothing
	{	
		scope=2;
		displayName="Tactical Vest";
		descriptionShort="A Tactical vest";
		model="Survivalists_Mods\characters\vests\Tac_Vest_g.p3d";
		attachments[]={};
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
			"Survivalists_Mods\characters\vests\data\Tac_vest_CO.paa"
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
  class SRP_Tac_Vest_Green : SRP_Tac_Vest_Black
	{
    scope=2;	
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\Tac_vest_Green_CO.paa"
		};	
	};
	class SRP_Tac_Vest_Tan : SRP_Tac_Vest_Black
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
    attachments[]={};
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
		itemBehaviour=2;
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
			"patch_01"
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
		attachments[]={};		
		inventorySlot[]={"Vest"};
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
    itemBehaviour=0;
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
    attachments[]={};
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
    attachments[]={};
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
    attachments[]={};
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
    attachments[]={};
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
};