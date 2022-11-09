class CfgPatches
{
	class Survivalists_RPWeapons_Melee_Blunt
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee",
      "Survivalists_Weapons"
		};
	};
};
class CfgVehicles
{
  class BaseballBat;
  class Inventory_Base;

  class SRP_Weapon_KitBase;

  class ttbaseballbat_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Reinforced Baseball Bat";
		descriptionShort="Espen Industries. Reinforced baseball bat used for bashing heads. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\melee\blunt\ttbaseballbat.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=566;
		itemSize[]={1,7};
		itemBehaviour=2;
		fragility=0.02;
		openItemSpillRange[]={20,50};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBat";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeBat_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeBat_Heavy";
				range=3.7;
			};
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\ttbaseballbat_co.paa"
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
						{1,{"Survivalists_RPWeapons\melee\blunt\data\ttbaseballbat.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\melee\blunt\data\ttbaseballbat.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\melee\blunt\data\ttbaseballbat.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\melee\blunt\data\ttbaseballbat.rvmat"}},						
						{0,{"Survivalists_RPWeapons\melee\blunt\data\ttbaseballbat.rvmat"}}
					};
				};
			};
		};
		soundImpactType="wood";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp_Light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class ttbaseballbat_Simple: ttbaseballbat_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\ttbaseballbat_co.paa"
    };
	};

