class CfgPatches
{
	class Survivalists_PostBox_Tools
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

  class SRP_PostBoxKeys_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Blank Post Box Keys";
		descriptionShort="Crude keys to lock and unlock a post box";
		model="\dz\gear\tools\Handcuff_Keys.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		rotationFlags=17;
		RestrainUnlockType=0;
		weight=4;
		itemSize[]={1,1};
		fragility=0.0099999998;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1,{"DZ\gear\tools\data\Handcuff_Key.rvmat"}},						
						{0.69999999,{"DZ\gear\tools\data\Handcuff_Key.rvmat"}},						
						{0.5,{"DZ\gear\tools\data\Handcuff_Key_damage.rvmat"}},						
						{0.30000001,{"DZ\gear\tools\data\Handcuff_Key_damage.rvmat"}},						
						{0,{"DZ\gear\tools\data\Handcuff_Key_destruct.rvmat"}}
					};
				};
			};
		};
		soundImpactType="metal";
	};
  class SRP_PostBoxKeys_User: SRP_PostBoxKeys_ColorBase
	{
		scope=2;
	};
  class SRP_PostBoxKeys_Admin: SRP_PostBoxKeys_ColorBase
	{
		scope=2;
		displayName="Master Post Box Key";
		descriptionShort="Opens any post box. You probably shouldn't be holding this.";
	};
  class SRP_SealPress_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Seal Press";
		descriptionShort="A tool to press wax onto an envelope to seal the contents.";
		model="Survivalists_PostBox\tools\srp_waxsealer.p3d";
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
					hitpoints=100;
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

  class SRP_SealPress_NoWax: SRP_SealPress_ColorBase
  {
    scope=2;
    displayName="Seal Press";
    color="NoWax";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_PostBox\containers\data\srp_sealedletter_co.paa"
    };
  };
  class SRP_SealPress_Black: SRP_SealPress_ColorBase
  {
    scope=2;
    displayName="Seal Press - Black Wax";
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
  class SRP_SealPress_Blue: SRP_SealPress_ColorBase
  {
    scope=2;
    displayName="Seal Press - Blue Wax";
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
  class SRP_SealPress_Brown: SRP_SealPress_ColorBase
  {
    scope=2;
    displayName="Seal Press - Brown Wax";
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
  class SRP_SealPress_Green: SRP_SealPress_ColorBase
  {
    scope=2;
    displayName="Seal Press - Green Wax";
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
  class SRP_SealPress_Pink: SRP_SealPress_ColorBase
  {
    scope=2;
    displayName="Seal Press - Pink Wax";
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
  class SRP_SealPress_Red: SRP_SealPress_ColorBase
  {
    scope=2;
    displayName="Seal Press - Red Wax";
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
  class SRP_SealPress_White: SRP_SealPress_ColorBase
  {
    scope=2;
    displayName="Seal Press - White Wax";
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
  class SRP_SealPress_Yellow: SRP_SealPress_ColorBase
  {
    scope=2;
    displayName="Seal Press - Yellow Wax";
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