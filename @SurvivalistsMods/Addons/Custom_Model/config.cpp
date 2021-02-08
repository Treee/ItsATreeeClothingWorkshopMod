class CfgPatches
{
	class Custom_Model
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Characters"};
	};
};
class CfgVehicles
{
  class Clothing;

  class SRP_KnightHelmet_Colorbase: Clothing
	{
		scope=2;
		displayName="Knight Helm";
		descriptionShort="A battle ready helmet for a knight.";
		model="Custom_Model\data\knighthelm-test.p3d";
		repairableWithKits[]={5,8}; //Duct tape 5, Epoxy 8
		repairCosts[]={50};
		inventorySlot[]={"Headgear"};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]={"Clothing","Headgear"};
		weight=1100;
		itemSize[]={4,4};
		color="Default";
		heatIsolation=0.80000001;
		noMask=1;
    noEyewear=1;
		headSelectionsToHide[]=
		{
			"Clipping_grathelm"
		};
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Custom_Model\data\PUT_YOUR_TEXTURE_FILE_HERE.paa"
		};
		class ClothingTypes
		{
			male="Custom_Model\data\knighthelm-test.p3d";
			female="Custom_Model\data\knighthelm-test.p3d";
		};
    class Protection
		{
			biological=0.25;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500; // very OP (original 50)
					healthLevels[]=
					{						
						{	1, {"Custom_Model\data\knighthelm.rvmat" } },
						{	0.69999999,	{ "Custom_Model\data\knighthelm.rvmat" } },
						{ 0.5, { "Custom_Model\data\knighthelm.rvmat" } },						
						{	0.30000001,	{	"Custom_Model\data\knighthelm.rvmat"	}	},					
						{ 0, { "Custom_Model\data\knighthelm.rvmat" } }
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="GreatHelm_drop_SoundSet";
					id=898;
				};
			};
    };
	};
};