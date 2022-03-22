class CfgPatches
{
	class Survivalists_Mods_Gear_Cooking
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Cooking",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class Pot;
  // ----------------------  BASE GAME OVERRIDES
  class PortableGasLamp: Inventory_Base 
	{
		scope=2;
		itemSize[]={4,3};
    inventorySlot[]=
    {
      "SRP_Lantern"
    };
	};

  class SRP_PortableGasLamp: Inventory_Base
	{
		scope=2;
    displayName="Portable Gas Lamp";
    descriptionShort="This lamp emits only a small amount of light.";
		model="Survivalists_Mods\gear\cooking\srp_portablegaslamp.p3d";
		weight=330;
		itemSize[]={4,3};
		attachments[]=
		{
			"GasCanister"
		};
    inventorySlot[]=
    {
      "SRP_Lantern"
    };
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						{1,	{	"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp_damage.rvmat"}},
            {0,	{	"Survivalists_Mods\gear\cooking\data\srp_portablegaslamp_destruct.rvmat"}}
					};
				};
			};
		};
	};

};