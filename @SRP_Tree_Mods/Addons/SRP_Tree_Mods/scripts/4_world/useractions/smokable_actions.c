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
    SRP_Smokable_ColorBase smokable = SRP_Smokable_ColorBase.Cast(item);
    // Print("ActionSmokeSRPSmokableSelf: " + smokable.IsLit());
    if (smokable.IsLit()) {
      return  true;
    }
		return false;
	}

	override void OnExecuteServer( ActionData action_data )
	{
		PlayerBase player = action_data.m_Player;
		
		if ( player && action_data.m_MainItem )
		{
      // 1 is the default consumed quantity
			player.Consume(action_data.m_MainItem, 1, EConsumeType.ITEM_SINGLE_TIME);
		}
	}
	
	override void OnEndServer( ActionData action_data )
	{
		if ( action_data.m_MainItem && ( action_data.m_MainItem.GetQuantity() <= 0 ) )
		{
			action_data.m_MainItem.AddQuantity(-1);
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
    SRP_Smokable_ColorBase smokable = SRP_Smokable_ColorBase.Cast(item);
    // Debug.Log("ActionExtinguishSmokeSRPSmokableSelf","ActionCondition");
    if (smokable.IsLit()) {
      return  true;
    }
		return false;
	}

	override void OnExecuteServer( ActionData action_data )
	{
		PlayerBase player = action_data.m_Player;
		
		if ( player && action_data.m_MainItem )
		{
      // 1 is the default consumed quantity
      SRP_Smokable_ColorBase smokable = SRP_Smokable_ColorBase.Cast(action_data.m_MainItem);
      if (smokable && smokable.IsLit()) {
        smokable.ExtinguishSmokable();
      }
      // Debug.Log("ActionExtinguishSmokeSRPSmokableSelf","OnExecuteServer");
		}
	}
};