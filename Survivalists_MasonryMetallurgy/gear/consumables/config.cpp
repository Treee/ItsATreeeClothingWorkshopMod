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
		scope=0;
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
		scope=0;
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
//==================================== GEMS A
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

//==================================== GEMS B
  class SRP_Mining_Crystal_B_Red: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="b_red";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_b.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_red_ca.paa"
		};
  };
  class SRP_Mining_Crystal_B_Blue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="b_Blue";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_b.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_blue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_B_Green: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="b_Green";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_b.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Green_ca.paa"
		};
  };
  class SRP_Mining_Crystal_B_Purple: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="b_Purple";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_b.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Purple_ca.paa"
		};
  };
  class SRP_Mining_Crystal_B_LightBlue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="b_lightblue";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_b.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_lightblue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_B_Orange: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="b_orange";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_b.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_orange_ca.paa"
		};
  };
  class SRP_Mining_Crystal_B_Clear: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="b_clear";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_b.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_clear_ca.paa"
		};
  };
  class SRP_Mining_Crystal_B_Yellow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="b_yellow";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_b.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_yellow_ca.paa"
		};
  };
  class SRP_Mining_Crystal_B_Pink: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="b_pink";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_b.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_pink_ca.paa"
		};
  };
  class SRP_Mining_Crystal_B_Rainbow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="b_rainbow";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_b.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_rainbow_ca.paa"
		};
  };

//==================================== GEMS C
  class SRP_Mining_Crystal_C_Red: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="c_red";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_c.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_red_ca.paa"
		};
  };
  class SRP_Mining_Crystal_C_Blue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="c_Blue";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_c.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_blue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_C_Green: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="c_Green";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_c.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Green_ca.paa"
		};
  };
  class SRP_Mining_Crystal_C_Purple: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="c_Purple";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_c.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Purple_ca.paa"
		};
  };
  class SRP_Mining_Crystal_C_LightBlue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="c_lightblue";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_c.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_lightblue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_C_Orange: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="c_orange";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_c.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_orange_ca.paa"
		};
  };
  class SRP_Mining_Crystal_C_Clear: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="c_clear";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_c.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_clear_ca.paa"
		};
  };
  class SRP_Mining_Crystal_C_Yellow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="c_yellow";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_c.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_yellow_ca.paa"
		};
  };
  class SRP_Mining_Crystal_C_Pink: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="c_pink";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_c.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_pink_ca.paa"
		};
  };
  class SRP_Mining_Crystal_C_Rainbow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="c_rainbow";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_c.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_rainbow_ca.paa"
		};
  };

//==================================== GEMS D
  class SRP_Mining_Crystal_D_Red: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="d_red";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_d.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_red_ca.paa"
		};
  };
  class SRP_Mining_Crystal_D_Blue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="d_Blue";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_d.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_blue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_D_Green: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="d_Green";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_d.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Green_ca.paa"
		};
  };
  class SRP_Mining_Crystal_D_Purple: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="d_Purple";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_d.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Purple_ca.paa"
		};
  };
  class SRP_Mining_Crystal_D_LightBlue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="d_lightblue";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_d.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_lightblue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_D_Orange: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="d_orange";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_d.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_orange_ca.paa"
		};
  };
  class SRP_Mining_Crystal_D_Clear: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="d_clear";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_d.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_clear_ca.paa"
		};
  };
  class SRP_Mining_Crystal_D_Yellow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="d_yellow";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_d.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_yellow_ca.paa"
		};
  };
  class SRP_Mining_Crystal_D_Pink: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="d_pink";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_d.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_pink_ca.paa"
		};
  };
  class SRP_Mining_Crystal_D_Rainbow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="d_rainbow";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_d.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_rainbow_ca.paa"
		};
  };

