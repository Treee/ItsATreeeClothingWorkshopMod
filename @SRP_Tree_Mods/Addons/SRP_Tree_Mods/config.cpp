class CfgMods
{
	class SRP_Tree_Mods
	{
		type = "mod";
		author = "ItsATreee";
		name = "SRP_Tree_Mods";
		dir = "SRP_Tree_Mods";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
        files[] = {"SRP_Tree_Mods/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"SRP_Tree_Mods/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]= {"SRP_Tree_Mods/scripts/5_mission"};
			};
		};
	};
};

class CfgPatches
{
	class SRP_Tree_Mods
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Scripts", "DZ_Characters"};
	};
};

class CfgVehicles
{
  class ManSuit_ColorBase;
  class SlacksPants_ColorBase;
  class WorkingGloves_ColorBase;
  class SurgicalGloves_ColorBase;
  class DressShoes_ColorBase;

  class SRP_Tree_ManSuit_Black: ManSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
    itemSize[]={3,3};
		itemsCargoSize[]={6,5};
    varWetMax=0.1;
    heatIsolation=0.8;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\Data\Man_suit_g_black_co.paa",
			"SRP_Tree_Mods\data\man_suit_black_tree_co.paa",
			"SRP_Tree_Mods\data\man_suit_black_tree_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
            {1,{"DZ\characters\shoes\Data\LeatherShoes.rvmat"}},
            {0.69999999,{"DZ\characters\shoes\Data\LeatherShoes.rvmat"}},
            {0.5,{"DZ\characters\shoes\Data\LeatherShoes_damage.rvmat"}},
            {0.30000001,{"DZ\characters\shoes\Data\LeatherShoes_damage.rvmat"}},
            {0,{"DZ\characters\shoes\Data\LeatherShoes_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health{damage=0.15000001;};
          class Blood{damage=0;};
          class Shock{damage=0.15000001;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Infected
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0.15000001;};
          class Blood{damage=0;};
          class Shock{damage=0.15000001;};
				};
			};
		};
    class Protection
		{
			biological=1;
		};
	};

  class SRP_Tree_SlacksPants_Black: SlacksPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
    itemSize[]={2,2};
    itemsCargoSize[]={6,5};
    varWetMax=0.1;
    heatIsolation=0.8;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\pants\data\Slacks_black_co.paa",
			"SRP_Tree_Mods\data\slacks_black_tree_co.paa",
			"SRP_Tree_Mods\data\slacks_black_tree_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
            {1,{"DZ\characters\shoes\Data\LeatherShoes.rvmat"}},
            {0.69999999,{"DZ\characters\shoes\Data\LeatherShoes.rvmat"}},
            {0.5,{"DZ\characters\shoes\Data\LeatherShoes_damage.rvmat"}},
            {0.30000001,{"DZ\characters\shoes\Data\LeatherShoes_damage.rvmat"}},
            {0,{"DZ\characters\shoes\Data\LeatherShoes_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health{damage=0.15000001;};
          class Blood{damage=0;};
          class Shock{damage=0.15000001;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Infected
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0.15000001;};
          class Blood{damage=0;};
          class Shock{damage=0.15000001;};
				};
			};
		};
    class Protection
		{
			biological=1;
		};
	};

  class SRP_Tree_WorkingGloves_Black: WorkingGloves_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
    itemSize[]={1,2};
    itemsCargoSize[]={2,1};
		varWetMax=0.10;
    heatIsolation=0.80;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\WorkingGloves_black_co.paa",
			"SRP_Tree_Mods\data\workingGloves_black_tree_co.paa",
			"SRP_Tree_Mods\data\workingGloves_black_tree_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
            {1,{"DZ\characters\shoes\Data\LeatherShoes.rvmat"}},
            {0.69999999,{"DZ\characters\shoes\Data\LeatherShoes.rvmat"}},
            {0.5,{"DZ\characters\shoes\Data\LeatherShoes_damage.rvmat"}},
            {0.30000001,{"DZ\characters\shoes\Data\LeatherShoes_damage.rvmat"}},
            {0,{"DZ\characters\shoes\Data\LeatherShoes_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health{damage=0.15000001;};
          class Blood{damage=0;};
          class Shock{damage=0.15000001;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Infected
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0.15000001;};
          class Blood{damage=0;};
          class Shock{damage=0.15000001;};
				};
			};
		};
    class Protection
		{
			biological=1;
		};
	};

  class SRP_Tree_DressShoes_Black: DressShoes_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
    itemSize[]={2,2};
    varWetMax=0.10;
    heatIsolation=1;
    itemsCargoSize[]={1,2};
    attachments[]=
		{
			"Knife"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\shoes\data\leathershoes_black_tree_co.paa",
			"SRP_Tree_Mods\data\leathershoes_black_tree_co.paa",
			"SRP_Tree_Mods\data\leathershoes_black_tree_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
            {1,{"DZ\characters\shoes\Data\LeatherShoes.rvmat"}},
            {0.69999999,{"DZ\characters\shoes\Data\LeatherShoes.rvmat"}},
            {0.5,{"DZ\characters\shoes\Data\LeatherShoes_damage.rvmat"}},
            {0.30000001,{"DZ\characters\shoes\Data\LeatherShoes_damage.rvmat"}},
            {0,{"DZ\characters\shoes\Data\LeatherShoes_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health{damage=0.15000001;};
          class Blood{damage=0;};
          class Shock{damage=0.15000001;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Infected
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0.15000001;};
          class Blood{damage=0;};
          class Shock{damage=0.15000001;};
				};
			};
		};
    class Protection
		{
			biological=1;
		};
	};
  
  class SRP_SurgicalGloves_Black: SurgicalGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SRP_Tree_Mods\data\surgical_gloves_black_tree_co.paa",
			"SRP_Tree_Mods\data\surgical_gloves_black_tree_co.paa",
			"SRP_Tree_Mods\data\surgical_gloves_black_tree_co.paa"
		};
	};
};