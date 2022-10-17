class CfgPatches
{
	class Survivalists_Mods_Weapons_Attachments_Supports
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Weapons_Supports"
		};
	};
};

class CfgVehicles
{
  class Inventory_Base;
//===================================================== CONTAINERS
	class SRP_ButtstockPouch_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Buttstock Ammo Pouch";
		descriptionShort="Espen Industries. An Ammo-Pouch with just enough room for some loose ammunition. Inspected by Master Gunsmith: Turko";
		itemsize[]={3,2};
		itemsCargoSize[]={3,2};
		model="Survivalists_Mods\weapons\attachments\support\srp_buttstockpouch.p3d";
		inventorySlot[]=
		{
			"StockPouch",
      "SRP_StockPouch"
		};
		weight=100;
		hiddenSelections[]=
		{
			"Pouch","Straps"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_CO.paa","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps_CO.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\weapons\attachments\support\data\rifle_pouch.rvmat","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps.rvmat"
    };
	};
  class SRP_ButtstockPouch_Red: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_CO.paa","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps_CO.paa"
		};
	};
	class SRP_ButtstockPouch_Black: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Black_CO.paa","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps_Black_CO.paa"
		};
	};
	class SRP_ButtstockPouch_Linen: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Linen_CO.paa","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps_Linen_CO.paa"
		};
	};
	class SRP_ButtstockPouch_Purple: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Purple_CO.paa","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps_Purple_CO.paa"
		};
	};

