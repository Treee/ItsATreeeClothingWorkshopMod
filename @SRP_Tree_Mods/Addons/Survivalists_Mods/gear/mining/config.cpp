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
		varStackMax=12;
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
};