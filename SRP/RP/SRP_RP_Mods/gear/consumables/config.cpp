class CfgPatches
{
	class SRP_RP_Mods_Gear_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
      "SRP_Core_Mining_Gear_Consumables"
		};
	};
};
class CfgVehicles
{
  class SRP_Mining_CutGem_ColorBase;

//==================================== GEM CUT
  class SRP_Mining_CutGem_AltarShard: SRP_Mining_CutGem_ColorBase
	{
		scope=2;
		displayName="Shard of the Artifact";
		descriptionShort="A sliver of 'The Artifact' it resonates with a strange energy. Holding this gives you a headache.";
    color="AltarShard";
    physLayer="item_small";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "SRP\RP\SRP_RP_Mods\gear\consumables\data\srp_miningcrystalcut_rainbow_ca.paa"
    };
	};
};