class CfgPatches
{
	class Survivalists_Mods_Weapons_Melee_Blade
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee",
      "DZ_Weapons_Melee_Blade",
      "DZ_Weapons_Melee_Blunt"
		};
	};
};

class CfgAmmo
{
  class MeleeMachete;
  class MeleeKnife;
  class MeleeKnife_Heavy;

	class MeleeKatana: MeleeMachete
	{
		affectSkeleton=0.2;
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=25;
			};
			class Blood
			{
				damage=200;
			};
			class Shock
			{
				damage=15;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
	class MeleeKatana_Heavy: MeleeMachete
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=50;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=60;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
	class MeleeBritva: MeleeKnife
	{
		affectSkeleton=0.2;
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=25;
			};
			class Blood
			{
				damage=400;
			};
			class Shock
			{
				damage=25;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
	class MeleeBritva_Heavy: MeleeKnife_Heavy
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=95;
			};
			class Blood
			{
				damage=600;
			};
			class Shock
			{
				damage=40;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
};

class CfgVehicles
{
  class Inventory_Base;
  class Machete;
  class CombatKnife;
  class BaseballBat;
  
  class Hatchet: Inventory_Base
	{
		scope=2;
		inventorySlot[]=
		{
			"Hatchet",
			"no_car"
		};
	};

	class SRP_Katana: Machete  // BP1_Katana
	{
		scope=2;
		displayName="Katana";
		descriptionShort="A very overvalued edged weapon that enjoys special fame in narrow circles, as something epic cool and valuable, a couple even magical";
		model="Survivalists_Mods\weapons\melee\blade\Katana.p3d";
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		inventorySlot="blade";
		weight=1000;
		itemSize[]={1,6};
		openItemSpillRange[]={0,20};
		isMeleeWeapon=1;
		suicideAnim="sword";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\Katana_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\Katana.rvmat"
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeKatana";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeKatana_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeKatana_Heavy";
				range=3.3;
			};
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1,{"Survivalists_Mods\weapons\melee\blade\data\Katana.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\Katana.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\Katana_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\Katana_damage.rvmat"}},
            {0,{"Survivalists_Mods\weapons\melee\blade\data\Katana_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class SRP_Katana_Sheath: BaseballBat  // BP1_Katana_holster
	{
		scope=2;
		displayName="Katana Sheath";
		descriptionShort="Sheath for a katana";
		model="Survivalists_Mods\weapons\melee\blade\Katana_holster.p3d";
		itemBehaviour=2;
		vehicleClass="Clothing";
		RestrainUnlockType=1;
		repairableWithKits[]={5};
		repairCosts[]={30,25};
		inventorySlot="Melee";
		weight=1000;
		itemSize[]={1,6};
		attachments[]=
		{
			"blade"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\Saya_albedo.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\Katana_holst.rvmat"
		};
	};

	class SRP_CombatKnife_M9KBayonet: CombatKnife  // BP1_M9_Bayonet_K
	{
		scope=2;
		displayName="Bayonet Knife";
		descriptionShort="Used for the purpose of the bayonet marked by the owner.";
		model="BP1\weapons_melee\M9 Bayonet\m9k.p3d";
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		openItemSpillRange[]={0,20};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\Tex_m9_koldun.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\m9.rvmat"
		};
	};

	class SRP_CombatKnife_M9Bayonet: CombatKnife  // BP1_M9_Bayonet
	{
		scope=2;
		displayName="Bayonet Knife";
		descriptionShort="For a long time used for the purpose of the bayonet.";
		model="Survivalists_Mods\weapons\melee\blade\m9.p3d";
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		openItemSpillRange[]={0,20};
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\Tex_m9.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\m9.rvmat"
		};
	};

    // class SRP_HuntingKnife_Britva: HuntingKnife  // BP1_Britva missing model textures
	// {
	// 	scope=2;
	// 	displayName="Straight Razor";
	// 	descriptionShort="It is intended mainly to shave the face, legs, armpits and other hairy places";
	// 	model="BP1\weapons_melee\britva\britva.p3d";
	// 	inventorySlot="Knife";
	// 	repairableWithKits[]={5,4};
	// 	repairCosts[]={30,25};
	// 	rotationFlags=17;
	// 	autoQuickbar=1;
	// 	RestrainUnlockType=1;
	// 	canSkinBodies=1;
	// 	weight=100;
	// 	itemSize[]={1,2};
	// 	lootTag[]=
	// 	{
	// 		"Hunting",
	// 		"Camping"
	// 	};
	// 	lootCategory="Tools";
	// 	itemInfo[]=
	// 	{
	// 		"Knife"
	// 	};
	// 	openItemSpillRange[]={0,20};
	// 	isMeleeWeapon=1;
	// 	suicideAnim="onehanded";
	// 	class MeleeModes
	// 	{
	// 		class Default
	// 		{
	// 			ammo="MeleeBritva";
	// 			range=1.2;
	// 		};
	// 		class Heavy
	// 		{
	// 			ammo="MeleeKnife_Heavy";
	// 			range=1.2;
	// 		};
	// 		class Sprint
	// 		{
	// 			ammo="MeleeKnife_Heavy";
	// 			range=3.3;
	// 		};
	// 	};
	// };

};