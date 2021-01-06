class CfgPatches
{
	class IAT_FacePaints
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Data"
		};
    author = "ItsATreee";
		name = "ItsATreee Face Paints";
		url = "https://github.com/Treee/ItsATreeeDayZWorkshopMods";
	};
};

class CfgMods
{
	class FacePaints
	{	
		type = "mod";
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"FacePaints/scripts/4_world"};
			};
		}
	};
};

class CfgFaces
{
  class Default;
  class SurvivorFemale_Base;

  class IAT_FP_FemaleEvaHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="FacePaints\data\eva\facepaint_hhl_f_eva_body_co.paa";
			head="IAT_FP_FemaleEvaHead";
			material="FacePaints\data\eva\facepaint_hhl_f_eva_body.rvmat";
		};
		class IAT_FP_FemaleEvaHead: Default
		{
		};
	};
  class IAT_FP_FemaleFridaHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="FacePaints\data\frida\facepaint_hhl_f_frida_body_co.paa";
			head="IAT_FP_FemaleFridaHead";
			material="FacePaints\data\frida\facepaint_hhl_f_frida_body.rvmat";
		};
		class IAT_FP_FemaleFridaHead: Default
		{
		};
	};
  class IAT_FP_FemaleGabiHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="FacePaints\data\gabi\facepaint_hhl_f_gabi_body_co.paa";
			head="IAT_FP_FemaleGabiHead";
			material="FacePaints\data\gabi\facepaint_hhl_f_gabi_body.rvmat";
		};
		class IAT_FP_FemaleGabiHead: Default
		{
		};
	};
  class IAT_FP_FemaleHelgaHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="FacePaints\data\helga\facepaint_hhl_f_helga_body_co.paa";
			head="IAT_FP_FemaleHelgaHead";
			material="FacePaints\data\helga\facepaint_hhl_f_helga_body.rvmat";
		};
		class IAT_FP_FemaleHelgaHead: Default
		{
		};
	};
  class IAT_FP_FemaleIrenaHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="FacePaints\data\irena\facepaint_hhl_f_irena_body_co.paa";
			head="IAT_FP_FemaleIrenaHead";
			material="FacePaints\data\irena\facepaint_hhl_f_irena_body.rvmat";
		};
		class IAT_FP_FemaleIrenaHead: Default
		{
		};
	};
  class IAT_FP_FemaleJudyHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="FacePaints\data\judy\facepaint_hhl_f_judy_body_co.paa";
			head="IAT_FP_FemaleJudyHead";
			material="FacePaints\data\judy\facepaint_hhl_f_judy_body.rvmat";
		};
		class IAT_FP_FemaleJudyHead: Default
		{
		};
	};
  class IAT_FP_FemaleKeikoHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="FacePaints\data\keiko\facepaint_hhl_f_keiko_body_co.paa";
			head="IAT_FP_FemaleKeikoHead";
			material="FacePaints\data\keiko\facepaint_hhl_f_keiko_body.rvmat";
		};
		class IAT_FP_FemaleKeikoHead: Default
		{
		};
	};
  class IAT_FP_FemaleLindaHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="FacePaints\data\linda\facepaint_hhl_f_linda_body_co.paa";
			head="IAT_FP_FemaleLindaHead";
			material="FacePaints\data\linda\facepaint_hhl_f_linda_body.rvmat";
		};
		class IAT_FP_FemaleLindaHead: Default
		{
		};
	};
  class IAT_FP_FemaleMariaHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="FacePaints\data\maria\facepaint_hhl_f_maria_body_co.paa";
			head="IAT_FP_FemaleMariaHead";
			material="FacePaints\data\maria\facepaint_hhl_f_maria_body.rvmat";
		};
		class IAT_FP_FemaleMariaHead: Default
		{
		};
	};
  class IAT_FP_FemaleNaomiHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="FacePaints\data\naomi\facepaint_hhl_f_naomi_body_co.paa";
			head="IAT_FP_FemaleNaomiHead";
			material="FacePaints\data\naomi\facepaint_hhl_f_naomi_body.rvmat";
		};
		class IAT_FP_FemaleNaomiHead: Default
		{
		};
	};
};