//==================================== GEMS E
  class SRP_Mining_Crystal_E_Red: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="e_red";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_e.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_red_ca.paa"
		};
  };
  class SRP_Mining_Crystal_E_Blue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="e_Blue";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_e.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_blue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_E_Green: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="e_Green";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_e.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Green_ca.paa"
		};
  };
  class SRP_Mining_Crystal_E_Purple: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="e_Purple";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_e.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Purple_ca.paa"
		};
  };
  class SRP_Mining_Crystal_E_LightBlue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="e_lightblue";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_e.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_lightblue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_E_Orange: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="e_orange";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_e.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_orange_ca.paa"
		};
  };
  class SRP_Mining_Crystal_E_Clear: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="e_clear";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_e.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_clear_ca.paa"
		};
  };
  class SRP_Mining_Crystal_E_Yellow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="e_yellow";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_e.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_yellow_ca.paa"
		};
  };
  class SRP_Mining_Crystal_E_Pink: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="e_pink";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_e.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_pink_ca.paa"
		};
  };
  class SRP_Mining_Crystal_E_Rainbow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="e_rainbow";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_e.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_rainbow_ca.paa"
		};
  };

//==================================== GEMS F
  class SRP_Mining_Crystal_F_Red: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="f_red";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_f.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_red_ca.paa"
		};
  };
  class SRP_Mining_Crystal_F_Blue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="f_Blue";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_f.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_blue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_F_Green: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="f_Green";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_f.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Green_ca.paa"
		};
  };
  class SRP_Mining_Crystal_F_Purple: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="f_Purple";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_f.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Purple_ca.paa"
		};
  };
  class SRP_Mining_Crystal_F_LightBlue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="f_lightblue";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_f.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_lightblue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_F_Orange: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="f_orange";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_f.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_orange_ca.paa"
		};
  };
  class SRP_Mining_Crystal_F_Clear: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="f_clear";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_f.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_clear_ca.paa"
		};
  };
  class SRP_Mining_Crystal_F_Yellow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="f_yellow";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_f.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_yellow_ca.paa"
		};
  };
  class SRP_Mining_Crystal_F_Pink: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="f_pink";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_f.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_pink_ca.paa"
		};
  };
  class SRP_Mining_Crystal_F_Rainbow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="f_rainbow";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_f.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_rainbow_ca.paa"
		};
  };

//==================================== GEMS G
  class SRP_Mining_Crystal_G_Red: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="g_red";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_red_ca.paa"
		};
  };
  class SRP_Mining_Crystal_G_Blue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="g_Blue";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_blue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_G_Green: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="g_Green";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Green_ca.paa"
		};
  };
  class SRP_Mining_Crystal_G_Purple: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="g_Purple";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Purple_ca.paa"
		};
  };
  class SRP_Mining_Crystal_G_LightBlue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="g_lightblue";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_lightblue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_G_Orange: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="g_orange";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_orange_ca.paa"
		};
  };
  class SRP_Mining_Crystal_G_Clear: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="g_clear";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_clear_ca.paa"
		};
  };
  class SRP_Mining_Crystal_G_Yellow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="g_yellow";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_yellow_ca.paa"
		};
  };
  class SRP_Mining_Crystal_G_Pink: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="g_pink";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_pink_ca.paa"
		};
  };
  class SRP_Mining_Crystal_G_Rainbow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="g_rainbow";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_rainbow_ca.paa"
		};
  };

//==================================== GEMS H
  class SRP_Mining_Crystal_H_Red: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="h_red";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_h.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_red_ca.paa"
		};
  };
  class SRP_Mining_Crystal_H_Blue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="h_Blue";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_h.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_blue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_H_Green: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="h_Green";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_h.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Green_ca.paa"
		};
  };
  class SRP_Mining_Crystal_H_Purple: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="h_Purple";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_h.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_Purple_ca.paa"
		};
  };
  class SRP_Mining_Crystal_H_LightBlue: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="h_lightblue";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_h.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_lightblue_ca.paa"
		};
  };
  class SRP_Mining_Crystal_H_Orange: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="h_orange";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_h.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_orange_ca.paa"
		};
  };
  class SRP_Mining_Crystal_H_Clear: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="h_clear";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_h.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_clear_ca.paa"
		};
  };
  class SRP_Mining_Crystal_H_Yellow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="h_yellow";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_h.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_yellow_ca.paa"
		};
  };
  class SRP_Mining_Crystal_H_Pink: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="h_pink";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_h.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_pink_ca.paa"
		};
  };
  class SRP_Mining_Crystal_H_Rainbow: SRP_Mining_Crystal_ColorBase
	{
		scope=2;
    color="h_rainbow";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gem_h.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_rainbow_ca.paa"
		};
  };

