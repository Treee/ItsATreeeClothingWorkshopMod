class CfgPatches
{
	class Custom_Wardens
	{
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee",
      "ModularVestSystem"
		};
	};
};
class CfgVehicles
{
  class Sword;
  class Wardens_Sword: Sword
	{
		scope=2;
		displayName="Warden's Sword";
		descriptionShort="The sword of a worthy Warden.";
		model="\dz\weapons\melee\blade\medieval_sword.p3d";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
		{
			"Custom_Wardens\data\wardens_sword_co.paa",
		};
	};
  class MassGhillieTopWoodland;
  class Wardens_GhillieBushrag_Black: MassGhillieTopWoodland
	{
		displayName="Warden's Ghillie";
		descriptionShort="A carefully constructed ghillie. It is obvious time and effort was put into this.";
    hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Custom_Wardens\data\wardens_ghillie_co.paa",
			"Custom_Wardens\data\wardens_ghillie_co.paa",
			"Custom_Wardens\data\wardens_ghillie_co.paa",
		};
	};
  class MassGhillieHood_Woodland;
  class Wardens_MassGhillieHood_Black: MassGhillieHood_Woodland
  {
    displayName="Warden's Ghillie Hood";
		descriptionShort="A carefully constructed ghillie hood. It is obvious time and effort was put into this.";
    hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Custom_Wardens\data\wardens_ghillie_co.paa",
			"Custom_Wardens\data\wardens_ghillie_co.paa",
			"Custom_Wardens\data\wardens_ghillie_co.paa",
		};
  };
  // class MVS_WarriorHelmet_Black;
  // class Wardens_Mando_Helmet_Black: MVS_WarriorHelmet_Black
	// {
	// 	scope = 2;
	// 	displayName = "Wardens Warrior Helmet";
  //   descriptionShort="The helmet of a warrior";
	// 	hiddenSelectionsTextures[] = 
	// 	{
	// 		"Custom_Wardens\data\wardens_mando_helmet_co.paa",
	// 		"Custom_Wardens\data\wardens_mando_helmet_co.paa",
	// 		"Custom_Wardens\data\wardens_mando_helmet_co.paa",
	// 		"\ModularVestSystem\data\Helmets\Mandalorian_Helmet_co_Black.paa",
	// 		"\ModularVestSystem\data\Helmets\Mandalorian_Visor_co.paa"
	// 	};
	// };
};