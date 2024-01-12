class IAT_Fishing_FishBase extends Edible_Base
{
  string GetFilletType()
  {
    TStringArray parts = {};
    GetType().Split("_", parts);
    if (parts.Count() > 1)
    {
      Print("fillet: " + string.Format("SRP_FreshWaterFishFilletMeat_%1", parts.Get(1)));
      return string.Format("SRP_FreshWaterFishFilletMeat_%1", parts.Get(1));
    }
    return "";
  }
  override bool CanBeCookedOnStick()
	{
		return false;
	}
	override bool CanBeCooked()
	{
		return false;
	}	
	override bool IsCorpse()
	{
		return true;
	}	
	override bool CanDecay()
	{
		return true;
	}
  override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatMeat);
		
		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}
};
class IAT_Fishing_FreshWaterFish_Base extends IAT_Fishing_FishBase{};
class IAT_Fishing_SaltWaterFish_Base extends IAT_Fishing_FishBase{};

//=========================================================== SALTWATER FISH
// coral
class IAT_Fishing_CoralFish_ColorBase extends IAT_Fishing_SaltWaterFish_Base{};
class IAT_Fishing_CoralFish_Blue_Small extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Blue_Medium extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Blue_Large extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Blue_Epic extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Green_Small extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Green_Medium extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Green_Large extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Green_Epic extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Purple_Small extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Purple_Medium extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Purple_Large extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Purple_Epic extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Red_Small extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Red_Medium extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Red_Large extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Red_Epic extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Yellow_Small extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Yellow_Medium extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Yellow_Large extends IAT_Fishing_CoralFish_ColorBase{};
class IAT_Fishing_CoralFish_Yellow_Epic extends IAT_Fishing_CoralFish_ColorBase{};
// angelfish
class IAT_Fishing_AngelFish_ColorBase extends IAT_Fishing_SaltWaterFish_Base{};
class IAT_Fishing_AngelFish_Blue_Small extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Blue_Medium extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Blue_Large extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Blue_Epic extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Orange_Small extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Orange_Medium extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Orange_Large extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Orange_Epic extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Red_Small extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Red_Medium extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Red_Large extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Red_Epic extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Yellow_Small extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Yellow_Medium extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Yellow_Large extends IAT_Fishing_AngelFish_ColorBase{};
class IAT_Fishing_AngelFish_Yellow_Epic extends IAT_Fishing_AngelFish_ColorBase{};
// sailfish
class IAT_Fishing_SailFish_ColorBase extends IAT_Fishing_SaltWaterFish_Base{};
class IAT_Fishing_SailFish_Blue_Small extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Blue_Medium extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Blue_Large extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Blue_Epic extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Green_Small extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Green_Medium extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Green_Large extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Green_Epic extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Red_Small extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Red_Medium extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Red_Large extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Red_Epic extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Yellow_Small extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Yellow_Medium extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Yellow_Large extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Yellow_Epic extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Silver_Small extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Silver_Medium extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Silver_Large extends IAT_Fishing_SailFish_ColorBase{};
class IAT_Fishing_SailFish_Silver_Epic extends IAT_Fishing_SailFish_ColorBase{};
// anglerfish
class IAT_Fishing_AnglerFish_ColorBase extends IAT_Fishing_SaltWaterFish_Base{};
class IAT_Fishing_AnglerFish_Blue_Small extends IAT_Fishing_AnglerFish_ColorBase{};
class IAT_Fishing_AnglerFish_Blue_Medium extends IAT_Fishing_AnglerFish_ColorBase{};
class IAT_Fishing_AnglerFish_Blue_Large extends IAT_Fishing_AnglerFish_ColorBase{};
class IAT_Fishing_AnglerFish_Blue_Epic extends IAT_Fishing_AnglerFish_ColorBase{};
class IAT_Fishing_AnglerFish_Purple_Small extends IAT_Fishing_AnglerFish_ColorBase{};
class IAT_Fishing_AnglerFish_Purple_Medium extends IAT_Fishing_AnglerFish_ColorBase{};
class IAT_Fishing_AnglerFish_Purple_Large extends IAT_Fishing_AnglerFish_ColorBase{};
class IAT_Fishing_AnglerFish_Purple_Epic extends IAT_Fishing_AnglerFish_ColorBase{};
class IAT_Fishing_AnglerFish_Silver_Small extends IAT_Fishing_AnglerFish_ColorBase{};
class IAT_Fishing_AnglerFish_Silver_Medium extends IAT_Fishing_AnglerFish_ColorBase{};
class IAT_Fishing_AnglerFish_Silver_Large extends IAT_Fishing_AnglerFish_ColorBase{};
class IAT_Fishing_AnglerFish_Silver_Epic extends IAT_Fishing_AnglerFish_ColorBase{};
// hammerhead
class IAT_Fishing_HammerHeadFish_ColorBase extends IAT_Fishing_SaltWaterFish_Base{};
class IAT_Fishing_HammerHeadFish_Blue_Small extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Blue_Medium extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Blue_Large extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Blue_Epic extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Red_Small extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Red_Medium extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Red_Large extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Red_Epic extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Silver_Small extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Silver_Medium extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Silver_Large extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Silver_Epic extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Yellow_Small extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Yellow_Medium extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Yellow_Large extends IAT_Fishing_HammerHeadFish_ColorBase{};
class IAT_Fishing_HammerHeadFish_Yellow_Epic extends IAT_Fishing_HammerHeadFish_ColorBase{};

