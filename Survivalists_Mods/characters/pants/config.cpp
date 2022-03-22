class CfgPatches
{
	class Survivalists_Mods_Characters_Pants
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Pants",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Clothing;

  //-------------------------------------BASE GAME OVERRIDE
  class NBCPantsBase: Clothing
	{
    repairableWithKits[]={5,6}; // duct tape, tire repair kit
		class Protection 
    {
      biological=1;
    };
	};

  class CargoPants_ColorBase: Clothing
	{
		itemsCargoSize[]={7,4};
  };

  class GorkaPants_ColorBase: Clothing
	{
		itemsCargoSize[]={8,6};
    heatIsolation=0.80000001;
  };

  class HunterPants_ColorBase: Clothing
	{
		itemsCargoSize[]={8,6};
  };

  //-------------------------------------BASE GAME REtextures

};