//====================================================================================== HAMMERS
  class SRP_WeaponBluntWarHammer_Kit: SRP_Weapon_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - War Hammer";
		descriptionShort="A blunt weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",
      "Material_Shelter_Rope"      
		};
	};

  class SRP_WarHammer_Basic_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Warhammer - Basic";
		descriptionShort="A warhammer made from hard wood and some iron bracings.";
		model="Survivalists_RPWeapons\melee\blunt\srp_warhammers_basic.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_basic_co.paa"
		};
		rotationFlags=12;
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
    repairableWithKits[]={4,5,8};
		repairCosts[]={50,100,100};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_basic.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_basic.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_basic.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_basic.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_basic.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBat";
				range=2.2;
			};
			class Heavy
			{
				ammo="MeleeBat_Heavy";
				range=2.7;
			};
			class Sprint
			{
				ammo="MeleeBat_Heavy";
				range=3.7;
			};
		};
	};
  class SRP_WarHammer_Basic_Wood: SRP_WarHammer_Basic_ColorBase
  {
    scope=2;
		displayName="Warhammer - Basic Wood";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_basic_co.paa"
		};
  };

  class SRP_WarHammer_Brutal_ColorBase: SRP_WarHammer_Basic_ColorBase
	{
		scope=0;
		displayName="Warhammer - Brutal";
		descriptionShort="A warhammer made from hard wrought iron. Meant for crushing skulls and tearing down structures.";
		model="Survivalists_RPWeapons\melee\blunt\srp_warhammers_brutal.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_brutal_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_brutal.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_brutal.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_brutal.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_brutal.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_brutal.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_WarHammer_Brutal_Basic: SRP_WarHammer_Brutal_ColorBase
  {
    scope=2;
		displayName="Warhammer - Brutal";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_brutal_co.paa"
		};
  };

  class SRP_WarHammer_Engraved_ColorBase: SRP_WarHammer_Basic_ColorBase
	{
		scope=0;
		displayName="Warhammer - Engraved";
		descriptionShort="A warhammer made from hard wrought iron. Decorated with orante metals.";
		model="Survivalists_RPWeapons\melee\blunt\srp_warhammers_engraved.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_engraved_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_engraved.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_engraved.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_engraved.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_engraved.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_engraved.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_WarHammer_Engraved_Basic: SRP_WarHammer_Engraved_ColorBase
  {
    scope=2;
		displayName="Warhammer - Engraved";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_engraved_co.paa"
		};
  };

  class SRP_WarHammer_Heavy_ColorBase: SRP_WarHammer_Basic_ColorBase
	{
		scope=0;
		displayName="Warhammer - Heavy";
		descriptionShort="A heavy warhammer. A serious blunt force.";
		model="Survivalists_RPWeapons\melee\blunt\srp_warhammers_heavy.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_heavy_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_heavy.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_heavy.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_heavy.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_heavy.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_heavy.rvmat"}}
					};
				};
			};
		};
    class MeleeModes
		{
			class Default
			{
				ammo="MeleeBat";
				range=2.2;
			};
			class Heavy
			{
				ammo="MeleeBat_Heavy";
				range=2.7;
			};
			class Sprint
			{
				ammo="MeleeBat_Heavy";
				range=4.7;
			};
		};
	};
  class SRP_WarHammer_Heavy_Basic: SRP_WarHammer_Heavy_ColorBase
  {
    scope=2;
		displayName="Warhammer - Heavy";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_heavy_co.paa"
		};
  };

  class SRP_WarHammer_Mallet_ColorBase: SRP_WarHammer_Basic_ColorBase
	{
		scope=0;
		displayName="Warhammer - Mallet";
		descriptionShort="A heavy warhammer. Looks more like a mallet.";
		model="Survivalists_RPWeapons\melee\blunt\srp_warhammers_mallet.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_mallet_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_mallet.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_mallet.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_mallet.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_mallet.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_mallet.rvmat"}}
					};
				};
			};
		};
    class MeleeModes
		{
			class Default
			{
				ammo="MeleeBat";
				range=2.2;
			};
			class Heavy
			{
				ammo="MeleeBat_Heavy";
				range=2.7;
			};
			class Sprint
			{
				ammo="MeleeBat_Heavy";
				range=4.7;
			};
		};
	};
  class SRP_WarHammer_Mallet_Basic: SRP_WarHammer_Mallet_ColorBase
  {
    scope=2;
		displayName="Warhammer - Mallet";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_mallet_co.paa"
		};
  };

  class SRP_WarHammer_Simple_ColorBase: SRP_WarHammer_Basic_ColorBase
	{
		scope=0;
		displayName="Warhammer - Simple";
		descriptionShort="A heavy hammer. More for bashing skulls than nails.";
		model="Survivalists_RPWeapons\melee\blunt\srp_warhammers_shotput.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotput_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotput.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotput.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotput.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotput.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotput.rvmat"}}
					};
				};
			};
		};
    class MeleeModes
		{
			class Default
			{
				ammo="MeleeBat";
				range=2.2;
			};
			class Heavy
			{
				ammo="MeleeBat_Heavy";
				range=2.7;
			};
			class Sprint
			{
				ammo="MeleeBat_Heavy";
				range=3.8;
			};
		};
	};
  class SRP_WarHammer_Simple_Basic: SRP_WarHammer_Simple_ColorBase
  {
    scope=2;
		displayName="Warhammer - Simple";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotput_co.paa"
		};
  };

  class SRP_WarHammer_Long_ColorBase: SRP_WarHammer_Basic_ColorBase
	{
		scope=0;
		displayName="Warhammer - Long";
		descriptionShort="A heavy hammer. More for bashing skulls than nails. This one is longer than most others.";
		model="Survivalists_RPWeapons\melee\blunt\srp_warhammers_shotputlong.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputlong_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputlong.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputlong.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputlong.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputlong.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputlong.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_WarHammer_Long_Basic: SRP_WarHammer_Long_ColorBase
  {
    scope=2;
		displayName="Warhammer - Long";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputlong_co.paa"
		};
  };

  class SRP_WarHammer_Pike_ColorBase: SRP_WarHammer_Basic_ColorBase
	{
		scope=0;
		displayName="Warhammer - Pike";
		descriptionShort="A heavy hammer. More for bashing skulls than nails. A sharp pike rests at the edge.";
		model="Survivalists_RPWeapons\melee\blunt\srp_warhammers_shotputpike.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputpike_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputpike.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputpike.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputpike.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputpike.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputpike.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_WarHammer_Pike_Basic: SRP_WarHammer_Pike_ColorBase
  {
    scope=2;
		displayName="Warhammer - Pike";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputpike_co.paa"
		};
  };

  class SRP_WarHammer_Prong_ColorBase: SRP_WarHammer_Basic_ColorBase
	{
		scope=0;
		displayName="Warhammer - Prong";
		descriptionShort="A heavy hammer. More for bashing skulls than nails. Has pronged edges.";
		model="Survivalists_RPWeapons\melee\blunt\srp_warhammers_shotputprong.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputprong_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputprong.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputprong.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputprong.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputprong.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputprong.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_WarHammer_Prong_Basic: SRP_WarHammer_Prong_ColorBase
  {
    scope=2;
		displayName="Warhammer - Prong";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_shotputprong_co.paa"
		};
  };

  class SRP_WarHammer_SkullCrusher_ColorBase: SRP_WarHammer_Basic_ColorBase
	{
		scope=0;
		displayName="Warhammer - Skull Crusher";
		descriptionShort="A heavy hammer. More for bashing skulls than nails. Heavy round edge for exceptional skull crushing.";
		model="Survivalists_RPWeapons\melee\blunt\srp_warhammers_skullcrusher.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_skullcrusher_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_skullcrusher.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_skullcrusher.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_skullcrusher.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_skullcrusher.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_skullcrusher.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_WarHammer_SkullCrusher_Basic: SRP_WarHammer_SkullCrusher_ColorBase
  {
    scope=2;
		displayName="Warhammer - Skull Crusher";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_warhammer_skullcrusher_co.paa"
		};
  };