//===================================================== CRAFTING PIECES          
  class TT_GunKit_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="TURKO BASE GUN KIT";
		descriptionShort="PLACEHOLDER - BASE GUN KIT BOX";
		model="Survivalists_Mods\weapons\attachments\support\TT_GunKit.p3d";
    color="base";
		animClass="Knife";
		// rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		weight=780;
		itemsCargoSize[]={0,0};
		itemSize[]={3,2};		
    fragility=0.0099999998;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\attachments\support\data\TT_GunKit_co.paa"
    };
		// repairKitType=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}}
					};
				};
			};
		};
	};
  class TT_GunKit_Tools: TT_GunKit_ColorBase
  {
    scope=2;
    displayName="Gun Tool Kit";
    descriptionShort="This kit has fine tools to repair damaged weapon components.";
    color="tools";
  };
  class TT_GunKit_Salvage: TT_GunKit_ColorBase
  {
    scope=2;
    displayName="Gun Salvage Kit";
    descriptionShort="This kit has fine tools to salvage for weapon components.";
    color="salvage";
  };

  class TT_Grip_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="TURKO BASE GRIP";
		descriptionShort="PLACEHOLDER - BASE GRIP";
		model="Survivalists_Mods\weapons\attachments\support\TT_Grip.p3d";
    color="base";
		weight=780;
		itemsCargoSize[]={0,0};
		itemSize[]={2,2};	
		inventorySlot[]=
		{
   		"SRP_GunGrip"
		};	
    fragility=0.0099999998;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\attachments\support\data\TT_BaseGunGrip1_co.paa"
    };
		// repairKitType=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}}
					};
				};
			};
		};
	};
  class TT_Grip_Wood: TT_Grip_ColorBase //new
	{
		scope=2;
		displayName="Wooden Gun Grip";
		descriptionShort="Box of nearly finished gun furniture. Apply some more work to finish.";
    color="wood";
	};

	class TT_Buttstock_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="TURKO BASE Buttstock";
		descriptionShort="PLACEHOLDER - BASE Buttstock";
		model="Survivalists_Mods\weapons\attachments\support\TT_Buttstock.p3d";
    color="base";
		weight=780;
		itemsCargoSize[]={0,0};
		itemSize[]={3,2};	
		inventorySlot[]=
		{
    	"SRP_GunButtstock"
		};	
    fragility=0.0099999998;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\attachments\support\data\TT_BaseGunGrip1_co.paa"
    };
		// repairKitType=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}}
					};
				};
			};
		};
	};	
	class TT_Buttstock_Wood: TT_Buttstock_ColorBase // FURNITURE WOOD
	{
		scope=2;
		displayName="Wooden Gun Buttstock";
		descriptionShort="Box of nearly finished gun furniture. Apply some more work to finish.";
    color="wood";
	};

  //==================================== BARRELS
  class TT_GunBarrel_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="TURKO BASE GUN BARREL";
		descriptionShort="PLACEHOLDER - BASE GUN BARREL";
		model="Survivalists_Mods\weapons\attachments\support\TT_Barrel.p3d";
    color="base";
		weight=780;
		itemsCargoSize[]={0,0};
		itemSize[]={5,1};
		inventorySlot[]=
		{
    	"SRP_GunBarrel"
		};		
    fragility=0.0099999998;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\attachments\support\data\TT_BaseGun1_co.paa"
    };
		// repairKitType=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}}
					};
				};
			};
		};
	};
	class TT_GunBarrel_Long: TT_GunBarrel_ColorBase
	{
		scope=2;
		displayName="Long Gun Barrel";
		descriptionShort="A detached long rifle barrel.";
    color="long";
	};
	class TT_GunBarrel_Medium: TT_GunBarrel_ColorBase
	{
		scope=2;
		displayName="Medium Gun Barrel";
		descriptionShort="A detached medium rifle barrel.";
    color="medium";
	};
	class TT_GunBarrel_Small: TT_GunBarrel_ColorBase
	{
		scope=2;
		displayName="Short Gun Barrel";
		descriptionShort="A detached short rifle barrel.";
    color="small";
	};
  
  class TT_RifledBarrel_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="TURKO BASE Rifled BARREL";
		descriptionShort="PLACEHOLDER - BASE Rifled BARREL";
		model="Survivalists_Mods\weapons\attachments\support\TT_Barrel.p3d";
    color="base";
		weight=780;
		itemsCargoSize[]={0,0};
		itemSize[]={5,1};	
		inventorySlot[]=
		{
    	"SRP_GunBarrel"
		};	
    fragility=0.0099999998;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\attachments\support\data\TT_BaseGun1_co.paa"
    };
		// repairKitType=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}}
					};
				};
			};
		};
	};
	class TT_RifledBarrel_Long: TT_RifledBarrel_ColorBase
	{
		scope=2;
		displayName="Long Rifled Gun Barrel";
		descriptionShort="A detached long rifled rifle barrel.";
    color="long";
	};
	class TT_RifledBarrel_Medium: TT_RifledBarrel_ColorBase
	{
		scope=2;
		displayName="Medium rifled Gun Barrel";
		descriptionShort="A detached medium rifled rifle barrel.";
    color="medium";
	};
	class TT_RifledBarrel_Small: TT_RifledBarrel_ColorBase
	{
		scope=2;
		displayName="Short rifled Gun Barrel";
		descriptionShort="A detached short rifled rifle barrel.";
    color="small";
	};

  //==================================== RECEIVERS
  class TT_MainReceiver_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="TURKO BASE MAIN RECEIVER";
		descriptionShort="PLACEHOLDER - BASE MAIN RECEIVER";
		model="Survivalists_Mods\weapons\attachments\support\TT_Receiver.p3d";
    color="base";
		weight=780;
		itemsCargoSize[]={0,0};
		itemSize[]={3,2};	
		inventorySlot[]=
		{
   		"SRP_MainReceiver"
		};	
    fragility=0.0099999998;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\attachments\support\data\TT_BaseGun1_co.paa"
    };
		// repairKitType=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}}
					};
				};
			};
		};
	};
	class TT_MainReceiver_SemiSmall: TT_MainReceiver_ColorBase
	{
		scope=2;
		displayName="Small semi-auto weapon receiver";
		descriptionShort="A detached small semi-auto receiver.";
    color="semismall";
	};
	class TT_MainReceiver_SemiMedium: TT_MainReceiver_ColorBase
	{
		scope=2;
		displayName="Medium semi-auto weapon receiver";
		descriptionShort="A detached medium semi-auto receiver.";
    color="semimedium";
	};
	class TT_MainReceiver_SemiLarge: TT_MainReceiver_ColorBase
	{
		scope=2;
		displayName="Large semi-auto weapon receiver";
		descriptionShort="A detached large semi-auto receiver.";
    color="semilarge";
	};
	class TT_MainReceiver_AutoSmall: TT_MainReceiver_ColorBase
	{
		scope=2;
		displayName="Small automatic weapon receiver";
		descriptionShort="A detached small automatic receiver.";
    color="autosmall";
	};
	class TT_MainReceiver_AutoMedium: TT_MainReceiver_ColorBase
	{
		scope=2;
		displayName="Medium automatic weapon receiver";
		descriptionShort="A detached medium automatic receiver.";
    color="automedium";
	};
	class TT_MainReceiver_AutoLarge: TT_MainReceiver_ColorBase
	{
		scope=2;
		displayName="Large automatic weapon receiver";
		descriptionShort="A detached large automatic receiver.";
    color="autolarge";
	};
  //==================================== INTERNAL MECHANISMS

  class TT_Trigger_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="TURKO BASE TRIGGER";
		descriptionShort="PLACEHOLDER - BASE TRIGGER";
		model="Survivalists_Mods\weapons\attachments\support\TT_Trigger.p3d";
    color="base";
		weight=780;
		itemsCargoSize[]={0,0};
		itemSize[]={1,2};	
		inventorySlot[]=
		{
    	"SRP_Trigger"
		};	
    fragility=0.0099999998;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\attachments\support\data\TT_BaseGun1_co.paa"
    };
		// repairKitType=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}}
					};
				};
			};
		};
	};
  class TT_Trigger_Simple: TT_Trigger_ColorBase
  {
		scope=2;
		displayName="Trigger Mechanism";
		descriptionShort="A simple trigger.";
    color="simple";
  };

  class TT_Hammer_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="TURKO BASE HAMMER";
		descriptionShort="PLACEHOLDER - BASE HAMMER";
		model="Survivalists_Mods\weapons\attachments\support\TT_Hammer.p3d";
    color="base";
		weight=780;
		itemsCargoSize[]={0,0};
		itemSize[]={1,2};	
		inventorySlot[]=
		{
    	"SRP_Hammer"
		};	
    fragility=0.0099999998;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\attachments\support\data\TT_BaseGun1_co.paa"
    };
		// repairKitType=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_Mods\weapons\attachments\support\data\base.rvmat"}}
					};
				};
			};
		};
	};
  class TT_Hammer_Simple: TT_Hammer_ColorBase
  {
		scope=2;
		displayName="Hammer Mechanism";
		descriptionShort="A simple hammer.";
    color="simple";
  };
};