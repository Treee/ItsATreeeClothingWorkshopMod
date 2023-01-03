modded class ActionOpenDoors
{
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (!super.ActionCondition(player, target, item))
      return false;
    
		SRP_DefaultHouse srpHouse;
		if( Class.CastTo(srpHouse, target.GetObject()))
    {
      string name = srpHouse.GetActionComponentName(target.GetComponentIndex());
			name.ToLower();
      string windowPrefix = name.Substring( 0, 6); // look for window
      // Print(string.Format("name: %1 target component: %2", windowPrefix, name));
			if (windowPrefix == "window")
      {
        return srpHouse.HasProperDistanceToSRPWindow(name, player);
      }
      return false;
    }
    return false;
	}
};

modded class ActionCloseDoors
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (!super.ActionCondition(player, target, item))
      return false;

		SRP_DefaultHouse srpHouse;
		if( Class.CastTo(srpHouse, target.GetObject()))
    {
      string name = srpHouse.GetActionComponentName(target.GetComponentIndex());
			name.ToLower();
      string windowPrefix = name.Substring( 0, 6); // look for window
      // Print(string.Format("name: %1 target component: %2", windowPrefix, name));
			if (windowPrefix == "window")
      {
        return srpHouse.HasProperDistanceToSRPWindow(name, player);
      }
      return false;
    }
    return false;
	}
};