//==================================== GEM CUT
  class SRP_Mining_CutGem_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Base Cut Gem Do Not Spawn";
		descriptionShort="Base Cut Gem Do Not Spawn";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_mining_gemcut.p3d";
		animClass="NoFireClass";
    color="base";
    physLayer="item_small";
		weight=500;
		itemSize[]={1,2};
		varQuantityDestroyOnMin=1;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		inventorySlot[]=
    {
      "SRP_RawCrystal1",
      "SRP_RawCrystal2"
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_clear_ca.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_damage.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_damage.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Ruby: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Exquisite Cut Gem - Ruby";
		descriptionShort="An exquisite gem refined from rough rock.";
    color="ruby";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_red_ca.paa"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Sapphire: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Exquisite Cut Gem - Sapphire";
		descriptionShort="An exquisite gem refined from rough rock.";
    color="sapphire";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_blue_ca.paa"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Jade: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Exquisite Cut Gem - Jade";
		descriptionShort="An exquisite gem refined from rough rock.";
    color="jade";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_green_ca.paa"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Amethyst: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Exquisite Cut Gem - Amethyst";
		descriptionShort="An exquisite gem refined from rough rock.";
    color="amethyst";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_purple_ca.paa"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Aqua: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Exquisite Cut Gem - Aquamarine";
		descriptionShort="An exquisite gem refined from rough rock.";
    color="aqua";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_lightblue_ca.paa"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Amber: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Exquisite Cut Gem - Citrine";
		descriptionShort="An exquisite gem refined from rough rock.";
    color="amber";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_orange_ca.paa"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Diamond: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Exquisite Cut Gem - Diamond";
		descriptionShort="An exquisite gem refined from rough rock.";
    color="diamond";
	};
  class SRP_Mining_CutGem_Topaz: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Exquisite Cut Gem - Topaz";
		descriptionShort="An exquisite gem refined from rough rock.";
    color="topaz";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_yellow_ca.paa"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Quartz: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Exquisite Cut Gem - Quartz";
		descriptionShort="An exquisite gem refined from rough rock.";
    color="quartz";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_pink_ca.paa"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_CutGem_Opal: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Exquisite Cut Gem - Opal";
		descriptionShort="An exquisite gem refined from rough rock.";
    color="quartz";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut_rainbow_ca.paa"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_miningcrystalcut.rvmat"}}
					};
				};
			};
		};
	};
  
//===================================== MELTED ORE
  class SRP_MetalBucket: Inventory_Base
	{
		scope=2;
		displayName="Bucket";
		descriptionShort="Holds stuff inside if you hold it upright.";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_bucket.p3d";
		weight=250;
		itemSize[]={3,3};
		absorbency=0.30000001;
    varTemperatureMax=1500;
		physLayer="item_small";
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_bucket.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_bucket.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_bucket_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_bucket_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_bucket_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MetalBucket_Lime: SRP_MetalBucket
	{
		scope=2;
    displayName="Bucket Covered With Lime";
		descriptionShort="Needs some mortar to seal in the greatness.";
    itemsCargoSize[]={0,0};
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_bucket_lime_co.paa"
    };
	};
  class SRP_MetalBucket_Mortar: SRP_MetalBucket
	{
		scope=2;
    displayName="Bucket Covered With Mortar";
		descriptionShort="Needs some heat to seal in the greatness.";
    itemsCargoSize[]={0,0};
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_bucket_mortar_co.paa"
    };
	};

  class SRP_ForgeCrucible_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Forge Crucible";
		descriptionShort="Able to withstand intense temperature.";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_forge_crucible.p3d";
		weight=440;
		itemSize[]={4,3};
    color="base";
    inventorySlot[]=
    {
      "SRP_Crucible"
    };
		itemsCargoSize[]={0,0};
		attachments[]={};
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
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_destruct.rvmat"}}
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
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_bucket.p3d";
		displayName="Empty Forge Crucible - Empty";
		descriptionShort="Use this to melt down raw ore.";
    color="empty";
    attachments[]=
    {
      "SRP_RawOre1",
      "SRP_RawOre2"
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_MasonryMetallurgy\gear\consumables\data\srp_bucket_crucible_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_copper_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_tin_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_bronze_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_iron_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_gold_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_platinum_co.paa"
		};
	};