class CfgHeads
{
  class FemaleEvaHead;
  class FemaleFridaHead;
  class FemaleGabiHead;
  class FemaleHelgaHead;
  class FemaleIrenaHead;
  class FemaleJudyHead;
  class FemaleKeikoHead;
  class FemaleLindaHead;
  class FemaleMariaHead;
  class FemaleNaomiHead;

  class IAT_FP_FemaleEvaHead: FemaleEvaHead
	{
		model="\dz\characters\heads\f_Eva_2.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\eva\facepaint_hhl_f_eva_body.rvmat",
				"FacePaints\data\eva\facepaint_hhl_f_eva_body.rvmat",
				"FacePaints\data\eva\facepaint_hhl_f_eva_body.rvmat"
			};
		};
	};
  class IAT_FP_FemaleFridaHead: FemaleFridaHead
	{
		model="\dz\characters\heads\f_frida_2.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\frida\facepaint_hhl_f_frida_body.rvmat",
				"FacePaints\data\frida\facepaint_hhl_f_frida_body.rvmat",
				"FacePaints\data\frida\facepaint_hhl_f_frida_body.rvmat"
			};
		};
	};
  class IAT_FP_FemaleGabiHead: FemaleGabiHead
	{
		model="\dz\characters\heads\f_gabi_2.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\gabi\facepaint_hhl_f_gabi_body.rvmat",
				"FacePaints\data\gabi\facepaint_hhl_f_gabi_body.rvmat",
				"FacePaints\data\gabi\facepaint_hhl_f_gabi_body.rvmat"
			};
		};
	};
  class IAT_FP_FemaleHelgaHead: FemaleHelgaHead
	{
		model="\dz\characters\heads\f_helga.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\helga\facepaint_hhl_f_helga_body.rvmat",
				"FacePaints\data\helga\facepaint_hhl_f_helga_body.rvmat",
				"FacePaints\data\helga\facepaint_hhl_f_helga_body.rvmat"
			};
		};
	};
  class IAT_FP_FemaleIrenaHead: FemaleIrenaHead
	{
		model="\dz\characters\heads\f_irena_2.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\irena\facepaint_hhl_f_irena_body.rvmat",
				"FacePaints\data\irena\facepaint_hhl_f_irena_body.rvmat",
				"FacePaints\data\irena\facepaint_hhl_f_irena_body.rvmat"
			};
		};
	};
  class IAT_FP_FemaleJudyHead: FemaleJudyHead
	{
		model="\dz\characters\heads\f_judy.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\judy\facepaint_hhl_f_judy_body.rvmat",
				"FacePaints\data\judy\facepaint_hhl_f_judy_body.rvmat",
				"FacePaints\data\judy\facepaint_hhl_f_judy_body.rvmat"
			};
		};
	};
  class IAT_FP_FemaleKeikoHead: FemaleKeikoHead
	{
		model="\dz\characters\heads\f_keiko.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\keiko\facepaint_hhl_f_keiko_body.rvmat",
				"FacePaints\data\keiko\facepaint_hhl_f_keiko_body.rvmat",
				"FacePaints\data\keiko\facepaint_hhl_f_keiko_body.rvmat"
			};
		};
	};
  class IAT_FP_FemaleLindaHead: FemaleLindaHead
	{
		model="\dz\characters\heads\f_linda_2.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\linda\facepaint_hhl_f_linda_body.rvmat",
				"FacePaints\data\linda\facepaint_hhl_f_linda_body.rvmat",
				"FacePaints\data\linda\facepaint_hhl_f_linda_body.rvmat"
			};
		};
	};
  class IAT_FP_FemaleMariaHead: FemaleMariaHead
	{
		model="\dz\characters\heads\f_maria_2.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\maria\facepaint_hhl_f_maria_body.rvmat",
				"FacePaints\data\maria\facepaint_hhl_f_maria_body.rvmat",
				"FacePaints\data\maria\facepaint_hhl_f_maria_body.rvmat"
			};
		};
	};
  class IAT_FP_FemaleNaomiHead: FemaleNaomiHead
	{
		model="\dz\characters\heads\f_naomi.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\naomi\facepaint_hhl_f_naomi_body.rvmat",
				"FacePaints\data\naomi\facepaint_hhl_f_naomi_body.rvmat",
				"FacePaints\data\naomi\facepaint_hhl_f_naomi_body.rvmat"
			};
		};
	};
};

