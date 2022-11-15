class ActionSmokeSRPSmokableCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(1.5);
	}
};

class ActionSmokeSRPSmokableSelf: ActionContinuousBase
{
	void ActionSmokeSRPSmokableSelf()
	{
		m_CallbackClass = ActionSmokeSRPSmokableCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_TAKETEMPSELF;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_TAKETEMPSELF;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}
	override bool HasProneException()
	{
		return true;
	}
	override bool HasTarget()
	{
		return false;
	}
	override string GetText()
	{
		return "Smoke";
	}
  override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_Smokable_ColorBase smokable;
    if (SRP_Smokable_ColorBase.CastTo(smokable, item))
    {
      return smokable.IsLit();
    }
		return false;
	}
  override void OnEndServer( ActionData action_data )
	{	
    // Print("Smokable OnEndServer");
    action_data.m_Player.Consume(action_data.m_MainItem, 1, EConsumeType.ITEM_SINGLE_TIME);
		if ( action_data.m_MainItem && action_data.m_MainItem.GetQuantity() < 0.01 )
		{
			action_data.m_MainItem.SetQuantity(0);
		}
	}
};

class ActionForceSmokeSRPSmokableCB : ActionSingleUseBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CASingleUseQuantityEdible(UAQuantityConsumed.DEFAULT);
	}
};

class ActionForceSmokeSRPSmokable: ActionSingleUseBase
{
	void ActionForceSmokeSRPSmokable()
	{
		m_CallbackClass = ActionForceSmokeSRPSmokableCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INJECTIONTARGET;
		m_StanceMask = DayZPlayerConstants.STANCEIDX_ERECT | DayZPlayerConstants.STANCEIDX_CROUCH;
		m_FullBody = true;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
	}
		
	override string GetText()
	{
		return "Force Smoke";
	}
		
	override void OnEndServer( ActionData action_data )
	{
		if ( action_data.m_MainItem && action_data.m_MainItem.GetQuantity() <= 0 ) 
		{
			action_data.m_MainItem.AddQuantity(-1);
		}
	}
	
	override void OnExecuteServer( ActionData action_data )
	{
		PlayerBase target = PlayerBase.Cast(action_data.m_Target.GetObject());
		
		if ( target && action_data.m_MainItem )
		{
      // 1 is the default consumed quantity
			target.Consume(action_data.m_MainItem, 1, EConsumeType.ITEM_SINGLE_TIME);
		}
	}
};

class ActionExtinguishSmokeSRPSmokableSelf: ActionSingleUseBase
{
	void ActionExtinguishSmokeSRPSmokableSelf(){}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "Extinguish";
	}

  override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_Smokable_ColorBase smokable;
    if (SRP_Smokable_ColorBase.CastTo(smokable, item))
    {
      return smokable.IsLit();
    }
		return false;
	}

	// override void OnStartClient( ActionData action_data )
	// {
	// 	if ( action_data.m_MainItem  &&  action_data.m_MainItem.IsInherited(SRP_Smokable_ColorBase) )
	// 	{
  //     SRP_Smokable_ColorBase smokable = SRP_Smokable_ColorBase.CastTo(action_data.m_MainItem);
  //     if (smokable && smokable.IsLit())
  //     {
  //       smokable.ExtinguishSmokable();
  //     }
	// 	}
	// }
	
	override void OnStartServer( ActionData action_data )
	{
    SRP_Smokable_ColorBase smokable;
		if ( action_data.m_MainItem  && SRP_Smokable_ColorBase.CastTo(smokable, action_data.m_MainItem))
		{
      smokable.ExtinguishSmokable();
		}
	}
};

class ActionLightSmokableInHands: ActionSingleUseBase
{
	void ActionLightSmokableInHands()
	{
    m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_LIGHTFLARE;
	}
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
	override bool HasTarget()
	{
		return false;
	}
	override string GetText()
	{
		return "Ignite";
	}
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    SRP_Smokable_ColorBase smokable;
    if (SRP_Smokable_ColorBase.CastTo(smokable, item))
    {
      return !smokable.IsLit();
    }
		return false;
	}
	
	// override void OnStartClient( ActionData action_data )
	// {
	// 	if ( action_data.m_MainItem  &&  action_data.m_MainItem.IsInherited(SRP_Smokable_ColorBase) )
	// 	{
  //     SRP_Smokable_ColorBase smokable = SRP_Smokable_ColorBase.CastTo(action_data.m_MainItem);
  //     if (smokable && !smokable.IsLit())
  //     {
  //       smokable.LightSmokable();
  //     }
	// 	}
	// }
	
	override void OnStartServer( ActionData action_data )
	{
    SRP_Smokable_ColorBase smokable;
		if ( action_data.m_MainItem  && SRP_Smokable_ColorBase.CastTo(smokable, action_data.m_MainItem))
		{
      smokable.LightSmokable();
		}
	}
};