//===================================== INGOT MOLDS
  class SRP_ForgeIngotMold_ColorBase: Inventory_Base
  {
		scope=0;
		displayName="Ingot Mold";
		descriptionShort="A mold suitable for cooling molten metal into ingots.";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_forge_ingotmold.p3d";
		animClass="NoFireClass";
    physLayer="item_small";
    color="base";
		weight=500;
		itemSize[]={3,1};
		itemsCargoSize[]={0,0};
		inventorySlot[]=
    {
      "SRP_IngotMold"
    };
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
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_damage.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_damage.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_destruct.rvmat"}}
					};
				};
			};
		};
  };
  class SRP_ForgeIngotMold_MetalEmpty: SRP_ForgeIngotMold_ColorBase
	{
		scope=2;
		displayName="Ingot Mold - Metal Starter";
    descriptionShort="A mold hammered from some metal.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_forge_ingotmold_empty.p3d";
    color="metalempty";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_bucket_co.paa"
		};
	};
  class SRP_ForgeIngotMold_Lime: SRP_ForgeIngotMold_ColorBase
	{
		scope=2;
		displayName="Ingot Mold - Lime Covered";
    descriptionShort="A mold covered with lime. Apply something hard to make solid.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_forge_ingotmold_empty.p3d";
    color="lime";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_bucket_lime_co.paa"
		};
	};
  class SRP_ForgeIngotMold_Mortar: SRP_ForgeIngotMold_ColorBase
	{
		scope=2;
		displayName="Ingot Mold - Mortar Covered";
    descriptionShort="A mold covered with mortar. Apply heat to harden.";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_forge_ingotmold_empty.p3d";
    color="mortar";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_bucket_mortar_co.paa"
		};
	};
  class SRP_ForgeIngotMold_Empty: SRP_ForgeIngotMold_ColorBase
	{
		scope=2;
		displayName="Ingot Mold - Empty";
    model="Survivalists_MasonryMetallurgy\gear\consumables\srp_forge_ingotmold_empty.p3d";
    color="empty";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_empty_co.paa"
		};
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_copper_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_tin_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_bronze_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_iron_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_gold_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_crucible_platinum_co.paa"
		};
	};

//===================================== INGOTS
  class SRP_ForgeIngot_ColorBase: Inventory_Base
  {
		scope=2;
		displayName="Metal Ingot";
		descriptionShort="A metal ingot that has been cooled into the shape of a bar.";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_forge_ingot.p3d";
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
    varTemperatureMax=500;
		inventorySlot[]=
    {
      "SRP_Ingot"
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_destruct.rvmat"}}
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_tin_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_iron_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_gold_co.paa"
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
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_platinum_co.paa"
		};
	};

//===================================== PLATES
  class SRP_ForgeIngotPlate_ColorBase: Inventory_Base
  {
		scope=2;
		displayName="Metal Plate";
		descriptionShort="A metal ingot that has been shaped into a metal plate.";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_forge_ingotplate.p3d";
		animClass="NoFireClass";
    physLayer="item_small";
    color="base";
		weight=500;
		itemSize[]={3,3};
    canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=20;
		varStackMax=10;    
    varTemperatureMax=500;
    inventorySlot[]=
    {
      "SRP_MetalPlate1",
      "SRP_MetalPlate2",
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_ForgeIngotPlate_Copper: SRP_ForgeIngotPlate_ColorBase
	{
		scope=2;
		displayName="Metal Plate - Copper";    
    color="copper";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa"
		};
	};
  class SRP_ForgeIngotPlate_Tin: SRP_ForgeIngotPlate_ColorBase
	{
		scope=2;
		displayName="Metal Plate - Tin";    
    color="tin";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_tin_co.paa"
		};
	};
  class SRP_ForgeIngotPlate_Bronze: SRP_ForgeIngotPlate_ColorBase
	{
		scope=2;
		displayName="Metal Plate - Bronze";    
    color="bronze";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa"
		};
	};
  class SRP_ForgeIngotPlate_Iron: SRP_ForgeIngotPlate_ColorBase
	{
		scope=2;
		displayName="Metal Plate - Iron";    
    color="iron";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_iron_co.paa"
		};
	};
  class SRP_ForgeIngotPlate_Gold: SRP_ForgeIngotPlate_ColorBase
	{
		scope=2;
		displayName="Metal Plate - Gold";    
    color="gold";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_gold_co.paa"
		};
	};
  class SRP_ForgeIngotPlate_Platinum: SRP_ForgeIngotPlate_ColorBase
	{
		scope=2;
		displayName="Metal Plate - Platinum";    
    color="platinum";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_platinum_co.paa"
		};
	};

