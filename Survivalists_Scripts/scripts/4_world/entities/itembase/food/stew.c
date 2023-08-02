class srpStew_Base extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
	}		
	override bool IsMeat()
	{
		return true;
	}
	override bool CanBeCookedOnStick()
	{
		return false;
	}
	override bool CanDecay()
	{
		return true;
	}
  override bool IsForgeHardened()
  {
    return true;
  }
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatMeat);
	}
};

class srpStew_Meat extends srpStew_Base{};
class srpStew_Mix extends srpStew_Base{};
class srpStew_Veggie extends srpStew_Base{};

// profession bench foods
class srpStew_ApplePie extends srpStew_Base
{
  override bool HasHealthRegenEffect()
  {
    return true;
  }
};
class srpStew_MacNCheese extends srpStew_Base
{
  override bool HasBloodRegenEffect()
  {
    return true;
  }
  override int GetBloodRegenEffectTotal()
  {
    return 2;
  }  
};
class srpStew_Popcorn extends srpStew_Base
{
  override bool HasCharcoalEffect()
  {
    return true;
  }
};
class srpStew_RiceSalad extends srpStew_Base
{
  override bool HasEpinephrineEffect()
  {
    return true;
  }
};

// poisoned foods
class srpStew_ApplePiePoisoned extends srpStew_Base
{
  override bool IsPoisoned()
  {
    return true;
  }
};
class srpStew_MacNCheesePoisoned extends srpStew_Base
{
  override bool IsPoisoned()
  {
    return true;
  }
};
class srpStew_PopcornPoisoned extends srpStew_Base
{
  override bool IsPoisoned()
  {
    return true;
  }
};
class srpStew_RiceSaladPoisoned extends srpStew_Base
{
  override bool IsPoisoned()
  {
    return true;
  }
};