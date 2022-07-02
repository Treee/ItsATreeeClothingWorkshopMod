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
  //===============================MALE
  class SurvivorM_Mirek: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_adam_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_adam_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_adam_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_adam_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_adam_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_adam_body_bearded.rvmat";
		};
	};
  class SurvivorM_Boris: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_boris_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_boris_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_boris_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_boris_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_boris_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_boris_body_bearded.rvmat";
		};
	};
  class SurvivorM_Cyril: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_cyril_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_cyril_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_cyril_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_cyril_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_cyril_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_cyril_body_bearded.rvmat";
		};
	};
  class SurvivorM_Denis: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_denis_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_denis_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_denis_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_denis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_denis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_denis_body_bearded.rvmat";
		};
	};
  class SurvivorM_Elias: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_elias_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_elias_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_elias_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_elias_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_elias_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_elias_body_bearded.rvmat";
		};
	};
  class SurvivorM_Francis: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_francis_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_francis_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_francis_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_francis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_francis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_francis_body_bearded.rvmat";
		};
	};
  class SurvivorM_Guo: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_guo_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_guo_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_guo_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_guo_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_guo_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_guo_body_bearded.rvmat";
		};
	};
  class SurvivorM_Hassan: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_hassan_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_hassan_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_hassan_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_hassan_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_hassan_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_hassan_body_bearded.rvmat";
		};
	};
  class SurvivorM_Indar: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_indar_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_indar_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_indar_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_indar_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_indar_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_indar_body_bearded.rvmat";
		};
	};
  class SurvivorM_Jose: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_jose_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_jose_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_jose_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_jose_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_jose_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_jose_body_bearded.rvmat";
		};
	};
  class SurvivorM_Kaito: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_kaito_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_kaito_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_kaito_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_kaito_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_kaito_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_kaito_body_bearded.rvmat";
		};
	};
  class SurvivorM_Lewis: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_lewis_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_lewis_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_lewis_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_lewis_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_lewis_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_lewis_body_bearded.rvmat";
		};
	};
  class SurvivorM_Manua: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_manua_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_manua_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_manua_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_manua_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_manua_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_manua_body_bearded.rvmat";
		};
	};
  class SurvivorM_Niki: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_niki_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_niki_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_niki_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_niki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_niki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_niki_body_bearded.rvmat";
		};
	};
  class SurvivorM_Oliver: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_oliver_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_oliver_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_oliver_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_oliver_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_oliver_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_oliver_body_bearded.rvmat";
		};
	};
  class SurvivorM_Peter: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_peter_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_peter_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_peter_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_peter_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_peter_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_peter_body_bearded.rvmat";
		};
	};
  class SurvivorM_Quinn: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_quinn_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_quinn_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_quinn_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_quinn_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_quinn_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_quinn_body_bearded.rvmat";
		};
	};
  class SurvivorM_Rolf: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_rolf_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_rolf_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_rolf_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_rolf_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_rolf_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_rolf_body_bearded.rvmat";
		};
	};
  class SurvivorM_Seth: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_seth_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_seth_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_seth_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_seth_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_seth_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_seth_body_bearded.rvmat";
		};
	};
  class SurvivorM_Taiki: SurvivorMale_Base
	{
		class FacePaint_Bosnia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bosnia\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Bulgaria2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Croatia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_croatia\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_croatia\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Czech1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech1\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech1\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Czech2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_czech2\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_czech2\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Desert
		{
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_desert\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_desert\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Digital
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digital\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digital\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_DigitalBlue
		{
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_digitalblue\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_DragonScale
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscale\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_DragonScaleRed
		{
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_France
		{
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_france\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_france\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Germany
		{
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_germany\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_germany\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Hungary1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary1\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Hungary2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_hungary2\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Macedonia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_macedonia\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Olive
		{
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_olive\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_olive\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Poland1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland1\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland1\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Poland2
		{
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_poland2\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_poland2\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Romania1
		{
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_m_taiki_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania1\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania1\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_m_taiki_body_shaved.rvmat";
      mat_paint_unshaved="Survivalists_FacePaints\heads\fp_romania2\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_romania2\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Slovenia
		{
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_slovenia\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_UK
		{
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_uk\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_uk\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_USA
		{
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_usa\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_usa\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Winter
		{
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_winter\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_winter\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodland\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodland\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_WoodlandGreen
		{
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_woodlandred\hhl_m_taiki_body_bearded.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_taiki_body_shaved.rvmat";
			mat_paint_unshaved="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_taiki_body_unshaved.rvmat";
			mat_paint_bearded="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_m_taiki_body_bearded.rvmat";
		};
	};
  
  //===============================FEMALE
  class SurvivorF_Eva: SurvivorFemale_Base
	{
		class FacePaint_Bosnia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Bulgaria1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Bulgaria2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Croatia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Czech1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Czech2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Desert
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Digital
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_f_eva_body.rvmat";
		};
    class FacePaint_DigitalBlue
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_f_eva_body.rvmat";
		};
    class FacePaint_DragonScale
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_f_eva_body.rvmat";
		};
    class FacePaint_DragonScaleRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_f_eva_body.rvmat";
		};
    class FacePaint_France
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Germany
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Hungary1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Hungary2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Macedonia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Olive
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Poland1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Poland2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Romania1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Slovenia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_f_eva_body.rvmat";
		};
    class FacePaint_UK
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_f_eva_body.rvmat";
		};
    class FacePaint_USA
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Winter
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_f_eva_body.rvmat";
		};
    class FacePaint_WoodlandGreen
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_f_eva_body.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_f_eva_body.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_f_eva_body.rvmat";
		};
	};
  class SurvivorF_Frida: SurvivorFemale_Base
	{
		class FacePaint_Bosnia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Bulgaria1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Bulgaria2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Croatia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Czech1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Czech2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Desert
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Digital
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_f_frida_body.rvmat";
		};
    class FacePaint_DigitalBlue
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_f_frida_body.rvmat";
		};
    class FacePaint_DragonScale
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_f_frida_body.rvmat";
		};
    class FacePaint_DragonScaleRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_f_frida_body.rvmat";
		};
    class FacePaint_France
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Germany
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Hungary1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Hungary2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Macedonia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Olive
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Poland1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Poland2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Romania1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Slovenia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_f_frida_body.rvmat";
		};
    class FacePaint_UK
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_f_frida_body.rvmat";
		};
    class FacePaint_USA
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Winter
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_f_frida_body.rvmat";
		};
    class FacePaint_WoodlandGreen
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_f_frida_body.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_f_frida_body.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_f_frida_body.rvmat";
		};
	};
  class SurvivorF_Gabi: SurvivorFemale_Base
	{
		class FacePaint_Bosnia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Bulgaria1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Bulgaria2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Croatia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Czech1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Czech2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Desert
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Digital
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_DigitalBlue
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_DragonScale
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_DragonScaleRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_France
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Germany
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Hungary1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Hungary2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Macedonia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Olive
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Poland1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Poland2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Romania1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Slovenia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_UK
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_USA
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Winter
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_WoodlandGreen
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_f_gabi_body.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_f_gabi_body.rvmat";
		};
	};
  class SurvivorF_Helga: SurvivorFemale_Base
	{
		class FacePaint_Bosnia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Bulgaria1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Bulgaria2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Croatia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Czech1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Czech2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Desert
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Digital
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_f_helga_body.rvmat";
		};
    class FacePaint_DigitalBlue
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_f_helga_body.rvmat";
		};
    class FacePaint_DragonScale
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_f_helga_body.rvmat";
		};
    class FacePaint_DragonScaleRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_f_helga_body.rvmat";
		};
    class FacePaint_France
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Germany
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Hungary1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Hungary2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Macedonia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Olive
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Poland1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Poland2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Romania1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Slovenia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_f_helga_body.rvmat";
		};
    class FacePaint_UK
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_f_helga_body.rvmat";
		};
    class FacePaint_USA
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Winter
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_f_helga_body.rvmat";
		};
    class FacePaint_WoodlandGreen
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_f_helga_body.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_f_helga_body.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_f_helga_body.rvmat";
		};
	};
  class SurvivorF_Irena: SurvivorFemale_Base
	{
		class FacePaint_Bosnia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Bulgaria1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Bulgaria2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Croatia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Czech1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Czech2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Desert
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Digital
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_f_irena_body.rvmat";
		};
    class FacePaint_DigitalBlue
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_f_irena_body.rvmat";
		};
    class FacePaint_DragonScale
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_f_irena_body.rvmat";
		};
    class FacePaint_DragonScaleRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_f_irena_body.rvmat";
		};
    class FacePaint_France
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Germany
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Hungary1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Hungary2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Macedonia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Olive
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Poland1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Poland2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Romania1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Slovenia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_f_irena_body.rvmat";
		};
    class FacePaint_UK
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_f_irena_body.rvmat";
		};
    class FacePaint_USA
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Winter
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_f_irena_body.rvmat";
		};
    class FacePaint_WoodlandGreen
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_f_irena_body.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_f_irena_body.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_f_irena_body.rvmat";
		};
	};
  class SurvivorF_Judy: SurvivorFemale_Base
	{
		class FacePaint_Bosnia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Bulgaria1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Bulgaria2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Croatia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Czech1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Czech2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Desert
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Digital
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_f_judy_body.rvmat";
		};
    class FacePaint_DigitalBlue
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_f_judy_body.rvmat";
		};
    class FacePaint_DragonScale
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_f_judy_body.rvmat";
		};
    class FacePaint_DragonScaleRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_f_judy_body.rvmat";
		};
    class FacePaint_France
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Germany
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Hungary1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Hungary2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Macedonia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Olive
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Poland1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Poland2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Romania1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Slovenia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_f_judy_body.rvmat";
		};
    class FacePaint_UK
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_f_judy_body.rvmat";
		};
    class FacePaint_USA
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Winter
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_f_judy_body.rvmat";
		};
    class FacePaint_WoodlandGreen
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_f_judy_body.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_f_judy_body.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_f_judy_body.rvmat";
		};
	};
  class SurvivorF_Keiko: SurvivorFemale_Base
	{
		class FacePaint_Bosnia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Bulgaria1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Bulgaria2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Croatia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Czech1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Czech2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Desert
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Digital
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_DigitalBlue
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_DragonScale
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_DragonScaleRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_France
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Germany
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Hungary1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Hungary2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Macedonia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Olive
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Poland1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Poland2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Romania1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Slovenia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_UK
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_USA
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Winter
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_WoodlandGreen
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_f_keiko_body.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_f_keiko_body.rvmat";
		};
	};
  class SurvivorF_Linda: SurvivorFemale_Base
	{
		class FacePaint_Bosnia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Bulgaria1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Bulgaria2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Croatia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Czech1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Czech2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Desert
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Digital
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_f_linda_body.rvmat";
		};
    class FacePaint_DigitalBlue
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_f_linda_body.rvmat";
		};
    class FacePaint_DragonScale
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_f_linda_body.rvmat";
		};
    class FacePaint_DragonScaleRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_f_linda_body.rvmat";
		};
    class FacePaint_France
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Germany
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Hungary1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Hungary2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Macedonia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Olive
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Poland1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Poland2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Romania1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Slovenia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_f_linda_body.rvmat";
		};
    class FacePaint_UK
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_f_linda_body.rvmat";
		};
    class FacePaint_USA
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Winter
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_f_linda_body.rvmat";
		};
    class FacePaint_WoodlandGreen
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_f_linda_body.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_f_linda_body.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_f_linda_body.rvmat";
		};
	};
  class SurvivorF_Maria: SurvivorFemale_Base
	{
		class FacePaint_Bosnia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Bulgaria1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Bulgaria2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Croatia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Czech1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Czech2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Desert
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Digital
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_f_maria_body.rvmat";
		};
    class FacePaint_DigitalBlue
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_f_maria_body.rvmat";
		};
    class FacePaint_DragonScale
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_f_maria_body.rvmat";
		};
    class FacePaint_DragonScaleRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_f_maria_body.rvmat";
		};
    class FacePaint_France
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Germany
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Hungary1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Hungary2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Macedonia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Olive
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Poland1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Poland2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Romania1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Slovenia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_f_maria_body.rvmat";
		};
    class FacePaint_UK
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_f_maria_body.rvmat";
		};
    class FacePaint_USA
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Winter
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_f_maria_body.rvmat";
		};
    class FacePaint_WoodlandGreen
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_f_maria_body.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_f_maria_body.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_f_maria_body.rvmat";
		};
	};
  class SurvivorF_Naomi: SurvivorFemale_Base
	{
		class FacePaint_Bosnia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Bulgaria1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Bulgaria2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Croatia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Czech1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Czech2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Desert
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Digital
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_DigitalBlue
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_DragonScale
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_DragonScaleRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_France
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Germany
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Hungary1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Hungary2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Macedonia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Olive
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Poland1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Poland2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Romania1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Slovenia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_UK
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_USA
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Winter
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_WoodlandGreen
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_f_naomi_body.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_f_naomi_body.rvmat";
		};
	};
  class SurvivorF_Baty: SurvivorFemale_Base
	{
		class FacePaint_Bosnia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bosnia\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Bulgaria1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria1\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Bulgaria2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_bulgaria2\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Croatia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_croatia\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Czech1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech1\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Czech2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_czech2\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Desert
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_desert\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Digital
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digital\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_DigitalBlue
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_digitalblue\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_DragonScale
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscale\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_DragonScaleRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_dragonscalered\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_France
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_france\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Germany
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_germany\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Hungary1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary1\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Hungary2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_hungary2\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Macedonia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_macedonia\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Olive
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_olive\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Poland1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland1\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Poland2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_poland2\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Romania1
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania1\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Romania2
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_romania2\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Slovenia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_slovenia\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_UK
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_uk\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_USA
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_usa\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Winter
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_winter\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Woodland
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodland\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_WoodlandGreen
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandgreen\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_WoodlandRed
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_woodlandred\hhl_f_Baty_body.rvmat";
		};
    class FacePaint_Yugoslavia
		{			
			mat_paint="Survivalists_FacePaints\heads\fp_yugoslavia\hhl_f_Baty_body.rvmat";
		};
	};
};
