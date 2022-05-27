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

  //-------------------------------------BASE GAME OVERRIDE
	class NBCBootsBase: Clothing
	{
    soundAttType="None";
		class Protection 
    {
      repairableWithKits[]={5,6}; // duct tape and tire repair kit
		  heatIsolation=0.8;
      biological=1;
    };
	};

  class AthleticShoes_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer"};
  };
  class HikingBoots_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer"};
  };
  class HikingBootsLow_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer"};
  };
  class Wellies_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer","Knife"};
  };
  class WorkingBoots_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer"};
  };

  class JungleBoots_ColorBase: Clothing
	{
    attachments[]={"SRP_GunDerringer","Knife"};
    itemSize[]={2,2};
		itemsCargoSize[]={1,2};
    repairableWithKits[]={5,3};
		repairCosts[]={30,25};
  };

  class DressShoes_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer"};
  };
  class MilitaryBoots_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer","Knife"};
  };
  class CombatBoots_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer","Knife"};
  };
  class JoggingShoes_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer"};
  };
  class LeatherShoes_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer"};
    soundAttType="None";
  };
  class Sneakers_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer"};
  };
  class Ballerinas_ColorBase: Clothing
  {
    attachments[]={"SRP_GunDerringer"};
    soundAttType="None";
  };

  class Sneakers_Skylar_Biozone: Sneakers_ColorBase
	{
		scope=2;
		displayName="The Queen's Shoes";
		descriptionShort="Ignore biohzard effects";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\shoes\data\sneakers_Skylar_Bio_pink_co.paa",
			"Survivalists_Mods\characters\shoes\data\sneakers_Skylar_Bio_pink_co.paa",
			"Survivalists_Mods\characters\shoes\data\sneakers_Skylar_Bio_pink_co.paa"
		};
    class Protection
    {
      biological=6;
    };
	};

  class Sneakers_Sneaky: Sneakers_ColorBase
	{
		scope=2;
		displayName="These shoes are very quiet";
		descriptionShort="Shoes that move silently";
    soundAttType="None";
    hiddenSelectionsTextures[]=
		{
			"\dz\characters\shoes\data\Sneakers_Black_co.paa",
			"\dz\characters\shoes\data\Sneakers_Black_co.paa",
			"\dz\characters\shoes\data\Sneakers_Black_co.paa"
		};
    class Protection
    {
      biological=6;
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
        };
      };
    };
	};

};