//=========================================================== FRESHWATER FISH
// trout
class IAT_Fishing_TroutFish_ColorBase extends IAT_Fishing_FreshWaterFish_Base{};
class IAT_Fishing_TroutFish_Brown_Small extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Brown_Medium extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Brown_Large extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Brown_Epic extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Blue_Small extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Blue_Medium extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Blue_Large extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Blue_Epic extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Red_Small extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Red_Medium extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Red_Large extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Red_Epic extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Yellow_Small extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Yellow_Medium extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Yellow_Large extends IAT_Fishing_TroutFish_ColorBase{};
class IAT_Fishing_TroutFish_Yellow_Epic extends IAT_Fishing_TroutFish_ColorBase{};

// mutant
class IAT_Fishing_MutantFish_ColorBase extends IAT_Fishing_FreshWaterFish_Base{};
class IAT_Fishing_MutantFish_Red_Small extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Red_Medium extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Red_Large extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Red_Epic extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Blue_Small extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Blue_Medium extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Blue_Large extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Blue_Epic extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Green_Small extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Green_Medium extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Green_Large extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Green_Epic extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Yellow_Small extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Yellow_Medium extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Yellow_Large extends IAT_Fishing_MutantFish_ColorBase{};
class IAT_Fishing_MutantFish_Yellow_Epic extends IAT_Fishing_MutantFish_ColorBase{};

// splake
class IAT_Fishing_SplakeFish_ColorBase extends IAT_Fishing_FreshWaterFish_Base{};
class IAT_Fishing_SplakeFish_Red_Small extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Red_Medium extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Red_Large extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Red_Epic extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Blue_Small extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Blue_Medium extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Blue_Large extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Blue_Epic extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Green_Small extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Green_Medium extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Green_Large extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Green_Epic extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Yellow_Small extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Yellow_Medium extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Yellow_Large extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Yellow_Epic extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Purple_Small extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Purple_Medium extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Purple_Large extends IAT_Fishing_SplakeFish_ColorBase{};
class IAT_Fishing_SplakeFish_Purple_Epic extends IAT_Fishing_SplakeFish_ColorBase{};

// perch
class IAT_Fishing_PerchFish_ColorBase extends IAT_Fishing_FreshWaterFish_Base{};
class IAT_Fishing_PerchFish_Red_Small extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Red_Medium extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Red_Large extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Red_Epic extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Blue_Small extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Blue_Medium extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Blue_Large extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Blue_Epic extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Green_Small extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Green_Medium extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Green_Large extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Green_Epic extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Yellow_Small extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Yellow_Medium extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Yellow_Large extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Yellow_Epic extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Silver_Small extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Silver_Medium extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Silver_Large extends IAT_Fishing_PerchFish_ColorBase{};
class IAT_Fishing_PerchFish_Silver_Epic extends IAT_Fishing_PerchFish_ColorBase{};

// tilapia
class IAT_Fishing_TilapiaFish_ColorBase extends IAT_Fishing_FreshWaterFish_Base{};
class IAT_Fishing_TilapiaFish_Blue_Small extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Blue_Medium extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Blue_Large extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Blue_Epic extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Red_Small extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Red_Medium extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Red_Large extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Red_Epic extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Green_Small extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Green_Medium extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Green_Large extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Green_Epic extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Yellow_Small extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Yellow_Medium extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Yellow_Large extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Yellow_Epic extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Silver_Small extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Silver_Medium extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Silver_Large extends IAT_Fishing_TilapiaFish_ColorBase{};
class IAT_Fishing_TilapiaFish_Silver_Epic extends IAT_Fishing_TilapiaFish_ColorBase{};