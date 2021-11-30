class CfgPatches
{
	class Survivalists_Mods_Gear_Mining
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class FireplaceBase;
  class DryBag_ColorBase;

  class SRP_KitBase;

  //===================================== WORKBENCH
  class SRP_StoneForgeWorkbench_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A Stone Forge Kit";
		descriptionShort="A kit for a stone forge.";
	};

  class SRP_StoneForgeWorkbench: FireplaceBase // new
	{
		scope=2;
		displayName="Stone Forge";
		descriptionShort="A workbench with tools for manufacturing ammunition and repairing weaponry.";
		model="Survivalists_Mods\gear\mining\forge_stonebasic.p3d";
		useEntityHierarchy="true";
		destroyOnEmpty=0;
		carveNavmesh=0;
		canBeDigged=0;
		heavyItem=1;
		weight=500;
		itemSize[]={15,15};
		itemBehaviour=0;
		quantityBar=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
    varTemperatureMax=1000;
		stackedUnit="";
		physLayer="item_large";		
    attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Rags",
			"MedicalBandage",
			"Paper",
			"Bark",
		};
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\mining\data\stoneforge.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\mining\data\stoneforge.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\mining\data\stoneforge.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\mining\data\stoneforge.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\mining\data\stoneforge.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

  class SRP_AdvancedStoneForgeWorkbench_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="An Advanced Stone Forge Kit";
		descriptionShort="A kit for an advanced stone forge.";
	};

  class SRP_AdvancedStoneForgeWorkbench: FireplaceBase // new
	{
		scope=2;
		displayName="Advanced Stone Forge";
		descriptionShort="A workbench for advanced stone working.";
		model="Survivalists_Mods\gear\mining\forge_stoneadvanced.p3d";
		useEntityHierarchy="true";
		destroyOnEmpty=0;
		carveNavmesh=0;
		canBeDigged=0;
		heavyItem=1;
		weight=500;
		itemSize[]={15,15};
		itemBehaviour=0;
		quantityBar=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
    varTemperatureMax=1000;
		stackedUnit="";
		physLayer="item_large";		
    attachments[]=
		{
      "SRP_ForgeBellows",
			"Firewood",
			"WoodenStick",
			"Rags",
			"MedicalBandage",
			"Paper",
			"Bark",
		};
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
      class Tools
			{
				name="Tools";
				description="Tools";
				attachmentSlots[]=
				{
					"SRP_ForgeBellows"
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50000;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\mining\data\srp_forgeandbellows.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\mining\data\srp_forgeandbellows.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\mining\data\srp_forgeandbellows.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\mining\data\srp_forgeandbellows.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\mining\data\srp_forgeandbellows.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

  class SRP_AdvancedStoneForgeWorkbench_Bellows: Inventory_Base
	{
		scope=2;
		displayName="Forge Bellows";
		descriptionShort="Bellows for an advanced forge. Helps improve airflow to the fire.";
		model="Survivalists_Mods\gear\mining\forge_stoneadvancedbellows.p3d";
		inventorySlot[]=
		{
			"SRP_ForgeBellows"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={8,8};
		itemBehaviour=0;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
            {1.01,{"Survivalists_Mods\gear\mining\data\srp_forgeandbellows.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\mining\data\srp_forgeandbellows.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\mining\data\srp_forgeandbellows.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\mining\data\srp_forgeandbellows.rvmat"}},
            {0.0099999998,{"Survivalists_Mods\gear\mining\data\srp_forgeandbellows.rvmat"}}
					};
				};
			};
		};		
    class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};

  //==================================== COINS
  class SRP_Coinage_ColorBase: Inventory_Base
  {
		scope=2;
		displayName="Metal Coin";
		descriptionShort="A metal coin minted from forged metal.";
		model="Survivalists_Mods\gear\mining\srp_coinage_gold.p3d";
		animClass="NoFireClass";
    physLayer="item_small";
    color="base";
		weight=500;
		itemSize[]={1,1};
    canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=50;
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\srp_coinage.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\srp_coinage.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\srp_coinage_damage.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\srp_coinage_damage.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\srp_coinage_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_Coinage_Platinum: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Platinum";
		model="Survivalists_Mods\gear\mining\srp_coinage_platinum.p3d";
    color="platinum";
  };

  class SRP_Coinage_Iron: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Iron";
		model="Survivalists_Mods\gear\mining\srp_coinage_iron.p3d";
    color="iron";
  };

  class SRP_Coinage_Gold: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Gold";
		model="Survivalists_Mods\gear\mining\srp_coinage_gold.p3d";
    color="gold";
  };

  class SRP_Coinage_GoldWorn: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Gold Worn";
		model="Survivalists_Mods\gear\mining\srp_coinage_goldworn.p3d";
    color="Goldworn";
  };

  class SRP_Coinage_Bronze: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Bronze";
		model="Survivalists_Mods\gear\mining\srp_coinage_bronze.p3d";
    color="bronze";
  };

  class SRP_Coinage_Copper: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Copper";
		model="Survivalists_Mods\gear\mining\srp_coinage_copper.p3d";
    color="copper";
  };

  class SRP_Coinage_GoldWorn_Arbiters: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Arbiters";
    color="Goldwornarbiters";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\srp_coinage_arbiters_co.paa"
		};
  };
  class SRP_Coinage_GoldWorn_Bastion: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Bastion";
    color="Goldwornbastion";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\srp_coinage_bastion_co.paa"
		};
  };
  class SRP_Coinage_GoldWorn_Betrayed: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Betrayed";
    color="Goldwornbetrayed";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\srp_coinage_betrayed_co.paa"
		};
  };
  class SRP_Coinage_GoldWorn_Burleeville: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Burleeville";
    color="Goldwornburleeville";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\srp_coinage_burleeville_co.paa"
		};
  };
  class SRP_Coinage_GoldWorn_Disciples: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Disciples";
    color="Goldworndisciples";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\srp_coinage_disciples_co.paa"
		};
  };  
  class SRP_Coinage_GoldWorn_Emporium: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - Emporium";
    color="Goldwornemporium";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\srp_coinage_emporium_co.paa"
		};
  };  
  class SRP_Coinage_GoldWorn_SaltyCougar: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - SaltyCougar";
    color="Goldwornsaltycougar";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\srp_coinage_saltycougar_co.paa"
		};
  };  
  class SRP_Coinage_GoldWorn_CougarTown: SRP_Coinage_GoldWorn
  {
		scope=2;
		displayName="Metal Coin - CougarTown";
    color="Goldworncougartown";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\srp_coinage_cougartown_co.paa"
		};
  };  

  //==================================== INGOTS
  class SRP_ForgeIngot_ColorBase: Inventory_Base
  {
		scope=2;
		displayName="Metal Ingot";
		descriptionShort="A metal ingot that has been cooled into the shape of a bar.";
		model="Survivalists_Mods\gear\mining\forge_ingot.p3d";
		animClass="NoFireClass";
    physLayer="item_small";
    color="base";
		weight=500;
		itemSize[]={3,1};
    canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		varStackMax=10;
    rotationFlags=17;
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\forge_ingot.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\forge_ingot.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\forge_ingot_damage.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\forge_ingot_damage.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\forge_ingot_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_ForgeIngot_Copper: SRP_ForgeIngot_ColorBase
	{
		scope=2;
		displayName="Metal Ingot - Copper";    
    color="copper";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_ingot_copper_co.paa"
		};
	};
  class SRP_ForgeIngot_Tin: SRP_ForgeIngot_ColorBase
	{
		scope=2;
		displayName="Metal Ingot - Tin";    
    color="tin";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_ingot_tin_co.paa"
		};
	};
  class SRP_ForgeIngot_Bronze: SRP_ForgeIngot_ColorBase
	{
		scope=2;
		displayName="Metal Ingot - Bronze";    
    color="bronze";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_ingot_copper_co.paa"
		};
	};
  class SRP_ForgeIngot_Iron: SRP_ForgeIngot_ColorBase
	{
		scope=2;
		displayName="Metal Ingot - Iron";    
    color="iron";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_ingot_iron_co.paa"
		};
	};
  class SRP_ForgeIngot_Gold: SRP_ForgeIngot_ColorBase
	{
		scope=2;
		displayName="Metal Ingot - Gold";    
    color="gold";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_ingot_gold_co.paa"
		};
	};
  class SRP_ForgeIngot_Platinum: SRP_ForgeIngot_ColorBase
	{
		scope=2;
		displayName="Metal Ingot - Platinum";    
    color="platinum";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_ingot_platinum_co.paa"
		};
	};

  //==================================== INGOT MOLDS
  class SRP_ForgeIngotMold_ColorBase: Inventory_Base
  {
		scope=2;
		displayName="Ingot Mold";
		descriptionShort="A mold suitable for cooling molten metal into ingots.";
		model="Survivalists_Mods\gear\mining\forge_ingotmold.p3d";
		animClass="NoFireClass";
    physLayer="item_small";
    color="base";
		weight=500;
		itemSize[]={3,1};
		varQuantityDestroyOnMin=1;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
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
						{1.0,	{"Survivalists_Mods\gear\tools\data\toolrack_tongs.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\tools\data\toolrack_tongs.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\tools\data\toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\tools\data\toolrack_tongs_damage.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\tools\data\toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_ForgeIngotMold_Empty: SRP_ForgeIngotMold_ColorBase
	{
		scope=2;
		displayName="Ingot Mold - Empty";
    model="Survivalists_Mods\gear\mining\forge_ingotmold_empty.p3d";
    color="empty";
	};
  class SRP_ForgeIngotMold_Copper: SRP_ForgeIngotMold_ColorBase
	{
		scope=2;
		displayName="Ingot Mold - Copper";    
    color="copper";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_copper_co.paa"
		};
	};
  class SRP_ForgeIngotMold_Tin: SRP_ForgeIngotMold_ColorBase
	{
		scope=2;
		displayName="Ingot Mold - Tin";    
    color="tin";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_tin_co.paa"
		};
	};
  class SRP_ForgeIngotMold_Bronze: SRP_ForgeIngotMold_ColorBase
	{
		scope=2;
		displayName="Ingot Mold - Bronze";    
    color="bronze";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_bronze_co.paa"
		};
	};
  class SRP_ForgeIngotMold_Iron: SRP_ForgeIngotMold_ColorBase
	{
		scope=2;
		displayName="Ingot Mold - Iron";    
    color="iron";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_iron_co.paa"
		};
	};
  class SRP_ForgeIngotMold_Gold: SRP_ForgeIngotMold_ColorBase
	{
		scope=2;
		displayName="Ingot Mold - Gold";    
    color="gold";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_gold_co.paa"
		};
	};
  class SRP_ForgeIngotMold_Platinum: SRP_ForgeIngotMold_ColorBase
	{
		scope=2;
		displayName="Ingot Mold - Platinum";    
    color="platinum";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_platinum_co.paa"
		};
	};

  //===================================== MELTED ORE
  class SRP_ForgeCrucible_ColorBase: Inventory_Base
	{
		scope=2;
		displayName="Forge Crucible";
		descriptionShort="Able to withstand intense temperature.";
		model="Survivalists_Mods\gear\mining\forge_crucible.p3d";
		weight=440;
		itemSize[]={4,3};
    color="base";
		itemsCargoSize[]={0,0};
		inventorySlot[]={};
		canBeDigged=0;
		allowOwnedCargoManipulation=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		varTemperatureMax=1500;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\mining\forge_crucible.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\mining\forge_crucible.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\mining\forge_crucible_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\mining\forge_crucible_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\mining\forge_crucible_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimationSources
		{
			class handleRotate
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
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

  class SRP_ForgeCrucible_Empty: SRP_ForgeCrucible_ColorBase
	{
		scope=2;
    model="Survivalists_Mods\gear\camping\srp_bucket.p3d";
		displayName="Empty Forge Crucible - Empty";
		descriptionShort="Use this to melt down raw ore.";
    color="empty";
    attachments[]=
    {
      "SRP_RawOre"
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\srp_bucket_crucible_co.paa"
    };
	};

  class SRP_ForgeCrucible_Copper: SRP_ForgeCrucible_ColorBase
	{
		scope=2;
		displayName="Molten Metal - Copper";
		descriptionShort="Very hot molten metal.";
    color="copper";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_copper_co.paa"
		};
	};
  class SRP_ForgeCrucible_Tin: SRP_ForgeCrucible_ColorBase
	{
		scope=2;
		displayName="Molten Metal - Tin";
		descriptionShort="Very hot molten metal.";
    color="tin";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_tin_co.paa"
		};
	};
  class SRP_ForgeCrucible_Bronze: SRP_ForgeCrucible_ColorBase
	{
		scope=2;
		displayName="Molten Metal - Bronze";
		descriptionShort="Very hot molten metal.";
    color="bronze";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_bronze_co.paa"
		};
	};
  class SRP_ForgeCrucible_Iron: SRP_ForgeCrucible_ColorBase
	{
		scope=2;
		displayName="Molten Metal - Iron";
		descriptionShort="Very hot molten metal.";
    color="iron";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_iron_co.paa"
		};
	};
  class SRP_ForgeCrucible_Gold: SRP_ForgeCrucible_ColorBase
	{
		scope=2;
		displayName="Molten Metal - Gold";
		descriptionShort="Very hot molten metal.";
    color="gold";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_gold_co.paa"
		};
	};
  class SRP_ForgeCrucible_Platinum: SRP_ForgeCrucible_ColorBase
	{
		scope=2;
		displayName="Molten Metal - Platinum";
		descriptionShort="Very hot molten metal.";
    color="platinum";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\forge_crucible_platinum_co.paa"
		};
	};

  //==================================== Ore in Stone
  class SRP_Mining_StoneChunk_ColorBase: Inventory_Base
  {
		scope=2;
		displayName="Base Stone Do Not Spawn";
		descriptionShort="Base Stone Do Not Spawn";
		model="\dz\gear\consumables\Stone.p3d";
		animClass="NoFireClass";
    color="base";
		weight=1500;
		itemSize[]={3,3};
		canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=12;
		inventorySlot[]={};
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1.0,	{"DZ\gear\consumables\data\stone.rvmat"}},
            {0.69999999,	{"DZ\gear\consumables\data\stone.rvmat"}},
            {0.5,	{"DZ\gear\consumables\data\stone_damage.rvmat"}},
            {0.30000001,	{"DZ\gear\consumables\data\stone_damage.rvmat"}},
            {0.0,	{"DZ\gear\consumables\data\stone_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_Mining_StoneChunk_Copper: SRP_Mining_StoneChunk_ColorBase
	{
		scope=2;
		displayName="Copper Ore";
		descriptionShort="Stone with chunks of raw copper ore.";
    color="copper";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\stone_copper_co.paa"
		};
	};

  class SRP_Mining_StoneChunk_Iron: SRP_Mining_StoneChunk_ColorBase
	{
		scope=2;
		displayName="Iron Ore";
		descriptionShort="Stone with chunks of raw iron ore.";
    color="iron";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\stone_iron_co.paa"
		};
	};

  class SRP_Mining_StoneChunk_Tin: SRP_Mining_StoneChunk_ColorBase
	{
		scope=2;
		displayName="Tin Ore";
		descriptionShort="Stone with chunks of raw tin ore.";
    color="tin";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\stone_tin_co.paa"
		};
	};

  class SRP_Mining_StoneChunk_Gold: SRP_Mining_StoneChunk_ColorBase
	{
		scope=2;
		displayName="Gold Ore";
		descriptionShort="Stone with chunks of raw gold ore.";
    color="gold";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\stone_gold_co.paa"
		};
	};
  
  class SRP_Mining_StoneChunk_Platinum: SRP_Mining_StoneChunk_ColorBase
	{
		scope=2;
		displayName="Platinum Ore";
		descriptionShort="Stone with chunks of raw platinum ore.";
    color="platinum";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\stone_platinum_co.paa"
		};
	};

  //====================================CRUSHED STONE/ PURE ORE
  class SRP_Mining_RawOre_ColorBase: Inventory_Base
	{
		scope=2;
		displayName="Base Raw Ore Do Not Spawn";
		descriptionShort="Base Raw Ore Do Not Spawn";
		model="\dz\gear\consumables\SmallStone.p3d";
		animClass="NoFireClass";
    color="base";
		weight=500;
		itemSize[]={1,1};
    canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=24;
		varStackMax=24;
		inventorySlot[]=
    {
      "SRP_RawOre"
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
						{1.0,	{"DZ\gear\consumables\data\stone.rvmat"}},
            {0.69999999,	{"DZ\gear\consumables\data\stone.rvmat"}},
            {0.5,	{"DZ\gear\consumables\data\stone_damage.rvmat"}},
            {0.30000001,	{"DZ\gear\consumables\data\stone_damage.rvmat"}},
            {0.0,	{"DZ\gear\consumables\data\stone_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_Mining_RawOre_Copper: SRP_Mining_RawOre_ColorBase
	{
		scope=2;
		displayName="Raw Copper Ore";
		descriptionShort="Raw copper ore. Excess rock has been removed.";
    color="copper";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\stone_copper_raw_co.paa"
		};
	};
  class SRP_Mining_RawOre_Iron: SRP_Mining_RawOre_ColorBase
	{
		scope=2;
		displayName="Raw Iron Ore";
		descriptionShort="Raw iron ore. Excess rock has been removed.";
    color="iron";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\stone_iron_raw_co.paa"
		};
	};
  class SRP_Mining_RawOre_Tin: SRP_Mining_RawOre_ColorBase
	{
		scope=2;
		displayName="Raw Tin Ore";
		descriptionShort="Raw tin ore. Excess rock has been removed.";
    color="tin";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\stone_tin_raw_co.paa"
		};
	};
  class SRP_Mining_RawOre_Gold: SRP_Mining_RawOre_ColorBase
	{
		scope=2;
		displayName="Raw Gold Ore";
		descriptionShort="Raw gold ore. Excess rock has been removed.";
    color="gold";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\stone_gold_raw_co.paa"
		};
	};
  class SRP_Mining_RawOre_Platinum: SRP_Mining_RawOre_ColorBase
	{
		scope=2;
		displayName="Raw Platinum Ore";
		descriptionShort="Raw platinum ore. Excess rock has been removed.";
    color="platinum";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\stone_platinum_raw_co.paa"
		};
	};

  //=====================================CRUSHED STONE/ GEMS
  class SRP_Mining_UnCutGem_ColorBase: Inventory_Base
	{
		scope=2;
		displayName="Base UnCut Gem Do Not Spawn";
		descriptionShort="Base UnCut Gem Do Not Spawn";
		model="Survivalists_Mods\gear\mining\srp_mining_gem.p3d";
		animClass="NoFireClass";
    color="base";
		weight=500;
		itemSize[]={1,2};
    canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=8;
		inventorySlot[]={};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\mining\data\miningcrystal.rvmat"
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\miningcrystal.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\miningcrystal.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\miningcrystal_damage.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\miningcrystal_damage.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\miningcrystal_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_UnCutGem_Aqua: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Aquamarine Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="aqua";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_aqua_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Amethyst: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Amethyst Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="amethyst";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Jade: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Jade Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="jade";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_green_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Amber: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Amber Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="amber";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_orange_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Quartz: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Quartz Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="quartz";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_purple_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Ruby: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Ruby Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="ruby";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_red_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Topaz: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Topaz Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="topaz";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_yellow_co.paa"
		};
	};

  //========================================== CUT GEMS
  class SRP_Mining_CutGem_ColorBase: Inventory_Base
	{
		scope=2;
		displayName="Base Cut Gem Do Not Spawn";
		descriptionShort="Base Cut Gem Do Not Spawn";
		model="Survivalists_Mods\gear\mining\srp_mining_gemcut.p3d";
		animClass="NoFireClass";
    color="base";
    physLayer="item_small";
		weight=500;
		itemSize[]={1,2};
		varQuantityDestroyOnMin=1;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		inventorySlot[]={};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystalcut_ca.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\mining\data\miningcrystalcut.rvmat"
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_damage.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_damage.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Aqua: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Aquamarine Cut Gem";
		descriptionShort="Aquamarine Cut Gem";
    color="aqua";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\mining\data\miningcrystalcut_aqua.rvmat"
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_aqua.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_aqua.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_aqua.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_aqua.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_aqua.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Amethyst: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Amethyst Cut Gem";
		descriptionShort="Amethyst Cut Gem";
    color="amethyst";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\mining\data\miningcrystalcut_amethyst.rvmat"
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_amethyst.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_amethyst.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_amethyst.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_amethyst.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_amethyst.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Jade: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Jade Cut Gem";
		descriptionShort="Jade Cut Gem";
    color="jade";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\mining\data\miningcrystalcut_jade.rvmat"
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_jade.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_jade.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_jade.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_jade.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_jade.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Amber: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Amber Cut Gem";
		descriptionShort="Amber Cut Gem";
    color="amber";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\mining\data\miningcrystalcut_amber.rvmat"
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_amber.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_amber.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_amber.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_amber.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_amber.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Quartz: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Quartz Cut Gem";
		descriptionShort="Quartz Cut Gem";
    color="quartz";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\mining\data\miningcrystalcut_quartz.rvmat"
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_quartz.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_quartz.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_quartz.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_quartz.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_quartz.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Ruby: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Ruby Cut Gem";
		descriptionShort="Ruby Cut Gem";
    color="ruby";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\mining\data\miningcrystalcut_ruby.rvmat"
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_ruby.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_ruby.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_ruby.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_ruby.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_ruby.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Topaz: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Topaz Cut Gem";
		descriptionShort="Topaz Cut Gem";
    color="topaz";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\mining\data\miningcrystalcut_topaz.rvmat"
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_topaz.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_topaz.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_topaz.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_topaz.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\miningcrystalcut_topaz.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Diamond: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Diamond Cut Gem";
		descriptionShort="Diamond Cut Gem";
    color="diamond";
	};  
};