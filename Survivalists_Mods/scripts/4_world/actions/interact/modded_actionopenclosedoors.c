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
    return superCondition;
	}
};