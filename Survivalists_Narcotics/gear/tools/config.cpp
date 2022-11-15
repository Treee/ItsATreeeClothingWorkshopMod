class CfgPatches
{
	class Survivalists_Narcotics_Gear_Tools
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools",
      "Survivalists_Narcotics"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class SRP_SmokingPipe: Inventory_Base
  {
		scope=2;
    displayName="Smoking Pipe";
		descriptionShort="A well preserved smoking pipe of the old world.";
    model="Survivalists_Narcotics\gear\tools\smokingpipe.p3d";
    itemSize[]={1,2};
    color="SmokingPipe";
    inventorySlot[]=
    {
      "Mask"
    };
    varQuantityInit=30;
		varQuantityMin=0;
		varQuantityMax=30;
    varTemperatureMax=100;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
            {1,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.69999999,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.5,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0.30000001,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}
			    };
				};
			};
    };
    class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPaper_SoundSet";
					id=797;
				};
			};
		};
    class ClothingTypes
		{
			male="Survivalists_Narcotics\gear\tools\smokingpipe_m.p3d";
			female="Survivalists_Narcotics\gear\tools\smokingpipe_m.p3d";
		};
  };
};