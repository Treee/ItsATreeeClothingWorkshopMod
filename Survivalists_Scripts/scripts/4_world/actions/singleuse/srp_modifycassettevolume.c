class ActionIncreaseVolume: ActionSingleUseBase
{
	void ActionIncreaseVolume()
	{
		m_CommandUID        = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_ON;
		m_Text = "Increase Volume";
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
		
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_CassettePlayer radio;
		if (Class.CastTo(radio, item))
		{
      if (radio.HasEnergyManager() && radio.GetCompEM().IsWorking())
      {
        return radio.m_CassetteVolume < 1.6;
      }			
		}
		return false;	
  }
		
	override void OnExecuteServer( ActionData action_data )
	{
    SRP_CassettePlayer radio;
		if (Class.CastTo(radio, action_data.m_MainItem))
		{		
      radio.ModifyVolume(1);
		}
  }	
};
class ActionDecreaseVolume: ActionSingleUseBase
{
	void ActionDecreaseVolume()
	{
		m_CommandUID        = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_ON;
		m_Text = "Decrease Volume";
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
		
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_CassettePlayer radio;
		if (Class.CastTo(radio, item))
		{
      if (radio.HasEnergyManager() && radio.GetCompEM().IsWorking())
      {
        return radio.m_CassetteVolume > 0;
      }			
		}
		return false;	
  }
		
	override void OnExecuteServer( ActionData action_data )
	{
    SRP_CassettePlayer radio;
		if (Class.CastTo(radio, action_data.m_MainItem))
		{		
      radio.ModifyVolume(-1);
		}
  }	
};
