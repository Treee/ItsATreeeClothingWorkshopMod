class CfgPatches
{
	class Survivalists_Building_Structures_Military
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Structures_Military"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
  class SRP_KitBase;
//========================================== SCOPE 1
  class land_srp_turret_bmg: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Building\structures\military\srp_turret_bmg.p3d";
	};
  class land_srp_turret_machine: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Building\structures\military\srp_turret_machine.p3d";
	};
  class land_srp_turret_railgundouble: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Building\structures\military\srp_turret_railgundouble.p3d";
	};
//========================================== "HOUSE" STRUCTURES
  class SRP_Military_Turret_Bmg_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Military Turret - BMG";
		descriptionShort="A worn turret. Might have some working internals left.";
    projectionTypename="SRP_Military_Turret_Bmg";
	};
  class SRP_Military_Turret_Bmg: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\military\srp_turret_bmg.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Building\structures\military\data\srp_turret_bmg_co.paa"};
	};

  class SRP_Military_Turret_Machine_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Military Turret - Machine";
		descriptionShort="A worn turret. Might have some working internals left.";
    projectionTypename="SRP_Military_Turret_Machine";
	};
  class SRP_Military_Turret_Machine: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\military\srp_turret_machine.p3d";
    hiddenSelections[]={"top","zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Building\structures\military\data\srp_turret_machinetop_co.paa","Survivalists_Building\structures\military\data\srp_turret_machinebot_co.paa"};
	};

  class SRP_Military_Turret_DoubleRailGun_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Military Turret - Double Railgun";
		descriptionShort="A worn turret. Might have some working internals left.";
    projectionTypename="SRP_Military_Turret_DoubleRailGun";
	};
  class SRP_Military_Turret_DoubleRailGun: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\military\srp_turret_railgundouble.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Building\structures\military\data\srp_turret_railgundouble_co.paa"};
	};
};