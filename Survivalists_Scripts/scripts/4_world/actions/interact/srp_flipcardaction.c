class ActionFlipPlayingCard: ActionInteractBase
{	
	void ActionFlipPlayingCard()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	override string GetText()
	{
		return "Flip Card";
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( !target ) 
			return false;

    SRP_PlayingCard_ColorBase playingCard = SRP_PlayingCard_ColorBase.Cast(target.GetObject());
    if (playingCard)
    {
      return true; 
    }
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
		SRP_PlayingCard_ColorBase playingCard = SRP_PlayingCard_ColorBase.Cast(action_data.m_Target.GetObject());
    if (playingCard)
    {
      playingCard.Flip();
    }
	}
};