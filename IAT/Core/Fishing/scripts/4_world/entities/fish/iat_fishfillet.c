class IAT_Fishing_ClamFilletMeat extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
	}		
	override bool CanBeCookedOnStick()
	{
		return true;
	}
	override bool IsMeat()
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

class IAT_Fishing_SaltWaterFishFilletMeat_Base extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
	}		
	override bool CanBeCookedOnStick()
	{
		return true;
	}
	override bool IsMeat()
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
class IAT_Fishing_SaltWaterFishFilletMeat_CoralFish extends IAT_Fishing_SaltWaterFishFilletMeat_Base{};
class IAT_Fishing_SaltWaterFishFilletMeat_AngelFish extends IAT_Fishing_SaltWaterFishFilletMeat_Base{};
class IAT_Fishing_SaltWaterFishFilletMeat_SailFish extends IAT_Fishing_SaltWaterFishFilletMeat_Base{};
class IAT_Fishing_SaltWaterFishFilletMeat_AnglerFish extends IAT_Fishing_SaltWaterFishFilletMeat_Base{};
class IAT_Fishing_SaltWaterFishFilletMeat_HammerHeadFish extends IAT_Fishing_SaltWaterFishFilletMeat_Base{};

class IAT_Fishing_FreshWaterFishFilletMeat_Base extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
	}		
	override bool CanBeCookedOnStick()
	{
		return true;
	}
	override bool IsMeat()
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
class IAT_Fishing_FreshWaterFishFilletMeat_TroutFish extends IAT_Fishing_FreshWaterFishFilletMeat_Base{};
class IAT_Fishing_FreshWaterFishFilletMeat_MutantFish extends IAT_Fishing_FreshWaterFishFilletMeat_Base{};
class IAT_Fishing_FreshWaterFishFilletMeat_SplakeFish extends IAT_Fishing_FreshWaterFishFilletMeat_Base{};
class IAT_Fishing_FreshWaterFishFilletMeat_PerchFish extends IAT_Fishing_FreshWaterFishFilletMeat_Base{};
class IAT_Fishing_FreshWaterFishFilletMeat_TilapiaFish extends IAT_Fishing_FreshWaterFishFilletMeat_Base{};