modded class ActionOpenDoors
{
  override void OnEndServer( ActionData action_data )
	{
    super.OnEndServer(action_data);
    SRP_ShippingContainerBase srpShippingContainer;
		if( Class.CastTo(srpShippingContainer, action_data.m_Target.GetObject()))
    {
      srpShippingContainer.DoRandomDoorOpenEvent();
    }
  }
};

modded class ActionCloseDoors
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // if a shipping container has been opened and a random event happened, dont let it close
    SRP_ShippingContainerBase srpShippingContainer;
		if( Class.CastTo(srpShippingContainer, target.GetObject()))
    {
      if (srpShippingContainer.HasRandomEventPerformed())
      {
        return false;
      }      
    }
    return super.ActionCondition(player, target, item);
	}
};
