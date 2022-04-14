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

  //====================================UNCUT GEM CUT (OBSOLETE DELETE AFTER RECIPE REMOVAL)
  class SRP_Mining_UnCutGem_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Base UnCut Gem Do Not Spawn";
		descriptionShort="Base UnCut Gem Do Not Spawn";
		model="Survivalists_Mods\gear\mining\srp_mining_gem.p3d";
		animClass="NoFireClass";
    color="base";
		weight=500;
		itemSize[]={1,2};
    canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=8;
		inventorySlot[]={};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\mining\data\miningcrystal.rvmat"
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
						{1.0,	{"Survivalists_Mods\gear\mining\data\miningcrystal.rvmat"}},
            {0.69999999,	{"Survivalists_Mods\gear\mining\data\miningcrystal.rvmat"}},
            {0.5,	{"Survivalists_Mods\gear\mining\data\miningcrystal_damage.rvmat"}},
            {0.30000001,	{"Survivalists_Mods\gear\mining\data\miningcrystal_damage.rvmat"}},
            {0.0,	{"Survivalists_Mods\gear\mining\data\miningcrystal_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Mining_UnCutGem_Aqua: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Aquamarine Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="aqua";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_aqua_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Amethyst: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Amethyst Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="amethyst";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Jade: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Jade Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="jade";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_green_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Amber: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Amber Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="amber";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_orange_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Quartz: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Quartz Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="quartz";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_purple_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Ruby: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Ruby Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="ruby";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_red_co.paa"
		};
	};
  class SRP_Mining_UnCutGem_Topaz: SRP_Mining_UnCutGem_ColorBase
	{
		scope=2;
		displayName="UnCut Topaz Crystal";
		descriptionShort="Raw uncut crystal. Separated from rock.";
    color="topaz";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\mining\data\miningcrystal_yellow_co.paa"
		};
	};


};
