class CfgPatches
{
	class Survivalists_RPWeapons_Attachments_supports
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Supports",
      "Survivalists_RPWeapons_Crafting",
      // "Survivalists_Weapons_JMC_Attachments_supports"
		};
	};
};

class CfgVehicles
{
  class M4_PlasticHndgrd;
	class M4_OEBttstck;
  class Inventory_Base;
  class AK74_Hndgrd;
	class AK_WoodBttstck;

  class SRP_Weapon_KitBase;
//===================================================== CONTAINERS
	class SRP_ButtstockPouch_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Buttstock Ammo Pouch";
		descriptionShort="Espen Industries. An Ammo-Pouch with just enough room for some loose ammunition. Inspected by Master Gunsmith: Turko";
		itemsize[]={3,2};
		itemsCargoSize[]={3,2};
		model="Survivalists_RPWeapons\attachments\support\srp_buttstockpouch.p3d";
		inventorySlot[]=
		{
      "SRP_StockPouch"
		};
		weight=100;
		hiddenSelections[]=
		{
			"Pouch","Straps"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\rifle_pouch_CO.paa","Survivalists_RPWeapons\attachments\support\data\rifle_pouch_Straps_CO.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_RPWeapons\attachments\support\data\rifle_pouch.rvmat","Survivalists_RPWeapons\attachments\support\data\rifle_pouch_Straps.rvmat"
    };
	};
  class SRP_ButtstockPouch_Red: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\rifle_pouch_CO.paa","Survivalists_RPWeapons\attachments\support\data\rifle_pouch_Straps_CO.paa"
		};
	};
	class SRP_ButtstockPouch_Black: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\rifle_pouch_Black_CO.paa","Survivalists_RPWeapons\attachments\support\data\rifle_pouch_Straps_Black_CO.paa"
		};
	};
	class SRP_ButtstockPouch_Linen: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\rifle_pouch_Linen_CO.paa","Survivalists_RPWeapons\attachments\support\data\rifle_pouch_Straps_Linen_CO.paa"
		};
	};
	class SRP_ButtstockPouch_Purple: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\rifle_pouch_Purple_CO.paa","Survivalists_RPWeapons\attachments\support\data\rifle_pouch_Straps_Purple_CO.paa"
		};
	};

