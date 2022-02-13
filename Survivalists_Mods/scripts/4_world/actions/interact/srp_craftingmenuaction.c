class ActionInteractWithGUICraftingWorkbench : ActionInteractBase
{
	void ActionInteractWithGUICraftingWorkbench()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_INTERACTONCE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_HUDCursorIcon = CursorIcons.CloseHood;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}

  override bool IsInstant()
  {
    return true;
  }

	override string GetText()
	{
		return "Read Manual";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{            
			string objectType = target.GetObject().GetType();
			if( (objectType == "SRP_AdvancedWorkbench" || objectType == "SRP_SewingTable"))
			{
        // Print("after check. objecttype " + objectType);
				return true;
			}
			return false;
		}
		return true; //server side?
	}

  // override protected void OnStart(ActionData action_data)
  // {
  //   Print("OnStart");
  // }

  // override protected void OnExecute( ActionData action_data )
	// {
  //   Print("OnExecute");
	// }	

  // override protected void OnExecuteServer( ActionData action_data )
	// {
  //   Print("OnExecuteServer");
	// }


  // override protected void OnExecuteClient( ActionData action_data )
	// {
  //   Print("OnExecuteClient");
	// }

  override void OnStartClient(ActionData action_data)
	{
    // Print("OnStartClient");
    if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
      // Print("OnStartClient: " + action_data.m_Target.GetObject().GetType() + " player? " + action_data.m_Player);      
      if (action_data.m_Player)
      {
        // Print("Setting player bench data");
        action_data.m_Player.selectedCraftingBench = action_data.m_Target.GetObject().GetType();
        action_data.m_Player.guiCraftingBench = EntityAI.Cast(action_data.m_Target.GetObject());
      }
      if (!GetGame().GetUIManager().FindMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting))
      {
        // Print("Open menu");
        GetGame().GetUIManager().EnterScriptedMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting, NULL );
      }
    }
  }
	
	// override void OnStartServer(ActionData action_data)
	// {
  //   Print("OnStartServer");
  // }
	
	// override void OnEnd(ActionData action_data)
	// {
  //   Print("OnEnd");
  // }
	
	// override void OnEndClient(ActionData action_data)
	// {
  //   Print("OnEndClient");
  // }
	
	// override void OnEndServer(ActionData action_data)
	// {
  //   Print("OnEndServer");
  // }

}