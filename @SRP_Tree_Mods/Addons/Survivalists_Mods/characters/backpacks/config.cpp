class CfgPatches
{
	class Survivalists_Mods_Characters_Backpacks
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Characters",
      "DZ_Characters_Backpacks"
		};
	};
};
class CfgVehicles
{
  class Container_Base;
  class SRP_HuntingPouch_Small: Container_Base  // BP_HuntingCarman
	{
		scope=2;
		displayName="Small Pouch";
		descriptionShort="A small bag with convenient fittings, can be attatched to some bags instead of a canteen.";
		model="Survivalists_Mods\characters\backpacks\carman.p3d";
		weight=130;
		itemSize[]={2,3};
		itemsCargoSize[]={2,3};
		inventorySlot[]=
		{
			"Belt_Left",
			"carman1",
			"carman2"
		};
		allowOwnedCargoManipulation=1;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\huntingpack.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
            {1.01,{	"Survivalists_Mods\characters\backpacks\huntingpack.rvmat"}},
            {0.69999999,{	"Survivalists_Mods\characters\backpacks\huntingpack.rvmat"}},
            {0.5,{	"Survivalists_Mods\characters\backpacks\huntingpack_damaged.rvmat"}},
            {0.30000001,{	"Survivalists_Mods\characters\backpacks\huntingpack_damaged.rvmat"}},
            {0.0099999998,{	"Survivalists_Mods\characters\backpacks\huntingpack_destroyed.rvmat"}}
					};
				};
			};
		};
	};
};