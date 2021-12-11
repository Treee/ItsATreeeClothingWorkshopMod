class CfgPatches
{
	class BW_Kits
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Spraycan_ColorBase;
	class BW_Gunkit_base: Inventory_Base
	{
		scope=0;
		model="\dz\gear\tools\cleaning_kit_wood.p3d";
		animClass="Knife";
		rotationFlags=17;
		weight=900;
		itemSize[]={2,3};
		fragility=0.0099999998;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
	};
	class BW_Pistolkit: BW_Gunkit_base
	{
		scope=2;
		displayName="Pistol Kit";
		descriptionShort="Box of assorted pistol parts used with other materials to create a functional pistol.";
		stackedUnit="percentage";
		quantityBar=1;
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		hiddenselections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Bill_Mods\data\Gunsmith_Items\Kits\BW_Pistol_Kit_co.paa"};
	};
	class BW_Shotgunkit: BW_Gunkit_base
	{
		scope=2;
		displayName="Shotgun Kit";
		descriptionShort="Box of assorted shotgun parts used with other materials to create a functional shotgun.";
		stackedUnit="percentage";
		quantityBar=2;
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=2;		
		hiddenselections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Bill_Mods\data\Gunsmith_Items\Kits\BW_Shotgun_Kit_co.paa"};
	};
	class BW_Riflekit: BW_Gunkit_base
	{
		scope=2;
		displayName="Rifle Kit";
		descriptionShort="Box of assorted rifle parts used with other materials to create a functional rifle.";
		stackedUnit="percentage";
		quantityBar=6;
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=6;		
		hiddenselections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Bill_Mods\data\Gunsmith_Items\Kits\BW_Rifle_Kit_co.paa"};
	};
	class BW_Gunsmith_Spray: Spraycan_ColorBase
	{
		scope=2;
		displayName="Gunsmith Special Spraycan";
		descriptionShort="This can was formulated by Bill, Hands off unless you know what you are doing.";
		hiddenSelectionsTextures[]={"Bill_Mods\data\Gunsmith_Items\Kits\Gunsmith_Paint_co.paa"};
	};
};