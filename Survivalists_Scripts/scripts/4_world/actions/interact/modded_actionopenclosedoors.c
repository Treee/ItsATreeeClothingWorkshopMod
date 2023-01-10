modded class ActionOpenDoors
{
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    bool superCondition = super.ActionCondition(player, target, item);
		SRP_DefaultHouse srpHouse;
		if( Class.CastTo(srpHouse, target.GetObject()))
    {
      string name = srpHouse.GetActionComponentName(target.GetComponentIndex());
			name.ToLower();
      string windowPrefix = name.Substring( 0, 6); // look for window
      // Print(string.Format("name: %1 target component: %2", windowPrefix, name));
			if (windowPrefix == "window")
      {
        return superCondition && srpHouse.HasProperDistanceToSRPWindow(name, player);
      }
    }
    return superCondition;
	}
  
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
    bool superCondition = super.ActionCondition(player, target, item);
		SRP_DefaultHouse srpHouse;
		if( Class.CastTo(srpHouse, target.GetObject()))
    {
      string name = srpHouse.GetActionComponentName(target.GetComponentIndex());
			name.ToLower();
      string windowPrefix = name.Substring( 0, 6); // look for window
      // Print(string.Format("name: %1 target component: %2", windowPrefix, name));
			if (windowPrefix == "window")
      {
        return superCondition && srpHouse.HasProperDistanceToSRPWindow(name, player);
      }
    }
    // if a shipping container has been opened and a random event happened, dont let it close
    SRP_ShippingContainerBase srpShippingContainer;
		if( Class.CastTo(srpShippingContainer, target.GetObject()))
    {
      if (srpShippingContainer.HasRandomEventPerformed())
      {
        return false;
      }      
    }
    return superCondition;
	}
};
