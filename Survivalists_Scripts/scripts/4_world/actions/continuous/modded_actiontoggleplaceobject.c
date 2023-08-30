modded class ActionTogglePlaceObject
{	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    if (super.ActionCondition(player, target, item))
    {
      if (item.GetType() == "ShelterKit")
        return !player.IsSoundInsideBuilding();
      if (item.IsInherited(SRP_KitBase))
        return !item.IsRuined();
      return true;
    }
		return false;
	}
};