//===================================================== CRAFTING PIECES

  class SRP_WoodAttachmentGunKit_Kit: SRP_Weapon_KitBase
	{
		scope=2;
		displayName="Weapon Attachment Kit - Wood";
		descriptionShort="A kit for creating wooden gun attachments.";
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\srp_weaponkitbase_co.paa"
		};
	};
  class SRP_WeaponLongBarrel_Kit: SRP_Weapon_KitBase
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
			"Survivalists_RPWeapons\attachments\support\data\srp_weaponkitbase_co.paa"
		};
	};
  class SRP_WeaponMediumBarrel_Kit: SRP_Weapon_KitBase
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
			"Survivalists_RPWeapons\attachments\support\data\srp_weaponkitbase_co.paa"
		};
	};
  class SRP_WeaponShortBarrel_Kit: SRP_Weapon_KitBase
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
			"Survivalists_RPWeapons\attachments\support\data\srp_weaponkitbase_co.paa"
		};
	};

  class TT_GunKit_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="TURKO BASE GUN KIT";
		descriptionShort="PLACEHOLDER - BASE GUN KIT BOX";
		model="Survivalists_RPWeapons\attachments\support\TT_GunKit.p3d";
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
      "Survivalists_RPWeapons\attachments\support\data\TT_GunKit_co.paa"
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
						{1,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\TT_Grip.p3d";
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
      "Survivalists_RPWeapons\attachments\support\data\TT_BaseGunGrip1_co.paa"
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
						{1,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}}
					};
				};
			};
		};
	};
  class TT_Grip_Wood: TT_Grip_ColorBase
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
		model="Survivalists_RPWeapons\attachments\support\TT_Buttstock.p3d";
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
      "Survivalists_RPWeapons\attachments\support\data\TT_BaseGunGrip1_co.paa"
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
						{1,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\TT_Barrel.p3d";
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
      "Survivalists_RPWeapons\attachments\support\data\TT_BaseGun1_co.paa"
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
						{1,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\TT_Barrel.p3d";
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
      "Survivalists_RPWeapons\attachments\support\data\TT_BaseGun1_co.paa"
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
						{1,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\TT_Receiver.p3d";
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
      "Survivalists_RPWeapons\attachments\support\data\TT_BaseGun1_co.paa"
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
						{1,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\TT_Trigger.p3d";
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
      "Survivalists_RPWeapons\attachments\support\data\TT_BaseGun1_co.paa"
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
						{1,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\TT_Hammer.p3d";
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
      "Survivalists_RPWeapons\attachments\support\data\TT_BaseGun1_co.paa"
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
						{1,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.69999999,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.5,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0.30000001,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}},
            {0,{	"Survivalists_RPWeapons\attachments\support\data\base.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\ESP_LW_HndGrd.p3d";
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_LW_HndGrd_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_LW_HndGrd.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_LW_HndGrd.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_LW_HndGrd.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_LW_HndGrd.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_LW_HndGrd.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\ESP_Plate_RIS_Long_HndGrd.p3d";
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}}
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
	class ESP_RIS_Plated_HndGrd_ColorBase: M4_PlasticHndgrd
	{
		scope=0;
		displayName="ESP-RIS Handguard 12.5' ";
		descriptionShort="The ESP-RIS handguard is a rail intergration system which can fit on any M4 platforms.";
		model="Survivalists_RPWeapons\attachments\support\ESP_Plate_RIS_HndGrd.p3d";
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\ESP_Urgi_Grip.p3d";
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
			"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\ESP_Urgi_Grip_Long.p3d";
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
			"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd.rvmat"}}
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
  
  class ESP_XLHndgrdBase: Inventory_Base{};
	class ESP_Erg_XlHndgrd: ESP_XLHndgrdBase
	{	
		scope=2;
		displayName="ESP-Erg 18' Handguard";
		descriptionShort="The Erg 18 Handguard is a light weight 18inch handguard. Installing this on any of the ESP AR platforms means that you will remove the ironsight from the gasblock";
		model="Survivalists_RPWeapons\attachments\support\ESP_Urgi_Grip_Longest.p3d";
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_Ar15_Handguards_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR15_Handguards.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR15_Handguards.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR15_Handguards.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR15_Handguards.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR15_Handguards.rvmat"}}
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
	class ESP_RIS_XlHndgrd: ESP_XLHndgrdBase
  {	
		scope=2;
		displayName="ESP-RIS 18' Handguard";
		descriptionShort="The RIS 18 Handguard is an 18inch handguard with rails at the very end of it. Installing this on any of the ESP AR platforms means that you will remove the ironsight from the gasblock";
		model="Survivalists_RPWeapons\attachments\support\ESP_RIS_HndGrd_Longest.p3d";
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_Ar15_Handguards_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR15_Handguards.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR15_Handguards.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR15_Handguards.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR15_Handguards.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_AR15_Handguards.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\ESP_M16_Grip.p3d";
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_M16_HndGrd_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_M16_HndGrd.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_M16_HndGrd.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_M16_HndGrd.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_M16_HndGrd.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_M16_HndGrd.rvmat"}}
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
  class ESP_SCAR_URGI_HNDGRD_Colorbase: M4_PlasticHndgrd
	{
		scope=0;
		displayName="ESP-SCR Erg Handghuard";
		descriptionShort="The ESP-SCR Erg Handguard was designed with comfort in mind. Featuring an M-lock mounting system this handguard is easier to grip and made from lightweight materials.";
		model="Survivalists_RPWeapons\attachments\support\ESP_SCAR_Urgi_HndGrd.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"ScarHndGrd"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"Steel",
			"Metal"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel_CO.paa","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal.rvmat"}}
					};
				};
			};
		}; 
	};
	class ESP_SCAR_RIS_HNDGRD_Colorbase: M4_PlasticHndgrd
	{
		scope=0;
		displayName="ESP-SCR RIS Handghuard";
		descriptionShort="The ESP-SCR RIS Handghuard is a Rail Intergration system which allows the user to mount a variety of attachments to the end of the ESP-SCR.";
		model="Survivalists_RPWeapons\attachments\support\ESP_SCAR_RIS_HndGrd.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		hasRailFunctionality=1;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"ScarHndGrd"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}}
					};
				};
			};
		}; 
	};
	class STG_AK_Poli_HNDGRD_Colorbase: AK74_Hndgrd
	{
		scope=0;
		displayName="S.T.A.G. Poli Handguard";
		descriptionShort="The S.T.A.G. Poli is a polymer made handguard designed for most AK platforms. It is much lighter than it's wooden counterpart.";
		model="Survivalists_RPWeapons\attachments\support\STG_AK_Poli_HndGrd.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponHandguardAK"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ttak458poli_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						{1,{"Survivalists_RPWeapons\attachments\support\data\ttak458poli.rvmat"}},
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ttak458poli.rvmat"}},
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ttak458poli.rvmat"}},
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ttak458poli.rvmat"}},
						{0,{"Survivalists_RPWeapons\attachments\support\data\ttak458poli.rvmat"}}
					};
				};
			};
		}; 
	};
	class STG_AK_Wood_HNDGRD_Colorbase: AK74_Hndgrd
	{
		scope=0;
		displayName="S.T.A.G. Wood Handguard";
		descriptionShort="The S.T.A.G. Wood Handguard is much longer than the typical wooden handguard, allowing the user to comfortably hold their weapon further down the barrel.";
		model="Survivalists_RPWeapons\attachments\support\STG_AK_Wood_HndGrd.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponHandguardAK"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttak458\data\ttak458_Stock_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\rifles\ttak458\data\Base_Stock.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ttak458\data\Base_Stock.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ttak458\data\Base_Stock.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ttak458\data\Base_Stock.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ttak458\data\Base_Stock.rvmat"}}
					};
				};
			};
		}; 
	};
	class STG_AK_Junk_HNDGRD_Colorbase: AK74_Hndgrd
	{
		scope=0;
		displayName="Junk AK Handguard";
		descriptionShort="These pieces of scrap seem to be fashioned into some sort of handguard?";
		model="Survivalists_RPWeapons\attachments\support\STG_AK_Junk_HndGrd.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponHandguardAK"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\junkak_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\attachments\support\data\STG_AK_JUNK_HndGrd.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\STG_AK_JUNK_HndGrd.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\STG_AK_JUNK_HndGrd.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\STG_AK_JUNK_HndGrd.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\STG_AK_JUNK_HndGrd.rvmat"}}
					};
				};
			};
		}; 
	};
  class STG_AK_Geksagon: AK74_Hndgrd
	{
		scope=2;
		displayName="S.T.A.G. Geksagon Handguard";
		descriptionShort="The S.T.A.G. Geksagon is a steel mesh cage. The mesh design was used to create a lighterweight handguard whilst still remaining rigid and durable.";
		model="Survivalists_RPWeapons\attachments\Support\STG_AK_Geksagon.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponHandguardAK"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards.rvmat"}}
					};
				};
			};
		}; 
	};
	class ESP_P90_UpgradeKit: M4_PlasticHndgrd
	{	
		scope=2;
		displayName="ESP-P90 Upgrade Kit";
		descriptionShort="The ESP-P90 Upgrade kit was designed to be sold seperately alongside the ESP-P90 to allow the user to attach various RIS compatible accessories to the end of the weapon.";
		model="Survivalists_RPWeapons\attachments\support\ESP_P90_UpgradeKit.p3d";
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_P90_UpgradeKit_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_P90_UpgradeKit.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_P90_UpgradeKit.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_P90_UpgradeKit.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_P90_UpgradeKit.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_P90_UpgradeKit.rvmat"}}
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
  class STG_AK_CMRD_HNDGRD: AK74_Hndgrd
  {
    scope=2;
		displayName="S.T.A.G. CMRD Handguard";
		descriptionShort="The S.T.A.G. CMRD is a handguard made from steel. It's longer design helps protect the gasblock of the rifle whilst still offering substantial space to grip";
		model="Survivalists_RPWeapons\attachments\Support\STG_AK_CMRD_HndGrd.p3d";
    rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponHandguardAK"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\Support\data\STG_AK_HandGuards.rvmat"}}
					};
				};
			};
		};
  };
  class ESP_SA80_RIS_HndGrd_Colorbase: M4_PlasticHndgrd
	{
		scope=0;
		displayName="SA80A RIS Hand Guard";
		descriptionShort="The SA80A RIS Handguard Is a simple RIS handguard designed to fit on the SA80A rifle.";
		model="Survivalists_RPWeapons\attachments\Support\ESP_SA80A_RIS_HndGrd.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		hasRailFunctionality=1;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"SA80HndGrd"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ESP_SA80a\data\ESP_SA80a_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\rifles\ESP_SA80a\data\ESP_SA80a.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ESP_SA80a\data\ESP_SA80a.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ESP_SA80a\data\ESP_SA80a.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ESP_SA80a\data\ESP_SA80a.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ESP_SA80a\data\ESP_SA80a.rvmat"}}
					};
				};
			};
		}; 
	};
	class ESP_SA80_Plastic_HndGrd_Colorbase: M4_PlasticHndgrd
	{
		scope=0;
		displayName="SA80A Plastic Hand Guard";
		descriptionShort="The SA80A typical Handguard. This simple handguard is made from lightweight polymer";
		model="Survivalists_RPWeapons\attachments\Support\ESP_SA80A_Plastic_HndGrd.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		hasRailFunctionality=0;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"SA80HndGrd"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"\Survivalists_RPWeapons\attachments\support\data\SA80_Plastic_HndGrd_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"\Survivalists_RPWeapons\attachments\support\data\SA80_Plastic_HndGrd.rvmat"}},						
						{0.69999999,{"\Survivalists_RPWeapons\attachments\support\data\SA80_Plastic_HndGrd.rvmat"}},						
						{0.5,{"\Survivalists_RPWeapons\attachments\support\data\SA80_Plastic_HndGrd.rvmat"}},						
						{0.30000001,{"\Survivalists_RPWeapons\attachments\support\data\SA80_Plastic_HndGrd.rvmat"}},						
						{0,{"\Survivalists_RPWeapons\attachments\support\data\SA80_Plastic_HndGrd.rvmat"}}
					};
				};
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_LW_HndGrd_CO.paa"
		};
	};
	class ESP_PlatedRIS_HndGrd_Long_Tan: ESP_RIS_Plated_HndGrd_Long_ColorBase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd_CO.paa"
		};
	};
	class ESP_PlatedRIS_HndGrd_Tan: ESP_RIS_Plated_HndGrd_ColorBase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_AR47_HndGrd_CO.paa"
		};
	};
	class ESP_RIS_Erg_HndGrd_Tan: ESP_RIS_Erg_HndGrd_ColorBase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd_CO.paa"
		};
	};
	class ESP_RIS_Erg_HndGrd_Black: ESP_RIS_Erg_HndGrd_ColorBase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd_Black_CO.paa"
		};
	};
	class ESP_RIS_Erg_HndGrd_Long_Tan: ESP_RIS_Erg_HndGrd_Long_ColorBase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd_CO.paa"
		};
	};
	class ESP_RIS_Erg_HndGrd_Long_Black: ESP_RIS_Erg_HndGrd_Long_ColorBase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\Urgi_HndGurd_Black_CO.paa"
		};
	};
	class ESP_M16_HndGrd_Wood: ESP_M16_HndGrd_ColorBase
	{
		scope=2;
		color="Wood";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_M16_HndGrd_CO.paa"
		};
	};
	class ESP_M16_HndGrd_Black: ESP_M16_HndGrd_ColorBase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_M16_HndGrd_Black_CO.paa"
		};
	};
  class ESP_SCAR_URGI_HNDGRD_Tan: ESP_SCAR_URGI_HNDGRD_Colorbase
	{
		scope=2;
		color="Tan";
		hiddenSelections[]=
		{
			"Steel",
			"Metal"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel_CO.paa","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal_Tan_CO.paa"
		};
	};
	class ESP_SCAR_URGI_HNDGRD_Black: ESP_SCAR_URGI_HNDGRD_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelections[]=
		{
			"Steel",
			"Metal"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel_CO.paa","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal_CO.paa"
		};
	};
	class ESP_SCAR_RIS_HNDGRD_Black: ESP_SCAR_RIS_HNDGRD_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR_CO.paa"
		};
	};
	class STG_AK_Poli_HNDGRD_Green: STG_AK_Poli_HNDGRD_Colorbase
	{
		scope=2;
		color="Green";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ttak458poli_co.paa"
		};
	};
	class STG_AK_Wood_HNDGRD_Dark_Wood: STG_AK_Wood_HNDGRD_Colorbase
	{
		scope=2;
		color="Dark_Wood";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttak458\data\ttak458_Stock_co.paa"
		};
	};
	class STG_AK_Junk_HNDGRD_Junk: STG_AK_Junk_HNDGRD_Colorbase
	{
		scope=2;
		color="Junk";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\junkak_co.paa"
		};
	};
  class ESP_Erg_XlHndgrd_Tan: ESP_Erg_XlHndgrd
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_Ar15_Handguards_Tan_CO.paa"
		};
	};
	class ESP_RIS_XlHndgrd_Tan: ESP_RIS_XlHndgrd
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_Ar15_Handguards_Tan_CO.paa"
		};
	};
  class ESP_SA80_Plastic_HndGrd_Black: ESP_SA80_Plastic_HndGrd_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\SA80_Plastic_HndGrd_Black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\SA80_Plastic_HndGrd.rvmat"
		};
	};
	class ESP_SA80_Plastic_HndGrd_Green: ESP_SA80_Plastic_HndGrd_Colorbase
	{
		scope=2;
		color="Green";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\SA80_Plastic_HndGrd_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\SA80_Plastic_HndGrd.rvmat"
		};
	};
	class ESP_SA80_RIS_HndGrd_Metal: ESP_SA80_RIS_HndGrd_Colorbase
	{
		scope=2;
		color="Metal";
	};
