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
      class imageSets
      {
        files[]=
        {
          "SRP_Tree_Mods/gui/images/srp_tree_iconset.imageset"
        };
      };
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
  class Clothing;
	class MassArmbandDouble_Colorbase;
  class Admin_BioZone_Protection: MassArmbandDouble_Colorbase
	{
		scope=2;
		displayName="Biozone Cheater!!";
		descriptionShort="Ignore biohzard effects";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Armbands_Flags\data\armbands\armband_nuclear_co.paa",
			"Survivalists_Armbands_Flags\data\armbands\armband_nuclear_co.paa",
			"Survivalists_Armbands_Flags\data\armbands\armband_nuclear_co.paa",
			"Survivalists_Armbands_Flags\data\armbands\armband_nuclear_co.paa",
			"Survivalists_Armbands_Flags\data\armbands\armband_nuclear_co.paa"
		};
    class Protection {
      biological=6;
    }
	};

  // class Radio;
  // class My_Radio : Radio
  // {
  //   class Channels
  //   {
  //     class testradio
  //     {
  //       name="testradio";
  //       url="https://listen.socorock.com:8443/socorock.ogg";
  //     };
  //   };
  // }

	class NBCHoodBase: Clothing
  {
    class Protection {
      biological=1;
    }
  }

	class NBCJacketBase: Clothing
	{
		class Protection {
      biological=1;
    }
	};

	class NBCPantsBase: Clothing
	{
		class Protection {
      biological=1;
    }
	};

	class NBCBootsBase: Clothing
	{
		class Protection {
      biological=1;
    }
	};

	class NBCGloves_ColorBase: Clothing
	{
		class Protection {
      biological=1;
    }
	};
};