//===================================== RODS
  class SRP_ForgeIngotRod_ColorBase: Inventory_Base
  {
		scope=2;
		displayName="Metal Rod";
		descriptionShort="A metal ingot that has been shaped into a metal rod.";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_forge_ingotrod.p3d";
		animClass="NoFireClass";
    physLayer="item_small";
    color="base";
		weight=500;
		itemSize[]={5,2};
    canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		varStackMax=5;    
    varTemperatureMax=500;
    inventorySlot[]=
    {
      "SRP_MetalRod1",
      "SRP_MetalRod2",
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_damage.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_destruct.rvmat"}}
					};
				};
			};
		};
  };
  class SRP_ForgeIngotRod_Copper: SRP_ForgeIngotRod_ColorBase
	{
		scope=2;
		displayName="Metal Rod - Copper";    
    color="copper";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa"
		};
	};
  class SRP_ForgeIngotRod_Tin: SRP_ForgeIngotRod_ColorBase
	{
		scope=2;
		displayName="Metal Rod - Tin";    
    color="tin";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_tin_co.paa"
		};
	};
  class SRP_ForgeIngotRod_Bronze: SRP_ForgeIngotRod_ColorBase
	{
		scope=2;
		displayName="Metal Rod - Bronze";    
    color="bronze";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_copper_co.paa"
		};
	};
  class SRP_ForgeIngotRod_Iron: SRP_ForgeIngotRod_ColorBase
	{
		scope=2;
		displayName="Metal Rod - Iron";    
    color="iron";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_iron_co.paa"
		};
	};
  class SRP_ForgeIngotRod_Gold: SRP_ForgeIngotRod_ColorBase
	{
		scope=2;
		displayName="Metal Rod - Gold";    
    color="gold";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_gold_co.paa"
		};
	};
  class SRP_ForgeIngotRod_Platinum: SRP_ForgeIngotRod_ColorBase
	{
		scope=2;
		displayName="Metal Rod - Platinum";    
    color="platinum";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_forge_ingot_platinum_co.paa"
		};
	};

//===================================== COINS
  class SRP_Coinage_ColorBase: Inventory_Base
  {
		scope=2;
		displayName="Metal Coin";
		descriptionShort="A metal coin minted from forged metal.";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_coinage_gold.p3d";
		animClass="NoFireClass";
    physLayer="item_small";
    color="base";
		weight=500;
		itemSize[]={1,1};
    canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
    varStackMax=99;
		varQuantityMax=500;
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_coinage.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_coinage.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_coinage_damage.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_coinage_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_Coinage_Platinum: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Platinum";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_coinage_platinum.p3d";
    color="platinum";
    inventorySlot[]={"SRP_CoinPlatinum"};
  };

  class SRP_Coinage_Iron: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Iron";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_coinage_iron.p3d";
    color="iron";
    inventorySlot[]={"SRP_CoinIron"};
  };

  class SRP_Coinage_Gold: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Gold";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_coinage_gold.p3d";
    color="gold";
    inventorySlot[]={"SRP_CoinGold"};
  };

  class SRP_Coinage_GoldWorn: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Gold Worn";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_coinage_goldworn.p3d";
    color="Goldworn";
  };

  class SRP_Coinage_Bronze: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Bronze";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_coinage_bronze.p3d";
    color="bronze";
    inventorySlot[]={"SRP_CoinBronze"};
  };

  class SRP_Coinage_Copper: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Copper";
		model="Survivalists_MasonryMetallurgy\gear\consumables\srp_coinage_copper.p3d";
    color="copper";
    inventorySlot[]={"SRP_CoinCopper"};
  };  
};