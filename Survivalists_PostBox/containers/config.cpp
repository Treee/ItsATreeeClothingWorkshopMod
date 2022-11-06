class CfgPatches
{
	class Survivalists_PostBox_Containers
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
  class Container_Base;

  class SRP_PostBox_KitBase: Inventory_Base
	{
		scope=0; //0 means cannot be directly spawned
		displayName="Kit Box";
		descriptionShort="A wooden box used to transport small items. Find a suitable place to construct. Can be disassembled.";
		model="\DZ\gear\camping\wooden_case.p3d";
		itemsCargoSize[]={0,0};
		itemSize[]={7,5};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_small";
		rotationFlags=2;
		heavyItem=1;
		weight=3000;
		itemBehaviour=2;
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_PostBox\containers\data\srp_kitbase_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
          healthLevels[] = {{1,""},{0.7,""},{0.5,""},{0.3,""},{0.1,""}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};

  class SRP_PostBox_Kit: SRP_PostBox_KitBase
	{
		scope=2;
		displayName="Post Box Kit";
		descriptionShort="A Post Box Kit";
    projectionTypename="SRP_PostBox";
	};
  class SRP_PostBox: Container_Base
	{
		scope=2;
		displayName="Post Box";
		descriptionShort="A box for mailing letters.";
		model="Survivalists_PostBox\containers\mailboxregular.p3d";
		weight=1000;
		itemSize[]={10,15};
		itemsCargoSize[]={0,0};
		slopeTolerance=0.30000001;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
    attachments[]=
    {
      "SRP_CourierNote1",
      "SRP_CourierNote2",
      "SRP_CourierNote3",
      "SRP_CourierNote4",
      "SRP_CourierNote5",
      "SRP_CourierNote6",
      "SRP_CourierNote7",
      "SRP_CourierNote8",
      "SRP_CourierNote9",
      "SRP_CourierNote10",
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						{1,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.69999999,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.5,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0.30000001,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0,{"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_PostBoxBlue_Kit: SRP_PostBox_KitBase
	{
		scope=2;
		displayName="Blue Post Box Kit";
		descriptionShort="A Blue Post Box Kit";
    projectionTypename="SRP_PostBoxBlue";
	};
  class SRP_PostBoxBlue: Container_Base
	{
		scope=2;
		displayName="Blue Post Box";
		descriptionShort="A box for mailing letters.";
		model="Survivalists_PostBox\containers\mailboxregularblue.p3d";
		weight=1000;
		itemSize[]={10,15};
		itemsCargoSize[]={0,0};
		slopeTolerance=0.30000001;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
    attachments[]=
    {
      "SRP_CourierNote1",
      "SRP_CourierNote2",
      "SRP_CourierNote3",
      "SRP_CourierNote4",
      "SRP_CourierNote5",
      "SRP_CourierNote6",
      "SRP_CourierNote7",
      "SRP_CourierNote8",
      "SRP_CourierNote9",
      "SRP_CourierNote10",
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						{1,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.69999999,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.5,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0.30000001,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0,{"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_PostBoxWooden_Kit: SRP_PostBox_KitBase
	{
		scope=2;
		displayName="Wooden Post Box Kit";
		descriptionShort="A Wooden Post Box Kit";
    projectionTypename="SRP_PostBoxWooden";
	};
  class SRP_PostBoxWooden: Container_Base
	{
		scope=2;
		displayName="Wooden Post Box";
		descriptionShort="A box for mailing letters.";
		model="Survivalists_PostBox\containers\mailboxwooden.p3d";
		weight=1000;
		itemSize[]={10,15};
		itemsCargoSize[]={0,0};
		slopeTolerance=0.30000001;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
    attachments[]=
    {
      "SRP_CourierNote1",
      "SRP_CourierNote2",
      "SRP_CourierNote3",
      "SRP_CourierNote4",
      "SRP_CourierNote5",
      "SRP_CourierNote6",
      "SRP_CourierNote7",
      "SRP_CourierNote8",
      "SRP_CourierNote9",
      "SRP_CourierNote10",
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						{1,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.69999999,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"}},
            {0.5,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0.30000001,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"}},
            {0,{"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_LetterHolder_ColorBase: Container_Base
	{
		scope=0;
		displayName="Letter Holder";
		descriptionShort="A letter folder used for holding letters";
		model="Survivalists_PostBox\containers\SRP_Letter_Holder.p3d";
		inventorySlot[]=
		{
			"Belt_Left"
		};
    attachments[]=
    {
      "SRP_CourierNote1",
      "SRP_CourierNote2",
      "SRP_CourierNote3",
      "SRP_CourierNote4",
      "SRP_CourierNote5",
      "SRP_CourierNote6",
      "SRP_CourierNote7",
      "SRP_CourierNote8",
      "SRP_CourierNote9",
      "SRP_CourierNote10",
    };
		weight=440;
		itemSize[]={2,3};
		itemsCargoSize[]={2,2};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_PostBox\containers\data\Letter_Holder_co.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{1.0,{"Survivalists_PostBox\containers\data\Letter_Holder.rvmat"}},						
						{0.69999999,{"Survivalists_PostBox\containers\data\Letter_Holder.rvmat"}},						
						{0.5,{"Survivalists_PostBox\containers\data\Letter_Holder.rvmat"}},						
						{0.30000001,{"Survivalists_PostBox\containers\data\Letter_Holder.rvmat"}},						
						{0.0,{"Survivalists_PostBox\containers\data\Letter_Holder.rvmat"}}
				  };
				};
			};
		};
	};
  class SRP_LetterHolder_Maroon: SRP_LetterHolder_ColorBase
	{
		scope=2;
    color="maroon";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_PostBox\containers\data\Letter_Holder_co.paa"
		};
	};
  class SRP_LetterHolder_Blue: SRP_LetterHolder_ColorBase
	{
		scope=2;
    color="blue";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_PostBox\containers\data\Letter_Holder_blue_co.paa"
		};
	};
  class SRP_LetterHolder_Purple: SRP_LetterHolder_ColorBase
	{
		scope=2;
    color="purple";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_PostBox\containers\data\Letter_Holder_purple_co.paa"
		};
	};
  class SRP_LetterHolder_Green: SRP_LetterHolder_ColorBase
	{
		scope=2;
    color="green";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_PostBox\containers\data\Letter_Holder_green_co.paa"
		};
	};
  class SRP_Letter_Holder: SRP_LetterHolder_ColorBase
  {
    scope=2;
    color="maroon";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_PostBox\containers\data\Letter_Holder_co.paa"
		};
  };

  class SRP_UnSealedLetter: Inventory_Base
	{
		scope=2;
		displayName="An Unsealed Letter";
		descriptionShort="A letter that is not sealed with wax.";
		model="Survivalists_PostBox\containers\srp_unsealedletter.p3d";
		weight=20;
		absorbency=1;
		itemSize[]={1,2};
    attachments[]=
    {
      "Paper"
    };
    inventorySlot[]=
    {
      "SRP_CourierNote1",
      "SRP_CourierNote2",
      "SRP_CourierNote3",
      "SRP_CourierNote4",
      "SRP_CourierNote5",
      "SRP_CourierNote6",
      "SRP_CourierNote7",
      "SRP_CourierNote8",
      "SRP_CourierNote9",
      "SRP_CourierNote10",
    };
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
  class SRP_SealedLetter_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="A Sealed Letter";
		descriptionShort="A letter that is sealed with wax.";
		model="Survivalists_PostBox\containers\srp_sealedletter.p3d";
		weight=20;
		absorbency=1;
		itemSize[]={1,2};
    attachments[]=
    {
      "Paper"
    };
    inventorySlot[]=
    {
      "SRP_CourierNote1",
      "SRP_CourierNote2",
      "SRP_CourierNote3",
      "SRP_CourierNote4",
      "SRP_CourierNote5",
      "SRP_CourierNote6",
      "SRP_CourierNote7",
      "SRP_CourierNote8",
      "SRP_CourierNote9",
      "SRP_CourierNote10",
    };
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

  class SRP_SealedLetter_Black: SRP_SealedLetter_ColorBase
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
  class SRP_SealedLetter_Blue: SRP_SealedLetter_ColorBase
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
  class SRP_SealedLetter_Brown: SRP_SealedLetter_ColorBase
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
  class SRP_SealedLetter_Green: SRP_SealedLetter_ColorBase
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
  class SRP_SealedLetter_Pink: SRP_SealedLetter_ColorBase
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
  class SRP_SealedLetter_Red: SRP_SealedLetter_ColorBase
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
  class SRP_SealedLetter_White: SRP_SealedLetter_ColorBase
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
  class SRP_SealedLetter_Yellow: SRP_SealedLetter_ColorBase
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