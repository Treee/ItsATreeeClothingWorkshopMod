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
};

class CfgHeads
{
  class FemaleEvaHead;
  class FemaleFridaHead;
  class FemaleGabiHead;
  class FemaleHelgaHead;

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
};

class cfgVehicles
{
  class SurvivorFemale_Base;
  class FemaleEvaHead;
  class FemaleFridaHead;
  class FemaleGabiHead;
  class FemaleHelgaHead;
  
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

};
