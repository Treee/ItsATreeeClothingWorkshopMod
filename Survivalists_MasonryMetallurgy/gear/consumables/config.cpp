class CfgPatches
{
	class Survivalists_MasonryMetallurgy_Gear_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
      "Survivalists_MasonryMetallurgy"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;

//==================================== STONE CHUNK WITH ORE
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\stone_copper_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\stone_iron_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\stone_tin_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\stone_gold_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\stone_platinum_co.paa"
		};
	};

//==================================== CHRUSHED STONE AKA PURE ORE
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
      "SRP_RawOre1",
      "SRP_RawOre2"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\stone_copper_raw_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\stone_iron_raw_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\stone_tin_raw_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\stone_gold_raw_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\stone_platinum_raw_co.paa"
		};
	};
//==================================== GEMS BEST -> WORST
  class SRP_Mining_Crystal_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="SRP_Mining_Crystal_ColorBase Do Not Spawn";
		descriptionShort="SRP_Mining_Crystal_ColorBase Do Not Spawn";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_a.p3d";
		animClass="NoFireClass";
    color="base";
		weight=500;
		itemSize[]={1,2};
    canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		inventorySlot[]={};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_red_ca.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a.rvmat"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_damage.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_damage.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_Crystal_A_Red: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="a_red";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_a.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_red_ca.paa"
		};
  };
  class SRP_Mining_Crystal_A_Blue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="a_Blue";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_a.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_blue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_A_Green: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="a_Green";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_a.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Green_ca.paa"
		};
  };
  class SRP_Mining_Crystal_A_Purple: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="a_Purple";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_a.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Purple_ca.paa"
		};
  };
  class SRP_Mining_Crystal_A_LightBlue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="a_lightblue";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_a.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_lightblue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_A_Orange: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="a_orange";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_a.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_orange_ca.paa"
		};
  };
  class SRP_Mining_Crystal_A_Clear: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="a_clear";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_a.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_clear_ca.paa"
		};
  };
  class SRP_Mining_Crystal_A_Yellow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="a_yellow";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_a.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_yellow_ca.paa"
		};
  };
  class SRP_Mining_Crystal_A_Pink: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="a_pink";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_a.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_pink_ca.paa"
		};
  };
  class SRP_Mining_Crystal_A_Rainbow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="a_rainbow";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_a.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_rainbow_ca.paa"
		};
  };
};