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
			"Survivalists_Mods",
      "Survivalists_Mods_Gear_Camping"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class FireplaceBase;

  class SRP_KitBase;
  class SRP_MetalBucket;

//===================================== WORKBENCH  
  class SRP_StoneForgeWorkbenchStarter_Kit: SRP_KitBase
  {
		scope=2;
		displayName="Forge Starter Kit - Materials";
		descriptionShort="Holds materials waiting for work to be done.";
    attachments[]=
		{	
      "Stones",
			"Material_FPole_Stones",
      "Material_Mortar"
		};
  };

  class SRP_StoneForgeWorkbenchIntermediate_Kit: SRP_KitBase
  {
		scope=2;
		displayName="Forge Starter Kit";
		descriptionShort="A good amount of work done towards the stone forge.";
    inventorySlot[]=
		{
			"SRP_ForgeStarterKit"
		};
    itemBehaviour=0;
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		varStackMax=1;
  };

  class SRP_StoneForgeWorkbenchFinisher_Kit: SRP_KitBase
  {
		scope=2;
		displayName="A Stone Forge Foundation Kit";
		descriptionShort="Everything connects to this. Only one foundation is needed per forge. Combine with an oven to finish the forge.";
    attachments[]=
		{	
			"SRP_ForgeStarterKit",
      "Stones",
			"Material_FPole_Stones",
      "Material_Mortar"
		};
  };

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
//====================================UNCUT GEM CUT (OBSOLETE DELETE AFTER RECIPE REMOVAL)
  class SRP_Mining_UnCutGem_ColorBase: Inventory_Base
	{
		scope=0;
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


};
