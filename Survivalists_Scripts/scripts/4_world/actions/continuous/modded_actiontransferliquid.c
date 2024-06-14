// modify this for brewing, you can only pour in water
modded class ActionPourLiquid
{
    override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{
        if( super.SetupAction( player, target, item, action_data, extra_data ) )
        {
            if (!GetGame().IsDedicatedServer())
            {
                SRP_BrewingWorkbench brewingWorkbench;
                if (Class.CastTo(brewingWorkbench, target.GetObject()))
                {
                    ItemBase brewingContainer;
                    if (Class.CastTo(brewingContainer, brewingWorkbench.GetItemOnSlot("BrewingBarrel1")))
                    {
                        ActionTarget newTarget = new ActionTarget(brewingContainer, target.GetObject(), target.GetComponentIndex(), target.GetCursorHitPos(), target.GetUtility());
                        action_data.m_Target = newTarget;
                    }
                    // if (Class.CastTo(brewingContainer, brewingWorkbench.GetItemOnSlot("BrewingBarrel")))
                    //   newTarget = new ActionTarget(brewingContainer, target.GetObject(), target.GetComponentIndex(), target.GetCursorHitPos(), target.GetUtility());
                }
            }
            return true;
        }
		return false;
	}
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        if (super.ActionCondition(player, target, item))
            return true;

        SRP_BrewingWorkbench brewingWorkbench;
        if (Class.CastTo(brewingWorkbench, target.GetObject()))
        {
            ItemBase brewingContainer;
            if (Class.CastTo(brewingContainer, brewingWorkbench.GetItemOnSlot("BrewingBarrel1")))
                return Liquid.CanTransfer(item,brewingContainer);
            // if (Class.CastTo(brewingContainer, brewingWorkbench.GetItemOnSlot("BrewingBarrel")))
            //   return Liquid.CanTransfer(item,brewingContainer);
        }
        return false;
	}
};
// modify this for brewing, you can only drain out disinfectant/alcohol
modded class ActionDrainLiquid
{
    override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
    {
        if( super.SetupAction( player, target, item, action_data, extra_data ) )
        {
            if (!GetGame().IsDedicatedServer())
            {
                SRP_BrewingWorkbench brewingWorkbench;
                if (Class.CastTo(brewingWorkbench, target.GetObject()))
                {
                    ItemBase brewingContainer;
                    if (Class.CastTo(brewingContainer, brewingWorkbench.GetItemOnSlot("BrewingBarrel")))
                    {
                        ActionTarget newTarget = new ActionTarget(brewingContainer, target.GetObject(), target.GetComponentIndex(), target.GetCursorHitPos(), target.GetUtility());
                        action_data.m_Target = newTarget;
                    }
                }
            }
            return true;
        }
        return false;
    }
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        if (super.ActionCondition(player, target, item))
            return true;

        SRP_BrewingWorkbench brewingWorkbench;
        if (Class.CastTo(brewingWorkbench, target.GetObject()))
        {
            ItemBase brewingContainer;
            if (Class.CastTo(brewingContainer, brewingWorkbench.GetItemOnSlot("BrewingBarrel")))
                return Liquid.CanTransfer(item,brewingContainer);
        }
        return false;
    }
};