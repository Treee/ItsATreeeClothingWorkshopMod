class CfgPatches
{
	class Survivalists_RPWeapons_Pistols
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Pistols_Derringer",
      "DZ_Pistols_Flaregun"
		};
	};
};

class CfgWeapons
{
  class RifleCore;
  class Pistol_Base;

  class Derringer_Base: Pistol_Base
	{
    itemSize[]={2,2};
		inventorySlot[]+=
		{
   		"SRP_GunDerringer"
		};
	};
  class Flaregun_Base: Pistol_Base
	{
    inventorySlot[]+=
		{
   		"SRP_GunDerringer"
		};
  };

  class Derringer_Black: Derringer_Base
	{
		scope=0;
	};
	class Derringer_Pink: Derringer_Base
	{
		scope=0;
	};
	class Derringer_Grey: Derringer_Base
	{
		scope=0;
	};
};
