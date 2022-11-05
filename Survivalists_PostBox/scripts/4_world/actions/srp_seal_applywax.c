class ActionSRPApplyWaxCB extends ActionSingleUseBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CASingleUseQuantityEdible(UAQuantityConsumed.DEFAULT);
	}
};

class ActionSRPApplyWax: ActionSingleUseBase
{	
	void ActionSRPApplyWax()
	{
		m_CallbackClass = ActionSRPApplyWaxCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INJECTIONTARGET;
		m_StanceMask = DayZPlayerConstants.STANCEIDX_ERECT | DayZPlayerConstants.STANCEIDX_CROUCH;
		m_FullBody = true;
		m_Text = "Apply Wax";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (!target)
      return false;
		if (!item.IsInherited(SRP_SealPress_ColorBase))	
			return false;    

		SRP_WaxBar_ColorBase waxbar;
		if (Class.CastTo(waxbar, target.GetObject()))
		{		
			return !waxbar.IsRuined();
		}

		return false;
	}

		
	override void OnEndServer( ActionData action_data)
	{
    if (action_data.m_Target && action_data.m_Target.GetObject())
    {
      SRP_WaxBar_ColorBase waxbar = SRP_WaxBar_ColorBase.Cast(action_data.m_Target.GetObject());
      SRP_SealPress_ColorBase seal = SRP_SealPress_ColorBase.Cast(action_data.m_MainItem);

      waxbar.AddHealth(-10);
      seal.AddHealth(-1);

      TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(seal, string.Format("SRP_SealPress_%1",waxbar.ConfigGetString("color")), action_data.m_Player);
      lambda.SetTransferParams();
      action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);		
    }
	}
};