class CfgPatches
{
	class Survivalists_Mods_Weapons_Attachments_Supports
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Weapons_Supports",
			"Survivalists_Weapons"
		};
	};
};

class CfgVehicles
{
  class M4_PlasticHndgrd;
	class M4_OEBttstck;
  class Inventory_Base;
  class SRP_KitBase;
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

  class SRP_WoodAttachmentGunKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Attachment Kit - Wood";
		descriptionShort="A kit for creating wooden gun attachments.";
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\srp_weaponkitbase_co.paa"
		};
	};
  class SRP_WeaponLongBarrel_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Long Barreled Gun";
		descriptionShort="A kit for assembling a long barreled weapon. Bring together all the parts and assemble.";
    attachments[]=
    {
      "SRP_GunBarrel",
      "SRP_MainReceiver",
      "SRP_Trigger",
      "SRP_Hammer",
      "SRP_GunBody",
      "SRP_GunGrip",
      "SRP_GunButtStock"
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\srp_weaponkitbase_co.paa"
		};
	};
  class SRP_WeaponMediumBarrel_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Medium Barreled Gun";
		descriptionShort="A kit for assembling a medium length barreled weapon. Bring together all the parts and assemble.";
    attachments[]=
    {
      "SRP_GunBarrel",
      "SRP_MainReceiver",
      "SRP_Trigger",
      "SRP_Hammer",
      "SRP_GunBody",
      "SRP_GunGrip",
      "SRP_GunButtStock"      
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\srp_weaponkitbase_co.paa"
		};
	};
  class SRP_WeaponShortBarrel_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Short Barreled Gun";
		descriptionShort="A kit for assembling a short length barreled weapon. Bring together all the parts and assemble.";
    attachments[]=
    {
      "SRP_GunBarrel",
      "SRP_MainReceiver",
      "SRP_Trigger",
      "SRP_Hammer",
      "SRP_GunBody",
      "SRP_GunGrip",
      "SRP_GunButtStock"      
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\srp_weaponkitbase_co.paa"
		};
	};



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
//==================================================Handguard_Colorbase

	class ESP_LW_HndGrd_ColorBase: M4_PlasticHndgrd
	{
		scope=0;
		displayName="ESP-LW 12.5' Handguard";
		descriptionShort="The ESP-LW is a light weight handguard made from titanium and plastic. It is perfect for turning your M4 platform into CQB weapon. ";
		model="Survivalists_Mods\weapons\attachments\support\ESP_LW_HndGrd.p3d";
		rotationFlags=17;
		inventorySlot[]=
		{
			"weaponHandguardM4"
		};
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_LW_HndGrd_CO.paa"
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
						{1,{"Survivalists_Mods\weapons\attachments\support\data\ESP_LW_HndGrd.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\attachments\support\data\ESP_LW_HndGrd.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\attachments\support\data\ESP_LW_HndGrd.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\attachments\support\data\ESP_LW_HndGrd.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\attachments\support\data\ESP_LW_HndGrd.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
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
	};
	class ESP_RIS_Plated_HndGrd_Long_ColorBase: M4_PlasticHndgrd
	{
		scope=0;
		displayName="ESP-RIS Handguard 15'FPS";
		descriptionShort="The ESP-RIS handguard is a rail intergration system which can fit on any M4 platforms. This handguard also features a cutout for the weapons ironsight.";
		model="Survivalists_Mods\weapons\attachments\support\ESP_Plate_RIS_Long_HndGrd.p3d";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponHandguardM4"
		};
		hasRailFunctionality=1;
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd_CO.paa"
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
						{1,{"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
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
	};
	class ESPEN_RIS_Plated_HndGrd_ColorBase: M4_PlasticHndgrd
	{
		scope=0;
		displayName="ESP-RIS Handguard 12.5' ";
		descriptionShort="The ESP-RIS handguard is a rail intergration system which can fit on any M4 platforms.";
		model="Survivalists_Mods\weapons\attachments\support\ESP_Plate_RIS_HndGrd.p3d";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={4,1};
		inventorySlot[]=
		{
			"weaponHandguardM4"
		};
		hasRailFunctionality=1;
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd_CO.paa"
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
						{1,{"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
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
	};
	class ESP_RIS_Erg_HndGrd_ColorBase: M4_PlasticHndgrd
	{
		scope=0;
		displayName="ESP-Erg 12.5' Handguard";
		descriptionShort="The ESP-Erg is a minimalist handguard with an RIS ontop. It is lightweight, durable and slight oval curve makes a more comfortable grip.";
		model="Survivalists_Mods\weapons\attachments\support\ESP_Urgi_Grip.p3d";
		reversed=0;
		weight=250;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"weaponHandguardM4"
		};
		hasRailFunctionality=1;
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd_CO.paa"
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
						{1,{"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
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
	};
	class ESP_RIS_Erg_HndGrd_Long_ColorBase: M4_PlasticHndgrd
	{	
		scope=0;
		displayName="ESP-Erg 15' Handguard";
		descriptionShort="The ESP-Erg is a minimalist handguard with an RIS ontop. It is lightweight, durable and slight oval curve makes a more comfortable grip. This 15' handguard also features a cutout for the weapons ironsight";
		model="Survivalists_Mods\weapons\attachments\support\ESP_Urgi_Grip_Long.p3d";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponHandguardM4"
		};
		hasRailFunctionality=1;
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd_CO.paa"
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
						{1,{"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
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
	};
	class ESP_M16_HndGrd_ColorBase: M4_PlasticHndgrd
	{	
		scope=0;
		displayName="ESP-16 12.5' Handguard";
		descriptionShort="The ESP-16 Handguard is a retro styled handguard which means to replicate the look of the original ESP-M16 which was manufactured back in 1959.";
		model="Survivalists_Mods\weapons\attachments\support\ESP_M16_Grip.p3d";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"weaponHandguardM4"
		};
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_HndGrd_CO.paa"
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
						{1,{"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_HndGrd.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_HndGrd.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_HndGrd.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_HndGrd.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_HndGrd.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
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
	};
	class ESP_P90_UpgradeKit: M4_PlasticHndgrd
	{	
		scope=2;
		displayName="ESP-P90 Upgrade Kit";
		descriptionShort="The ESP-P90 Upgrade kit was designed to be sold seperately alongside the ESP-P90 to allow the user to attach various RIS compatible accessories to the end of the weapon.";
		model="Survivalists_Mods\weapons\attachments\support\ESP_P90_UpgradeKit.p3d";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={4,1};
		inventorySlot[]=
		{
			"P90UpgradeKit"
		};
		hasRailFunctionality=1;
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_P90_UpgradeKit_CO.paa"
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
						{1,{"Survivalists_Mods\weapons\attachments\support\data\ESP_P90_UpgradeKit.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\attachments\support\data\ESP_P90_UpgradeKit.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\attachments\support\data\ESP_P90_UpgradeKit.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\attachments\support\data\ESP_P90_UpgradeKit.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\attachments\support\data\ESP_P90_UpgradeKit.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
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
	};

	// HandGuard Retextures

	class ESP_Lightweight_HndGrd_Green: ESP_LW_HndGrd_ColorBase
	{
		scope=2;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_LW_HndGrd_CO.paa"
		};
	};
	class ESP_PlatedRIS_HndGrd_Long_Tan: ESP_RIS_Plated_HndGrd_Long_ColorBase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd_CO.paa"
		};
	};
	class ESP_PlatedRIS_HndGrd_Tan: ESPEN_RIS_Plated_HndGrd_ColorBase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_AR47_HndGrd_CO.paa"
		};
	};
	class ESP_RIS_Erg_HndGrd_Tan: ESP_RIS_Erg_HndGrd_ColorBase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd_CO.paa"
		};
	};
	class ESP_RIS_Erg_HndGrd_Black: ESP_RIS_Erg_HndGrd_ColorBase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd_Black_CO.paa"
		};
	};
	class ESP_RIS_Erg_HndGrd_Long_Tan: ESP_RIS_Erg_HndGrd_Long_ColorBase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd_CO.paa"
		};
	};
	class ESP_RIS_Erg_HndGrd_Long_Black: ESP_RIS_Erg_HndGrd_Long_ColorBase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\Urgi_HndGurd_Black_CO.paa"
		};
	};
	class ESP_M16_HndGrd_Wood: ESP_M16_HndGrd_ColorBase
	{
		scope=2;
		color="Wood";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_HndGrd_CO.paa"
		};
	};
	class ESP_M16_HndGrd_Black: ESP_M16_HndGrd_ColorBase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_HndGrd_Black_CO.paa"
		};
	};