//====================================================================================== MACE
  class SRP_WeaponBluntKit_Kit: SRP_Weapon_KitBase //new
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
		model="Survivalists_RPWeapons\melee\blunt\srp_macerator.p3d";
		itemSize[]={2,4};
	};

  class SRP_WeaponBluntMacerator_Kit: SRP_Weapon_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Macerator";
		descriptionShort="A blunt weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",
      "Material_Shelter_Rope"      
		};
	};

//====================================================================================== STAFFS
  class SRP_WeaponStaff_Kit: SRP_Weapon_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Staff";
		descriptionShort="A staff weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",
      "Material_Shelter_Rope"      
		};
	};
  
  class SRP_Staff_Wooden_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Staff";
		descriptionShort="A long staff.";
		model="Survivalists_RPWeapons\melee\blunt\srp_staffwooden.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffwooden_co.paa"
		};
		rotationFlags=12;
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
    repairableWithKits[]={5,8};
		repairCosts[]={100,100};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffwooden.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffwooden.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffwooden.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffwooden.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffwooden.rvmat"}}
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
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffwooden_co.paa"
		};
  };

  class SRP_Staff_Skull_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Skull Staff";
		descriptionShort="A long staff with a skull at the top.";
		model="Survivalists_RPWeapons\melee\blunt\srp_staffskull.p3d";
		hiddenSelections[]=
		{
			"zbytek",
      "handle"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhead_co.paa",
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhandle_co.paa",      
		};
		rotationFlags=12;
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
    repairableWithKits[]={5,8};
		repairCosts[]={100,100};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhead.rvmat", "Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhandle.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhead.rvmat", "Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhandle.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhead.rvmat", "Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhandle.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhead.rvmat", "Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhandle.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhead.rvmat", "Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhandle.rvmat"}}
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
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhead_co.paa",
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffskullhandle_co.paa",      
		};
  };

  class SRP_Staff_Sun_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Sun Staff";
		descriptionShort="A long staff with a metal ornament at the top.";
		model="Survivalists_RPWeapons\melee\blunt\srp_staffsun.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffsun_co.paa",  
		};
		rotationFlags=12;
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
    repairableWithKits[]={5,8};
		repairCosts[]={100,100};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffsun.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffsun.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffsun.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffsun.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffsun.rvmat"}}
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
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffsun_co.paa"    
		};
  };

  class SRP_Staff_Copper_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Copper Staff";
		descriptionShort="A long staff made from copper.";
		model="Survivalists_RPWeapons\melee\blunt\srp_staffcopper.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffcopper_co.paa",  
		};
		rotationFlags=12;
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
    repairableWithKits[]={5,8};
		repairCosts[]={100,100};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffcopper.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffcopper.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffcopper.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffcopper.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffcopper.rvmat"}}
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
  class SRP_Staff_Copper_Basic: SRP_Staff_Copper_ColorBase
  {
    scope=2;
		displayName="Copper Staff - Basic";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffcopper_co.paa"    
		};
  };

  class SRP_Staff_Spear_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Spear Staff";
		descriptionShort="A long staff with a spear embedded.";
		model="Survivalists_RPWeapons\melee\blunt\srp_staffspear.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffspear_co.paa",  
		};
		rotationFlags=12;
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
    repairableWithKits[]={5,8};
		repairCosts[]={100,100};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffspear.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffspear.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffspear.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffspear.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffspear.rvmat"}}
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
  class SRP_Staff_Spear_Basic: SRP_Staff_Spear_ColorBase
  {
    scope=2;
		displayName="Spear Staff - Basic";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffspear_co.paa"    
		};
  };

  class SRP_Staff_Moon_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Moon Staff";
		descriptionShort="A long staff with a moon symbol on top.";
		model="Survivalists_RPWeapons\melee\blunt\srp_staffmoon.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffmoon_co.paa",  
		};
		rotationFlags=12;
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
    repairableWithKits[]={5,8};
		repairCosts[]={100,100};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffmoon.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffmoon.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffmoon.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffmoon.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blunt\data\srp_staffmoon.rvmat"}}
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
  class SRP_Staff_Moon_Basic: SRP_Staff_Moon_ColorBase
  {
    scope=2;
		displayName="Moon Staff - Basic";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_RPWeapons\melee\blunt\data\srp_staffmoon_co.paa"    
		};
  };
};