class CfgMods
{
	class Survivalists_FacePaints
	{
		type="mod";
		author="ItsATreee";
		name="Survivalists_FacePaints";
		dir="Survivalists_FacePaints";
    dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
        files[]={"Survivalists_FacePaints/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value="";
        files[]={"Survivalists_FacePaints/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]={"Survivalists_FacePaints/scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
  class Survivalists_FacePaints
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts",
      "DZ_Gear_Consumables"  
    };
  };
};
class CfgVehicles
{
  class SurvivorMale_Base;
  class SurvivorFemale_Base;

  class Inventory_Base;

  class SRP_FacePaintStick: Inventory_Base
	{
		scope=2;
		displayName="Face Paint Stick";
		descriptionShort="Paint your face into a lion. Might take some time to stick on your face, be patient between applications.";
		model="\dz\gear\medical\Epinephrine.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=60;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_FacePaints\heads\srp_facepaint_co.paa"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
            {1.0,{"DZ\gear\medical\data\epipen.rvmat"}},
            {0.69999999,{"DZ\gear\medical\data\epipen.rvmat"}},
            {0.5,{"DZ\gear\medical\data\epipen.rvmat"}},
            {0.30000001,{"DZ\gear\medical\data\epipen.rvmat"}},
            {0.0,{"DZ\gear\medical\data\epipen_destruct.rvmat"}}
					};
				};
			};
		};
	};
};