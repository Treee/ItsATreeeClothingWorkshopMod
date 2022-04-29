class CfgPatches
{
	class Survivalists_Narcotics_Gear_Medical
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Medical",
      "Survivalists_Narcotics"
		};
	};
};
class CfgVehicles
{
  class ClearSyringe;
  class InjectionVial;
  class BloodTestKit;
  class Epinephrine;

  class SRP_Naloxone: Epinephrine
  {
    scope=2;
    displayName="Naloxone";    
		descriptionShort="Treats narcotic overdoes in an emergency situation.";
    model="\dz\gear\medical\Epinephrine.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
    inventorySlot[]={};
  };

  class SRP_DrugTestKit: BloodTestKit
  {
    scope=2;
    displayName="Drug Test Kit";    
		descriptionShort="Tests for drugs in the system";
  };

  //--------------------------------- CUSTOM SYRINGE INJECTIONS
	class SRP_FullSyringe_Base: ClearSyringe 
	{
		scope=0; // dont spawn
		displayName="dont spawn, base class for a full syringe";
		descriptionShort="dont spawn this";
		varLiquidTypeInit=4;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\gear\medical\data\Syringe.rvmat"}},
            {0.69999999,{"DZ\gear\medical\data\Syringe.rvmat"}},
            {0.5,{"DZ\gear\medical\data\Syringe_damage.rvmat"}},
            {0.30000001,{"DZ\gear\medical\data\Syringe_damage.rvmat"}},
            {0,{"DZ\gear\medical\data\Syringe_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_FullSyringe_Kuru: SRP_FullSyringe_Base 
	{
		scope=2;
		displayName="Kuru Injector";
		descriptionShort="A full syringe of clear liquid. Only the person who filled the syringe knows exactly what is inside.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};
  
	class SRP_FullSyringe_KuruCure: SRP_FullSyringe_Base
	{
		scope=2;
		displayName="Kuru Virus Cure";
		descriptionShort="A full syringe of kuru cure. Cross your fingers this was manufactured properly.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

  class SRP_FullSyringe_Salmonella: SRP_FullSyringe_Base 
	{
		scope=2;
		displayName="Salmonella Injector";
		descriptionShort="A full syringe of clear liquid. Only the person who filled the syringe knows exactly what is inside.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
  };

	class SRP_FullSyringe_SalmonellaCure: SRP_FullSyringe_Base 
	{
		scope=2;
		displayName="Salmonella Cure";
		descriptionShort="A full syringe of salmonella cure. Cross your fingers this was manufactured properly.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

	class SRP_FullSyringe_Influenza: SRP_FullSyringe_Base 
	{
		scope=2;
		displayName="Influenza Injector";
		descriptionShort="A full syringe of clear liquid. Only the person who filled the syringe knows exactly what is inside.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
  };

	class SRP_FullSyringe_InfluenzaCure: SRP_FullSyringe_Base 
	{
		scope=2;
		displayName="Influenza Cure";
		descriptionShort="A full syringe of influenza cure. Cross your fingers this was manufactured properly.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

  class SRP_FullSyringe_Cholera: SRP_FullSyringe_Base 
	{
		scope=2;
		displayName="Cholera Injector";
		descriptionShort="A full syringe of clear liquid. Only the person who filled the syringe knows exactly what is inside.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
  };

	class SRP_FullSyringe_CholeraCure: SRP_FullSyringe_Base 
	{
		scope=2;
		displayName="Cholera Cure";
		descriptionShort="A full syringe of cholera cure. Cross your fingers this was manufactured properly.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

  class SRP_FullSyringe_Ceftazidim: SRP_FullSyringe_Base 
	{
		scope=2;
		displayName="Ceftazidim Injector";
		descriptionShort="A full syringe of Ceftazidim. Cross your fingers this was manufactured properly.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

  class SRP_FullSyringe_Ampicillin: SRP_FullSyringe_Base 
	{
		scope=2;
		displayName="Ampicillin Injector";
		descriptionShort="A full syringe of Ampicillin. Cross your fingers this was manufactured properly.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

  class SRP_InjectionVial_Base: InjectionVial 
	{
		scope=0;// base class
		displayName="do not spawn. base class";
		descriptionShort="do not spawn. base class";
		stackedUnit="ml";
    canBeSplit=0;
		quantityBar=1;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=100;
		varLiquidTypeInit=4;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_kuru_co.paa"
		};
	};

	class SRP_InjectionVial_Kuru: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Kuru Virus Vial";
		descriptionShort="The liquid containing the pathogen of the disease Kuru.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_kuru_co.paa"
		};
	};
	class SRP_InjectionVial_KuruCure: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Kuru Cure Flask";
		descriptionShort="The liquid containing the cure for the disease Kuru.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_kurucure_co.paa"
		};
	};

	class SRP_InjectionVial_Salmonella: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Salmonella Bacteria Vial";
		descriptionShort="The liquid containing the bacteria of the disease Salmonella.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_salmonella_co.paa"
		};
	};
	class SRP_InjectionVial_SalmonellaCure: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Salmonella Cure Flask";
		descriptionShort="The liquid containing the cure for Salmonella.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_salmonellacure_co.paa"
		};
	};

  class SRP_InjectionVial_Influenza: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Influenza Virus Vial";
		descriptionShort="The liquid containing the influenza virus.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_influenza_co.paa"
		};
	};
	class SRP_InjectionVial_InfluenzaCure: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Influenza Cure Flask";
		descriptionShort="The liquid containing the cure for Influenza.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_influenzacure_co.paa"
		};
	};

  class SRP_InjectionVial_Cholera: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Cholera Virus Flask";
		descriptionShort="The liquid containing the cholera virus.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_cholera_co.paa"
		};
	};
	class SRP_InjectionVial_CholeraCure: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Cholera Cure Flask";
		descriptionShort="The liquid containing the cure for Cholera.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_choleracure_co.paa"
		};
	};

  class SRP_InjectionVial_StomachVirus: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Misc Viral Flask";
		descriptionShort="Some nasty stuff in here.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_charcoal_co.paa"
		};
	};

  class SRP_InjectionVial_Ceftazidim: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Ceftazidim Flask";
		descriptionShort="Ceftazidime is an antibacterial drug from the group of third-generation cephalosporins, has a broad spectrum and is bactericidal, disrupts the synthesis of the cell wall of microorganisms, and is resistant to most beta-lactamases.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_charcoalcure_co.paa"
		};
	};

	class SRP_InjectionVial_BacterialInfection: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Bacteria Flask";
		descriptionShort="Some nasty stuff in here.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_antibiotics_co.paa"
		};
	};
  class SRP_InjectionVial_Ampicillin: SRP_InjectionVial_Base 
	{
		scope=2;
		displayName="Ampicillin + Sulbactam";
		descriptionShort="The germicidal antibiotic of a wide spectrum of action, is acid resistant. Blocks the synthesis of peptidoglycan cell walls of microorganisms. The active principle is ampicillin, a broad spectrum semisynthetic penicillin antibiotic that is broken down by beta-lactamases. The second component (sulbactam), not possessing antibacterial activity, inhibits beta-lactamase and in this connection, ampicillin acquires the ability to act on resistant (beta-lactamase-producing) strains.";
		varQuantityInit=5;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Narcotics\gear\medical\data\srp_injectionvial_antibioticscure_co.paa"
		};
	};

};