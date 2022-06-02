class CfgPatches
{
	class Survivalists_Mods_Weapons_Melee_Blunt
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Weapons_Melee",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class BaseballBat;
  class Inventory_Base;

  class SRP_KitBase;

  class SRP_WeaponBluntKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Blunt";
		descriptionShort="A Weapon Kit - Still needs a bit of work";
	};
  
	class Macerator: BaseballBat
	{
		scope=2;
		displayName="Macerator";
		descriptionShort="A heavy mace that is used for bashing. Created by Turko.";
		model="Survivalists_Mods\weapons\melee\blunt\srp_macerator.p3d";
		itemSize[]={2,4};
	};

  class SRP_WeaponBluntMacerator_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Macerator";
		descriptionShort="A blunt weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "Material_MetalWire",
      "Material_Shelter_Rope"      
		};
	};

//====================================================================================== STAFFS
  class SRP_Staff_Wooden_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Staff";
		descriptionShort="A long staff.";
		model="Survivalists_Mods\weapons\melee\blunt\srp_staffwooden.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blunt\data\srp_staffwooden_co.paa"
		};
		rotationFlags=16;
		weight=500;
		itemSize[]={1,8};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		suicideAnim="spear";
		itemBehaviour=2;
		openItemSpillRange[]={30,60};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffwooden.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffwooden.rvmat"}},
            {0.5,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffwooden.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffwooden.rvmat"}},
            {0.0,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffwooden.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSpear";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeSpear_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeSpear_Heavy";
				range=3.7;
			};
		};
	};
  class SRP_Staff_Wooden_Brown: SRP_Staff_Wooden_ColorBase
  {
    scope=2;
		displayName="Wooden Staff";
		descriptionShort="A long wooden staff.";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blunt\data\srp_staffwooden_co.paa"
		};
  };

  class SRP_Staff_Skull_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Skull Staff";
		descriptionShort="A long staff with a skull at the top.";
		model="Survivalists_Mods\weapons\melee\blunt\srp_staffskull.p3d";
		hiddenSelections[]=
		{
			"zbytek",
      "handle"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhead_co.paa",
      "Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhandle_co.paa",      
		};
		rotationFlags=16;
		weight=500;
		itemSize[]={1,8};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		suicideAnim="spear";
		itemBehaviour=2;
		openItemSpillRange[]={30,60};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhead.rvmat", "Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhandle.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhead.rvmat", "Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhandle.rvmat"}},
            {0.5,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhead.rvmat", "Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhandle.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhead.rvmat", "Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhandle.rvmat"}},
            {0.0,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhead.rvmat", "Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhandle.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSpear";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeSpear_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeSpear_Heavy";
				range=3.7;
			};
		};
	};
  class SRP_Staff_Skull_Basic: SRP_Staff_Skull_ColorBase
  {
    scope=2;
		displayName="Skull Staff - Basic";
		hiddenSelections[]=
		{
			"zbytek",
      "handle"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhead_co.paa",
      "Survivalists_Mods\weapons\melee\blunt\data\srp_staffskullhandle_co.paa",      
		};
  };

  class SRP_Staff_Sun_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Sun Staff";
		descriptionShort="A long staff with a metal ornament at the top.";
		model="Survivalists_Mods\weapons\melee\blunt\srp_staffsun.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blunt\data\srp_staffsun_co.paa",  
		};
		rotationFlags=16;
		weight=500;
		itemSize[]={1,8};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		suicideAnim="spear";
		itemBehaviour=2;
		openItemSpillRange[]={30,60};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffsun.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffsun.rvmat"}},
            {0.5,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffsun.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffsun.rvmat"}},
            {0.0,	{	"Survivalists_Mods\weapons\melee\blunt\data\srp_staffsun.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSpear";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeSpear_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeSpear_Heavy";
				range=3.7;
			};
		};
	};
  class SRP_Staff_Sun_Basic: SRP_Staff_Sun_ColorBase
  {
    scope=2;
		displayName="Sun Staff - Basic";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blunt\data\srp_staffsun_co.paa"    
		};
  };
};