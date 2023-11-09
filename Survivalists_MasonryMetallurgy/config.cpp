class CfgMods
{
	class Survivalists_MasonryMetallurgy
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_MasonryMetallurgy";
		dir = "Survivalists_MasonryMetallurgy";
	};
};
class CfgPatches
{
  class Survivalists_MasonryMetallurgy
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts"    
    };
  };
};
class CfgVehicles
{
  class Inventory_Base;
  
  class SRP_MasonryMetallurgy_KitBase: Inventory_Base
	{
		scope=0; //0 means cannot be directly spawned
		displayName="Masonry & Metallurgy Kit";
		descriptionShort="A wooden box that holds various items.";
		model="\DZ\gear\camping\wooden_case.p3d";
		itemsCargoSize[]={0,0};
		itemSize[]={7,5};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_small";
		rotationFlags=2;
		heavyItem=1;
		weight=3000;
		itemBehaviour=2;
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\consumables\data\srp_mining_gem_a_red_ca.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};

  class SRP_StoneForgeWorkbenchStarter_Kit: SRP_MasonryMetallurgy_KitBase
  {
		scope=0;
		displayName="Forge Starter Kit - Materials";
		descriptionShort="Holds materials waiting for work to be done.";
    attachments[]=
		{	
      "Stones",
			"Material_FPole_Stones",
      "Material_Mortar"
		};
  };

  class SRP_StoneForgeWorkbenchIntermediate_Kit: SRP_MasonryMetallurgy_KitBase
  {
		scope=0;
		displayName="Forge Starter Kit";
		descriptionShort="A good amount of work done towards the stone forge.";
    inventorySlot[]=
		{
			"SRP_ForgeStarterKit"
		};
    itemBehaviour=0;
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		varStackMax=1;
  };

  class SRP_StoneForgeWorkbenchFinisher_Kit: SRP_MasonryMetallurgy_KitBase
  {
		scope=0;
		displayName="A Stone Forge Foundation Kit";
		descriptionShort="Everything connects to this. Only one foundation is needed per forge. Combine with an oven to finish the forge.";
    attachments[]=
		{	
			"SRP_ForgeStarterKit",
      "Stones",
			"Material_FPole_Stones",
      "Material_Mortar"
		};
  };

};
