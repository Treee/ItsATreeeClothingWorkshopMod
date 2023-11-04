class ActionCheckPostBoxOwner extends ActionInteractBase
{	
	void ActionCheckPostBoxOwner()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_Text = "Check Owner";
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (target && target.GetObject())
    {
      SRP_PostBox_Base postBox = SRP_PostBox_Base.Cast(target.GetObject());
      if (postBox)
      {
        if ( GetGame().IsDedicatedServer() )
        {
          return true;
        }
        else
        {
          return !postBox.HasBeenChecked() && postBox.GetSRPOwnerName() == "";
        }
      }
			return false;
		}
    return false;
	}

  override void OnExecuteClient( ActionData action_data )
	{
    if (action_data.m_Target && action_data.m_Target.GetObject())
    {
      SRP_PostBox_Base postBox = SRP_PostBox_Base.Cast(action_data.m_Target.GetObject());
      if (postBox)
      {
        postBox.TryFetchKeyOwnerInfo();
        postBox.SetHasBeenChecked(true);
      }
    }
	}
  override void OnExecuteServer(ActionData action_data)
	{
		super.OnExecuteServer(action_data);
		if (action_data.m_Target && action_data.m_Target.GetObject())
    {
      SRP_PostBox_Base postBox = SRP_PostBox_Base.Cast(action_data.m_Target.GetObject());
      if (postBox)
      {
        postBox.SetHasBeenChecked(true);
      }
    }
	}
};
