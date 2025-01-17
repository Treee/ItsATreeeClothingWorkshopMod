class CfgPatches
{
	class Survivalists_Mods_Structures_Specific
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Structures_Specific"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;	

  class Land_srp_willowtree_large: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_willowtree.p3d";
    hiddenSelections[]=
		{
			"trunk",
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_willowtreetrunk_co.paa",
      "Survivalists_Mods\structures\specific\artifacts\data\srp_willowtreeleaves_ca.paa"
		};
	};
  class Land_srp_willowtree_muwu: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_willowtree.p3d";
    hiddenSelections[]=
		{
			"trunk",
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_willowtreetrunk_co.paa",
      "Survivalists_Mods\structures\specific\artifacts\data\srp_willowtreeleaves_muwu_ca.paa"
		};
	};

  class Land_srp_warhorn_large: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\sentry\srp_warhorn_large.p3d";
    hiddenSelections[]=
		{
			"zbytek",
      "stand"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\sentry\data\srp_warhorn_co.paa",
      "Survivalists_Mods\structures\specific\sentry\data\srp_warhorn_stand_co.paa"
		};
	};

  class Land_srp_artifact_rubixcube_1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_rubixcube.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_rubixcube_co.paa"
		};
    class AnimationSources
    {
      class row1{source="user";initPhase=0;animPeriod=1;};
      class row2{source="user";initPhase=0;animPeriod=1;};
      class col1{source="user";initPhase=0;animPeriod=1;};
      class col2{source="user";initPhase=0;animPeriod=1;};
      class z1{source="user";initPhase=0;animPeriod=1;};
      class z2{source="user";initPhase=0;animPeriod=1;};
    };
	};
  class Land_srp_artifact_galaxymap_1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_galaxyball.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_galaxyball_co.paa"
		};
	};
  class Land_srp_artifact_ancientspear_1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_ancientspear.p3d";
    hiddenSelections[]=
		{
			"zbytek",
      "blade"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_ancientspear_co.paa",
      "Survivalists_Mods\structures\specific\artifacts\data\srp_ancientspear_head_co.paa"
		};
	};
  
  class Land_srp_artifact_ancientmarker_green: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_ancientmarker.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_ancientmarker_green_co.paa"
		};
	};
  class Land_srp_artifact_ancientmarker_blue: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_ancientmarker.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_ancientmarker_blue_co.paa"
		};
	};
  class Land_srp_artifact_ancientmarker_red: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_ancientmarker.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_ancientmarker_red_co.paa"
		};
	};
  class Land_srp_artifact_ancientmarker_yellow: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_ancientmarker.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_ancientmarker_yellow_co.paa"
		};
	};
  class Land_srp_artifact_gameboy_1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_gameboy.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_gameboy_ca.paa"
		};
	};
  class Land_srp_artifact_totem_wolf: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_totemwolf.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_totemwolf_co.paa"
		};
	};
  class Land_srp_artifact_totem_monkey: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_totemmonkey.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_totemmonkey_co.paa"
		};
	};
  class Land_srp_artifact_totem_wood: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_totemwood.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_totemwood_co.paa"
		};
	};
  class Land_srp_artifact_totem_face: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_totemface.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_totemface_co.paa"
		};
	};

  class Land_srp_artifact_runestone_arrow_large: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactarrow_large.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactarrow_large_co.paa"
		};
	};
  class Land_srp_artifact_runestone_arrow_small: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactarrow_small.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactarrow_small_co.paa"
		};
	};
  class Land_srp_artifact_runestone_claw_large: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactclaw_large.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactclaw_large_co.paa"
		};
	};
  class Land_srp_artifact_runestone_claw_small: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactclaw_small.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactclaw_small_co.paa"
		};
	};
  class Land_srp_artifact_runestone_stone_large: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactstone_large.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactstone_large_co.paa"
		};
	};
  class Land_srp_artifact_runestone_stone_small: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactstone_small.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactstone_large_co.paa"
		};
	};
  class Land_srp_artifact_runestone_wave_large: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactwave_large.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactwave_large_co.paa"
		};
	};
  class Land_srp_artifact_runestone_wave_small: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactwave_small.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactwave_small_co.paa"
		};
	};
  class Land_srp_artifact_stonehenge_1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactstonehenge_1.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactstonehenge_co.paa"
		};
	};
  class Land_srp_artifact_stonehenge_2: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactstonehenge_2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactstonehenge_co.paa"
		};
	};
  class Land_srp_artifact_stonehenge_3: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactstonehenge_3.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactstonehenge_co.paa"
		};
	};
  class Land_srp_artifact_stonehenge_4: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactstonehenge_4.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactstonehenge_co.paa"
		};
	};
  class Land_srp_artifact_stonehenge_5: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactstonehenge_5.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactstonehenge_teardrop_co.paa"
		};
	};
  class Land_srp_artifact_stonehenge_6: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactstonehenge_6.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactstonehenge_teardrop_co.paa"
		};
	};
  class Land_srp_artifact_maze_idol: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_ancientmaze_idol.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactmaze_idol_co.paa"
		};
	};

  class Land_srp_artifact_jar_large: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactjar_large.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactjar_co.paa"
		};
	};
  class Land_srp_artifact_jar_medium: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactjar_medium.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactjar_co.paa"
		};
	};
  class Land_srp_artifact_jar_small: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactjar_small.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactjar_co.paa"
		};
	};

  class Land_srp_artifact_clock_gear: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactclock_gear.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactclock_gear_co.paa"
		};
	};
  class Land_srp_artifact_clock_grandfather: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_artifactclock_grandfather.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_artifactclock_grandfather_co.paa"
		};
	};


  class Land_SRP_LabEquipment_Containers_Cart: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\containers_cart.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_Containers_Cube: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\containers_cube.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_Containers_CubeOpened: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\containers_cubeopened.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_Containers_CubeSmall: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\containers_cubesmall.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_Containers_Mesh: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\containers_mesh.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_Containers_MeshSquare: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\containers_meshsquare.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_Containers_Rectangle: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\containers_rectangle.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_TallContainers_1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\tallcontainers_1.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_TallContainers_2: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\tallcontainers_2.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_TallContainers_EggCabinet: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\tallcontainers_eggcabinet.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_TallContainers_EggIncubator: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\tallcontainers_eggincubator.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_TallContainers_VerticalTank: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\tallcontainers_verticaltanker.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_Terminals_DblMonitor_Left: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\terminals_dblmonitor_left.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_Terminals_DblMonitor_Right: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\terminals_dblmonitor_right.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_Terminals_Left: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\terminals_left.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_Terminals_Right: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\terminals_right.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_Terminals_SingleMonitor_Left: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\terminals_singlemonitor_left.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\specific\labequipment\data\srp_sciencelab_equipment_co.paa"};
	};
  class Land_SRP_LabEquipment_RetroTerminal: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\srp_retroterminal.p3d";
    hiddenSelections[]=
    {
      "zbytek",
      "screen"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\structures\specific\labequipment\data\srp_retroterminal_co.paa",
      "Survivalists_Mods\structures\specific\labequipment\data\srp_retroterminal_screen_co.paa"
    };
	};
  class Land_SRP_LabEquipment_RetroTerminal_MickFras: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\labequipment\srp_retroterminal.p3d";
    hiddenSelections[]=
    {
      "zbytek",
      "screen"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\structures\specific\labequipment\data\srp_retroterminal_co.paa",
      "Survivalists_Mods\structures\specific\labequipment\data\srp_retroterminal_screen_co.paa"
    };
	};

  class Land_srp_stoneportal: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_stoneportal.p3d";
    hiddenSelections[]=
		{
			"zbytek",
      "stones"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_stoneportal_ruins_co.paa",
      "Survivalists_Mods\structures\specific\artifacts\data\srp_stoneportal_base_co.paa"
		};
	};
};