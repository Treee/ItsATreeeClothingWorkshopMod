modded class ActionTogglePlaceObject
{	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    if (item.GetType() == "ShelterKit")
    {
      return !player.IsSoundInsideBuilding();
    }
		return super.ActionCondition(player, target, item);
	}
};