class CfgVehicles
{
  class SurvivorFemale_Base;
  class FemaleEvaHead;
  class FemaleFridaHead;
  class FemaleGabiHead;
  class FemaleHelgaHead;
  class FemaleIrenaHead;
  class FemaleJudyHead;
  class FemaleKeikoHead;
  class FemaleLindaHead;
  class FemaleMariaHead;
  class FemaleNaomiHead;

  class Epinephrine;
  class IAT_FacePaintStick: Epinephrine
	{
		scope=2;
		displayName="$STR_CfgVehicles_Epinephrine0";
		descriptionShort="$STR_CfgVehicles_Epinephrine1";
		model="\dz\gear\medical\Epinephrine.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
	};
  
  class IAT_FP_FemaleEvaHead: FemaleEvaHead
	{
    head="IAT_FP_FemaleEvaHead";
    hiddenSelectionsTextures[]=
    {
      "FacePaints\data\eva\facepaint_hhl_f_eva_body_co.paa",
      "dz\characters\heads\data\f_Eva_2\hhl_f_Eva_hair_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "FacePaints\data\eva\facepaint_hhl_f_eva_body.rvmat",
      "dz\characters\heads\data\f_Eva_2\hhl_f_Eva_hair.rvmat"
    };
  };
  class IAT_FP_SurvivorF_Eva: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_FP_FemaleEvaHead";
		// emptyBody="FemaleEvaTorso";
		// emptyLegs="FemaleEvaLegs";
		// emptyFeet="FemaleEvaFeet";
		// emptyGloves="FemaleEvaHands";
		faceType="IAT_FP_FemaleEvaHead";
    hiddenSelectionsTextures[]=
		{
      "\dZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_decayed_co.paa",
		};
		// decayedTexture="\DZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="FacePaints\data\eva\facepaint_hhl_f_eva_body.rvmat";
			mat_blood="dz\characters\heads\data\f_eva_2\hhl_f_eva_body_bloodyhands.rvmat";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\eva\facepaint_hhl_f_eva_body.rvmat",
				"dz\characters\heads\data\f_eva_2\hhl_f_eva_body_injury.rvmat",
				"dz\characters\heads\data\f_eva_2\hhl_f_eva_body_injury2.rvmat"
			};
		};
	};
  
  class IAT_FP_FemaleFridaHead: FemaleFridaHead
	{
    head="IAT_FP_FemaleFridaHead";
    hiddenSelectionsTextures[]=
    {
      "FacePaints\data\frida\facepaint_hhl_f_frida_body_co.paa",
      "dz\characters\heads\data\f_frida_2\hhl_f_frida_hair_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "FacePaints\data\frida\facepaint_hhl_f_frida_body.rvmat",
      "dz\characters\heads\data\f_frida_2\hhl_f_frida_hair.rvmat"
    };
  };
  class IAT_FP_SurvivorF_Frida: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_FP_FemaleFridaHead";
		// emptyBody="FemaleFridaTorso";
		// emptyLegs="FemaleFridaLegs";
		// emptyFeet="FemaleFridaFeet";
		// emptyGloves="FemaleFridaHands";
		faceType="IAT_FP_FemaleFridaHead";
    hiddenSelectionsTextures[]=
		{
      "\dZ\characters\heads\data\f_frida_2\hhl_f_frida_body_decayed_co.paa",
		};
		// decayedTexture="\DZ\characters\heads\data\f_frida_2\hhl_f_frida_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="FacePaints\data\frida\facepaint_hhl_f_frida_body.rvmat";
			mat_blood="dz\characters\heads\data\f_frida_2\hhl_f_frida_body_bloodyhands.rvmat";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\frida\facepaint_hhl_f_frida_body.rvmat",
				"dz\characters\heads\data\f_frida_2\hhl_f_frida_body_injury.rvmat",
				"dz\characters\heads\data\f_frida_2\hhl_f_frida_body_injury2.rvmat"
			};
		};
	};

  class IAT_FP_FemaleGabiHead: FemaleGabiHead
	{
    head="IAT_FP_FemaleGabiHead";
    hiddenSelectionsTextures[]=
    {
      "FacePaints\data\gabi\facepaint_hhl_f_gabi_body_co.paa",
      "dz\characters\heads\data\f_gabi_2\hhl_f_gabi_hair_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "FacePaints\data\gabi\facepaint_hhl_f_gabi_body.rvmat",
      "dz\characters\heads\data\f_gabi_2\hhl_f_gabi_hair.rvmat"
    };
  };
  class IAT_FP_SurvivorF_Gabi: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_FP_FemaleGabiHead";
		// emptyBody="FemaleGabiTorso";
		// emptyLegs="FemaleGabiLegs";
		// emptyFeet="FemaleGabiFeet";
		// emptyGloves="FemaleGabiHands";
		faceType="IAT_FP_FemaleGabiHead";
    hiddenSelectionsTextures[]=
		{
      "\dZ\characters\heads\data\f_gabi_2\hhl_f_gabi_body_decayed_co.paa",
		};
		// decayedTexture="\DZ\characters\heads\data\f_gabi_2\hhl_f_gabi_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="FacePaints\data\gabi\facepaint_hhl_f_gabi_body.rvmat";
			mat_blood="dz\characters\heads\data\f_gabi_2\hhl_f_gabi_body_bloodyhands.rvmat";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\gabi\facepaint_hhl_f_gabi_body.rvmat",
				"dz\characters\heads\data\f_gabi_2\hhl_f_gabi_body_injury.rvmat",
				"dz\characters\heads\data\f_gabi_2\hhl_f_gabi_body_injury2.rvmat"
			};
		};
	};

  class IAT_FP_FemaleHelgaHead: FemaleHelgaHead
	{
    head="IAT_FP_FemaleHelgaHead";
    hiddenSelectionsTextures[]=
    {
      "FacePaints\data\helga\facepaint_hhl_f_helga_body_co.paa",
      "dz\characters\heads\data\f_helga\hhl_f_helga_hair_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "FacePaints\data\helga\facepaint_hhl_f_helga_body.rvmat",
      "dz\characters\heads\data\f_helga\hhl_f_helga_hair.rvmat"
    };
  };
  class IAT_FP_SurvivorF_Helga: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_FP_FemaleHelgaHead";
		// emptyBody="FemaleHelgaTorso";
		// emptyLegs="FemaleHelgaLegs";
		// emptyFeet="FemaleHelgaFeet";
		// emptyGloves="FemaleHelgaHands";
		faceType="IAT_FP_FemaleHelgaHead";
    hiddenSelectionsTextures[]=
		{
      "\dZ\characters\heads\data\f_helga\hhl_f_helga_body_decayed_co.paa",
		};
		// decayedTexture="\DZ\characters\heads\data\f_helga\hhl_f_helga_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="FacePaints\data\helga\facepaint_hhl_f_helga_body.rvmat";
			mat_blood="dz\characters\heads\data\f_helga\hhl_f_helga_body_bloodyhands.rvmat";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\helga\facepaint_hhl_f_helga_body.rvmat",
				"dz\characters\heads\data\f_helga\hhl_f_helga_body_injury.rvmat",
				"dz\characters\heads\data\f_helga\hhl_f_helga_body_injury2.rvmat"
			};
		};
	};

  class IAT_FP_FemaleIrenaHead: FemaleIrenaHead
	{
    head="IAT_FP_FemaleIrenaHead";
    hiddenSelectionsTextures[]=
    {
      "FacePaints\data\irena\facepaint_hhl_f_irena_body_co.paa",
      "dz\characters\heads\data\f_irena_2\hhl_f_irena_hair_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "FacePaints\data\irena\facepaint_hhl_f_irena_body.rvmat",
      "dz\characters\heads\data\f_irena_2\hhl_f_irena_hair.rvmat"
    };
  };
  class IAT_FP_SurvivorF_Irena: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_FP_FemaleIrenaHead";
		// emptyBody="FemaleIrenaTorso";
		// emptyLegs="FemaleIrenaLegs";
		// emptyFeet="FemaleIrenaFeet";
		// emptyGloves="FemaleIrenaHands";
		faceType="IAT_FP_FemaleIrenaHead";
    hiddenSelectionsTextures[]=
		{
      "\dZ\characters\heads\data\f_irena_2\hhl_f_irena_body_decayed_co.paa",
		};
		// decayedTexture="\DZ\characters\heads\data\f_irena_2\hhl_f_irena_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="FacePaints\data\irena\facepaint_hhl_f_irena_body.rvmat";
			mat_blood="dz\characters\heads\data\f_irena_2\hhl_f_irena_body_bloodyhands.rvmat";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\irena\facepaint_hhl_f_irena_body.rvmat",
				"dz\characters\heads\data\f_irena_2\hhl_f_irena_body_injury.rvmat",
				"dz\characters\heads\data\f_irena_2\hhl_f_irena_body_injury2.rvmat"
			};
		};
	};

  class IAT_FP_FemaleJudyHead: FemaleJudyHead
	{
    head="IAT_FP_FemaleJudyHead";
    hiddenSelectionsTextures[]=
    {
      "FacePaints\data\judy\facepaint_hhl_f_judy_body_co.paa",
      "dz\characters\heads\data\f_judy\hhl_f_judy_hair_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "FacePaints\data\judy\facepaint_hhl_f_judy_body.rvmat",
      "dz\characters\heads\data\f_judy\hhl_f_judy_hair.rvmat"
    };
  };
  class IAT_FP_SurvivorF_Judy: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_FP_FemaleJudyHead";
		// emptyBody="FemaleJudyTorso";
		// emptyLegs="FemaleJudyLegs";
		// emptyFeet="FemaleJudyFeet";
		// emptyGloves="FemaleJudyHands";
		faceType="IAT_FP_FemaleJudyHead";
    hiddenSelectionsTextures[]=
		{
      "\dZ\characters\heads\data\f_judy\hhl_f_judy_body_decayed_co.paa",
		};
		// decayedTexture="\DZ\characters\heads\data\f_judy\hhl_f_judy_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="FacePaints\data\judy\facepaint_hhl_f_judy_body.rvmat";
			mat_blood="dz\characters\heads\data\f_judy\hhl_f_judy_body_bloodyhands.rvmat";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\judy\facepaint_hhl_f_judy_body.rvmat",
				"dz\characters\heads\data\f_judy\hhl_f_judy_body_injury.rvmat",
				"dz\characters\heads\data\f_judy\hhl_f_judy_body_injury2.rvmat"
			};
		};
	};

  class IAT_FP_FemaleKeikoHead: FemaleKeikoHead
	{
    head="IAT_FP_FemaleKeikoHead";
    hiddenSelectionsTextures[]=
    {
      "FacePaints\data\keiko\facepaint_hhl_f_keiko_body_co.paa",
      "dz\characters\heads\data\f_keiko\hhl_f_keiko_hair_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "FacePaints\data\keiko\facepaint_hhl_f_keiko_body.rvmat",
      "dz\characters\heads\data\f_keiko\hhl_f_keiko_hair.rvmat"
    };
  };
  class IAT_FP_SurvivorF_Keiko: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_FP_FemaleKeikoHead";
		// emptyBody="FemaleKeikoTorso";
		// emptyLegs="FemaleKeikoLegs";
		// emptyFeet="FemaleKeikoFeet";
		// emptyGloves="FemaleKeikoHands";
		faceType="IAT_FP_FemaleKeikoHead";
    hiddenSelectionsTextures[]=
		{
      "\dZ\characters\heads\data\f_keiko\hhl_f_keiko_body_decayed_co.paa",
		};
		// decayedTexture="\DZ\characters\heads\data\f_keiko\hhl_f_keiko_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="FacePaints\data\keiko\facepaint_hhl_f_keiko_body.rvmat";
			mat_blood="dz\characters\heads\data\f_keiko\hhl_f_keiko_body_bloodyhands.rvmat";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\keiko\facepaint_hhl_f_keiko_body.rvmat",
				"dz\characters\heads\data\f_keiko\hhl_f_keiko_body_injury.rvmat",
				"dz\characters\heads\data\f_keiko\hhl_f_keiko_body_injury2.rvmat"
			};
		};
	};


  class IAT_FP_FemaleLindaHead: FemaleLindaHead
	{
    head="IAT_FP_FemaleLindaHead";
    hiddenSelectionsTextures[]=
    {
      "FacePaints\data\linda\facepaint_hhl_f_linda_body_co.paa",
      "dz\characters\heads\data\f_linda_2\hhl_f_linda_hair_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "FacePaints\data\linda\facepaint_hhl_f_linda_body.rvmat",
      "dz\characters\heads\data\f_linda_2\hhl_f_linda_hair.rvmat"
    };
  };
  class IAT_FP_SurvivorF_Linda: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_FP_FemaleLindaHead";
		// emptyBody="FemaleLindaTorso";
		// emptyLegs="FemaleLindaLegs";
		// emptyFeet="FemaleLindaFeet";
		// emptyGloves="FemaleLindaHands";
		faceType="IAT_FP_FemaleLindaHead";
    hiddenSelectionsTextures[]=
		{
      "\dZ\characters\heads\data\f_linda_2\hhl_f_linda_body_decayed_co.paa",
		};
		// decayedTexture="\DZ\characters\heads\data\f_linda_2\hhl_f_linda_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="FacePaints\data\linda\facepaint_hhl_f_linda_body.rvmat";
			mat_blood="dz\characters\heads\data\f_linda_2\hhl_f_linda_body_bloodyhands.rvmat";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\linda\facepaint_hhl_f_linda_body.rvmat",
				"dz\characters\heads\data\f_linda_2\hhl_f_linda_body_injury.rvmat",
				"dz\characters\heads\data\f_linda_2\hhl_f_linda_body_injury2.rvmat"
			};
		};
	};

  class IAT_FP_FemaleMariaHead: FemaleMariaHead
	{
    head="IAT_FP_FemaleMariaHead";
    hiddenSelectionsTextures[]=
    {
      "FacePaints\data\maria\facepaint_hhl_f_maria_body_co.paa",
      "dz\characters\heads\data\f_maria_2\hhl_f_maria_hair_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "FacePaints\data\maria\facepaint_hhl_f_maria_body.rvmat",
      "dz\characters\heads\data\f_maria_2\hhl_f_maria_hair.rvmat"
    };
  };
  class IAT_FP_SurvivorF_Maria: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_FP_FemaleMariaHead";
		// emptyBody="FemaleMariaTorso";
		// emptyLegs="FemaleMariaLegs";
		// emptyFeet="FemaleMariaFeet";
		// emptyGloves="FemaleMariaHands";
		faceType="IAT_FP_FemaleMariaHead";
    hiddenSelectionsTextures[]=
		{
      "\dZ\characters\heads\data\f_maria_2\hhl_f_maria_body_decayed_co.paa",
		};
		// decayedTexture="\DZ\characters\heads\data\f_maria_2\hhl_f_maria_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="FacePaints\data\maria\facepaint_hhl_f_maria_body.rvmat";
			mat_blood="dz\characters\heads\data\f_maria_2\hhl_f_maria_body_bloodyhands.rvmat";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\maria\facepaint_hhl_f_maria_body.rvmat",
				"dz\characters\heads\data\f_maria_2\hhl_f_maria_body_injury.rvmat",
				"dz\characters\heads\data\f_maria_2\hhl_f_maria_body_injury2.rvmat"
			};
		};
	};

  class IAT_FP_FemaleNaomiHead: FemaleNaomiHead
	{
    head="IAT_FP_FemaleNaomiHead";
    hiddenSelectionsTextures[]=
    {
      "FacePaints\data\naomi\facepaint_hhl_f_naomi_body_co.paa",
      "dz\characters\heads\data\f_naomi\hhl_f_naomi_hair_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "FacePaints\data\naomi\facepaint_hhl_f_naomi_body.rvmat",
      "dz\characters\heads\data\f_naomi\hhl_f_naomi_hair.rvmat"
    };
  };
  class IAT_FP_SurvivorF_Naomi: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_FP_FemaleNaomiHead";
		// emptyBody="FemaleNaomiTorso";
		// emptyLegs="FemaleNaomiLegs";
		// emptyFeet="FemaleNaomiFeet";
		// emptyGloves="FemaleNaomiHands";
		faceType="IAT_FP_FemaleNaomiHead";
    hiddenSelectionsTextures[]=
		{
      "\dZ\characters\heads\data\f_naomi\hhl_f_naomi_body_decayed_co.paa",
		};
		// decayedTexture="\DZ\characters\heads\data\f_naomi\hhl_f_naomi_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="FacePaints\data\naomi\facepaint_hhl_f_naomi_body.rvmat";
			mat_blood="dz\characters\heads\data\f_naomi\hhl_f_naomi_body_bloodyhands.rvmat";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\naomi\facepaint_hhl_f_naomi_body.rvmat",
				"dz\characters\heads\data\f_naomi\hhl_f_naomi_body_injury.rvmat",
				"dz\characters\heads\data\f_naomi\hhl_f_naomi_body_injury2.rvmat"
			};
		};
	};
};
