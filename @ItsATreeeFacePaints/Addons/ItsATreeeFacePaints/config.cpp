class CfgPatches
{
	class DZ_Characters_Glasses
	{
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};

class CfgVehicles
{
  class Head;
  class SurvivorFemale_Base;

  class IAT_C_FemaleEvaHead: Head_Default
	{
		class Default
		{
			displayname="$STR_CFG_FACES_Default";
			texture="Survivalists_Characters\data\camo_facepaint_hhl_f_eva_body_co.paa";
			head="IAT_C_FemaleEvaHead";
			material="Survivalists_Characters\data\camo_hhl_f_eva_body.rvmat";
		};
  };

  class IAT_C_SurvivorF_Eva: SurvivorFemale_Base
	{
		scope=2;
		emptyHead="IAT_C_FemaleEvaHead";
		emptyBody="FemaleEvaTorso";
		emptyLegs="FemaleEvaLegs";
		emptyFeet="FemaleEvaFeet";
		emptyGloves="FemaleEvaHands";
		faceType="IAT_C_FemaleEvaHead";
		decayedTexture="\DZ\characters\heads\data\f_Eva_2\hhl_f_Eva_body_decayed_co.paa";
		class BloodyHands
		{
			mat_normal="Survivalists_Characters\data\camo_hhl_f_eva_body.rvmat";
			mat_blood="dz\characters\heads\data\f_eva_2\hhl_f_eva_body_bloodyhands.rvmat";
		};
		class Lifespan
		{
			class Beard
			{
				mat[]={};
			};
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"Survivalists_Characters\data\camo_hhl_f_eva_body.rvmat",
				"dz\characters\heads\data\f_eva_2\hhl_f_eva_body_injury.rvmat",
				"dz\characters\heads\data\f_eva_2\hhl_f_eva_body_injury2.rvmat"
			};
		};
		voiceType=1;
	};
	

};