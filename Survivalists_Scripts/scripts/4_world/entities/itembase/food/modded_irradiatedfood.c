class Pumpkin_Irradiated extends Edible_Base
{
	override bool CanBeCooked()
	{
		return false;
	}		
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}	
	
	override bool IsFruit()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEat);
	}
  override bool HasRadioactiveEffect()
  {
    return true;
  }
  override void OnConsume(float amount, PlayerBase consumer)
	{
    super.OnConsume(amount, consumer);
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_STONEDIRRADIATED ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_STONEDIRRADIATED );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_STONEDIRRADIATED );
	}
};
class SlicedPumpkin_Irradiated extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
	}		
	
	override bool CanBeCookedOnStick()
	{
		return true;
	}	
	
	override bool IsFruit()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatFruit);
		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}
  override bool HasRadioactiveEffect()
  {
    return true;
  }
  override void OnConsume(float amount, PlayerBase consumer)
	{
    super.OnConsume(amount, consumer);
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_STONEDIRRADIATED ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_STONEDIRRADIATED );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_STONEDIRRADIATED );
	}
};
class Cannabis_Irradiated extends Edible_Base
{
	override bool CanBeCooked()
	{
		return false;
	}		
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}	
	
	override bool IsFruit()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
  override bool HasRadioactiveEffect()
  {
    return true;
  }
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEat);
	}
};
