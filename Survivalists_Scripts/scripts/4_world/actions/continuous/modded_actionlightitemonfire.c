modded class ActionLightItemOnFire
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    if (super.ActionCondition(player, target, item))
      return true;
    
		ItemBase targetItem;
    
    if (Class.CastTo(targetItem, target.GetObject()) && item)
    {
			// when igniting item on the ground with igniter in hands
			if (!targetItem.IsIgnited() && !IsItemInCargoOfSomething(targetItem) && item.CanIgniteItem(targetItem) && targetItem.CanBeIgnitedBy(item))
			{
        if (targetItem.IsInherited(SRP_FireplaceBase))
        {
					if (Fireplace.CanIgniteEntityAsFireplace(targetItem))
						return true;
          return false;
        }
        return false;
			}
		}
		return false;
	}
};