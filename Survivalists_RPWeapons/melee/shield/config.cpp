class CfgPatches
{
	class Survivalists_RPWeapons_Melee_Shield
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee",
		};
	};
};
class CfgAmmo
{
  class MeleeBlunt;
  
  class SRP_MeleeShield_1H: MeleeBlunt
	{
		class DamageApplied
		{
			type="Melee";
			class Health
			{
				damage=5;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=35;
			};
		};
	};
	class SRP_MeleeShield_1HHeavy: SRP_MeleeShield_1H{};
  class SRP_MeleeShield_2H: MeleeBlunt
	{
		class DamageApplied
		{
			type="Melee";
			class Health
			{
				damage=15;
			};
			class Blood
			{
				damage=5;
			};
			class Shock
			{
				damage=45;
			};
		};
	};
	class SRP_MeleeShield_2HHeavy: SRP_MeleeShield_2H{};
};
class CfgVehicles
{
  class Inventory_Base;

  class SRP_BloodRootShield_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Blood Root Shield";
		descriptionShort="A sturdy wooden shield.";
		model="Survivalists_RPWeapons\melee\shield\srp_bloodrootshield.p3d";
    rootClassName="SRP_BloodRootShield";
    colorVariants[]=
    {
      "Basic",
    };
		hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\melee\shield\data\srp_bloodrootshield_co.paa"};
		rotationFlags=12;
		weight=1500;
		itemSize[]={3,4};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
		};
		suicideAnim="sword";
		itemBehaviour=2;
		openItemSpillRange[]={30,60};
    repairableWithKits[]={5,8};
		repairCosts[]={100,100};
    // class InventorySlotsOffsets
    // {
    //   class Shoulder
    //   {
    //     position[]={0.05,0.65,-0.25};//FB,UD,LR
    //     orientation[]={0,200,0};//x,y,z
    //   };
    //   class Melee
    //   {
    //     position[]={0.01,0.65,0.25};//FB,UD,LR
    //     orientation[]={0,-200,0};//x,y,z
    //   };
    // };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\shield\data\srp_bloodrootshieldwood.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\shield\data\srp_bloodrootshieldwood.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\shield\data\srp_bloodrootshieldwood_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\shield\data\srp_bloodrootshieldwood_damage.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\shield\data\srp_bloodrootshieldwood_destruct.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="SRP_MeleeBlunt_1H";
				range=2.2;
			};
			class Heavy
			{
				ammo="SRP_MeleeBlunt_1HHeavy";
				range=2.7;
			};
			class Sprint
			{
				ammo="SRP_MeleeBlunt_1HHeavy";
				range=3.7;
			};
		};
	};
  class SRP_BloodRootShield_Basic: SRP_BloodRootShield_ColorBase
  {
    scope=2;
  };


  class SRP_WoodenShieldRound_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Round Wooden Shield";
		descriptionShort="A sturdy wooden shield.";
		model="Survivalists_RPWeapons\melee\shield\srp_woodenshieldround.p3d";
    rootClassName="SRP_WoodenShieldRound";
    colorVariants[]=
    {
      "Basic",
    };
		hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldround_co.paa"};
		rotationFlags=12;
		weight=1500;
		itemSize[]={3,4};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
		};
		suicideAnim="sword";
		itemBehaviour=2;
		openItemSpillRange[]={30,60};
    repairableWithKits[]={5,8};
		repairCosts[]={100,100};
    // class InventorySlotsOffsets
    // {
    //   class Shoulder
    //   {
    //     position[]={0.05,0.65,-0.25};//FB,UD,LR
    //     orientation[]={0,200,0};//x,y,z
    //   };
    //   class Melee
    //   {
    //     position[]={0.01,0.65,0.25};//FB,UD,LR
    //     orientation[]={0,-200,0};//x,y,z
    //   };
    // };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldroundwood.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldroundwood.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldroundwood_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldroundwood_damage.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldroundwood_destruct.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="SRP_MeleeBlunt_1H";
				range=2.2;
			};
			class Heavy
			{
				ammo="SRP_MeleeBlunt_1HHeavy";
				range=2.7;
			};
			class Sprint
			{
				ammo="SRP_MeleeBlunt_1HHeavy";
				range=3.7;
			};
		};
	};
  class SRP_WoodenShieldRound_Basic: SRP_WoodenShieldRound_ColorBase
  {
    scope=2;
  };
};