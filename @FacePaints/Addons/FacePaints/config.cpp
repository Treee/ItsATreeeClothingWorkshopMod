class CfgPatches
{
	class DZ_Characters_Heads
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
  class DZ_Characters
  {
    units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data"
		};
  }
};

class CfgFaces
{
  class Default;
  class SurvivorFemale_Base;

  class IAT_C_FemaleEvaHead: Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="FacePaints\data\camo_facepaint_hhl_f_eva_body_co.paa";
			head="IAT_C_FemaleEvaHead";
			material="FacePaints\data\camo_hhl_f_eva_body.rvmat";
		};
		class IAT_C_FemaleEvaHead: Default
		{
		};
	};
};

class CfgHeads
{
  class FemaleEvaHead;
  class IAT_C_FemaleEvaHead: FemaleEvaHead
	{
		model="\dz\characters\heads\f_Eva_2.p3d";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\camo_hhl_f_eva_body.rvmat",
				"FacePaints\data\camo_hhl_f_eva_body.rvmat",
				"FacePaints\data\camo_hhl_f_eva_body.rvmat"
			};
		};
	};
};

class cfgVehicles
{
  class FemaleEvaHead;
  class SurvivorFemale_Base;
  
  class IAT_C_FemaleEvaHead: FemaleEvaHead
	{
    head="IAT_C_FemaleEvaHead";
    hiddenSelectionsTextures[]=
    {
      "FacePaints\data\camo_facepaint_hhl_f_eva_body_co.paa",
      "dz\characters\heads\data\f_Eva_2\hhl_f_Eva_hair_ca.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "FacePaints\data\camo_hhl_f_eva_body.rvmat",
      "dz\characters\heads\data\f_Eva_2\hhl_f_Eva_hair.rvmat"
    };
  };

  class IAT_C_SurvivorF_Eva: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_C_FemaleEvaHead";
		// emptyBody="FemaleEvaTorso";
		// emptyLegs="FemaleEvaLegs";
		// emptyFeet="FemaleEvaFeet";
		// emptyGloves="FemaleEvaHands";
		faceType="IAT_C_FemaleEvaHead";
    hiddenSelectionsTextures[]=
		{
      "\dZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_decayed_co.paa",
		};
		// decayedTexture="\DZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="FacePaints\data\camo_hhl_f_eva_body.rvmat";
			mat_blood="dz\characters\heads\data\f_eva_2\hhl_f_eva_body_bloodyhands.rvmat";
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"FacePaints\data\camo_hhl_f_eva_body.rvmat",
				"dz\characters\heads\data\f_eva_2\hhl_f_eva_body_injury.rvmat",
				"dz\characters\heads\data\f_eva_2\hhl_f_eva_body_injury2.rvmat"
			};
		};
	};
};