//==================================================ButtStock_Colorbase

	class ESP_SNPR_Stck_ColorBase: M4_OEBttstck
	{
		scope=0;
		displayName="ES-SNPR Stock";
		descriptionShort="The ESP-SNPR stock is a recoil absorbing and highly adjustable marksman stock which was designed for competitive shooting. This stock is made to fit on all M4 platforms.";
		model="Survivalists_RPWeapons\attachments\support\ESP_SNPR_BttStck.p3d";
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_SNPR_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_SNPR.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_SNPR.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_SNPR.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_SNPR.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_SNPR.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\ESP_M16_BttStck.p3d";
		attachments[]=
		{
			"SRP_StockPouch"
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_M16_Stck_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_M16_Stck.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_M16_Stck.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_M16_Stck.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_M16_Stck.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_M16_Stck.rvmat"}}
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
		model="Survivalists_RPWeapons\attachments\support\ESP_Crane_BttStck.p3d";
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_Crane_BttStck_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_Crane_BttStck.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_Crane_BttStck.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_Crane_BttStck.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_Crane_BttStck.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_Crane_BttStck.rvmat"}}
					};
				};
			};
		};
	};
  class ESP_Engraved_Stock_Colorbase: M4_OEBttstck
	{
		scope=2;
		displayName="Engraved M4 Stock";
		descriptionShort="An M4 stock with some fancy engraving etched into the top of it";
		model="Survivalists_RPWeapons\attachments\support\ESP_Engraved_BttStck.p3d";
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
			"Survivalists_RPWeapons\rifles\ttar9\data\ttar9_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\rifles\ttar9\data\base.rvmat"
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
						{1,{"Survivalists_RPWeapons\rifles\ttar9\data\base.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ttar9\data\base.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ttar9\data\base.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ttar9\data\base.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ttar9\data\base.rvmat"}}
					};
				};
			};
		};
	};
  class ESP_SCAR_Collapse_Stck_Colorbase: M4_OEBttstck
	{
		scope=0;
		displayName="ESP-SCR Collapsable stock";
		descriptionShort="The ESP-SCR Collapsable stock is as it's name suggests, as collapsable stock which allows the user to weild their ESP-SCR in any environment";
		model="Survivalists_RPWeapons\attachments\support\ESP_SCAR_Collapse_Stck.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"ScarBttStck"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"Metal",
			"Plastic",
			"Steel"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal_CO.paa","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Plastic_CO.paa","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Plastic.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Plastic.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Plastic.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Plastic.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Plastic.rvmat","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel.rvmat"}}
					};
				};
			};
		}; 
	};
	class ESP_SCAR_Stck_Colorbase: M4_OEBttstck
	{
		scope=0;
		displayName="ESP-SCR Stock ";
		descriptionShort="The ESP-SCR Stock is the standard stock which is sold alongside any ESP-SCR. It features an ergonimic rest for the users chin, but can also be removed and replaced if it becomes damaged.";
		model="Survivalists_RPWeapons\attachments\support\ESP_SCAR_Stck.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"ScarBttStck"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}}
					};
				};
			};
		}; 
	};
	class STG_AK_Junk_Stck_ColorBase: AK_WoodBttstck
	{
		scope=0;
		displayName="Junk AK Stock";
		descriptionShort="This pieces of wood seems to try and resemble some form of weapon stock?";
		model="Survivalists_RPWeapons\attachments\support\STG_AK_Junk_Stck.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponButtstockAK"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\junkak_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\junkak.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\attachments\support\data\STG_AK_JUNK_HndGrd.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\STG_AK_JUNK_HndGrd.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\STG_AK_JUNK_HndGrd.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\STG_AK_JUNK_HndGrd.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\STG_AK_JUNK_HndGrd.rvmat"}}
					};
				};
			};
		}; 
	};
	class STG_AK_Poli_Stck_Colorbase: AK_WoodBttstck
	{
		scope=0;
		displayName="S.T.A.G. Poli Stock";
		descriptionShort="The S.T.A.G Poli Stock is an Ak platform weapon stock made from polymers. It is lighter than it's wooden counterparts but is also more adjustable.";
		model="Survivalists_RPWeapons\attachments\support\STG_AK_Poli_Stck.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponButtstockAK"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ttak458poli_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ttak458poli.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\attachments\support\data\ttak458poli.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ttak458poli.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ttak458poli.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ttak458poli.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ttak458poli.rvmat"}}
					};
				};
			};
		}; 
	};
  
  class ESP_GripStock: Inventory_Base{};
  class ESP_MCK1_Stock_Colorbase: ESP_GripStock
	{
		scope=0;
		displayName="ES-MCK1";
		descriptionShort="The ESP-MCK1 stock is a rifle stock and grip combined in one. Whilst offering less adjustment, the combined design is supposed to offer the user more comfort.";
		model="Survivalists_RPWeapons\attachments\support\ESP_MCK1_Stock.p3d";
		itemsize[]={3,2};
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_MCK1_Stock_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_MCK1_Stock.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_MCK1_Stock.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_MCK1_Stock.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_MCK1_Stock.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_MCK1_Stock.rvmat"}}
					};
				};
			};
		};
	};
	class ESP_LW_Stock: M4_OEBttstck
	{
		scope=2;
		displayName="ES-LW Stock";
		descriptionShort="The ES-LW stock is a lightweight stock designed for M4 platforms. It was designed for use in most CQB scenarios due to it's maneuverability";
		model="Survivalists_RPWeapons\attachments\support\ESP_LW_Stock.p3d";
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
			"Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_Ar15_Extras_CO.paa"
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
						{1,{"Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_AR15_Extras.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_AR15_Extras.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_AR15_Extras.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_AR15_Extras.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_AR15_Extras.rvmat"}}
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
			"Survivalists_RPWeapons\attachments\support\data\ESP_M16_Stck_CO.paa"
		};
	};
	class ESP_M16_Stck_Black: ESP_M16_Stck_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_M16_Stck_Black_CO.paa"
		};
	};
	class ESP_SNPR_Stck_Black: ESP_SNPR_Stck_ColorBase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_SNPR_CO.paa"
		};
	};
	class ESP_Crane_Stock_Tan: ESP_Crane_Stock_Colorbase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_Crane_BttStck_CO.paa"
		};
	};
	class ESP_Crane_Stock_Black: ESP_Crane_Stock_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_Crane_BttStck_Black_CO.paa"
		};
	};
  class ESP_SCAR_Collapse_Stck_Black: ESP_SCAR_Collapse_Stck_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelections[]=
		{
			"Metal",
			"Plastic",
			"Steel"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal_CO.paa","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Plastic_CO.paa","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel_CO.paa"
		};
	};
	class ESP_SCAR_Collapse_Stck_Tan: ESP_SCAR_Collapse_Stck_Colorbase
	{
		scope=2;
		color="Tan";
		hiddenSelections[]=
		{
			"Metal",
			"Plastic",
			"Steel"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Metal_Tan_CO.paa","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Plastic_CO.paa","Survivalists_RPWeapons\attachments\support\data\SCAR_URGI_Steel_CO.paa"
		};
	};
	class ESP_SCAR_Stck_Tan: ESP_SCAR_Stck_Colorbase
	{
		scope=2;
		color="Tan";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR_Tan_CO.paa"
		};
	};
	class ESP_SCAR_Stck_Black: ESP_SCAR_Stck_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR_CO.paa"
		};
	};
  class ESP_SCAR_Stck_Rare: ESP_SCAR_Stck_Colorbase
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttscarl\data\ttscarl_rare_co.paa"
		};
	};
	class STG_AK_Junk_Stck_Junk: STG_AK_Junk_Stck_ColorBase
	{
		scope=2;
		color="Junk";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\junkak_co.paa"
		};
	};
	class STG_AK_Poli_Stck_Green: STG_AK_Poli_Stck_Colorbase
	{
		scope=2;
		color="Green";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ttak458poli_co.paa"
		};
	};
	class ESP_MCK1_Stock_Grey: ESP_MCK1_Stock_Colorbase
	{
		scope=2;
		color="Grey";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_MCK1_Stock_CO.paa"
		};
	};
  class ESP_MCK1_Stock_Tan: ESP_MCK1_Stock_Colorbase
	{
		scope=2;
		color="Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_MCK1_Stock_Tan_CO.paa"
		};
	};
	class ESP_MCK1_Stock_Black: ESP_MCK1_Stock_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_MCK1_Stock_Black_CO.paa"
		};
	};
	// Grips And Other
	class ESP_RIS_Cover_Colorbase: Inventory_Base
	{	
		scope=0;
		displayName="RIS Cover";
		descriptionShort="A polymer RIS cover.";
		model="Survivalists_RPWeapons\attachments\support\ESP_RIS_Cover.p3d";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"RISLeft",
			"RISRight",
			"RISBottom"
		};
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER.rvmat","Survivalists_RPWeapons\rifles\ESP_M110\data\M110.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER.rvmat","Survivalists_RPWeapons\rifles\ESP_M110\data\M110.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER.rvmat","Survivalists_RPWeapons\rifles\ESP_M110\data\M110.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER.rvmat","Survivalists_RPWeapons\rifles\ESP_M110\data\M110.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER.rvmat","Survivalists_RPWeapons\rifles\ESP_M110\data\M110.rvmat"}}
					};
				};
			};
		};
	};
	class ESP_Angle_Grip_Colorbase: Inventory_Base
	{	
		scope=0;
		displayName="Angled Foregrip";
		descriptionShort="A polymer angled foregrip designed for RIS handguards";
		model="Survivalists_RPWeapons\attachments\support\ESP_Angle_Grip.p3d";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"RISLeft",
			"RISRight",
			"RISBottom"
		};
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_Angle_Grip_CO.paa"
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
						{1,{"Survivalists_RPWeapons\attachments\support\data\ESP_Angle_Grip.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\support\data\ESP_Angle_Grip.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\support\data\ESP_Angle_Grip.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\support\data\ESP_Angle_Grip.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\support\data\ESP_Angle_Grip.rvmat"}}
					};
				};
			};
		};
	};

	// Grips and Other - Retextures
	class ESP_RIS_Cover_Black: ESP_RIS_Cover_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelections[]=
		{
			"Zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER_BLACK_CO.paa"
		};
	};
	class ESP_RIS_Cover_Tan: ESP_RIS_Cover_Colorbase
	{
		scope=2;
		color="Tan";
		hiddenSelections[]=
		{
			"Zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER_CO.paa"
		};
	};
	class ESP_RIS_Cover_Green: ESP_RIS_Cover_Colorbase
	{
		scope=2;
		color="Green";
		hiddenSelections[]=
		{
			"Zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER_Green_CO.paa"
		};
	};
	class ESP_RIS_Cover_RedWood: ESP_RIS_Cover_Colorbase
	{
		scope=2;
		color="RedWood";
		hiddenSelections[]=
		{
			"Zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER_RedWood_CO.paa"
		};
	};
  class ESP_RIS_Cover_Freedom: ESP_RIS_Cover_Colorbase
	{
		scope=2;
		color="Freedom";
		hiddenSelections[]=
		{
			"Zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER_US_CO.paa"
		};
	};
	class ESP_RIS_Cover_Rare: ESP_RIS_Cover_Colorbase
	{
		scope=2;
		hiddenSelections[]=
		{
			"Zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_RIS_COVER_RARE_CO.paa"
		};
	};
	class ESP_Angle_Grip_Tan: ESP_Angle_Grip_Colorbase
	{
		scope=2;
		color="Tan";
		hiddenSelections[]=
		{
			"Zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_Angle_Grip_CO.paa"
		};
	};
	class ESP_Angle_Grip_Green: ESP_Angle_Grip_Colorbase
	{
		scope=2;
		color="Green";
		hiddenSelections[]=
		{
			"Zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_Angle_Grip_Green_CO.paa"
		};
	};
	class ESP_Angle_Grip_Black: ESP_Angle_Grip_Colorbase
	{
		scope=2;
		color="Black";
		hiddenSelections[]=
		{
			"Zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\support\data\ESP_Angle_Grip_Black_CO.paa"
		};
	};
};