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
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEat);
	}
}
