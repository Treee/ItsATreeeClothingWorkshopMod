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
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}

	override string GetText()
	{
		return "Flip Card";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    Print("pre target check");
		if ( !target ) 
			return false;

    SRP_PlayingCard_ColorBase playingCard = SRP_PlayingCard_ColorBase.Cast(target.GetObject());
    Print("card: " + playingCard);
    if (playingCard)
    {
      Print("yeh the card is here");
      return true; 
    }
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
    SRP_PlayingCard_ColorBase playingCard = SRP_PlayingCard_ColorBase.Cast(action_data.m_Target.GetObject());
    if (playingCard)
    {
      Print("flip the card");
      playingCard.Flip();
    }
	}
	
};
