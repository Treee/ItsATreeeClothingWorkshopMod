class ActionReadBook extends ActionSingleUseBase
{
	void ActionReadBook()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_DROPITEM_HANDS;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_PRONE;
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
		return "#read";
	}

	override void OnExecuteClient( ActionData action_data )
	{
    if (action_data.m_Player)
    {
      InventoryItem book = action_data.m_Player.GetItemInHands();
      if (book && book.IsInherited(ItemBook))
      {
        action_data.m_Player.currentBookInHands = book;
        if (!GetGame().GetUIManager().FindMenu(MENU_BOOK))
        {
          GetGame().GetUIManager().EnterScriptedMenu(MENU_BOOK, NULL );
        }
      }
    }
	}

  // uncomment this for local offline mode testing
	// override void OnExecuteServer( ActionData action_data )
	// {
	// 	if (!GetGame().IsDedicatedServer() )
  //   {
  //     if (action_data.m_Player)
  //     {
  //       InventoryItem book = action_data.m_Player.GetItemInHands();
  //       if (book && book.IsInherited(ItemBook))
  //       {
  //         action_data.m_Player.currentBookInHands = book;
  //         if (!GetGame().GetUIManager().FindMenu(MENU_BOOK))
  //         {
  //           GetGame().GetUIManager().EnterScriptedMenu(MENU_BOOK, NULL );
  //         }
  //       }
  //     }
  //   }
	// }
};
