class ActionMortarCrushIntoPowderCB : ActionSingleUseBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CASingleUseQuantityEdible(UAQuantityConsumed.DEFAULT);
	}
};

class ActionMortarCrushIntoPowder: ActionSingleUseBase
{
	void ActionMortarCrushIntoPowder()
	{
		m_CallbackClass = ActionMortarCrushIntoPowderCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_HANDCUFFTARGET;
		m_StanceMask = DayZPlayerConstants.STANCEIDX_ERECT | DayZPlayerConstants.STANCEIDX_CROUCH;
		m_FullBody = true;
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override string GetText()
	{
		return "Crush Into Powder";
	}

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        SRP_MortarBowl mortarAndPestle;
        if (Class.CastTo(mortarAndPestle, item))
        {
            return mortarAndPestle.CanCrushFlowerIntoHerbs();
        }
        return false;
	}

	override void OnEndServer( ActionData action_data )
	{
        SRP_MortarBowl mortarBowl
		if (Class.CastTo(mortarBowl, action_data.m_MainItem)) // if the main item exists
		{
            mortarBowl.CrushFlowerIntoHerbs();
		}
	}
};