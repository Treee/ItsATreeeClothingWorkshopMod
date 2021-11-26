class CfgPatches
{
	class Survivalists_Mods_Scripts
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Scripts"};
	};
};

class CfgSlots
{
  //=====================BASE GAME OVERRIDE

  //===================== CUSTOM
  class Slot_Cassette
	{
		name="Cassette";
		displayName="Cassette";
		ghostIcon="";
	};  
  class Slot_blade
	{
		name="blade";
		displayName="blade";
		selection="blade";
		ghostIcon="";
	};
  class Slot_Gasfilter
	{
		name="Gasfilter";
		displayName="Filter";
		ghostIcon="Filter";
		selection="FilterGP";
	};
	class Slot_CanisterGasoline
	{
		name="CanisterGasoline";
		displayName="CanisterGasoline";
		selection="CanisterGasoline";
		ghostIcon="gascanister";
	};
	class Slot_BP_lamp
	{
		name="BP_gas_lamp";
		displayName="gas_lamp";
		ghostIcon="gascanister";
		selection="BP_gas_lamp";
	};
	class Slot_SRP_CasePrep
	{
		name="SRP_CasePrep";
		displayName="Case Prep";
		ghostIcon="set:dayz_inventory image:cat_vehicle_engine";
		selection="CasePrep";
	};
	class Slot_SRP_AmmoPress
	{
		name="SRP_AmmoPress";
		displayName="Ammo Prep";
		ghostIcon="set:dayz_inventory image:cat_vehicle_engine";
		selection="AmmoPress";
	};
	class Slot_Gun1
	{
		name="shoulder1";
		displayName="shoulder1";
		ghostIcon="shoulderright";
		selection="shoulder1";
	};
	class Slot_Gun2
	{
		name="shoulder2";
		displayName="shoulder2";
		ghostIcon="shoulderright";
		selection="shoulder2";
	};
	class Slot_Gun3
	{
		name="shoulder3";
		displayName="shoulder3";
		ghostIcon="shoulderright";
		selection="shoulder3";
	};
	class Slot_Gun4
	{
		name="shoulder4";
		displayName="shoulder4";
		ghostIcon="shoulderright";
		selection="shoulder4";
	};
	class Slot_Gun5
	{
		name="shoulder5";
		displayName="shoulder5";
		ghostIcon="shoulderright";
		selection="shoulder5";
	};
	class Slot_Gun6
	{
		name="shoulder6";
		displayName="shoulder6";
		ghostIcon="shoulderright";
		selection="shoulder6";
	};
	class Slot_Gun7
	{
		name="shoulder7";
		displayName="shoulder7";
		ghostIcon="shoulderright";
		selection="shoulder7";
	};
	class Slot_Gun8
	{
		name="shoulder8";
		displayName="shoulder8";
		ghostIcon="shoulderright";
		selection="shoulder8";
	};
	class Slot_Gun9
	{
		name="shoulder9";
		displayName="shoulder9";
		ghostIcon="shoulderright";
		selection="shoulder9";
	};
	class Food1
	{
		name="Food1";
		displayName="Food1";
		ghostIcon="tincan";
		selection="Food1";
	};
	class Food2
	{
		name="Food2";
		displayName="Food2";
		ghostIcon="tincan";
		selection="Food2";
	};
	class Food3
	{
		name="Food3";
		displayName="Food3";
		ghostIcon="tincan";
		selection="Food3";
	};
	class Food4
	{
		name="Food4";
		displayName="Food4";
		ghostIcon="tincan";
		selection="Food4";
	};
	class Food5
	{
		name="Food5";
		displayName="Food5";
		ghostIcon="tincan";
		selection="Food5";
	};
	class Food6
	{
		name="Food6";
		displayName="Food6";
		ghostIcon="tincan";
		selection="Food6";
	};
	class Food7
	{
		name="Food7";
		displayName="Food7";
		ghostIcon="tincan";
		selection="Food7";
	};
	class Food8
	{
		name="Food8";
		displayName="Food8";
		ghostIcon="tincan";
		selection="Food8";
	};
	class Food9
	{
		name="Food9";
		displayName="Food9";
		ghostIcon="tincan";
		selection="Food9";
	};
	class Can
	{
		name="Can";
		displayName="Can";
		ghostIcon="tincan";
		selection="Can";
	};
	class Can1
	{
		name="Can1";
		displayName="Can1";
		ghostIcon="tincan";
		selection="Can1";
	};
	class Can2
	{
		name="Can2";
		displayName="Can2";
		ghostIcon="tincan";
		selection="Can2";
	};
	class Can3
	{
		name="Can3";
		displayName="Can3";
		ghostIcon="tincan";
		selection="Can3";
	};
	class Can4
	{
		name="Can4";
		displayName="Can4";
		ghostIcon="tincan";
		selection="Can4";
	};
	class Can5
	{
		name="Can5";
		displayName="Can5";
		ghostIcon="tincan";
		selection="Can5";
	};
	class Can6
	{
		name="Can6";
		displayName="Can6";
		ghostIcon="tincan";
		selection="Can6";
	};
	class Can7
	{
		name="Can7";
		displayName="Can7";
		ghostIcon="tincan";
		selection="Can7";
	};
	class Slot_Ingredient;
	class Slot_Ingredient1: Slot_Ingredient
	{
		name="Ingredient1";
		displayName="Ingredient1";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient2: Slot_Ingredient
	{
		name="Ingredient2";
		displayName="Ingredient2";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient3: Slot_Ingredient
	{
		name="Ingredient3";
		displayName="Ingredient3";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient4: Slot_Ingredient
	{
		name="Ingredient4";
		displayName="Ingredient4";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient5: Slot_Ingredient
	{
		name="Ingredient5";
		displayName="Ingredient5";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient6: Slot_Ingredient
	{
		name="Ingredient6";
		displayName="Ingredient6";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient7: Slot_Ingredient
	{
		name="Ingredient7";
		displayName="Ingredient7";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient8: Slot_Ingredient
	{
		name="Ingredient8";
		displayName="Ingredient8";
		ghostIcon="ingredient";
	};
	class Slot_carman1
	{
		name="carman1";
		displayName="carman1";
		selection="carman_1";
		ghostIcon="pouches";
	};
	class Slot_carman2
	{
		name="carman2";
		displayName="carman2";
		selection="carman_2";
		ghostIcon="pouches";
	};
	class Slot_Hatchet
	{
		name="Hatchet";
		displayName="Hatchet";
		ghostIcon="shoulderright";
	};
	class Slot_BPAxe
	{
		name="BPAxe";
		displayName="BPAxe";
		ghostIcon="shoulderright";
	};
	class Slot_FShovel
	{
		name="FShovel";
		displayName="FShovel";
		ghostIcon="shoulderright";
	};
	class Slot_binocular
	{
		name="binocular";
		displayName="binocular";
		ghostIcon="opticacog";
	};
	class Slot_FirstAid
	{
		name="firstaidkit";
		displayName="firstaidkit";
		ghostIcon="hips";
	};
	class Slot_no
	{
		name="no";
		displayName="no";
		selection="no";
		ghostIcon="shoulderright";
	};
	class Slot_no_car
	{
		name="no_car";
		displayName="no_car";
		selection="no";
		ghostIcon="shoulderright";
	};
	class Slot_Pen_slot
	{
		name="Pen_slot";
		displayName="Pen";
		ghostIcon="";
	};
	class Slot_SRPLRRadioBattery
	{
		name="SRPRadioBattery";
		displayName="Military Battery";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
  class Slot_SRP_LatheBelt
  {
		name="SRP_LatheBelt";
		displayName="Lathe Belt";
		ghostIcon="set:dayz_inventory image:cat_vehicle_engine";
  }
  class Slot_SRP_LatheTable
  {
		name="SRP_LatheTable";
		displayName="Lathe Table";
		ghostIcon="set:dayz_inventory image:cat_vehicle_engine";
  }
  class Slot_SRP_LatheGearDrive
  {
		name="SRP_LatheGearDrive";
		displayName="Lathe Gear Drive";
		ghostIcon="set:dayz_inventory image:cat_vehicle_engine";
  }
  class Slot_SRP_LatheClamp
  {
		name="SRP_LatheClamp";
		displayName="Lathe Clamp";
		ghostIcon="set:dayz_inventory image:cat_vehicle_engine";
  }

  class Slot_SRP_WoodDrill
  {
		name="SRP_WoodDrill";
		displayName="Wood Drill";
		ghostIcon="set:dayz_inventory image:cat_vehicle_engine";
  }
  class Slot_SRP_WoodClamp
  {
		name="SRP_WoodClamp";
		displayName="Wood Clamp";
		ghostIcon="set:dayz_inventory image:cat_vehicle_engine";
  }

  class Slot_SRP_SewingMachine
	{
		name="SRP_SewingMachine";
		displayName="Sewing Machine";
		ghostIcon="set:dayz_inventory image:cat_vehicle_engine";
		selection="SewingMachine";
	};

  class Slot_DrugRecipe_Meth
	{
		name="MethRecipe";
		displayName="MethRecipe";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_DrugRecipe_BathSalts
	{
		name="BathSaltsRecipe";
		displayName="BathSaltsRecipe";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_DrugRecipe_Acid
	{
		name="AcidRecipe";
		displayName="AcidRecipe";
		ghostIcon="set:dayz_inventory image:paper";
	};

	class Slot_SRP_CigaretteCase1
	{
		name="CigaretteCase1";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase2
	{
		name="CigaretteCase2";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase3
	{
		name="CigaretteCase3";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase4
	{
		name="CigaretteCase4";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase5
	{
		name="CigaretteCase5";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase6
	{
		name="CigaretteCase6";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase7
	{
		name="CigaretteCase7";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase8
	{
		name="CigaretteCase8";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase9
	{
		name="CigaretteCase9";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase10
	{
		name="CigaretteCase10";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase11
	{
		name="CigaretteCase11";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase12
	{
		name="CigaretteCase12";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase13
	{
		name="CigaretteCase13";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase14
	{
		name="CigaretteCase14";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};

  class Slot_SRP_TestTube1
	{
		name="TestTube1";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube2
	{
		name="TestTube2";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube3
	{
		name="TestTube3";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube4
	{
		name="TestTube4";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube5
	{
		name="TestTube5";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube6
	{
		name="TestTube6";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  
  class Slot_SRP_Comtacs
	{
		name="SRP_Comtacs";
		displayName="Comtacs";
		ghostIcon="set:dayz_inventory image:walkietalkie";
	};
  // class Slot_SRP_ToolRack1
	// {
	// 	name="ToolRack1";
	// 	displayName="Hand Tool";
	// 	ghostIcon="";
	// };
  class Slot_SRP_ForgeBellows
	{
		name="SRP_ForgeBellows";
		displayName="Bellows";
    ghostIcon="set:dayz_inventory image:cat_vehicle_engine";
	};

  class Slot_SRP_Patch
  {
		name="SRP_Patch";
		displayName="Flag Patch";
		ghostIcon="set:dayz_inventory image:missing";
  }

  class Slot_SmallPouch1
  {
		name="SmallPouch1";
		displayName="Small Pouch";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_SmallPouch2
  {
		name="SmallPouch2";
		displayName="Small Pouch";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_SmallPouch3
  {
		name="SmallPouch3";
		displayName="Small Pouch";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_SmallPouch4
  {
		name="SmallPouch4";
		displayName="Small Pouch";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_SmallPouch5
  {
		name="SmallPouch5";
		displayName="Small Pouch";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_SmallPouch6
  {
		name="SmallPouch6";
		displayName="Small Pouch";
		ghostIcon="set:dayz_inventory image:missing";
  }

  class Slot_LargePouch1
  {
		name="LargePouch1";
		displayName="Large Pouch";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_LargePouch2
  {
		name="LargePouch2";
		displayName="Large Pouch";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_LargePouch3
  {
		name="LargePouch3";
		displayName="Large Pouch";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_LargePouch4
  {
		name="LargePouch4";
		displayName="Large Pouch";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_LargePouch5
  {
		name="LargePouch5";
		displayName="Large Pouch";
		ghostIcon="set:dayz_inventory image:missing";
  }
  
  class Slot_SRP_RawOre
  {
		name="SRP_RawOre";
		displayName="Raw Ore";
		ghostIcon="set:dayz_inventory image:missing";
  }
  // ------------------------ CARDS
  class Slot_CardHand1
  {
		name="CardHand1";
		displayName="1st Card";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardHand2
  {
		name="CardHand2";
		displayName="2nd Card";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardHand3
  {
		name="CardHand3";
		displayName="3rd Card";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardHand4
  {
		name="CardHand4";
		displayName="4th Card";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardHand5
  {
		name="CardHand5";
		displayName="5th Card";
		ghostIcon="set:dayz_inventory image:missing";
  }


  class Slot_Card2Spade
  {
		name="Card2Spade";
		displayName="2 of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card3Spade
  {
		name="Card3Spade";
		displayName="3 of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card4Spade
  {
		name="Card4Spade";
		displayName="4 of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card5Spade
  {
		name="Card5Spade";
		displayName="5 of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card6Spade
  {
		name="Card6Spade";
		displayName="6 of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card7Spade
  {
		name="Card7Spade";
		displayName="7 of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card8Spade
  {
		name="Card8Spade";
		displayName="8 of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card9Spade
  {
		name="Card9Spade";
		displayName="9 of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card10Spade
  {
		name="Card10Spade";
		displayName="10 of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardJackSpade
  {
		name="CardJackSpade";
		displayName="Jack of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardQueenSpade
  {
		name="CardQueenSpade";
		displayName="Queen of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardKingSpade
  {
		name="CardKingSpade";
		displayName="King of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardAceSpade
  {
		name="CardAceSpade";
		displayName="Ace of Spades";
		ghostIcon="set:dayz_inventory image:missing";
  }

  class Slot_Card2Club
  {
		name="Card2Club";
		displayName="2 of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card3Club
  {
		name="Card3Club";
		displayName="3 of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card4Club
  {
		name="Card4Club";
		displayName="4 of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card5Club
  {
		name="Card5Club";
		displayName="5 of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card6Club
  {
		name="Card6Club";
		displayName="6 of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card7Club
  {
		name="Card7Club";
		displayName="7 of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card8Club
  {
		name="Card8Club";
		displayName="8 of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card9Club
  {
		name="Card9Club";
		displayName="9 of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card10Club
  {
		name="Card10Club";
		displayName="10 of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardJackClub
  {
		name="CardJackClub";
		displayName="Jack of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardQueenClub
  {
		name="CardQueenClub";
		displayName="Queen of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardKingClub
  {
		name="CardKingClub";
		displayName="King of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardAceClub
  {
		name="CardAceClub";
		displayName="Ace of Clubs";
		ghostIcon="set:dayz_inventory image:missing";
  }

  class Slot_Card2Diamond
  {
		name="Card2Diamond";
		displayName="2 of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card3Diamond
  {
		name="Card3Diamond";
		displayName="3 of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card4Diamond
  {
		name="Card4Diamond";
		displayName="4 of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card5Diamond
  {
		name="Card5Diamond";
		displayName="5 of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card6Diamond
  {
		name="Card6Diamond";
		displayName="6 of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card7Diamond
  {
		name="Card7Diamond";
		displayName="7 of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card8Diamond
  {
		name="Card8Diamond";
		displayName="8 of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card9Diamond
  {
		name="Card9Diamond";
		displayName="9 of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card10Diamond
  {
		name="Card10Diamond";
		displayName="10 of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardJackDiamond
  {
		name="CardJackDiamond";
		displayName="Jack of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardQueenDiamond
  {
		name="CardQueenDiamond";
		displayName="Queen of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardKingDiamond
  {
		name="CardKingDiamond";
		displayName="King of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardAceDiamond
  {
		name="CardAceDiamond";
		displayName="Ace of Diamonds";
		ghostIcon="set:dayz_inventory image:missing";
  }

  class Slot_Card2Heart
  {
		name="Card2Heart";
		displayName="2 of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card3Heart
  {
		name="Card3Heart";
		displayName="3 of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card4Heart
  {
		name="Card4Heart";
		displayName="4 of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card5Heart
  {
		name="Card5Heart";
		displayName="5 of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card6Heart
  {
		name="Card6Heart";
		displayName="6 of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card7Heart
  {
		name="Card7Heart";
		displayName="7 of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card8Heart
  {
		name="Card8Heart";
		displayName="8 of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card9Heart
  {
		name="Card9Heart";
		displayName="9 of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_Card10Heart
  {
		name="Card10Heart";
		displayName="10 of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardJackHeart
  {
		name="CardJackHeart";
		displayName="Jack of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardQueenHeart
  {
		name="CardQueenHeart";
		displayName="Queen of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardKingHeart
  {
		name="CardKingHeart";
		displayName="King of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }
  class Slot_CardAceHeart
  {
		name="CardAceHeart";
		displayName="Ace of Hearts";
		ghostIcon="set:dayz_inventory image:missing";
  }


};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMeat_steak;

  class ProxySodaCan_Used: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"tripWireAttachment"};
		model="\dz\gear\drinks\SodaCan_Used.p3d";
	};

	class ProxyJerryCan: ProxyAttachment
	{
		model="\dz\vehicles\parts\JerryCan.p3d";
		inventorySlot[]={"CanisterGasoline"};
	};

	class Proxysrp_ammoworkbench_caseprep: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_CasePrep"};
		model="Survivalists_Mods\proxy\srp_ammoworkbench_caseprep.p3d";
	};
	class Proxysrp_ammoworkbench_ammopress: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_AmmoPress"};
		model="Survivalists_Mods\proxy\srp_ammoworkbench_ammopress.p3d";
	};

  class Proxysrp_latheworkbench_belt: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_LatheBelt"};
		model="Survivalists_Mods\proxy\srp_latheworkbench_belt.p3d";
	};

  class Proxysrp_latheworkbench_table: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_LatheTable"};
		model="Survivalists_Mods\proxy\srp_latheworkbench_table.p3d";
	};

  class Proxysrp_latheworkbench_geardrive: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_LatheGearDrive"};
		model="Survivalists_Mods\proxy\srp_latheworkbench_geardrive.p3d";
	};

  class Proxysrp_latheworkbench_clamp: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_LatheClamp"};
		model="Survivalists_Mods\proxy\srp_latheworkbench_clamp.p3d";
	};

  class Proxysrp_wooddrill_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_WoodDrill"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_wooddrill_proxy.p3d"; //proxy path 
  };    
  class Proxysrp_woodclamp_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_WoodClamp"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_woodclamp_proxy.p3d"; //proxy path 
  };
  
  class Proxysrp_sewingworkbench_sewingmachine: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_SewingMachine"};
		model="Survivalists_Mods\proxy\srp_sewingworkbench_sewingmachine.p3d";
	};
	class Proxyfirstaidkit: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"firstaidkit"};
		model="\DZ\gear\containers\FirstAidKit.p3d";
	};

  class Proxycigarettecase_proxy1: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase1"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy1.p3d"; //proxy path 
  };    
  class Proxycigarettecase_proxy2: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase2"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy2.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy3: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase3"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy3.p3d"; //proxy path 
  };    
  class Proxycigarettecase_proxy4: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase4"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy4.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy5: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase5"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy5.p3d"; //proxy path 
  };    
  class Proxycigarettecase_proxy6: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase6"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy6.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy7: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase7"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy7.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy8: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase8"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy8.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy9: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase9"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy9.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy10: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase10"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy10.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy11: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase11"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy11.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy12: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase12"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy12.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy13: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase13"}; // same as slot name 
      model="Survivalists_Mods\proxy\cigarettecase_proxy13.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy14: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase14"}; // same as slot name 
    model="Survivalists_Mods\proxy\cigarettecase_proxy14.p3d"; //proxy path 
  };

  class Proxytesttube_proxy1: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"TestTube1"}; // same as slot name 
    model = "Survivalists_Mods\proxy\testtube_proxy1.p3d"; //proxy path 
  };    
  class Proxytesttube_proxy2: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"TestTube2"}; // same as slot name 
    model = "Survivalists_Mods\proxy\testtube_proxy2.p3d"; //proxy path 
  };
  class Proxytesttube_proxy3: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"TestTube3"}; // same as slot name 
    model = "Survivalists_Mods\proxy\testtube_proxy3.p3d"; //proxy path 
  };
  class Proxytesttube_proxy4: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"TestTube4"}; // same as slot name 
    model = "Survivalists_Mods\proxy\testtube_proxy4.p3d"; //proxy path 
  };
  class Proxytesttube_proxy5: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"TestTube5"}; // same as slot name 
    model = "Survivalists_Mods\proxy\testtube_proxy5.p3d"; //proxy path 
  };
  class Proxytesttube_proxy6: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"TestTube6"}; // same as slot name 
    model = "Survivalists_Mods\proxy\testtube_proxy6.p3d"; //proxy path 
  };

  class Proxyforge_stoneadvancedbellows: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_ForgeBellows"}; // same as slot name 
    model = "Survivalists_Mods\proxy\forge_stoneadvancedbellows.p3d"; //proxy path 
  };

  class Proxysrp_pouch_magazine_proxy1: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"magazine3"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_pouch_magazine_proxy1.p3d"; //proxy path 
  };

  class Proxysrp_patch_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_Patch"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_patch_proxy.p3d"; //proxy path 
  }; 
  class Proxysrp_smallpouch_proxy1: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SmallPouch1"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_smallpouch_proxy1.p3d"; //proxy path 
  };    
  class Proxysrp_smallpouch_proxy2: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SmallPouch2"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_smallpouch_proxy2.p3d"; //proxy path 
  };
  class Proxysrp_smallpouch_proxy3: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SmallPouch3"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_smallpouch_proxy3.p3d"; //proxy path 
  };
  class Proxysrp_smallpouch_proxy4: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SmallPouch4"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_smallpouch_proxy4.p3d"; //proxy path 
  };
  class Proxysrp_smallpouch_proxy5: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SmallPouch5"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_smallpouch_proxy5.p3d"; //proxy path 
  };
  class Proxysrp_smallpouch_proxy6: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SmallPouch6"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_smallpouch_proxy6.p3d"; //proxy path 
  };

  class Proxysrp_largepouch_proxy1: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"LargePouch1"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_largepouch_proxy1.p3d"; //proxy path 
  };    
  class Proxysrp_largepouch_proxy2: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"LargePouch2"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_largepouch_proxy2.p3d"; //proxy path 
  };
  class Proxysrp_largepouch_proxy3: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"LargePouch3"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_largepouch_proxy3.p3d"; //proxy path 
  };
  class Proxysrp_largepouch_proxy4: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"LargePouch4"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_largepouch_proxy4.p3d"; //proxy path 
  };
  class Proxysrp_largepouch_proxy5: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"LargePouch5"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_largepouch_proxy5.p3d"; //proxy path 
  };

  class Proxysrp_cardhand_proxy1: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"CardHand1"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_cardhand_proxy1.p3d"; //proxy path 
  };    
  class Proxysrp_cardhand_proxy2: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"CardHand2"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_cardhand_proxy2.p3d"; //proxy path 
  };
  class Proxysrp_cardhand_proxy3: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"CardHand3"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_cardhand_proxy3.p3d"; //proxy path 
  };
  class Proxysrp_cardhand_proxy4: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"CardHand4"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_cardhand_proxy4.p3d"; //proxy path 
  };
  class Proxysrp_cardhand_proxy5: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"CardHand5"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_cardhand_proxy5.p3d"; //proxy path 
  };

  class Proxysrp_comtacs: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_Comtacs"}; // same as slot name 
    model = "Survivalists_Mods\proxy\srp_comtacs.p3d"; //proxy path 
  };
  // -------------------- HIDING PROXIES
  // THIS WORKS BY SETTING THE PATH OF A PROXY TO SOMETHING
  // NONEXISTENT SO WHEN THE GAME TRIES TO RENDER, THERE IS NOTHING

	class Proxyshoulder1: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder1"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder1.p3d";
	};
	class Proxyshoulder2: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder2"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder2.p3d";
	};
	class Proxyshoulder3: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder3"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder3.p3d";
	};
	class Proxyshoulder4: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder4"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder4.p3d";
	};
	class Proxyshoulder5: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder5"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder5.p3d";
	};
	class Proxyshoulder6: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder6"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder6.p3d";
	};
	class Proxyshoulder7: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder7"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder7.p3d";
	};
	class Proxyshoulder8: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder8"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder8.p3d";
	};
	class Proxyshoulder9: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder9"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder9.p3d";
	};
	class Proxyshoulder10: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder10"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder10.p3d";
	};
	class Proxyshoulder11: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder11"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder11.p3d";
	};
	class Proxyshoulder12: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder12"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder12.p3d";
	};
	class Proxyshoulder13: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder13"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder13.p3d";
	};
	class Proxyshoulder14: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder14"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder14.p3d";
	};
	class Proxyshoulder15: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder15"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder15.p3d";
	};
	class Proxyshoulder16: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder16"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder16.p3d";
	};
	class Proxyshoulder17: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder17"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder17.p3d";
	};
	class Proxyshoulder18: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder18"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder18.p3d";
	};
	class Proxyshoulder19: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder19"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder19.p3d";
	};
	class Proxyshoulder20: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"1Shoulder20"};
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder20.p3d";
	};
};