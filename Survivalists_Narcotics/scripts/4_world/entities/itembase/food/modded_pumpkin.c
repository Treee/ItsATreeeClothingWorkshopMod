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

  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
    {
      if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
      {
	  	  player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 25);
      }
    }
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

  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
    {
      if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
      {
	  	  player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 25);
      }
    }
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