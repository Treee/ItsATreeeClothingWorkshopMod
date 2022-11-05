class CfgPatches
{
	class Survivalists_PostBox_Consumables
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};
class CfgVehicles
{  
  class Inventory_Base;

  class SRP_WaxBar_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Wax Bar";
		descriptionShort="A bar of wax made from tallow.";
		model="Survivalists_PostBox\consumables\srp_waxstick.p3d";
		weight=20;
		absorbency=1;
		itemSize[]={1,2};
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_PostBox\containers\data\srp_sealedletter_co.paa"
    };
		rotationFlags=16;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
            {	1.0,{"Survivalists_PostBox\containers\data\srp_sealedletter.rvmat"	}},
            {	0.69999999,{"Survivalists_PostBox\containers\data\srp_sealedletter.rvmat"	}},
            {	0.5,{"Survivalists_PostBox\containers\data\srp_sealedletter_damage.rvmat"	}},
            {	0.30000001,{"Survivalists_PostBox\containers\data\srp_sealedletter_damage.rvmat"	}},
            {	0.0,{"Survivalists_PostBox\containers\data\srp_sealedletter_destruct.rvmat"	}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet="Bandage_loop_SoundSet";
					id=201;
				};
				class Bandage_loop2
				{
					soundSet="Bandage_loop_SoundSet";
					id=202;
				};
				class Bandage_loop3
				{
					soundSet="Bandage_loop_SoundSet";
					id=203;
				};
				class Bandage_start
				{
					soundSet="Bandage_start_SoundSet";
					id=204;
				};
				class Bandage_end
				{
					soundSet="Bandage_end_SoundSet";
					id=205;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
  class SRP_WaxBar_Black: SRP_WaxBar_ColorBase
  {
    scope=2;
    color="black";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_PostBox\containers\data\srp_sealedletter_black_co.paa"
    };
  };
  class SRP_WaxBar_Blue: SRP_WaxBar_ColorBase
  {
    scope=2;
    color="blue";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_PostBox\containers\data\srp_sealedletter_blue_co.paa"
    };
  };
  class SRP_WaxBar_Brown: SRP_WaxBar_ColorBase
  {
    scope=2;
    color="brown";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_PostBox\containers\data\srp_sealedletter_brown_co.paa"
    };
  };
  class SRP_WaxBar_Green: SRP_WaxBar_ColorBase
  {
    scope=2;
    color="green";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_PostBox\containers\data\srp_sealedletter_green_co.paa"
    };
  };
  class SRP_WaxBar_Pink: SRP_WaxBar_ColorBase
  {
    scope=2;
    color="pink";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_PostBox\containers\data\srp_sealedletter_pink_co.paa"
    };
  };
  class SRP_WaxBar_Red: SRP_WaxBar_ColorBase
  {
    scope=2;
    color="red";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_PostBox\containers\data\srp_sealedletter_red_co.paa"
    };
  };
  class SRP_WaxBar_White: SRP_WaxBar_ColorBase
  {
    scope=2;
    color="white";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_PostBox\containers\data\srp_sealedletter_white_co.paa"
    };
  };
  class SRP_WaxBar_Yellow: SRP_WaxBar_ColorBase
  {
    scope=2;
    color="yellow";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_PostBox\containers\data\srp_sealedletter_yellow_co.paa"
    };
  };
};