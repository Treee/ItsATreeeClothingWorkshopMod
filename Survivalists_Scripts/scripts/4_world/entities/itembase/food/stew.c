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
  void OnConsume(float amount, PlayerBase consumer)
  {
    super.OnConsume(amount, consumer);
    if (!consumer)
			return;
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
  }
};
class srpStew_MacNCheese extends srpStew_Base
{
  void OnConsume(float amount, PlayerBase consumer)
  {
    super.OnConsume(amount, consumer);
    if (!consumer)
			return;
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
  }
};
class srpStew_Popcorn extends srpStew_Base
{
  void OnConsume(float amount, PlayerBase consumer)
  {
    super.OnConsume(amount, consumer);
    if (!consumer)
			return;
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
  }
};
class srpStew_RiceSalad extends srpStew_Base
{
  void OnConsume(float amount, PlayerBase consumer)
  {
    super.OnConsume(amount, consumer);
    if (!consumer)
			return;
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
  }
};