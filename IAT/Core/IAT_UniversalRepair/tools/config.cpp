class CfgPatches
{
	class IAT_UniversalRepair_Tools
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class IAT_UniversalRepair_Epoxy: Inventory_Base
	{
		scope=2;
		debug_ItemCategory=2;
		displayName="Universal Repair Tool";
		descriptionShort="A special tool that repairs anything.";
		model="\dz\gear\tools\epoxy_putty.p3d";
		animClass="Knife";
		rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100000;
		varQuantityMin=0;
		varQuantityMax=100000;
		weight=20;
		weightPerQuantityUnit=2;
		itemSize[]={1,2};
		repairKitType[]={1,2,3,4,5,6,7,8};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{						
						{1,{"DZ\gear\tools\data\epoxy_putty.rvmat"}},						
						{0.69999999,{"DZ\gear\tools\data\epoxy_putty.rvmat"}},						
						{0.5,{"DZ\gear\tools\data\epoxy_putty_damage.rvmat"}},						
						{0.30000001,{"DZ\gear\tools\data\epoxy_putty_damage.rvmat"}},						
						{0,{"DZ\gear\tools\data\epoxy_putty_destruct.rvmat"}}
					};
				};
			};
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class Stitch
				{
					soundSet="StitchUpSelf_SoundSet";
					id=201;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="sewingkit_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};