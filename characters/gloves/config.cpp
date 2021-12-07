class CfgPatches
{
	class Survivalists_Mods_Characters_Gloves
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Gloves",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Clothing;  

  //-------------------------------------BASE GAME OVERRIDE
  class NBCGloves_ColorBase: Clothing
	{
    heatIsolation=0.6;
		repairableWithKits[]={5,6}; // duct tape and repair kit
		class Protection 
    {
      biological=1;
    }
	};

};