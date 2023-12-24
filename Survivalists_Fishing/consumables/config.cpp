class CfgPatches
{
	class Survivalists_Fishing_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Consumables",
      "Survivalists_Fishing"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;

  class SRP_Pearl: Inventory_Base // old, remove eventually
	{
		scope=2;
		displayName="Pearl - Deprecated";
		descriptionShort="This item is deprecated. Speak to an admin to replace for a newer pearl SRP_Pearl_Default";
		model="Survivalists_Fishing\consumables\pearl.p3d";
		isMeleeWeapon=1;
		weight=2;
		absorbency=0;
		itemSize[]={1,1};
    itemsCargoSize[]={0,0};
    inventorySlot[]=
    {
      "SRP_ClamPearl"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Fishing\consumables\data\pearl.rvmat"}},
            {0.69999999,	{	"Survivalists_Fishing\consumables\data\pearl.rvmat"}},
            {0.5,	{	"Survivalists_Fishing\consumables\data\pearl.rvmat"}},
            {0.30000001,	{	"Survivalists_Fishing\consumables\data\pearl.rvmat"}},
            {0.0,	{	"Survivalists_Fishing\consumables\data\pearl.rvmat"}}
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
	};
};