//==================================================ButtStock_Colorbase

	class ESP_SNPR_Stck_ColorBase: M4_OEBttstck
	{
		scope=0;
		displayName="ES-SNPR Stock";
		descriptionShort="The ESP-SNPR stock is a recoil absorbing and highly adjustable marksman stock which was designed for competitive shooting. This stock is made to fit on all M4 platforms.";
		model="Survivalists_Mods\weapons\attachments\support\ESP_SNPR_BttStck.p3d";
		inventorySlot[]=
		{
			"weaponButtstockM4"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_SNPR_CO.paa"
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
						{1,{"Survivalists_Mods\weapons\attachments\support\data\ESP_SNPR.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\attachments\support\data\ESP_SNPR.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\attachments\support\data\ESP_SNPR.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\attachments\support\data\ESP_SNPR.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\attachments\support\data\ESP_SNPR.rvmat"}}
					};
				};
			};
		};
	};
	class ESP_M16_Stck_Colorbase: M4_OEBttstck
	{
		scope=0;
		displayName="ES-M16 Stock";
		descriptionShort="The ESP-16 stock was designed to allow users to recreate the iconic look of the ESP-16 rifle which was manufactured back in 1959.";
		model="Survivalists_Mods\weapons\attachments\support\ESP_M16_BttStck.p3d";
		attachments[]=
		{
			"StockPouch"
		};
		inventorySlot[]=
		{
			"weaponButtstockM4"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_Stck_CO.paa"
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
						{1,{"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_Stck.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_Stck.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_Stck.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_Stck.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_Stck.rvmat"}}
					};
				};
			};
		};
	};
	class ESP_Crane_Stock_Colorbase: M4_OEBttstck
	{
		scope=0;
		displayName="ES-Krain Stock";
		descriptionShort="The ES-Krain stock is a heavy duty stock designed for M4 platforms. It was designed to be heavier than the average stock to allow users to better control recoil.";
		model="Survivalists_Mods\weapons\attachments\support\ESP_Crane_BttStck.p3d";
		inventorySlot[]=
		{
			"weaponButtstockM4"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_Crane_BttStck_CO.paa"
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
						{1,{"Survivalists_Mods\weapons\attachments\support\data\ESP_Crane_BttStck.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\attachments\support\data\ESP_Crane_BttStck.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\attachments\support\data\ESP_Crane_BttStck.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\attachments\support\data\ESP_Crane_BttStck.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\attachments\support\data\ESP_Crane_BttStck.rvmat"}}
					};
				};
			};
		};
	};

	// Stock Retextures

	class ESP_M16_Stck_Wood: ESP_M16_Stck_Colorbase
	{
		scope=2;
		color="Wood";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_Stck_CO.paa"
		};
	};
	class ESP_M16_Stck_Black: ESP_M16_Stck_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_M16_Stck_Black_CO.paa"
		};
	};
	class ESP_SNPR_Stck_Black: ESP_SNPR_Stck_ColorBase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_SNPR_CO.paa"
		};
	};
	class ESP_Crane_Stock_Tan: ESP_Crane_Stock_Colorbase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_Crane_BttStck_CO.paa"
		};
	};
	class ESP_Crane_Stock_Black: ESP_Crane_Stock_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\ESP_Crane_BttStck_Black_CO.paa"
		};
	};
};