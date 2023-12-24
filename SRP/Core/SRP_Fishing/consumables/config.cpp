class CfgPatches
{
	class SRP_Core_Fishing_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Consumables"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;

  class SRP_Pearl_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Pearl";
		descriptionShort="A pearl cultivated in the mouth of a clam over its lifetime.";
		model="SRP\Core\SRP_Fishing\consumables\pearl.p3d";
		isMeleeWeapon=1;
		weight=2;
		absorbency=0;
		itemSize[]={1,1};
    itemsCargoSize[]={0,0};
    inventorySlot[]=
    {
      "SRP_ClamPearl"
    };
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"SRP\Core\SRP_Fishing\consumables\data\pearl_ca.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
						{1.0,	{	"SRP\Core\SRP_Fishing\consumables\data\pearl.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Fishing\consumables\data\pearl.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Fishing\consumables\data\pearl.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Fishing\consumables\data\pearl.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Fishing\consumables\data\pearl.rvmat"}}
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
  class SRP_Pearl_Default: SRP_Pearl_ColorBase
	{
		scope=2;
    displayName="Freshwater Pearl";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"SRP\Core\SRP_Fishing\consumables\data\pearl_ca.paa"};
	};
  class SRP_Pearl_Teal: SRP_Pearl_ColorBase // rare
	{
		scope=2;
    displayName="Mabe Pearl";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"SRP\Core\SRP_Fishing\consumables\data\pearl_teal_ca.paa"};
	};
  class SRP_Pearl_Silver: SRP_Pearl_ColorBase
	{
		scope=2;
    displayName="Tahitian Pearl";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"SRP\Core\SRP_Fishing\consumables\data\pearl_silver_ca.paa"};
	};
  class SRP_Pearl_Rose: SRP_Pearl_ColorBase
	{
		scope=2;
    displayName="Edison Pearl";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"SRP\Core\SRP_Fishing\consumables\data\pearl_rose_ca.paa"};
	};
  class SRP_Pearl_Gold: SRP_Pearl_ColorBase // rare
	{
		scope=2;
    displayName="South Sea Golden Pearl";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"SRP\Core\SRP_Fishing\consumables\data\pearl_gold_ca.paa"};
	};
};