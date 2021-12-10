class CfgPatches
{
	class Survivalists_Mods_Characters_Shoes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Shoes",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  class AthleticShoes_ColorBase;
  
  //-------------------------------------BASE GAME OVERRIDE
	class NBCBootsBase: Clothing
	{
		class Protection 
    {
      repairableWithKits[]={5,6}; // duct tape and tire repair kit
		  heatIsolation=0.8;
      biological=1;
    }
	};

  class JungleBoots_ColorBase: Clothing
	{
		itemSize[]={2,2};
		itemsCargoSize[]={1,2};
    repairableWithKits[]={5,3};
		repairCosts[]={30,25};
  };

};