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

  // scope 0 to remove
  class SRP_MetalBucket: Inventory_Base
	{
		scope=0;
		displayName="Bucket";
		descriptionShort="Holds stuff inside if you hold it upright.";
		model="\dz\gear\consumables\Stone.p3d";
		weight=250;
		itemSize[]={3,3};
    absorbency=0;
    varWetMax=0;
    varTemperatureMax=1500;
		physLayer="item_small";
	};

//==================================== GEMS A
  class SRP_Mining_Crystal_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="SRP_Mining_Crystal_ColorBase Do Not Spawn";
		descriptionShort="SRP_Mining_Crystal_ColorBase Do Not Spawn";
		model="\dz\gear\consumables\Stone.p3d";
		animClass="NoFireClass";
    color="base";
		weight=500;
		itemSize[]={1,2};
    canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
    absorbency=0;
    varWetMax=0;
		inventorySlot[]=
    {
      "SRP_DisplayHook1",
      "SRP_DisplayHook2",
      "SRP_DisplayHook3",
      "SRP_DisplayHook4",
      "SRP_DisplayHook5",
      "SRP_DisplayHook6",
      "SRP_DisplayHook7",
      "SRP_DisplayHook8",
      "SRP_DisplayHook9",
      "SRP_DisplayHook10",
      "SRP_DisplayHook11",
      "SRP_DisplayHook12",
      "SRP_DisplayHook13",
      "SRP_DisplayHook14",
      "SRP_DisplayHook15",
      "SRP_DisplayHook16",
      "SRP_DisplayHook17",
      "SRP_DisplayHook18",
      "SRP_DisplayHook19",
      "SRP_DisplayHook20",
      "SRP_PreciousStone1",
      "SRP_PreciousStone2",
      "SRP_PreciousStone3",
      "SRP_PreciousStone4",
      "SRP_PreciousStone5",
    };
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
    color="ruby";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="sapphire";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="jade";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amethyst";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="aqua";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amber";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="diamond";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="topaz";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="quartz";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="opal";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="ruby";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="sapphire";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="jade";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amethyst";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="aqua";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amber";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="diamond";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="topaz";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="quartz";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="opal";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="ruby";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="sapphire";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="jade";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amethyst";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="aqua";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amber";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="diamond";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="topaz";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="quartz";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="opal";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="ruby";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="sapphire";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="jade";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amethyst";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="aqua";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amber";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="diamond";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="topaz";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="quartz";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="opal";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="ruby";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="sapphire";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="jade";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amethyst";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="aqua";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amber";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="diamond";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="topaz";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="quartz";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="opal";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="ruby";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="sapphire";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="jade";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amethyst";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="aqua";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amber";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="diamond";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="topaz";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="quartz";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="opal";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="ruby";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="sapphire";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="jade";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amethyst";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="aqua";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amber";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="diamond";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="topaz";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="quartz";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="opal";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="ruby";
		displayName="Exquisite Gem - Ruby";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="sapphire";
		displayName="Exquisite Gem - Sapphire";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="jade";
		displayName="Exquisite Gem - Emerald";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amethyst";
		displayName="Exquisite Gem - Amethyst";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="aqua";
		displayName="Exquisite Gem - Aquamarine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="amber";
		displayName="Exquisite Gem - Citrine";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="diamond";
		displayName="Exquisite Gem - Diamond";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="topaz";
		displayName="Exquisite Gem - Topaz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="quartz";
		displayName="Exquisite Gem - Quartz";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
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
    color="opal";
		displayName="Exquisite Gem - Opal";
		descriptionShort="An exquisite gem pulled from the depths of the earth.";
    model="\dz\gear\consumables\Stone.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_rainbow_ca.paa"
		};
  };


  


//===================================== COINS
  class SRP_Coinage_ColorBase: Inventory_Base
  {
		scope=0;
		displayName="Metal Coin";
		descriptionShort="A metal coin minted from forged metal.";
		model="\dz\gear\consumables\Stone.p3d";
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
		absorbency=0;
    varWetMax=0;
    varTemperatureMax=500;
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
						{1.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_brassblank.rvmat"}},
            {0.69999999,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_brassblank.rvmat"}},
            {0.5,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_brassblank_damage.rvmat"}},
            {0.30000001,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_brassblank_damage.rvmat"}},
            {0.0,	{"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_brassblank_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_Coinage_Platinum: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Platinum";
		model="\dz\gear\consumables\Stone.p3d";
    color="platinum";
    inventorySlot[]={"SRP_CoinPlatinum"};
  };

  class SRP_Coinage_Iron: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Iron";
		model="\dz\gear\consumables\Stone.p3d";
    color="iron";
    inventorySlot[]={"SRP_CoinIron"};
  };

  class SRP_Coinage_Gold: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Gold";
		model="\dz\gear\consumables\Stone.p3d";
    color="gold";
    inventorySlot[]={"SRP_CoinGold"};
  };

  class SRP_Coinage_GoldWorn: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Gold Worn";
		model="\dz\gear\consumables\Stone.p3d";
    color="Goldworn";
  };

  class SRP_Coinage_Bronze: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Bronze";
		model="\dz\gear\consumables\Stone.p3d";
    color="bronze";
    inventorySlot[]={"SRP_CoinBronze"};
  };

  class SRP_Coinage_Copper: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Metal Coin - Copper";
		model="\dz\gear\consumables\Stone.p3d";
    color="copper";
    inventorySlot[]={"SRP_CoinCopper"};
  };  
  class SRP_Coinage_BrassBlank: SRP_Coinage_ColorBase
  {
		scope=2;
		displayName="Brass Casing Blank";
		descriptionShort="A brass cartridge blank.";
		model="\dz\gear\consumables\Stone.p3d";
    color="brassblank";
    varStackMax=25;
    varQuantityMax=50;
    inventorySlot[]={"SRP_Coin"};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_brassblank_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_brassblank.rvmat"
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
};