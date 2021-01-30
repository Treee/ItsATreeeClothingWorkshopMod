class SwitchRadioAction: ActionSingleUseBase
{
	void SwitchRadioAction()
	{
	}
	
	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}
	
	override bool IsLocal()
	{
		return true;
	}
	
	override bool IsInstant()
	{
		return true;
	}
	
	override bool RemoveForceTargetAfterUse()
	{
		return false;
	}

	override string GetText()
	{
		return "Next Action";
	}
	
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item )
	{	
    // // if the current action selection is is to turn on AND the radio is off
    if (player.GetRadioInterActionData().GetSelectedIndex() == 0 && !player.GetRadioInterActionData().CanTurnOn(item))
    {
      return true;
    }
    // if the current action is turn off, increase/decrease volume
    else if (player.GetRadioInterActionData().GetSelectedIndex() > 0 )
    {
      if (player.GetRadioInterActionData().CanTurnOff(item)) {
        return true;
      }
      if (player.GetRadioInterActionData().CanIncreaseVolume(item))
      {
        return true;
      }
      if (player.GetRadioInterActionData().CanDecreaseVolume(item))
      {
        return true;
      }
    }
		return false;
	}
	
  override void OnStartClient(ActionData action_data)
	{
		super.OnStartClient( action_data );
		
		SetNextIndex(action_data);
	}
	
	override void OnStartServer(ActionData action_data)
	{
		super.OnStartServer( action_data );
		
		if (!GetGame().IsMultiplayer())
			SetNextIndex(action_data);
	}
	
	void SetNextIndex(ActionData action_data)
	{    
    action_data.m_Player.GetRadioInterActionData().SetNextAction(action_data.m_MainItem);
	}

};